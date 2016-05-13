//
//  ScriptingCore.cpp
//  MyTest
//
//  Created by 张磊 on 16/1/19.
//  Copyright © 2016年 张磊. All rights reserved.
//

#include "ScriptingCore.h"

// Removed in Firefox v27, use 'js/OldDebugAPI.h' instead
#include "js/OldDebugAPI.h"

// for debug socket
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
#include <io.h>
#include <WS2tcpip.h>
#else
#include <sys/socket.h>
#include <unistd.h>
#include <netdb.h>
#endif


#include <thread>
#include <iostream>
#include <sstream>
#include <stdio.h>


#ifdef ANDROID
#define  LOG_TAG    "ScriptingCore.cpp"
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#else
#define  LOGD(...) js_log(__VA_ARGS__)
#endif

#if COCOS2D_DEBUG
#define TRACE_DEBUGGER_SERVER(...) CCLOG(__VA_ARGS__)
#else
#define TRACE_DEBUGGER_SERVER(...)
#endif // #if DEBUG

#define BYTE_CODE_FILE_EXT ".jsc"
static std::string inData;
static std::string outData;
static std::vector<std::string> g_queue;
static std::mutex g_qMutex;
static std::mutex g_rwMutex;
static int clientSocket = -1;
static uint32_t s_nestedLoopLevel = 0;

js_proxy_t *_native_js_global_ht = NULL;
js_proxy_t *_js_native_global_ht = NULL;

std::unordered_map<std::string, js_type_class_t*> _js_global_type_map;

static char *_js_log_buf = NULL;

static std::vector<sc_register_sth> registrationList; //存放注册函数的列表
// name ~> JSScript map
static std::unordered_map<std::string, JSScript*> filename_script;

static void cc_closesocket(int fd)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    closesocket(fd);
#else
    close(fd);
#endif
}
static ScriptingCore* instance = nullptr; //单例对象
typedef void (*sc_register_sth)(JSContext* cx, JS::HandleObject global);



/// The max length of CCLog message.
static const int MAX_LOG_LENGTH = 16*1024; //临时放这里，cocos2d中属于Console头文件
void js_log(const char *format, ...) {
    if (_js_log_buf == NULL)
    {
        _js_log_buf = (char *)calloc(sizeof(char), MAX_LOG_LENGTH+1);
        _js_log_buf[MAX_LOG_LENGTH] = '\0';
    }
    va_list vl;
    va_start(vl, format);
    int len = vsnprintf(_js_log_buf, MAX_LOG_LENGTH, format, vl);
    va_end(vl);
    if (len > 0)
    {
        CCLOG("JS: %s", _js_log_buf);
    }
}
static void sc_finalize(JSFreeOp *freeOp, JSObject *obj) {
//    CCLOGINFO("jsbindings: finalizing JS object %p (global class)", obj);
}

static void ReportException(JSContext *cx)
{
    if (JS_IsExceptionPending(cx)) {
        if (!JS_ReportPendingException(cx)) {
            JS_ClearPendingException(cx);
        }
    }
}

//全局函数
static const JSClass global_class = {
    "global", JSCLASS_GLOBAL_FLAGS,
    JS_PropertyStub,
    JS_DeletePropertyStub,
    JS_PropertyStub,
    JS_StrictPropertyStub,
    JS_EnumerateStub,
    JS_ResolveStub,
    JS_ConvertStub,
    sc_finalize,
    nullptr, nullptr, nullptr,
    JS_GlobalObjectTraceHook
};
// Just a wrapper around JSPrincipals that allows static construction.
class CCJSPrincipals : public JSPrincipals
{
public:
    explicit CCJSPrincipals(int rc = 0)
    : JSPrincipals()
    {
        refcount = rc;
    }
};
static CCJSPrincipals shellTrustedPrincipals(1);


ScriptingCore::ScriptingCore()
:_rt(nullptr)
,_cx(nullptr)
{
    initRegister();
}
void ScriptingCore::initRegister(){
    this->addRegisterCallback(registerDefaultClasses);
    this->_runLoop = new SimpleRunLoop();
}

void ScriptingCore::restartVM()
{
    cleanup();
    initRegister();
//    Application::getInstance()->applicationDidFinishLaunching(); //**临时注释 无重启
}

ScriptingCore::~ScriptingCore(){
    
}
bool JSBCore_platform(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc!=0)
    {
        JS_ReportError(cx, "Invalid number of arguments in __getPlatform");
        return false;
    }
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    TargetPlatform platform;
    
    // config.deviceType: Device Type
    // 'mobile' for any kind of mobile devices, 'desktop' for PCs, 'browser' for Web Browsers
    // #if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
    //     platform = JS_InternString(_cx, "desktop");
    // #else
    platform = CCApplication::sharedApplication()->getTargetPlatform();
    // #endif
    
    args.rval().set(INT_TO_JSVAL((int)platform));
    
    return true;
};
bool JSBCore_os(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc!=0)
    {
        JS_ReportError(cx, "Invalid number of arguments in __getOS");
        return false;
    }
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    
    JSString * os;
    
    // osx, ios, android, windows, linux, etc..
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    os = JS_InternString(cx, "iOS");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    os = JS_InternString(cx, "Android");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
    os = JS_InternString(cx, "Windows");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MARMALADE)
    os = JS_InternString(cx, "Marmalade");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
    os = JS_InternString(cx, "Linux");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_BADA)
    os = JS_InternString(cx, "Bada");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_BLACKBERRY)
    os = JS_InternString(cx, "Blackberry");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_MAC)
    os = JS_InternString(cx, "OS X");
#elif (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    os = JS_InternString(cx, "WINRT");
#else
    os = JS_InternString(cx, "Unknown");
#endif
    
    args.rval().set(STRING_TO_JSVAL(os));
    
    return true;
};
bool JSBCore_version(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc!=0)
    {
        JS_ReportError(cx, "Invalid number of arguments in __getVersion");
        return false;
    }
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    char version[256];
    snprintf(version, sizeof(version)-1, "%s", CrossAppVersion());
    JSString * js_version = JS_InternString(cx, version);
    
    args.rval().set(STRING_TO_JSVAL(js_version));
    
    return true;
};
bool JSB_core_restartVM(JSContext *cx, uint32_t argc, jsval *vp)
{
    JSB_PRECONDITION2(argc==0, cx, false, "Invalid number of arguments in executeScript");
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    ScriptingCore::getInstance()->reset();
    args.rval().setUndefined();
    return true;
};
bool JSB_cleanScript(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc != 1)
    {
        JS_ReportError(cx, "Invalid number of arguments in JSB_cleanScript");
        return false;
    }
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSString *jsPath = args.get(0).toString();
    JSB_PRECONDITION2(jsPath, cx, false, "Error js file in clean script");
    JSStringWrapper wrapper(jsPath);
    ScriptingCore::getInstance()->cleanScript(wrapper.get());
    
    args.rval().setUndefined();
    
    return true;
};

void registerDefaultClasses(JSContext* cx, JS::HandleObject global) {
    // first, try to get the ns
    JS::RootedValue nsval(cx);
    JS::RootedObject ns(cx);
    JS_GetProperty(cx, global, "ca", &nsval);
    // Not exist, create it
    if (nsval == JSVAL_VOID)
    {
        ns.set(JS_NewObject(cx, NULL, JS::NullPtr(), JS::NullPtr()));
        nsval = OBJECT_TO_JSVAL(ns);
        JS_SetProperty(cx, global, "ca", nsval);
    }
    else
    {
        ns.set(nsval.toObjectOrNull());
    }
    
    //
    // Javascript controller (__jsc__)
    //
    JS::RootedObject proto(cx);
    JS::RootedObject parent(cx);
    JS::RootedObject jsc(cx, JS_NewObject(cx, NULL, proto, parent));
    JS::RootedValue jscVal(cx);
    jscVal = OBJECT_TO_JSVAL(jsc);
    JS_SetProperty(cx, global, "__jsc__", jscVal);
    
    
    //在引擎中注册基础函数，实现这些就可以同javascript调用这些函数进行测试了
    
    JS_DefineFunction(cx, jsc, "garbageCollect", ScriptingCore::forceGC, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(cx, jsc, "dumpRoot", ScriptingCore::dumpRoot, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(cx, jsc, "addGCRootObject", ScriptingCore::addRootJS, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(cx, jsc, "removeGCRootObject", ScriptingCore::removeRootJS, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(cx, jsc, "executeScript", ScriptingCore::executeScript, 1, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    
    // register some global functions
    JS_DefineFunction(cx, global, "require", ScriptingCore::executeScript, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "log", ScriptingCore::log, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "executeScript", ScriptingCore::executeScript, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "forceGC", ScriptingCore::forceGC, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_DefineFunction(cx, global, "__getPlatform", JSBCore_platform, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "__getOS", JSBCore_os, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "__getVersion", JSBCore_version, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "__restartVM", JSB_core_restartVM, 0, JSPROP_READONLY | JSPROP_PERMANENT | JSPROP_ENUMERATE );
    JS_DefineFunction(cx, global, "__cleanScript", JSB_cleanScript, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, global, "__isObjectValid", ScriptingCore::isObjectValid, 1, JSPROP_READONLY | JSPROP_PERMANENT);
}

//单例
ScriptingCore* ScriptingCore::getInstance()
{
    if (!instance) {
        instance = new ScriptingCore();
    }
    return instance;
}
void ScriptingCore::addRegisterCallback(sc_register_sth callback) {
    registrationList.push_back(callback);
}
static bool
CheckObjectAccess(JSContext *cx)
{
    return true;
}
static JSSecurityCallbacks securityCallbacks = {
    CheckObjectAccess,
    NULL
};
 //创建全局类和上下文
void ScriptingCore::createGlobalContext(){
    if (_cx && _rt) {
        //释放所有资源
        ScriptingCore::removeAllRoots(_cx);
        JS_DestroyContext(_cx);
        JS_DestroyRuntime(_rt);
        _cx = nullptr;
        _cx = nullptr;
    }
    
    // 初始化引擎，这个方法是SpiderMonkey的v25版本开始启用的
    if (!JS_Init()) {
        return;
    }
    //初始化运行时runtime 设置为8M
    _rt = JS_NewRuntime(8L * 1024L * 1024L);
    //调整垃圾回收机制的参数及性能
    JS_SetGCParameter(_rt, JSGC_MAX_BYTES, 0xffffffff);
    
    JS_SetTrustedPrincipals(_rt, &shellTrustedPrincipals);//运行大校长转码回调
    JS_SetSecurityCallbacks(_rt, &securityCallbacks);
    JS_SetNativeStackQuota(_rt, JSB_MAX_STACK_QUOTA);
    
    //初始化上下文
    _cx = JS_NewContext(_rt, 8192);
    
    //**没搞明白具体做了什么**
    JS::RuntimeOptionsRef(_rt).setIon(true);
    JS::RuntimeOptionsRef(_rt).setBaseline(true);
    
    JS_SetErrorReporter(_cx, ScriptingCore::reportError);
    //初始化_global
    _global.construct(_cx);
    _global.ref() = NewGlobalObject(_cx);
    //RALL助手开启 管理内存
    JSAutoCompartment ac(_cx,_global.ref());
    
    //设置默认的
    js::SetDefaultObjectForContext(_cx, _global.ref());
    
    //配置默认的javascript脚本  先注释掉
    runScript("script/jsb_prepare.js");

    //迭代器 在引擎中注册当前类的方法
    for (std::vector<sc_register_sth>::iterator it = registrationList.begin(); it != registrationList.end(); it++) {
        sc_register_sth callback = *it;
        callback(_cx, _global.ref());
    }
}
bool ScriptingCore::evalString(const char *string,JS::RootedValue *outVal, const char *filename, JSContext *cx, JSObject* global )
{
    if (cx == NULL) {
        cx = _cx;
    }
    
    if (global == NULL) {
        global = _global.ref().get();
    }
    JSAutoCompartment ac(cx,global);
    JS::RootedObject cc(cx, global);
    JS::RootedValue rval(cx);//执行结果
    bool ok =  JS_EvaluateScript(cx, cc, string, strlen(string), "ScriptingCore::evalString", 1,&rval);
    /*测试执行文本输出代码
    if (ok) {
        JSString *str = rval.toString();
        printf("javascript:-->%s",JS_EncodeString(cx, str));
    }
    */
    return ok;
}

static std::string RemoveFileExt(const std::string& filePath) {
    size_t pos = filePath.rfind('.');
    if (0 < pos) {
        return filePath.substr(0, pos);
    }
    else {
        return filePath;
    }
}

JSScript* ScriptingCore::getScript(const char *path){
    
    // a) check jsc file first
    std::string byteCodePath = RemoveFileExt(std::string(path)) + BYTE_CODE_FILE_EXT;
    if (filename_script.find(byteCodePath) != filename_script.end())
        return filename_script[byteCodePath];
    
    // b) no jsc file, check js file
    std::string fullPath = CCFileUtils::sharedFileUtils()->fullPathForFilename(path);
    if (filename_script.find(fullPath) != filename_script.end())
        return filename_script[fullPath];
    
    return NULL;
}
void ScriptingCore::compileScript(const char *path, JSObject* global, JSContext* cx ){
    if (!path) {
        return;
    }
    
    if (getScript(path)) {
        return;
    }
    
    CCFileUtils * futil = CCFileUtils::sharedFileUtils();
    
    if (global == NULL) {
        global = _global.ref().get();
    }
    if (cx == NULL) {
        cx = _cx;
    }
    
    JSAutoCompartment ac(cx,global);
    
    JS::RootedScript script(cx);
    JS::RootedObject obj(cx,global);
    
    // a) check jsc file first
    std::string byteCodePath = RemoveFileExt(std::string(path)) + BYTE_CODE_FILE_EXT ;
    
    // Check whether '.jsc' files exist to avoid outputing log which says 'couldn't find .jsc file'.
    if (futil->isFileExist(byteCodePath)) {
        /*cocos 这样写的 由于Crossapp中没有Data数据类型
        Data data = futil->getDataFromFile(byteCodePath);
        if (!data.isNull())
        {
            script = JS_DecodeScript(cx, data.getBytes(), static_cast<uint32_t>(data.getSize()), nullptr);
        }
        */
        //我的修改
        std::string data = futil->getFileString(byteCodePath.c_str());
        if (data.empty()) {
            script = JS_DecodeScript(cx, data.c_str(), static_cast<uint32_t>(data.size()), nullptr);
        }
    }
    
     // b) no jsc file, check js file
    if (!script) {
        /* Clear any pending exception from previous failed decoding.  */
        ReportException(cx);
        
        std::string fullPath = futil->fullPathForFilename(path);
        
        JS::CompileOptions op(cx);
        op.setUTF8(true);
        op.setFileAndLine(fullPath.c_str(), 1);
        
        bool ok = false;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
        std::string jsFileContent = futil->getFileString(fullPath);
        if (!jsFileContent.empty())
        {
            ok = JS::Compile(cx, obj, op, jsFileContent.c_str(), jsFileContent.size(), &script);
        }
#else
         ok = JS::Compile(cx, obj, op, fullPath.c_str(), &script);
#endif
        if (ok) {
            filename_script[fullPath] = script;
        }
    }
    else {
        filename_script[byteCodePath] = script;
    }
}

bool ScriptingCore::runScript(const char *path){
    return runScript(path, _global.ref(), _cx);
}
bool ScriptingCore::runScript(const char *path, JS::HandleObject global, JSContext* cx)
{
    if (cx == NULL) {
        cx = _cx;
    }
    compileScript(path,global,cx);
    JS::RootedScript script(cx,getScript(path));
    bool evaluatedOK = false;
    if (script) {
        JS::RootedValue rval(cx);
        JSAutoCompartment ac(cx, global);
        evaluatedOK = JS_ExecuteScript(cx, global, script, &rval);
        if (false == evaluatedOK) {
            CCLog("Evaluating %s failed (evaluatedOK == JS_FALSE)", path);
            JS_ReportPendingException(cx);
        }
//        else {
            //*测试执行文本输出代码
//            JSString *str = rval.toString();
//            printf("Runscript:-->%s",JS_EncodeString(cx, str));
//        }
    }
    
    return evaluatedOK;
}

bool ScriptingCore::requireScript(const char *path, JS::MutableHandleValue jsvalRet)
{
    return requireScript(path, _global.ref(), _cx, jsvalRet);
}

bool ScriptingCore::requireScript(const char *path, JS::HandleObject global, JSContext* cx, JS::MutableHandleValue jsvalRet)
{
    if(cx == NULL)
    {
        cx = _cx;
    }
    
    compileScript(path,global,cx);
    JS::RootedScript script(cx,getScript(path));
    bool evaluateOK = false;
    if (script) {
        JSAutoCompartment ac(cx,global);
        evaluateOK = JS_ExecuteScript(cx, global, script, jsvalRet);
        if (false == evaluateOK) {
            CCLog("(evaluatedOK == JS_FALSE)");
            JS_ReportPendingException(cx);
        }
    }
    return evaluateOK;
}
//清理指定路径的脚步
void ScriptingCore::cleanScript(const char *path)
{
    std::string byteCodePath = RemoveFileExt(std::string(path)) + BYTE_CODE_FILE_EXT ;
    auto it = filename_script.find(byteCodePath);
    if (it != filename_script.end()) {
        filename_script.erase(it);
    }
    
    std::string fullPath = CCFileUtils::sharedFileUtils()->fullPathForFilename(path);
    it = filename_script.find(fullPath);
    if (it != filename_script.end()) {
        filename_script.erase(it);
    }
}
//缓存脚本对应的映射
std::unordered_map<std::string, JSScript*>  &ScriptingCore::getFileScript()
{
    return filename_script;
}
//清楚所有的脚本
void ScriptingCore::cleanAllScript()
{
    filename_script.clear();
}
//初始化所有，包括js的context和global对象
void ScriptingCore::start()
{
    // for now just this
    createGlobalContext();
}
//清除所有，包括js的context和global对象
void ScriptingCore::cleanup()
{
    localStorageFree();
    removeAllRoots(_cx);
    if (_cx)
    {
        JS_DestroyContext(_cx);
        _cx = NULL;
    }
    if (_rt)
    {
        JS_DestroyRuntime(_rt);
        _rt = NULL;
    }
    JS_ShutDown();
    if (_js_log_buf) {
        free(_js_log_buf);
        _js_log_buf = NULL;
    }
    
    for (auto iter = _js_global_type_map.begin(); iter != _js_global_type_map.end(); ++iter)
    {
        free(iter->second->jsclass);
        free(iter->second);
    }
    
    _js_global_type_map.clear();
    filename_script.clear();
    registrationList.clear();
}
void ScriptingCore::reset()
{
      //Crossapp没有重启的功能
//    Director::getInstance()->restart();
    
}
//在JS中错误报告
void ScriptingCore::reportError(JSContext *cx, const char *message, JSErrorReport *report)
{
    js_log("%s:%u:%s\n",
           report->filename ? report->filename : "<no filename=\"filename\">",
           (unsigned int) report->lineno,
           message);
};

void removeJSObject(JSContext* cx, void* nativeObj)
{
    js_proxy_t* nproxy;
    js_proxy_t* jsproxy;
    
    nproxy = jsb_get_native_proxy(nativeObj);
    if (nproxy) {
        jsproxy = jsb_get_js_proxy(nproxy->obj);
        RemoveObjectRoot(cx, &jsproxy->obj);
        jsb_remove_proxy(nproxy, jsproxy);
    }
}

//javascript的log
bool ScriptingCore::log(JSContext* cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc > 0) {
        JSString *string = JS::ToString(cx, args.get(0));
        if (string) {
            //错误临时注释
            JSStringWrapper wrapper(string);
            js_log("%s", wrapper.get());
        }
    }
    args.rval().setUndefined();
    return true;
}

void ScriptingCore::removeScriptObjectByObject(CAObject* pObj)
{
    js_proxy_t* nproxy;
    js_proxy_t* jsproxy;
    void *ptr = (void*)pObj;
    nproxy = jsb_get_native_proxy(ptr);
    if (nproxy) {
        JSContext *cx = ScriptingCore::getInstance()->getGlobalContext();
        jsproxy = jsb_get_js_proxy(nproxy->obj);
        RemoveObjectRoot(cx, &jsproxy->obj);
        jsb_remove_proxy(nproxy, jsproxy);
    }
}

bool ScriptingCore::setReservedSpot(uint32_t i, JSObject *obj, jsval value) {
    JS_SetReservedSlot(obj, i, value);
    return true;
}

bool ScriptingCore::executeScript(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc >= 1) {
        JSString* str = JS::ToString(cx, JS::RootedValue(cx, args.get(0)));
        JSStringWrapper path(str);
        bool res = false;
        if (argc == 2 && args.get(1).isString()) {
            JSString* globalName = args.get(1).toString();
            JSStringWrapper name(globalName);
            
            JS::RootedObject debugObj(cx, ScriptingCore::getInstance()->getDebugGlobal());
            if (debugObj) {
                res = ScriptingCore::getInstance()->runScript(path.get(), debugObj);
            } else {
                JS_ReportError(cx, "Invalid global object: %s", name.get());
                return false;
            }
        } else {
            JS::RootedObject glob(cx, JS::CurrentGlobalOrNull(cx));
            res = ScriptingCore::getInstance()->runScript(path.get(), glob);
        }
        return res;
    }
    args.rval().setUndefined();
    return true;
}
bool ScriptingCore::forceGC(JSContext *cx, uint32_t argc, jsval *vp)
{
    JSRuntime *rt = JS_GetRuntime(cx);
    JS_GC(rt);
    return true;
}
bool ScriptingCore::dumpRoot(JSContext *cx, uint32_t argc, jsval *vp)
{
    // JS_DumpNamedRoots is only available on DEBUG versions of SpiderMonkey.
    // Mac and Simulator versions were compiled with DEBUG.
#if COCOS2D_DEBUG
    //    JSContext *_cx = ScriptingCore::getInstance()->getGlobalContext();
    //    JSRuntime *rt = JS_GetRuntime(_cx);
    //    JS_DumpNamedRoots(rt, dumpNamedRoot, NULL);
    //    JS_DumpHeap(rt, stdout, NULL, JSTRACE_OBJECT, NULL, 2, NULL);
#endif
    return true;
}
bool ScriptingCore::addRootJS(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc == 1) {
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
        JS::Heap<JSObject*> o(args.get(0).toObjectOrNull());
        if (AddNamedObjectRoot(cx, &o, "from-js") == false) {
            LOGD("something went wrong when setting an object to the root");
        }
        
        return true;
    }
    return false;
}
bool ScriptingCore::removeRootJS(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc == 1) {
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
        JS::Heap<JSObject*> o(args.get(0).toObjectOrNull());
        if (o != nullptr) {
            RemoveObjectRoot(cx, &o);
        }
        return true;
    }
    return false;
}

// ** 未完成
int ScriptingCore::sendEvent(ScriptEvent* evt)
{
    if (NULL == evt)
        return 0;
    
    // special type, can't use this code after JSAutoCompartment
    if (evt->type == kRestartGame)
    {
        restartVM();
        return 0;
    }
    
    JSAutoCompartment ac(_cx, _global.ref().get());
    
    switch (evt->type)
    {
        case kNodeEvent:
        {
//            return handleNodeEvent(evt->data); **
        }
            break;
        case kScriptActionEvent:
        {
//            return handleActionEvent(evt->data); **
        }
            break;
        case kMenuClickedEvent:
            break;
        case kTouchEvent:
        {
//            TouchScriptData* data = (TouchScriptData*)evt->data;
//            return handleTouchEvent(data->nativeObject, data->actionType, data->touch, data->event); **
        }
            break;
        case kTouchesEvent:
        {
//            TouchesScriptData* data = (TouchesScriptData*)evt->data; //**
//            return handleTouchesEvent(data->nativeObject, data->actionType, data->touches, data->event); **
        }
            break;
        case kComponentEvent:
        {
//            return handleComponentEvent(evt->data); **
        }
            break;
        default:
            CCAssert(false, "Invalid script event.");
            break;
    }
    
    return 0;
}

bool ScriptingCore::parseConfig(ConfigType type, const std::string &str)
{
    jsval args[2];
    args[0] = int32_to_jsval(_cx, static_cast<int>(type));
    args[1] = std_string_to_jsval(_cx, str);
    return (true == executeFunctionWithOwner(OBJECT_TO_JSVAL(_global.ref().get()), "__onParseConfig", 2, args));
}
bool ScriptingCore::isObjectValid(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc == 1) {
        JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
        js_proxy_t *proxy = jsb_get_js_proxy(tmpObj);
        if (proxy && proxy->ptr) {
            args.rval().set(JSVAL_TRUE);
        }
        else {
            args.rval().set(JSVAL_FALSE);
        }
        return true;
    }
    else {
        JS_ReportError(cx, "Invalid number of arguments: %d. Expecting: 1", argc);
        return false;
    }
}
void ScriptingCore::debugProcessInput(const std::string& str)
{
    JSAutoCompartment ac(_cx, _debugGlobal.ref());
    
    JSString* jsstr = JS_NewStringCopyZ(_cx, str.c_str());
    jsval argv = STRING_TO_JSVAL(jsstr);
    JS::RootedValue outval(_cx);
    
    JS_CallFunctionName(_cx, JS::RootedObject(_cx, _debugGlobal.ref()), "processInput", JS::HandleValueArray::fromMarkedLocation(1, &argv), &outval);
}
//#pragma mark - Debugger

static void _clientSocketWriteAndClearString(std::string& s)
{
    ::send(clientSocket, s.c_str(), s.length(), 0);
    s.clear();
}
bool JSBDebug_BufferWrite(JSContext* cx, unsigned argc, jsval* vp)
{
    if (argc == 1) {
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
        JSStringWrapper strWrapper(args.get(0));
        // this is safe because we're already inside a lock (from clearBuffers)
        outData.append(strWrapper.get());
        _clientSocketWriteAndClearString(outData);
    }
    return true;
}
static bool NS_ProcessNextEvent()
{
    g_qMutex.lock();
    size_t size = g_queue.size();
    g_qMutex.unlock();
    
    while (size > 0)
    {
        g_qMutex.lock();
        auto first = g_queue.begin();
        std::string str = *first;
        g_queue.erase(first);
        size = g_queue.size();
        g_qMutex.unlock();
        
        ScriptingCore::getInstance()->debugProcessInput(str);
    }
    //    std::this_thread::yield();
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    
    return true;
}
bool JSBDebug_enterNestedEventLoop(JSContext* cx, unsigned argc, jsval* vp)
{
    enum {
        NS_OK = 0,
        NS_ERROR_UNEXPECTED
    };
    
#define NS_SUCCEEDED(v) ((v) == NS_OK)
    
    int rv = NS_OK;
    
    uint32_t nestLevel = ++s_nestedLoopLevel;
    
    while (NS_SUCCEEDED(rv) && s_nestedLoopLevel >= nestLevel) {
        if (!NS_ProcessNextEvent())
            rv = NS_ERROR_UNEXPECTED;
    }
    
    CCAssert(s_nestedLoopLevel <= nestLevel,
             "nested event didn't unwind properly");
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    args.rval().set(UINT_TO_JSVAL(s_nestedLoopLevel));
    //    JS_SET_RVAL(cx, vp, UINT_TO_JSVAL(s_nestedLoopLevel));
    return true;
}
bool JSBDebug_exitNestedEventLoop(JSContext* cx, unsigned argc, jsval* vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (s_nestedLoopLevel > 0) {
        --s_nestedLoopLevel;
    } else {
        args.rval().set(UINT_TO_JSVAL(0));
        //        JS_SET_RVAL(cx, vp, UINT_TO_JSVAL(0));
        return true;
    }
    args.rval().setUndefined();
    //    JS_SET_RVAL(cx, vp, UINT_TO_JSVAL(s_nestedLoopLevel));
    return true;
}
bool JSBDebug_getEventLoopNestLevel(JSContext* cx, unsigned argc, jsval* vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    args.rval().set(UINT_TO_JSVAL(s_nestedLoopLevel));
    //    JS_SET_RVAL(cx, vp, UINT_TO_JSVAL(s_nestedLoopLevel));
    return true;
}
static void processInput(const std::string& data) {
    std::lock_guard<std::mutex> lk(g_qMutex);
    g_queue.push_back(data);
}
static void clearBuffers() {
    std::lock_guard<std::mutex> lk(g_rwMutex);
    // only process input if there's something and we're not locked
    if (inData.length() > 0) {
        processInput(inData);
        inData.clear();
    }
    if (outData.length() > 0) {
        _clientSocketWriteAndClearString(outData);
    }
}
static void serverEntryPoint(unsigned int port)
{
    // start a server, accept the connection and keep reading data from it
    struct addrinfo hints, *result = nullptr, *rp = nullptr;
    int s = 0;
    memset(&hints, 0, sizeof(struct addrinfo));
    hints.ai_family = AF_INET;       // IPv4
    hints.ai_socktype = SOCK_STREAM; // TCP stream sockets
    hints.ai_flags = AI_PASSIVE;     // fill in my IP for me
    
    std::stringstream portstr;
    portstr << port;
    
    int err = 0;
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32 || CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    WSADATA wsaData;
    err = WSAStartup(MAKEWORD(2, 2),&wsaData);
#endif
    
    if ((err = getaddrinfo(NULL, portstr.str().c_str(), &hints, &result)) != 0) {
        LOGD("getaddrinfo error : %s\n", gai_strerror(err));
    }
    
    for (rp = result; rp != NULL; rp = rp->ai_next) {
        if ((s = socket(rp->ai_family, rp->ai_socktype, 0)) < 0) {
            continue;
        }
        int optval = 1;
        if ((setsockopt(s, SOL_SOCKET, SO_REUSEADDR, (char*)&optval, sizeof(optval))) < 0) {
            cc_closesocket(s);
            TRACE_DEBUGGER_SERVER("debug server : error setting socket option SO_REUSEADDR");
            return;
        }
        
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        if ((setsockopt(s, SOL_SOCKET, SO_NOSIGPIPE, &optval, sizeof(optval))) < 0) {
            close(s);
            TRACE_DEBUGGER_SERVER("debug server : error setting socket option SO_NOSIGPIPE");
            return;
        }
#endif //(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
        
        if ((::bind(s, rp->ai_addr, rp->ai_addrlen)) == 0) {
            break;
        }
        cc_closesocket(s);
        s = -1;
    }
    if (s < 0 || rp == NULL) {
        TRACE_DEBUGGER_SERVER("debug server : error creating/binding socket");
        return;
    }
    
    freeaddrinfo(result);
    
    listen(s, 1);
    
    while (true) {
        clientSocket = accept(s, NULL, NULL);
        
        if (clientSocket < 0)
        {
            TRACE_DEBUGGER_SERVER("debug server : error on accept");
            return;
        }
        else
        {
            // read/write data
            TRACE_DEBUGGER_SERVER("debug server : client connected");
            
            inData = "connected";
            // process any input, send any output
            clearBuffers();
            
            char buf[1024] = {0};
            int readBytes = 0;
            while ((readBytes = (int)::recv(clientSocket, buf, sizeof(buf), 0)) > 0)
            {
                buf[readBytes] = '\0';
                // TRACE_DEBUGGER_SERVER("debug server : received command >%s", buf);
                
                // no other thread is using this
                inData.append(buf);
                // process any input, send any output
                clearBuffers();
            } // while(read)
            
            cc_closesocket(clientSocket);
        }
    } // while(true)
}
void ScriptingCore::enableDebugger(unsigned int port)
{
    if (_debugGlobal.empty())
    {
        JSAutoCompartment ac0(_cx, _global.ref().get());
        
        JS_SetDebugMode(_cx, true);
        
        _debugGlobal.construct(_cx);
        _debugGlobal.ref() = NewGlobalObject(_cx, true);
        // Adds the debugger object to root, otherwise it may be collected by GC.
        //AddObjectRoot(_cx, &_debugGlobal.ref()); no need, it's persistent rooted now
        //JS_WrapObject(_cx, &_debugGlobal.ref()); Not really needed, JS_WrapObject makes a cross-compartment wrapper for the given JS object
        JS::RootedObject rootedDebugObj(_cx, _debugGlobal.ref().get());
        JSAutoCompartment ac(_cx, rootedDebugObj);
        // these are used in the debug program
        JS_DefineFunction(_cx, rootedDebugObj, "log", ScriptingCore::log, 0, JSPROP_READONLY | JSPROP_ENUMERATE | JSPROP_PERMANENT);
        JS_DefineFunction(_cx, rootedDebugObj, "_bufferWrite", JSBDebug_BufferWrite, 1, JSPROP_READONLY | JSPROP_PERMANENT);
        JS_DefineFunction(_cx, rootedDebugObj, "_enterNestedEventLoop", JSBDebug_enterNestedEventLoop, 0, JSPROP_READONLY | JSPROP_PERMANENT);
        JS_DefineFunction(_cx, rootedDebugObj, "_exitNestedEventLoop", JSBDebug_exitNestedEventLoop, 0, JSPROP_READONLY | JSPROP_PERMANENT);
        JS_DefineFunction(_cx, rootedDebugObj, "_getEventLoopNestLevel", JSBDebug_getEventLoopNestLevel, 0, JSPROP_READONLY | JSPROP_PERMANENT);
        
        runScript("script/jsb_debugger.js", rootedDebugObj);
        
        JS::RootedObject globalObj(_cx, _global.ref().get());
        JS_WrapObject(_cx, &globalObj);
        // prepare the debugger
        jsval argv = OBJECT_TO_JSVAL(globalObj);
        JS::RootedValue outval(_cx);
        bool ok = JS_CallFunctionName(_cx, rootedDebugObj, "_prepareDebugger", JS::HandleValueArray::fromMarkedLocation(1, &argv), &outval);
        if (!ok) {
            JS_ReportPendingException(_cx);
        }
        
        // start bg thread
        auto t = std::thread(&serverEntryPoint,port);
        t.detach();
        
//        CAScheduler* scheduler = Director::getInstance()->getScheduler();
//        scheduler->scheduleUpdate(this->_runLoop, 0, false);
        CAScheduler::schedule(schedule_selector(SimpleRunLoop::update), this->_runLoop, 0,false);
    }
}
//删除所有根对象绑定的JS上下文，但根对象不会给释放
void ScriptingCore::removeAllRoots(JSContext *cx) {
    js_proxy_t *current, *tmp;
    HASH_ITER(hh, _js_native_global_ht, current, tmp) {
        RemoveObjectRoot(cx, &current->obj);
        HASH_DEL(_js_native_global_ht, current);
        free(current);
    }
    HASH_ITER(hh, _native_js_global_ht, current, tmp) {
        HASH_DEL(_native_js_global_ht, current);
        free(current);
    }
    HASH_CLEAR(hh, _js_native_global_ht);
    HASH_CLEAR(hh, _native_js_global_ht);
}

JSObject* NewGlobalObject(JSContext* cx, bool debug)
{
    JS::CompartmentOptions options;
    //设置Javascript解析的版本为ECMA_5
    options.setVersion(JSVERSION_LATEST);
    
    JS::RootedObject glob(cx, JS_NewGlobalObject(cx, &global_class, &shellTrustedPrincipals, JS::DontFireOnNewGlobalHook, options));
    
    if (!glob) {
        return NULL;
    }
    //RALL助手开启 管理内存
    JSAutoCompartment ac(cx,glob);
    bool ok = true;
    ok = JS_InitStandardClasses(cx, glob);
    if (ok) {
        JS_InitReflect(cx, glob);
    }
    if (ok && debug) {
        ok = JS_DefineDebuggerObject(cx, glob);
    }
    if (!ok) {
        return NULL;
    }
    
    JS_FireOnNewGlobalObject(cx, glob);
    
    return glob;
    
}

bool ScriptingCore::executeFunctionWithOwner(jsval owner, const char *name, uint32_t argc, jsval *vp)
{
    JS::HandleValueArray args = JS::HandleValueArray::fromMarkedLocation(argc, vp);
    JS::RootedValue rval(_cx);
    return executeFunctionWithOwner(owner, name, args, &rval);
}

bool ScriptingCore::executeFunctionWithOwner(jsval owner, const char *name, uint32_t argc, jsval *vp, JS::MutableHandleValue retVal)
{
    //should not use CallArgs here, use HandleValueArray instead !!
    //because the "jsval* vp" is not the standard format from JSNative, the array doesn't contain this and retval
    //JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::HandleValueArray args = JS::HandleValueArray::fromMarkedLocation(argc, vp);
    return executeFunctionWithOwner(owner, name, args, retVal);
}

bool ScriptingCore::executeFunctionWithOwner(jsval owner, const char *name, const JS::HandleValueArray& args)
{
    JS::RootedValue ret(_cx);
    return executeFunctionWithOwner(owner, name, args, &ret);
}

bool ScriptingCore::executeFunctionWithOwner(jsval owner, const char *name, const JS::HandleValueArray& args, JS::MutableHandleValue retVal)
{
    bool bRet = false;
    bool hasAction;
    JSContext* cx = this->_cx;
    JS::RootedValue temp_retval(cx);
    JS::RootedObject obj(cx, JS::RootedValue(cx, owner).toObjectOrNull());
    
    do
    {
        JSAutoCompartment ac(cx, obj);
        
        if (JS_HasProperty(cx, obj, name, &hasAction) && hasAction) {
            if (!JS_GetProperty(cx, obj, name, &temp_retval)) {
                break;
            }
            if (temp_retval == JSVAL_VOID) {
                break;
            }
            
            bRet = JS_CallFunctionName(cx, obj, name, args, retVal);
            
        }
    }while(0);
    return bRet;
}

static std::string getTouchFuncName(int eventCode)
{
    std::string funcName;
    switch(eventCode) {
        case CCTOUCHBEGAN:
            funcName = "onTouchBegan";
            break;
        case CCTOUCHENDED:
            funcName = "onTouchEnded";
            break;
        case CCTOUCHMOVED:
            funcName = "onTouchMoved";
            break;
        case CCTOUCHCANCELLED:
            funcName = "onTouchCancelled";
            break;
        default:
            CCAssert(false, "Invalid event code!");
    }
    
    return funcName;
}

static std::string getTouchesFuncName(int eventCode)
{
    std::string funcName;
    switch(eventCode)
    {
        case CCTOUCHBEGAN:
            funcName = "onTouchesBegan";
            break;
        case CCTOUCHENDED:
            funcName = "onTouchesEnded";
            break;
        case CCTOUCHMOVED:
            funcName = "onTouchesMoved";
            break;
        case CCTOUCHCANCELLED:
            funcName = "onTouchesCancelled";
            break;
        default:
            CCAssert(false, "Invalid event code!");
            break;
    }
    return funcName;
}

//int ScriptingCore::executeCustomTouchesEvent(int eventType,
//                                             const std::vector<CATouch*>& touches, JSObject *obj)
//{
//    std::string funcName = getTouchesFuncName(eventType);
//    
//    JS::RootedObject jsretArr(_cx, JS_NewArrayObject(this->_cx, 0));
//    //    JS_AddNamedObjectRoot(this->_cx, &jsretArr, "touchArray");
//    int count = 0;
//    for (auto& touch : touches)
//    {
//        jsval jsret = getJSObject(this->_cx, touch);
//        JS::RootedValue jsval(_cx, jsret);
//        if (!JS_SetElement(this->_cx, jsretArr, count, jsval)) {
//            break;
//        }
//        ++count;
//    }
//    
//    jsval jsretArrVal = OBJECT_TO_JSVAL(jsretArr);
//    executeFunctionWithOwner(OBJECT_TO_JSVAL(obj), funcName.c_str(), 1, &jsretArrVal);
//    //    JS_RemoveObjectRoot(this->_cx, &jsretArr);
//    
//    for (auto& touch : touches)
//    {
//        removeJSObject(this->_cx, touch);
//    }
//    
//    return 1;
//}


//int ScriptingCore::executeCustomTouchEvent(int eventType,
//                                           CATouch *pTouch, JSObject *obj)
//{
//    JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET
//    
//    JS::RootedValue retval(_cx);
//    std::string funcName = getTouchFuncName(eventType);
//    
//    jsval jsTouch = getJSObject(this->_cx, pTouch);
//    
//    executeFunctionWithOwner(OBJECT_TO_JSVAL(obj), funcName.c_str(), 1, &jsTouch, &retval);
//    
//    // Remove touch object from global hash table and unroot it.
//    removeJSObject(this->_cx, pTouch);
//    
//    return 1;
//    
//}


//int ScriptingCore::executeCustomTouchEvent(int eventType,
//                                           CATouch *pTouch, JSObject *obj,
//                                           JS::MutableHandleValue retval)
//{
//    JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET
//    
//    std::string funcName = getTouchFuncName(eventType);
//    
//    jsval jsTouch = getJSObject(this->_cx, pTouch);
//    
//    executeFunctionWithOwner(OBJECT_TO_JSVAL(obj), funcName.c_str(), 1, &jsTouch, retval);
//    
//    // Remove touch object from global hash table and unroot it.
//    removeJSObject(this->_cx, pTouch);
//    
//    return 1;
//    
//}
#pragma mark - Debug

void SimpleRunLoop::update(float dt)
{
    g_qMutex.lock();
    size_t size = g_queue.size();
    g_qMutex.unlock();
    
    while (size > 0)
    {
        g_qMutex.lock();
        auto first = g_queue.begin();
        std::string str = *first;
        g_queue.erase(first);
        size = g_queue.size();
        g_qMutex.unlock();
        
        ScriptingCore::getInstance()->debugProcessInput(str);
    }
}

js_proxy_t* jsb_new_proxy(void* nativeObj, JSObject* jsObj)
{
    js_proxy_t* p = nullptr;
    JS_NEW_PROXY(p, nativeObj, jsObj);
    return p;
}

js_proxy_t* jsb_get_native_proxy(void* nativeObj)
{
    js_proxy_t* p = nullptr;
    JS_GET_PROXY(p, nativeObj);
    return p;
}

js_proxy_t* jsb_get_js_proxy(JSObject* jsObj)
{
    js_proxy_t* p = nullptr;
    JS_GET_NATIVE_PROXY(p, jsObj);
    return p;
}

void jsb_remove_proxy(js_proxy_t* nativeProxy, js_proxy_t* jsProxy)
{
    JS_REMOVE_PROXY(nativeProxy, jsProxy);
}
