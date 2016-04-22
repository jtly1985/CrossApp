#include "jsb_crossapp_auto.hpp"
#include "cocos2d_specifics.hpp"
//#include "ScriptingCore.h"
//#include "spidermonkey_specifics.h"
#include "CrossApp.h"

template<class T>
static bool dummy_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedValue initializing(cx);
    bool isNewValid = true;
    JS::RootedObject global(cx, ScriptingCore::getInstance()->getGlobalObject());
    isNewValid = JS_GetProperty(cx, global, "initializing", &initializing) && initializing.toBoolean();
    if (isNewValid)
    {
        TypeTest<T> t;
        js_type_class_t *typeClass = nullptr;
        std::string typeName = t.s_name();
        auto typeMapIter = _js_global_type_map.find(typeName);
        CCAssert(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
        typeClass = typeMapIter->second;
        CCAssert(typeClass, "The value is null.");

        JS::RootedObject proto(cx, typeClass->proto.get());
        JS::RootedObject parent(cx, typeClass->parentProto.get());
        JS::RootedObject _tmp(cx, JS_NewObject(cx, typeClass->jsclass, proto, parent));
        
        args.rval().set(OBJECT_TO_JSVAL(_tmp));
        return true;
    }

    JS_ReportError(cx, "Constructor for the requested class is not available, please refer to the API reference.");
    return false;
}

static bool empty_constructor(JSContext *cx, uint32_t argc, jsval *vp) {
    return false;
}

static bool js_is_native_obj(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    args.rval().setBoolean(true);
    return true;    
}
JSClass  *jsb_CrossApp_CAView_class;
JSObject *jsb_CrossApp_CAView_prototype;

bool js_autogentestbindings_js_CAView_removeFromSuperview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_removeFromSuperview : Invalid Native Object");
    if (argc == 0) {
        cobj->removeFromSuperview();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_removeFromSuperview : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getSuperview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getSuperview : Invalid Native Object");
    if (argc == 0) {
        CrossApp::CAView* ret = cobj->getSuperview();
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAView>(cx, (CrossApp::CAView*)ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getSuperview : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getSubviewByTag(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getSubviewByTag : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_getSubviewByTag : Error processing arguments");
        CrossApp::CAView* ret = cobj->getSubviewByTag(arg0);
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAView>(cx, (CrossApp::CAView*)ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getSubviewByTag : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_sortAllSubviews(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_sortAllSubviews : Invalid Native Object");
    if (argc == 0) {
        cobj->sortAllSubviews();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_sortAllSubviews : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_copy(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_copy : Invalid Native Object");
    if (argc == 0) {
        CrossApp::CAView* ret = cobj->copy();
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAView>(cx, (CrossApp::CAView*)ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_copy : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_updateDisplayedAlpha(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_updateDisplayedAlpha : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_updateDisplayedAlpha : Error processing arguments");
        cobj->updateDisplayedAlpha(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_updateDisplayedAlpha : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_isFlipX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isFlipX : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isFlipX();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isFlipX : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_isFlipY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isFlipY : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isFlipY();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isFlipY : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_init(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_init : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->init();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_init : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setRotation(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setRotation : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setRotation : Error processing arguments");
        cobj->setRotation(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setRotation : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setZOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setZOrder : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setZOrder : Error processing arguments");
        cobj->setZOrder(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setZOrder : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setScaleY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setScaleY : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setScaleY : Error processing arguments");
        cobj->setScaleY(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setScaleY : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setScaleX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setScaleX : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setScaleX : Error processing arguments");
        cobj->setScaleX(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setScaleX : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getAtlasIndex : Invalid Native Object");
    if (argc == 0) {
        unsigned int ret = cobj->getAtlasIndex();
        jsval jsret = JSVAL_NULL;
        jsret = uint32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getAtlasIndex : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_removeSubviewByTag(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_removeSubviewByTag : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_removeSubviewByTag : Error processing arguments");
        cobj->removeSubviewByTag(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_removeSubviewByTag : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_visitEve(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_visitEve : Invalid Native Object");
    if (argc == 0) {
        cobj->visitEve();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_visitEve : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_onExit(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_onExit : Invalid Native Object");
    if (argc == 0) {
        cobj->onExit();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_onExit : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setSuperview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setSuperview : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAView* arg0 = nullptr;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAView*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setSuperview : Error processing arguments");
        cobj->setSuperview(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setSuperview : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setRotationX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setRotationX : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setRotationX : Error processing arguments");
        cobj->setRotationX(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setRotationX : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getAlpha(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getAlpha : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getAlpha();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getAlpha : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setSkewX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setSkewX : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setSkewX : Error processing arguments");
        cobj->setSkewX(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setSkewX : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setSkewY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setSkewY : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setSkewY : Error processing arguments");
        cobj->setSkewY(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setSkewY : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_removeSubview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_removeSubview : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAView* arg0 = nullptr;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAView*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_removeSubview : Error processing arguments");
        cobj->removeSubview(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_removeSubview : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_onEnterTransitionDidFinish(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_onEnterTransitionDidFinish : Invalid Native Object");
    if (argc == 0) {
        cobj->onEnterTransitionDidFinish();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_onEnterTransitionDidFinish : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_removeAllSubviews(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_removeAllSubviews : Invalid Native Object");
    if (argc == 0) {
        cobj->removeAllSubviews();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_removeAllSubviews : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_reViewlayout(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_reViewlayout : Invalid Native Object");
    if (argc == 1) {
        CrossApp::DSize arg0;
        ok &= jsval_to_dsize(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_reViewlayout : Error processing arguments");
        cobj->reViewlayout(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_reViewlayout : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getSubviewByTextTag(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getSubviewByTextTag : Invalid Native Object");
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_getSubviewByTextTag : Error processing arguments");
        CrossApp::CAView* ret = cobj->getSubviewByTextTag(arg0);
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAView>(cx, (CrossApp::CAView*)ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getSubviewByTextTag : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_removeSubviewByTextTag(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_removeSubviewByTextTag : Invalid Native Object");
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_removeSubviewByTextTag : Error processing arguments");
        cobj->removeSubviewByTextTag(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_removeSubviewByTextTag : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getFrame(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getFrame : Invalid Native Object");
    if (argc == 0) {
        CrossApp::DRect ret = cobj->getFrame();
        jsval jsret = JSVAL_NULL;
        jsret = drect_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getFrame : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getImageRect(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getImageRect : Invalid Native Object");
    if (argc == 0) {
        const CrossApp::DRect& ret = cobj->getImageRect();
        jsval jsret = JSVAL_NULL;
        jsret = drect_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getImageRect : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_nodeToParentTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_nodeToParentTransform : Invalid Native Object");
    if (argc == 0) {
        CrossApp::CATransformation ret = cobj->nodeToParentTransform();
        jsval jsret = JSVAL_NULL;
        #pragma warning NO CONVERSION FROM NATIVE FOR CATransformation;
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_nodeToParentTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getFrameOrigin(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getFrameOrigin : Invalid Native Object");
    if (argc == 0) {
        CrossApp::DPoint ret = cobj->getFrameOrigin();
        jsval jsret = JSVAL_NULL;
        jsret = dpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getFrameOrigin : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setDirty(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setDirty : Invalid Native Object");
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setDirty : Error processing arguments");
        cobj->setDirty(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setDirty : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setGLServerState(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setGLServerState : Invalid Native Object");
    if (argc == 1) {
        CrossApp::ccGLServerState arg0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setGLServerState : Error processing arguments");
        cobj->setGLServerState(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setGLServerState : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_isImageRectRotated(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isImageRectRotated : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isImageRectRotated();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isImageRectRotated : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getDisplayedColor : Invalid Native Object");
    if (argc == 0) {
        const CrossApp::CAColor4B& ret = cobj->getDisplayedColor();
        jsval jsret = JSVAL_NULL;
        jsret = cacolor4b_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getDisplayedColor : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getAnchorPoint : Invalid Native Object");
    if (argc == 0) {
        const CrossApp::DPoint& ret = cobj->getAnchorPoint();
        jsval jsret = JSVAL_NULL;
        jsret = dpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getAnchorPoint : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_updateTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_updateTransform : Invalid Native Object");
    if (argc == 0) {
        cobj->updateTransform();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_updateTransform : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getAnchorPointInPoints(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getAnchorPointInPoints : Invalid Native Object");
    if (argc == 0) {
        const CrossApp::DPoint& ret = cobj->getAnchorPointInPoints();
        jsval jsret = JSVAL_NULL;
        jsret = dpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getAnchorPointInPoints : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_onEnter(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_onEnter : Invalid Native Object");
    if (argc == 0) {
        cobj->onEnter();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_onEnter : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setAtlasIndex : Invalid Native Object");
    if (argc == 1) {
        unsigned int arg0 = 0;
        ok &= jsval_to_uint32(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setAtlasIndex : Error processing arguments");
        cobj->setAtlasIndex(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setAtlasIndex : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getCenterOrigin(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getCenterOrigin : Invalid Native Object");
    if (argc == 0) {
        CrossApp::DPoint ret = cobj->getCenterOrigin();
        jsval jsret = JSVAL_NULL;
        jsret = dpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getCenterOrigin : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_initWithCenter(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_initWithCenter : Invalid Native Object");
    if (argc == 1) {
        CrossApp::DRect arg0;
        ok &= jsval_to_drect(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_initWithCenter : Error processing arguments");
        bool ret = cobj->initWithCenter(arg0);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_initWithCenter : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getRotation(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getRotation : Invalid Native Object");
    if (argc == 0) {
        int ret = cobj->getRotation();
        jsval jsret = JSVAL_NULL;
        jsret = int32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getRotation : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getZOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getZOrder : Invalid Native Object");
    if (argc == 0) {
        int ret = cobj->getZOrder();
        jsval jsret = JSVAL_NULL;
        jsret = int32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getZOrder : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_visit(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_visit : Invalid Native Object");
    if (argc == 0) {
        cobj->visit();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_visit : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_transform(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_transform : Invalid Native Object");
    if (argc == 0) {
        cobj->transform();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_transform : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setVertexZ(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setVertexZ : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setVertexZ : Error processing arguments");
        cobj->setVertexZ(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setVertexZ : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getSkewX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getSkewX : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getSkewX();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getSkewX : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getSkewY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getSkewY : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getSkewY();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getSkewY : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setRotationY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setRotationY : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setRotationY : Error processing arguments");
        cobj->setRotationY(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setRotationY : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_insertSubview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_insertSubview : Invalid Native Object");
    if (argc == 2) {
        CrossApp::CAView* arg0 = nullptr;
        int arg1 = 0;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAView*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_insertSubview : Error processing arguments");
        cobj->insertSubview(arg0, arg1);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_insertSubview : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}
bool js_autogentestbindings_js_CAView_setFlipY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setFlipY : Invalid Native Object");
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setFlipY : Error processing arguments");
        cobj->setFlipY(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setFlipY : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setFlipX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setFlipX : Invalid Native Object");
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setFlipX : Error processing arguments");
        cobj->setFlipX(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setFlipX : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getCenter(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getCenter : Invalid Native Object");
    if (argc == 0) {
        CrossApp::DRect ret = cobj->getCenter();
        jsval jsret = JSVAL_NULL;
        jsret = drect_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getCenter : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_isDirty(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isDirty : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isDirty();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isDirty : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getRotationX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getRotationX : Invalid Native Object");
    if (argc == 0) {
        int ret = cobj->getRotationX();
        jsval jsret = JSVAL_NULL;
        jsret = int32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getRotationX : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getOrderOfArrival : Invalid Native Object");
    if (argc == 0) {
        unsigned int ret = cobj->getOrderOfArrival();
        jsval jsret = JSVAL_NULL;
        jsret = uint32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getOrderOfArrival : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getRotationY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getRotationY : Invalid Native Object");
    if (argc == 0) {
        int ret = cobj->getRotationY();
        jsval jsret = JSVAL_NULL;
        jsret = int32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getRotationY : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_isRunning(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isRunning : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isRunning();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isRunning : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setBlendFunc : Invalid Native Object");
    if (argc == 1) {
        CrossApp::_ccBlendFunc arg0;
        #pragma warning NO CONVERSION TO NATIVE FOR _ccBlendFunc
		ok = false;
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setBlendFunc : Error processing arguments");
        cobj->setBlendFunc(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setBlendFunc : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getQuad(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getQuad : Invalid Native Object");
    if (argc == 0) {
        CrossApp::_ccV3F_C4B_T2F_Quad ret = cobj->getQuad();
        jsval jsret = JSVAL_NULL;
        #pragma warning NO CONVERSION FROM NATIVE FOR _ccV3F_C4B_T2F_Quad;
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getQuad : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setVisible(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setVisible : Invalid Native Object");
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setVisible : Error processing arguments");
        cobj->setVisible(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setVisible : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_reorderSubview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_reorderSubview : Invalid Native Object");
    if (argc == 2) {
        CrossApp::CAView* arg0 = nullptr;
        int arg1 = 0;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAView*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_reorderSubview : Error processing arguments");
        cobj->reorderSubview(arg0, arg1);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_reorderSubview : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}
bool js_autogentestbindings_js_CAView_getVertexZ(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getVertexZ : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getVertexZ();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getVertexZ : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView__setZOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView__setZOrder : Invalid Native Object");
    if (argc == 1) {
        int arg0 = 0;
        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView__setZOrder : Error processing arguments");
        cobj->_setZOrder(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView__setZOrder : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setScale(JSContext *cx, uint32_t argc, jsval *vp)
{
    bool ok = true;
    CrossApp::CAView* cobj = nullptr;

    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx);
    obj = args.thisv().toObjectOrNull();
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : nullptr);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setScale : Invalid Native Object");
    do {
        if (argc == 2) {
            double arg0 = 0;
            ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
            if (!ok) { ok = true; break; }
            double arg1 = 0;
            ok &= JS::ToNumber( cx, args.get(1), &arg1) && !isnan(arg1);
            if (!ok) { ok = true; break; }
            cobj->setScale(arg0, arg1);
            args.rval().setUndefined();
            return true;
        }
    } while(0);

    do {
        if (argc == 1) {
            double arg0 = 0;
            ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
            if (!ok) { ok = true; break; }
            cobj->setScale(arg0);
            args.rval().setUndefined();
            return true;
        }
    } while(0);

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setScale : wrong number of arguments");
    return false;
}
bool js_autogentestbindings_js_CAView_isDisplayRange(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isDisplayRange : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isDisplayRange();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isDisplayRange : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getDisplayedAlpha(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getDisplayedAlpha : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getDisplayedAlpha();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getDisplayedAlpha : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_setOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setOrderOfArrival : Invalid Native Object");
    if (argc == 1) {
        unsigned int arg0 = 0;
        ok &= jsval_to_uint32(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setOrderOfArrival : Error processing arguments");
        cobj->setOrderOfArrival(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setOrderOfArrival : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getScaleY(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getScaleY : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getScaleY();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getScaleY : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getScaleX(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getScaleX : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getScaleX();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getScaleX : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_addSubview(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_addSubview : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAView* arg0 = nullptr;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAView*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_addSubview : Error processing arguments");
        cobj->addSubview(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_addSubview : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_initWithFrame(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_initWithFrame : Invalid Native Object");
    if (argc == 1) {
        CrossApp::DRect arg0;
        ok &= jsval_to_drect(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_initWithFrame : Error processing arguments");
        bool ret = cobj->initWithFrame(arg0);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_initWithFrame : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setDisplayRange(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setDisplayRange : Invalid Native Object");
    if (argc == 1) {
        bool arg0;
        arg0 = JS::ToBoolean(args.get(0));
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setDisplayRange : Error processing arguments");
        cobj->setDisplayRange(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setDisplayRange : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_setAlpha(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_setAlpha : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_setAlpha : Error processing arguments");
        cobj->setAlpha(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_setAlpha : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_draw(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_draw : Invalid Native Object");
    if (argc == 0) {
        cobj->draw();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_draw : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getBlendFunc : Invalid Native Object");
    if (argc == 0) {
        CrossApp::_ccBlendFunc ret = cobj->getBlendFunc();
        jsval jsret = JSVAL_NULL;
        #pragma warning NO CONVERSION FROM NATIVE FOR _ccBlendFunc;
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getBlendFunc : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_transformAncestors(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_transformAncestors : Invalid Native Object");
    if (argc == 0) {
        cobj->transformAncestors();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_transformAncestors : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_description(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_description : Invalid Native Object");
    if (argc == 0) {
        const char* ret = cobj->description();
        jsval jsret = JSVAL_NULL;
        jsret = c_string_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_description : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_isVisible(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_isVisible : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->isVisible();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_isVisible : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_update(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_update : Invalid Native Object");
    if (argc == 1) {
        double arg0 = 0;
        ok &= JS::ToNumber( cx, args.get(0), &arg0) && !isnan(arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_update : Error processing arguments");
        cobj->update(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_update : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_onExitTransitionDidStart(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_onExitTransitionDidStart : Invalid Native Object");
    if (argc == 0) {
        cobj->onExitTransitionDidStart();
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_onExitTransitionDidStart : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getBounds(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getBounds : Invalid Native Object");
    if (argc == 0) {
        CrossApp::DRect ret = cobj->getBounds();
        jsval jsret = JSVAL_NULL;
        jsret = drect_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getBounds : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getScale(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getScale : Invalid Native Object");
    if (argc == 0) {
        double ret = cobj->getScale();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getScale : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_initWithColor(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_initWithColor : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAColor4B arg0;
        ok &= jsval_to_cacolor4b(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_initWithColor : Error processing arguments");
        bool ret = cobj->initWithColor(arg0);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_initWithColor : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_autogentestbindings_js_CAView_getCamera(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getCamera : Invalid Native Object");
    if (argc == 0) {
        CrossApp::CACamera* ret = cobj->getCamera();
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CACamera>(cx, (CrossApp::CACamera*)ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getCamera : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getColor(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getColor : Invalid Native Object");
    if (argc == 0) {
        const CrossApp::CAColor4B& ret = cobj->getColor();
        jsval jsret = JSVAL_NULL;
        jsret = cacolor4b_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getColor : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_getGLServerState(JSContext *cx, uint32_t argc, jsval *vp)
{
    
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_autogentestbindings_js_CAView_getGLServerState : Invalid Native Object");
    if (argc == 0) {
        int ret = (int)cobj->getGLServerState();
        jsval jsret = JSVAL_NULL;
        jsret = int32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_autogentestbindings_js_CAView_getGLServerState : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_autogentestbindings_js_CAView_create(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc == 0) {
        CrossApp::CAView* ret = CrossApp::CAView::create();
        jsval jsret = JSVAL_NULL;
        do {
        if (ret) {
            js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAView>(cx, (CrossApp::CAView*)ret);
            jsret = OBJECT_TO_JSVAL(jsProxy->obj);
        } else {
            jsret = JSVAL_NULL;
        }
    } while (0);
        args.rval().set(jsret);
        return true;
    }
    JS_ReportError(cx, "js_autogentestbindings_js_CAView_create : wrong number of arguments");
    return false;
}

bool js_autogentestbindings_js_CAView_createWithColor(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAColor4B arg0;
        ok &= jsval_to_cacolor4b(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_autogentestbindings_js_CAView_createWithColor : Error processing arguments");
        CrossApp::CAView* ret = CrossApp::CAView::createWithColor(arg0);
        jsval jsret = JSVAL_NULL;
        do {
        if (ret) {
            js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAView>(cx, (CrossApp::CAView*)ret);
            jsret = OBJECT_TO_JSVAL(jsProxy->obj);
        } else {
            jsret = JSVAL_NULL;
        }
    } while (0);
        args.rval().set(jsret);
        return true;
    }
    JS_ReportError(cx, "js_autogentestbindings_js_CAView_createWithColor : wrong number of arguments");
    return false;
}

bool js_autogentestbindings_js_CAView_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    CrossApp::CAView* cobj = new (std::nothrow) CrossApp::CAView();
    TypeTest<CrossApp::CAView> t;
    js_type_class_t *typeClass = nullptr;
    std::string typeName = t.s_name();
    auto typeMapIter = _js_global_type_map.find(typeName);
    CCAssert(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
    typeClass = typeMapIter->second;
    CCAssert(typeClass, "The value is null.");
    JS::RootedObject proto(cx, typeClass->proto.get());
    JS::RootedObject parent(cx, typeClass->parentProto.get());
    JS::RootedObject obj(cx, JS_NewObject(cx, typeClass->jsclass, proto, parent));
    args.rval().set(OBJECT_TO_JSVAL(obj));
    // link the native object with the javascript object
    js_proxy_t* p = jsb_new_proxy(cobj, obj);
    AddNamedObjectRoot(cx, &p->obj, "CrossApp::CAView");
    if (JS_HasProperty(cx, obj, "_ctor", &ok) && ok)
        ScriptingCore::getInstance()->executeFunctionWithOwner(OBJECT_TO_JSVAL(obj), "_ctor", args);
    return true;
}

void js_CrossApp_CAView_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (CAView)", obj);
    js_proxy_t* nproxy;
    js_proxy_t* jsproxy;
    jsproxy = jsb_get_js_proxy(obj);
    if (jsproxy) {
        CrossApp::CAView *nobj = static_cast<CrossApp::CAView *>(jsproxy->ptr);
        nproxy = jsb_get_native_proxy(jsproxy->ptr);

        if (nobj) {
            jsb_remove_proxy(nproxy, jsproxy);
            delete nobj;
        }
        else jsb_remove_proxy(nullptr, jsproxy);
    }
}
void js_register_autogentestbindings_js_CAView(JSContext *cx, JS::HandleObject global) {
    jsb_CrossApp_CAView_class = (JSClass *)calloc(1, sizeof(JSClass));
    jsb_CrossApp_CAView_class->name = "CAView";
    jsb_CrossApp_CAView_class->addProperty = JS_PropertyStub;
    jsb_CrossApp_CAView_class->delProperty = JS_DeletePropertyStub;
    jsb_CrossApp_CAView_class->getProperty = JS_PropertyStub;
    jsb_CrossApp_CAView_class->setProperty = JS_StrictPropertyStub;
    jsb_CrossApp_CAView_class->enumerate = JS_EnumerateStub;
    jsb_CrossApp_CAView_class->resolve = JS_ResolveStub;
    jsb_CrossApp_CAView_class->convert = JS_ConvertStub;
    jsb_CrossApp_CAView_class->finalize = js_CrossApp_CAView_finalize;
    jsb_CrossApp_CAView_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);

    static JSPropertySpec properties[] = {
        JS_PSG("__nativeObj", js_is_native_obj, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_PS_END
    };

    static JSFunctionSpec funcs[] = {
        JS_FN("removeFromSuperview", js_autogentestbindings_js_CAView_removeFromSuperview, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getSuperview", js_autogentestbindings_js_CAView_getSuperview, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getSubviewByTag", js_autogentestbindings_js_CAView_getSubviewByTag, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("sortAllSubviews", js_autogentestbindings_js_CAView_sortAllSubviews, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("copy", js_autogentestbindings_js_CAView_copy, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("updateDisplayedAlpha", js_autogentestbindings_js_CAView_updateDisplayedAlpha, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isFlipX", js_autogentestbindings_js_CAView_isFlipX, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isFlipY", js_autogentestbindings_js_CAView_isFlipY, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("init", js_autogentestbindings_js_CAView_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setRotation", js_autogentestbindings_js_CAView_setRotation, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setZOrder", js_autogentestbindings_js_CAView_setZOrder, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setScaleY", js_autogentestbindings_js_CAView_setScaleY, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setScaleX", js_autogentestbindings_js_CAView_setScaleX, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getAtlasIndex", js_autogentestbindings_js_CAView_getAtlasIndex, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("removeSubviewByTag", js_autogentestbindings_js_CAView_removeSubviewByTag, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("visitEve", js_autogentestbindings_js_CAView_visitEve, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("onExit", js_autogentestbindings_js_CAView_onExit, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setSuperview", js_autogentestbindings_js_CAView_setSuperview, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setRotationX", js_autogentestbindings_js_CAView_setRotationX, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getAlpha", js_autogentestbindings_js_CAView_getAlpha, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setSkewX", js_autogentestbindings_js_CAView_setSkewX, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setSkewY", js_autogentestbindings_js_CAView_setSkewY, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("removeSubview", js_autogentestbindings_js_CAView_removeSubview, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("onEnterTransitionDidFinish", js_autogentestbindings_js_CAView_onEnterTransitionDidFinish, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("removeAllSubviews", js_autogentestbindings_js_CAView_removeAllSubviews, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("reViewlayout", js_autogentestbindings_js_CAView_reViewlayout, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getSubviewByTextTag", js_autogentestbindings_js_CAView_getSubviewByTextTag, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("removeSubviewByTextTag", js_autogentestbindings_js_CAView_removeSubviewByTextTag, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getFrame", js_autogentestbindings_js_CAView_getFrame, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getImageRect", js_autogentestbindings_js_CAView_getImageRect, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("nodeToParentTransform", js_autogentestbindings_js_CAView_nodeToParentTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getFrameOrigin", js_autogentestbindings_js_CAView_getFrameOrigin, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setDirty", js_autogentestbindings_js_CAView_setDirty, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setGLServerState", js_autogentestbindings_js_CAView_setGLServerState, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isImageRectRotated", js_autogentestbindings_js_CAView_isImageRectRotated, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getDisplayedColor", js_autogentestbindings_js_CAView_getDisplayedColor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getAnchorPoint", js_autogentestbindings_js_CAView_getAnchorPoint, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("updateTransform", js_autogentestbindings_js_CAView_updateTransform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getAnchorPointInPoints", js_autogentestbindings_js_CAView_getAnchorPointInPoints, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("onEnter", js_autogentestbindings_js_CAView_onEnter, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setAtlasIndex", js_autogentestbindings_js_CAView_setAtlasIndex, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getCenterOrigin", js_autogentestbindings_js_CAView_getCenterOrigin, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("initWithCenter", js_autogentestbindings_js_CAView_initWithCenter, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getRotation", js_autogentestbindings_js_CAView_getRotation, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getZOrder", js_autogentestbindings_js_CAView_getZOrder, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("visit", js_autogentestbindings_js_CAView_visit, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("transform", js_autogentestbindings_js_CAView_transform, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setVertexZ", js_autogentestbindings_js_CAView_setVertexZ, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getSkewX", js_autogentestbindings_js_CAView_getSkewX, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getSkewY", js_autogentestbindings_js_CAView_getSkewY, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setRotationY", js_autogentestbindings_js_CAView_setRotationY, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("insertSubview", js_autogentestbindings_js_CAView_insertSubview, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setFlipY", js_autogentestbindings_js_CAView_setFlipY, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setFlipX", js_autogentestbindings_js_CAView_setFlipX, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getCenter", js_autogentestbindings_js_CAView_getCenter, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isDirty", js_autogentestbindings_js_CAView_isDirty, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getRotationX", js_autogentestbindings_js_CAView_getRotationX, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getOrderOfArrival", js_autogentestbindings_js_CAView_getOrderOfArrival, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getRotationY", js_autogentestbindings_js_CAView_getRotationY, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isRunning", js_autogentestbindings_js_CAView_isRunning, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setBlendFunc", js_autogentestbindings_js_CAView_setBlendFunc, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getQuad", js_autogentestbindings_js_CAView_getQuad, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setVisible", js_autogentestbindings_js_CAView_setVisible, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("reorderSubview", js_autogentestbindings_js_CAView_reorderSubview, 2, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getVertexZ", js_autogentestbindings_js_CAView_getVertexZ, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("_setZOrder", js_autogentestbindings_js_CAView__setZOrder, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setScale", js_autogentestbindings_js_CAView_setScale, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isDisplayRange", js_autogentestbindings_js_CAView_isDisplayRange, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getDisplayedAlpha", js_autogentestbindings_js_CAView_getDisplayedAlpha, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setOrderOfArrival", js_autogentestbindings_js_CAView_setOrderOfArrival, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getScaleY", js_autogentestbindings_js_CAView_getScaleY, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getScaleX", js_autogentestbindings_js_CAView_getScaleX, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("addSubview", js_autogentestbindings_js_CAView_addSubview, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("initWithFrame", js_autogentestbindings_js_CAView_initWithFrame, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setDisplayRange", js_autogentestbindings_js_CAView_setDisplayRange, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("setAlpha", js_autogentestbindings_js_CAView_setAlpha, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("draw", js_autogentestbindings_js_CAView_draw, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getBlendFunc", js_autogentestbindings_js_CAView_getBlendFunc, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("transformAncestors", js_autogentestbindings_js_CAView_transformAncestors, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("description", js_autogentestbindings_js_CAView_description, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("isVisible", js_autogentestbindings_js_CAView_isVisible, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("update", js_autogentestbindings_js_CAView_update, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("onExitTransitionDidStart", js_autogentestbindings_js_CAView_onExitTransitionDidStart, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getBounds", js_autogentestbindings_js_CAView_getBounds, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getScale", js_autogentestbindings_js_CAView_getScale, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("initWithColor", js_autogentestbindings_js_CAView_initWithColor, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getCamera", js_autogentestbindings_js_CAView_getCamera, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getColor", js_autogentestbindings_js_CAView_getColor, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getGLServerState", js_autogentestbindings_js_CAView_getGLServerState, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };

    static JSFunctionSpec st_funcs[] = {
        JS_FN("create", js_autogentestbindings_js_CAView_create, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("createWithColor", js_autogentestbindings_js_CAView_createWithColor, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };

    jsb_CrossApp_CAView_prototype = JS_InitClass(
        cx, global,
        JS::NullPtr(), // parent proto
        jsb_CrossApp_CAView_class,
        js_autogentestbindings_js_CAView_constructor, 0, // constructor
        properties,
        funcs,
        NULL, // no static properties
        st_funcs);
    // make the class enumerable in the registered namespace
//  bool found;
//FIXME: Removed in Firefox v27 
//  JS_SetPropertyAttributes(cx, global, "CAView", JSPROP_ENUMERATE | JSPROP_READONLY, &found);

    // add the proto and JSClass to the type->js info hash table
    TypeTest<CrossApp::CAView> t;
    js_type_class_t *p;
    std::string typeName = t.s_name();
    if (_js_global_type_map.find(typeName) == _js_global_type_map.end())
    {
        p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
        p->jsclass = jsb_CrossApp_CAView_class;
        p->proto = jsb_CrossApp_CAView_prototype;
        p->parentProto = NULL;
        _js_global_type_map.insert(std::make_pair(typeName, p));
    }
}

void register_all_autogentestbindings_js(JSContext* cx, JS::HandleObject obj) {
    // Get the ns
    JS::RootedObject ns(cx);
    get_or_create_js_obj(cx, obj, "ca", &ns);

    js_register_autogentestbindings_js_CAView(cx, ns);
}

