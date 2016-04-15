//
//  ScriptingCore.hpp
//  MyTest
//
//  Created by 张磊 on 16/1/19.
//  Copyright © 2016年 张磊. All rights reserved.
//

#ifndef ScriptingCore_hpp
#define ScriptingCore_hpp

#include "jsapi.h"
#include "jsfriendapi.h"
#include "CrossApp.h"
#include "spidermonkey_specifics.h"
#include "js_bindings_config.h"
#include "js_manual_conversions.h"
#include "mozilla/Maybe.h"
#include <string>
#include <unordered_map>
#include <vector>

void js_log(const char *format, ...);

typedef void (*sc_register_sth)(JSContext* cx, JS::HandleObject global);

void registerDefaultClasses(JSContext* cx, JS::HandleObject global);

class SimpleRunLoop : public CrossApp::CAObject
{
public:
    void update(float d);
};

class ScriptingCore //: public CCScriptEngineProtocol
{
private:
    JSRuntime *_rt;//运行时
    JSContext *_cx;//上下文
    mozilla::Maybe<JS::PersistentRootedObject> _global; //全局根对象
    mozilla::Maybe<JS::PersistentRootedObject> _debugGlobal; //全局Debug对象
    SimpleRunLoop* _runLoop;
    
    bool _callFromScript;
    ScriptingCore();
public:
    ~ScriptingCore();
    /**@~english
     * ScriptingCore is a singleton class, you can retrieve its instance with this function.
     * @return @~english The ScriptingCore instance.
     */
    static ScriptingCore* getInstance();
    
    /**@~english
     * Gets the script type, for ScriptingCore, it will return `cocos2d::kScriptTypeJavascript`
     * @return `cocos2d::kScriptTypeJavascript`
     */
//    virtual CrossApp::ccScriptType getScriptType() override { return CrossApp::kScriptTypeJavascript; };//**zero
    
    /**
     * @brief @~english Removes the C++ object's linked JavaScript proxy object from JavaScript context
     * @param obj @~english Object to be removed
     */
    //未实现
//    virtual void removeScriptObjectByObject(CrossApp::CAObject* obj) override;
    
    /**
     * @brief @~english Execute a js function with a JavaScript caller, function name, arguments count and arguments.
     * @param owner     @~english The caller object.
     * @param name      @~english The function name.
     * @param argc      @~english The arguments count.
     * @param vp        @~english The arguments.
     * @return @~english Return true if successfully invoked, otherwise return false.
     */
    bool executeFunctionWithOwner(jsval owner, const char *name, uint32_t argc, jsval *vp);
    
    /**
     * @brief @~english Execute a js function with a JavaScript caller, function name, arguments count, arguments and a return value.
     * @param owner     @~english The caller object.
     * @param name      @~english The function name.
     * @param argc      @~english The arguments count.
     * @param vp        @~english The arguments.
     * @param retVal    @~english The js object to save the return value.
     * @return @~english Return true if successfully invoked, otherwise return false.
     */
    bool executeFunctionWithOwner(jsval owner, const char *name, uint32_t argc, jsval *vp, JS::MutableHandleValue retVal);
    
    /**
     * @brief @~english Execute a js function with a JavaScript caller, function name, arguments array.
     * This is more reliable in js memory management
     * @param owner     @~english The caller object.
     * @param name      @~english The function name.
     * @param args      @~english The arguments array.
     * @return @~english Return true if successfully invoked, otherwise return false.
     */
    bool executeFunctionWithOwner(jsval owner, const char *name, const JS::HandleValueArray& args);
    
    /**
     * @brief @~english Execute a js function with a JavaScript caller, function name, arguments array and a return value.
     * This is more reliable in js memory management
     * @param owner     @~english The caller object.
     * @param name      @~english The function name.
     * @param args      @~english The arguments array.
     * @param retVal    @~english The js object to save the return value.
     * @return @~english Return true if successfully invoked, otherwise return false.
     */
    bool executeFunctionWithOwner(jsval owner, const char *name, const JS::HandleValueArray& args, JS::MutableHandleValue retVal);
    


    //运行传入的字Javascript脚本（字符串）
    bool evalString(const char *string,JS::RootedValue *outVal, const char *filename = NULL, JSContext *cx = NULL, JSObject* global = NULL);
    
    /**
     @brief @~english Get script object for the given path
     @param path @~english The script file path
     @return @~english Script object
     */
    JSScript* getScript(const char *path);
    /**@~english
     * Compile the specified js file
     * @param path    @~english The path of the script to to compiled
     * @param global    @~english The js global object
     * @param cx        @~english The js context
     */
    void compileScript(const char *path, JSObject* global = NULL, JSContext* cx = NULL);
    /**@~english
     * Run the specified js file
     * @param path @~english The path of the script to be executed
     * @return @~english Return true if succeed, otherwise return false.
     */
    bool runScript(const char *path);
    /**@~english
     * Run the specified js file
     * @param path @~english The path of the script to be executed
     * @param global @~english The global object to execute the script
     * @param global @~english The context to execute the script
     * @return @~english Return true if succeed, otherwise return false.
     */
    bool runScript(const char *path, JS::HandleObject global, JSContext* cx = NULL);

    /**@~english
     * Require the specified js file
     * The difference between run and require is that require returns the export object of the script
     * @param path @~english The path of the script to be executed
     * @param jsvalRet @~english On success, return the value from the last executed expression statement processed in the script
     * @return @~english Return true if succeed, otherwise return false.
     * @see https://developer.mozilla.org/en-US/docs/Mozilla/Projects/SpiderMonkey/JSAPI_reference/JS_ExecuteScript
     */
    bool requireScript(const char *path, JS::MutableHandleValue jsvalRet);
    /**@~english
     * Require the specified js file
     * The difference between run and require is that require returns the export object of the script
     * @param path @~english The path of the script to be executed
     * @param global @~english The global object to execute the script
     * @param global @~english The context to execute the script
     * @param jsvalRet @~english On success, return the value from the last executed expression statement processed in the script
     * @return @~english Return true if succeed, otherwise return false.
     * @see https://developer.mozilla.org/en-US/docs/Mozilla/Projects/SpiderMonkey/JSAPI_reference/JS_ExecuteScript
     */
    bool requireScript(const char *path, JS::HandleObject global, JSContext* cx, JS::MutableHandleValue jsvalRet);
    
    /**@~english
     * Clean script object for the specified js file
     * @param path @~english The path of the js file to be cleaned
     */
    void cleanScript(const char *path);
    /**@~english
     * Gets the cached script objects for all executed js file
     * @return @~english The cached script object map
     */
    std::unordered_map<std::string, JSScript*> &getFileScript();
    /**@~english
     * Clean all script objects
     */
    void cleanAllScript();
    
    /**@~english
     * Initialize everything, including the js context, js global object etc.
     */
    void start();
    /**@~english
     * Cleanup everything, including script cache, js context, global object etc.
     */
    void cleanup();
    
    /**@~english
     * Cleanup everything then initialize everything
     */
    void reset();
    
    /**@~english
     * Add the register_sth callback to the list of functions that need to be called after the creation of the context.
     * It's normally used to register script bindings in the js context for bound classes
     * @param callback @~english The callback to register something to the js context
     */
    void addRegisterCallback(sc_register_sth callback);
    /**@~english
     * Create a new context. If one is already there, it will destroy the old context and create a new one.
     */
    void createGlobalContext();
    /**@~english
     * Removes all rooted object in the given js context, rooted object won't be garbage collected.
     * @param cx @~english The js context
     */
    static void removeAllRoots(JSContext *cx);
    
    //***发送touch事件先不写
    
    /**@~english
     * Gets the current global context.
     * @return @~english the global context
     */
    JSContext* getGlobalContext() {
        return _cx;
    };
    /**@~english
     * Report an error in the js context
     * @param cx @~english The js context
     * @param message @~english The error message
     * @param report @~english The js error report object
     */
    static void reportError(JSContext *cx, const char *message, JSErrorReport *report);
    /**@~english
     * Log something to the js context using CCLog.
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     * @return @~english Return true if succeed, otherwise return false.
     */
    static bool log(JSContext *cx, uint32_t argc, jsval *vp);
    
    /**@~english
     * Sets a js value to the targeted js obejct's reserved slot, which is not exposed to script environment.
     * @param i @~english The slot index
     * @param obj @~english The targeted object
     * @param value @~english The js value to set to the slot
     * @return @~english Return true if succeed, otherwise return false.
     */
    bool setReservedSpot(uint32_t i, JSObject *obj, jsval value);
    
    /**@~english
     * Runs a script from script environment, it should be invoked from script environment
     * Bound to `__jsc__.executeScript` and `window.executeScript`
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     * @return @~english Return true if succeed, otherwise return false.
     */
    static bool executeScript(JSContext *cx, uint32_t argc, jsval *vp);
    
    /**@~english
     * Forces a cycle of garbage collection, it should be invoked from script environment
     * Bound to `__jsc__.garbageCollect` and `window.garbageCollect`
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     */
    static bool forceGC(JSContext *cx, uint32_t argc, jsval *vp);
    /**@~english
     * Dump all named rooted objects, it should be invoked from script environment
     * Bound to `__jsc__.dumpRoot`
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     */
    static bool dumpRoot(JSContext *cx, uint32_t argc, jsval *vp);
    /**@~english
     * Adds a js object to root so that it won't be touched by the garbage collection, it should be invoked from script environment
     * Bound to `__jsc__.addGCRootObject`
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     */
    static bool addRootJS(JSContext *cx, uint32_t argc, jsval *vp);
    /**@~english
     * Removes a js object from root, it should be invoked from script environment
     * Bound to `__jsc__.removeGCRootObject`
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     */
    static bool removeRootJS(JSContext *cx, uint32_t argc, jsval *vp);
    /**@~english
     * Check whether a js object's C++ proxy is still valid, it should be invoked from script environment
     * Bound to `window.__isObjectValid`
     * @param cx @~english The js context
     * @param argc @~english The arguments count
     * @param vp @~english The arguments
     */
    static bool isObjectValid(JSContext *cx, uint32_t argc, jsval *vp);
    /**@~english
     * Log a string to the debug environment.
     * Enable the debug environment so that it can be invoked.
     * @param str @~english The message to log
     */
    void debugProcessInput(const std::string& str);
    /**@~english
     * Enable the debug environment, mozilla Firefox's remote debugger or Code IDE can connect to it.
     * @param port @~english The port to connect with the debug environment, default value is 5086
     */
    void enableDebugger(unsigned int port = 5086);
    /**@~english
     * Gets the debug environment's global object
     * @return @~english The debug environment's global object
     */
    JSObject* getDebugGlobal() { return _debugGlobal.ref().get(); }
    /**@~english
     * Gets the global object
     * @return @~english The global object
     */
    JSObject* getGlobalObject() { return _global.ref().get(); }
    
private:
    void initRegister();
};

//创建新的全局对象
JSObject* NewGlobalObject(JSContext* cx, bool debug = false);

js_proxy_t* jsb_new_proxy(void* nativeObj, JSObject* jsObj);
js_proxy_t* jsb_get_native_proxy(void* nativeObj);
js_proxy_t* jsb_get_js_proxy(JSObject* jsObj);
void jsb_remove_proxy(js_proxy_t* nativeProxy, js_proxy_t* jsProxy);

#endif /* ScriptingCore_hpp */
