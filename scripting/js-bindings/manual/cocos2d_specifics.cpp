/*
 * Copyright (c) 2012 Zynga Inc.
 * Copyright (c) 2013-2014 Chukong Technologies Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "cocos2d_specifics.hpp"
#include "CrossApp.h"
#include <typeinfo>
#include "js_bindings_config.h"
#include "jsb_CrossApp_auto.hpp"
//#include "jsb_event_dispatcher_manual.h"
//#include "navmesh/CCNavMesh.h" //**3D部分
//#include "component/CCComponentJS.h" //js组件
using namespace CrossApp;

schedFunc_proxy_t *_schedFunc_target_ht = NULL;
schedTarget_proxy_t *_schedObj_target_ht = NULL;

//JSTouchDelegate::TouchDelegateMap JSTouchDelegate::sTouchDelegateMap;
//
//JSTouchDelegate::JSTouchDelegate()
//: _needUnroot(false)
////, _touchListenerAllAtOnce(nullptr)
////, _touchListenerOneByOne(nullptr)
//{
//    auto cx = ScriptingCore::getInstance()->getGlobalContext();
//    _obj.construct(cx);
//}
//
//JSTouchDelegate::~JSTouchDelegate()
//{
//    CCLOGINFO("In the destructor of JSTouchDelegate.");
//    _obj.destroyIfConstructed();
//}
//
//void JSTouchDelegate::setDelegateForJSObject(JSObject* pJSObj, JSTouchDelegate* pDelegate)
//{
//    CCAssert(sTouchDelegateMap.find(pJSObj) == sTouchDelegateMap.end(),
//             "pJSObj can't be found in sTouchDelegateMap.");
//    sTouchDelegateMap.insert(TouchDelegatePair(pJSObj, pDelegate));
//}
//
//JSTouchDelegate* JSTouchDelegate::getDelegateForJSObject(JSObject* pJSObj)
//{
//    JSTouchDelegate* pRet = NULL;
//    TouchDelegateMap::iterator iter = sTouchDelegateMap.find(pJSObj);
//    if (iter != sTouchDelegateMap.end())
//    {
//        pRet = iter->second;
//    }
//    return pRet;
//}
//
//void JSTouchDelegate::removeDelegateForJSObject(JSObject* pJSObj)
//{
//    TouchDelegateMap::iterator iter = sTouchDelegateMap.find(pJSObj);
//    CCAssert(iter != sTouchDelegateMap.end(), "pJSObj can't be found in sTouchDelegateMap!");
//    sTouchDelegateMap.erase(pJSObj);
//}
//
//void JSTouchDelegate::setJSObject(JS::HandleObject obj)
//{
//    _obj.CAObject() = obj;
//}
//
//void JSTouchDelegate::registerStandardDelegate(int priority)
//{
//    auto dispatcher = Director::getInstance()->getEventDispatcher();
//    dispatcher->removeEventListener(_touchListenerAllAtOnce);
//    
//    auto listener = EventListenerTouchAllAtOnce::create();
//    
//    listener->onTouchesBegan = CC_CALLBACK_2(JSTouchDelegate::onTouchesBegan, this);
//    listener->onTouchesMoved = CC_CALLBACK_2(JSTouchDelegate::onTouchesMoved, this);
//    listener->onTouchesEnded = CC_CALLBACK_2(JSTouchDelegate::onTouchesEnded, this);
//    listener->onTouchesCancelled = CC_CALLBACK_2(JSTouchDelegate::onTouchesCancelled, this);
//    
//    dispatcher->addEventListenerWithFixedPriority(listener, priority);
//    
//    _touchListenerAllAtOnce = listener;
//}

//void JSTouchDelegate::registerTargetedDelegate(int priority, bool swallowsTouches)
//{
//    auto dispatcher = Director::getInstance()->getEventDispatcher();
//    dispatcher->removeEventListener(_touchListenerOneByOne);
//    
//    auto listener = EventListenerTouchOneByOne::create();
//    listener->setSwallowTouches(swallowsTouches);
//    
//    listener->onTouchBegan = CC_CALLBACK_2(JSTouchDelegate::onTouchBegan, this);
//    listener->onTouchMoved = CC_CALLBACK_2(JSTouchDelegate::onTouchMoved, this);
//    listener->onTouchEnded = CC_CALLBACK_2(JSTouchDelegate::onTouchEnded, this);
//    listener->onTouchCancelled = CC_CALLBACK_2(JSTouchDelegate::onTouchCancelled, this);
//    
//    dispatcher->addEventListenerWithFixedPriority(listener, priority);
//    _touchListenerOneByOne = listener;
//}
//
//void JSTouchDelegate::unregisterTouchDelegate()
//{
//    auto dispatcher = Director::getInstance()->getEventDispatcher();
//    dispatcher->removeEventListener(_touchListenerAllAtOnce);
//    dispatcher->removeEventListener(_touchListenerOneByOne);
//    
//    this->release();
//}
//
//bool JSTouchDelegate::onTouchBegan(Touch *touch, Event *event)
//{
//    CC_UNUSED_PARAM(event); 
//    JSContext *cx = ScriptingCore::getInstance()->getGlobalContext();
//    JS::RootedValue retval(cx);
//    bool bRet = false;
//    
//    ScriptingCore::getInstance()->executeCustomTouchEvent(EventTouch::EventCode::BEGAN, touch, _obj.CAObject(), &retval);
//    
//    if(retval.isBoolean())
//    {
//        bRet = retval.toBoolean();
//    } 
//
//    return bRet;
//};
//// optional
//
//void JSTouchDelegate::onTouchMoved(Touch *touch, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//
//    ScriptingCore::getInstance()->executeCustomTouchEvent(EventTouch::EventCode::MOVED, touch, _obj.CAObject());
//}
//
//void JSTouchDelegate::onTouchEnded(Touch *touch, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//
//    ScriptingCore::getInstance()->executeCustomTouchEvent(EventTouch::EventCode::ENDED, touch, _obj.CAObject());
//}
//
//void JSTouchDelegate::onTouchCancelled(Touch *touch, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//    ScriptingCore::getInstance()->executeCustomTouchEvent(EventTouch::EventCode::CANCELLED, touch, _obj.CAObject());
//}
//
//// optional
//void JSTouchDelegate::onTouchesBegan(const std::vector<Touch*>& touches, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//    ScriptingCore::getInstance()->executeCustomTouchesEvent(EventTouch::EventCode::BEGAN, touches, _obj.CAObject());
//}
//
//void JSTouchDelegate::onTouchesMoved(const std::vector<Touch*>& touches, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//    ScriptingCore::getInstance()->executeCustomTouchesEvent(EventTouch::EventCode::MOVED, touches, _obj.CAObject());
//}
//
//void JSTouchDelegate::onTouchesEnded(const std::vector<Touch*>& touches, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//    ScriptingCore::getInstance()->executeCustomTouchesEvent(EventTouch::EventCode::ENDED, touches, _obj.CAObject());
//}
//
//void JSTouchDelegate::onTouchesCancelled(const std::vector<Touch*>& touches, Event *event)
//{
//    CC_UNUSED_PARAM(event);
//    ScriptingCore::getInstance()->executeCustomTouchesEvent(EventTouch::EventCode::CANCELLED, touches, _obj.CAObject());
//}

// cc.EventTouch#getTouches
//bool js_cocos2dx_EventTouch_getTouches(JSContext *cx, uint32_t argc, jsval *vp) {
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JSObject *obj = args.thisv().toObjectOrNull();
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAEventTouch* cobj = (CrossApp::CAEventTouch *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_EventTouch_getTouches : Invalid Native Object");
//    if (argc == 0) {
//        const std::vector<CrossApp::CATouch*>& ret = cobj->getTouches();
//        JS::RootedObject jsretArr(cx, JS_NewArrayObject(cx, 0));
//        
//        int i = 0;
//        for (CrossApp::CATouch* touchObj : ret)
//        {
//            JS::RootedValue arrElement(cx);
//            
//            //First, check whether object is associated with js object.
//            js_proxy_t* jsproxy = js_get_or_create_proxy<CrossApp::CATouch>(cx, touchObj);
//            if (jsproxy) {
//                arrElement = OBJECT_TO_JSVAL(jsproxy->obj);
//            }
//            if (!JS_SetElement(cx, jsretArr, i, arrElement)) {
//                break;
//            }
//            ++i;
//        }
//        
////        JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(jsretArr));
//        args.rval().set(OBJECT_TO_JSVAL(jsretArr));
//        return true;
//    }
//    
//    JS_ReportError(cx, "js_cocos2dx_EventTouch_getTouches : wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}

// cc.EventTouch#setTouches
//bool js_cocos2dx_EventTouch_setTouches(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
////    jsval *argv = JS_ARGV(cx, vp);
//    bool ok = true;
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAEventTouch* cobj = (CrossApp::CAEventTouch *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_EventTouch_setTouches : Invalid Native Object");
//    if (argc == 1) {
//        std::vector<Touch*> arg0;
//        JS::RootedObject jsobj(cx, args.get(0).toObjectOrNull());
////        ok = argv->isObject() && JS_ValueToObject( cx, JS::RootedValue(cx, *argv), &jsobj );
//        JSB_PRECONDITION3( ok, cx, false, "Error converting value to object");
//        JSB_PRECONDITION3( jsobj && JS_IsArrayObject( cx, jsobj),  cx, false, "Object must be an array");
//        
//        uint32_t len = 0;
//        JS_GetArrayLength(cx, jsobj, &len);
//        
//        for (uint32_t i=0; i < len; i++)
//        {
//            JS::RootedValue value(cx);
//            if (JS_GetElement(cx, jsobj, i, &value))
//            {
//                JSObject *tmp = value.toObjectOrNull();
//                proxy = jsb_get_js_proxy(tmp);
//                CrossApp::CATouch* touchObj = (CrossApp::CATouch *)(proxy ? proxy->ptr : NULL);
//                if (touchObj) {
//                    arg0.push_back(touchObj);
//                }
//            }
//        }
//        cobj->setTouches(arg0);
////        args.rval().setUndefined();
//        args.rval().setUndefined();
//        return true;
//    }
//    
//    JS_ReportError(cx, "js_cocos2dx_EventTouch_setTouches : wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

static void addCallBackAndThis(JSObject *obj, jsval callback, jsval &thisObj)
{
    if(callback != JSVAL_VOID) {
        ScriptingCore::getInstance()->setReservedSpot(0, obj, callback);
    }
    if(thisObj != JSVAL_VOID) {
        ScriptingCore::getInstance()->setReservedSpot(1, obj, thisObj);
    }
}

template<class T>
JSObject* bind_menu_item(JSContext *cx, T* nativeObj, jsval callback, jsval thisObj) {    
    js_proxy_t *p = jsb_get_native_proxy(nativeObj);
    if (p) {
        addCallBackAndThis(p->obj, callback, thisObj);
        return p->obj;
    } else {
        js_type_class_t *classType = js_get_type_from_native<T>(nativeObj);
        assert(classType);
        JS::RootedObject proto(cx, classType->proto);
        JS::RootedObject parent(cx, classType->parentProto);
        JSObject *tmp = JS_NewObject(cx, classType->jsclass, proto, parent);

        // bind nativeObj <-> JSObject
        js_proxy_t *proxy = jsb_new_proxy(nativeObj, tmp);
        JS::AddNamedObjectRoot(cx, &proxy->obj, typeid(*nativeObj).name());
        addCallBackAndThis(tmp, callback, thisObj);

        return tmp;
    }
}

//bool js_cocos2dx_CCMenu_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
////    jsval *argv = JS_ARGV(cx, vp);
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    if (argc > 0) {
//        CAVector<MenuItem*> items;
//        uint32_t i = 0;
//        while (i < argc) {
//            js_proxy_t *proxy;
//            JSObject *tmpObj = args.get(i).toObjectOrNull();
//            proxy = jsb_get_js_proxy(tmpObj);
//            CrossApp::CAMenuItem *item = (CrossApp::CAMenuItem*)(proxy ? proxy->ptr : NULL);
//            TEST_NATIVE_OBJECT(cx, item)
//            items.pushBack(item);
//            i++;
//        }
//        CrossApp::CAMenu* ret = CrossApp::CAMenu::createWithArray(items);
//        jsval jsret;
//        do {
//            if (ret) {
//                js_proxy_t *p = jsb_get_native_proxy(ret);
//                if (p) {
//                    jsret = OBJECT_TO_JSVAL(p->obj);
//                } else {
//                    // create a new js obj of that class
//                    js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CAMenu>(cx, ret);
//                    jsret = OBJECT_TO_JSVAL(proxy->obj);
//                }
//            } else {
//                jsret = JSVAL_NULL;
//            }
//        } while (0);
////        args.rval().set(jsret);
//        args.rval().set(jsret);
//        return true;
//    }
//    if (argc == 0) {
//        CrossApp::CAMenu* ret = CrossApp::CAMenu::create();
//        jsval jsret;
//        do {
//            if (ret) {
//                js_proxy_t *p = jsb_get_native_proxy(ret);
//                if (p) {
//                    jsret = OBJECT_TO_JSVAL(p->obj);
//                } else {
//                    // create a new js obj of that class
//                    js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CAMenu>(cx, ret);
//                    jsret = OBJECT_TO_JSVAL(proxy->obj);
//                }
//            } else {
//                jsret = JSVAL_NULL;
//            }
//        } while (0);
////        JS_SET_RVAL(cx, vp, jsret);
//        args.rval().set(jsret);
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_cocos2dx_CCSequence_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
////    jsval *argv = JS_ARGV(cx, vp);
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    if (argc > 0) {
//        Vector<FiniteTimeAction*> array;
//        if (argc == 1 && JS_IsArrayObject(cx, JS::RootedObject(cx, args.get(0).toObjectOrNull()))) {
//            bool ok = true;
//            ok &= jsval_to_ccvector(cx, args.get(0), &array);
//            JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        } else {
//            uint32_t i = 0;
//            while (i < argc) {
//                js_proxy_t *proxy;
//                JSObject *tmpObj = args.get(i).toObjectOrNull();
//                proxy = jsb_get_js_proxy(tmpObj);
//                CrossApp::CAFiniteTimeAction *item = (CrossApp::CAFiniteTimeAction*)(proxy ? proxy->ptr : NULL);
//                TEST_NATIVE_OBJECT(cx, item)
//                array.pushBack(item);
//                i++;
//            }
//        }
//        CrossApp::CAFiniteTimeAction* ret = CrossApp::CASequence::create(array);
//        jsval jsret;
//        do {
//            if (ret) {
//                js_proxy_t *p = jsb_get_native_proxy(ret);
//                if (p) {
//                    jsret = OBJECT_TO_JSVAL(p->obj);
//                } else {
//                    // create a new js obj of that class
//                    js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CAFiniteTimeAction>(cx, ret);
//                    jsret = OBJECT_TO_JSVAL(proxy->obj);
//                }
//            } else {
//                jsret = JSVAL_NULL;
//            }
//        } while (0);
////        JS_SET_RVAL(cx, vp, jsret);
//        args.rval().set(jsret);
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}
//
//bool js_cocos2dx_CCSpawn_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    if (argc > 0) {
//        Vector<FiniteTimeAction*> array;
//        if (argc == 1 && JS_IsArrayObject(cx, JS::RootedObject(cx, args.get(0).toObjectOrNull()))) {
//            bool ok = true;
//            ok &= jsval_to_ccvector(cx, args.get(0), &array);
//            JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        } else {
//            uint32_t i = 0;
//            while (i < argc) {
//                js_proxy_t *proxy;
//                JSObject *tmpObj = args[i].toObjectOrNull();
//                proxy = jsb_get_js_proxy(tmpObj);
//                CrossApp::CAFiniteTimeAction *item = (CrossApp::CAFiniteTimeAction*)(proxy ? proxy->ptr : NULL);
//                TEST_NATIVE_OBJECT(cx, item)
//                array.pushBack(item);
//                i++;
//            }
//        }
//        CrossApp::CAFiniteTimeAction* ret = CrossApp::CASpawn::create(array);
//        jsval jsret;
//        do {
//            if (ret) {
//                js_proxy_t *p = jsb_get_native_proxy(ret);
//                if (p) {
//                    jsret = OBJECT_TO_JSVAL(p->obj);
//                } else {
//                    // create a new js obj of that class
//                    js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CAFiniteTimeAction>(cx, ret);
//                    jsret = OBJECT_TO_JSVAL(proxy->obj);
//                }
//            } else {
//                jsret = JSVAL_NULL;
//            }
//        } while (0);
//        args.rval().set(jsret);
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_cocos2dx_CCMenuItem_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        CrossApp::CAMenuItem* ret = CrossApp::CAMenuItem::create();
//        JSObject *obj = bind_menu_item<CrossApp::CAMenuItem>(cx, ret, args.get(0), argc == 2? args.get(1) : JSVAL_VOID);
//        args.rval().set(OBJECT_TO_JSVAL(obj));
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

// "create" in JS
// cc.MenuItemSprite.create( normalSprite, selectedSprite, [disabledSprite], [callback_fn], [this]
//bool js_cocos2dx_CCMenuItemSprite_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 2 && argc <= 5) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        js_proxy_t *proxy;
//        JSObject *tmpObj;
//        
//        tmpObj = args.get(0).toObjectOrNull();
//        proxy = jsb_get_js_proxy(tmpObj);
//        CrossApp::CANode* arg0 = (CrossApp::CANode*)(proxy ? proxy->ptr : NULL);
//        TEST_NATIVE_OBJECT(cx, arg0);
//
//        tmpObj = args.get(1).toObjectOrNull();
//        proxy = jsb_get_js_proxy(tmpObj);
//        CrossApp::CANode* arg1 = (CrossApp::CANode*)(proxy ? proxy->ptr : NULL);
//        TEST_NATIVE_OBJECT(cx, arg1);
//
//        int last = 2;
//        bool thirdArgIsCallback = false;
//
//        jsval jsCallback = JSVAL_VOID;
//        jsval jsThis = JSVAL_VOID;
//
//        CrossApp::CANode* arg2 = NULL;
//        if (argc >= 3) {
//            tmpObj = args.get(2).toObjectOrNull();
//            thirdArgIsCallback = JS_ObjectIsFunction(cx, tmpObj);
//            if (!thirdArgIsCallback) { 
//                proxy = jsb_get_js_proxy(tmpObj);
//                arg2 = (CrossApp::CANode*)(proxy ? proxy->ptr : NULL);
//                TEST_NATIVE_OBJECT(cx, arg2);
//                last = 3;
//            }
//        }
//        CrossApp::CAMenuItemSprite* ret = CrossApp::CAMenuItemSprite::create(arg0, arg1, arg2);
//        if (argc >= 3) { 
//            if (thirdArgIsCallback) {
//                //cc.MenuItemSprite.create( normalSprite, selectedSprite, callback_fn, [this] )
//                jsCallback = args.get(last++);
//                if (argc == 4) {
//                    jsThis = args.get(last);
//                }
//            }
//            else { 
//                //cc.MenuItemSprite.create( normalSprite, selectedSprite, disabledSprite, callback_fn, [this] )
//                if (argc >= 4) {
//                    jsCallback = args.get(last++);
//                    if (argc == 5) {
//                        jsThis = args.get(last);
//                    }
//                }
//            }
//        }
//
//        JSObject *obj = bind_menu_item<CrossApp::CAMenuItemSprite>(cx, ret, jsCallback, jsThis);
//
//        args.rval().set(OBJECT_TO_JSVAL(obj));
//        return true;
//    }
//    JS_ReportError(cx, "Invalid number of arguments. Expecting: 2 <= args <= 5");
//    return false;
//}

// "create" in JS:
// cc.MenuItemLabel.create( label, callback_fn, [this] );
//bool js_cocos2dx_CCMenuItemLabel_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1 && argc <= 3) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        js_proxy_t *proxy;
//        JSObject *tmpObj = args.get(0).toObjectOrNull();
//        proxy = jsb_get_js_proxy(tmpObj);
//        CrossApp::CANode* arg0 = (CrossApp::CANode*)(proxy ? proxy->ptr : NULL);
//        TEST_NATIVE_OBJECT(cx, arg0)
//        CrossApp::CAMenuItemLabel* ret = CrossApp::CAMenuItemLabel::create(arg0);
//        JSObject *obj = bind_menu_item<CrossApp::CAMenuItemLabel>(cx, ret, (argc >= 2 ? args.get(1) : JSVAL_VOID), (argc == 3 ? args.get(2) : JSVAL_VOID) );
//        args.rval().set(OBJECT_TO_JSVAL(obj));
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d or %d or %d", argc, 1, 2, 3);
//    return false;
//}

//bool js_cocos2dx_CCMenuItemAtlasFont_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 5) {
//        bool ok = true;
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        JSStringWrapper arg0(args.get(0));
//        JSStringWrapper arg1(args.get(1));
//        int arg2; ok &= jsval_to_int32(cx, args.get(2), &arg2);
//        int arg3; ok &= jsval_to_int32(cx, args.get(3), &arg3);
//        int arg4; ok &= jsval_to_int32(cx, args.get(4), &arg4);
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        CrossApp::CAMenuItemAtlasFont* ret = CrossApp::CAMenuItemAtlasFont::create(arg0.get(), arg1.get(), arg2, arg3, arg4);
//        JSObject *obj = bind_menu_item<CrossApp::CAMenuItemAtlasFont>(cx, ret, (argc >= 6 ? args.get(5) : JSVAL_VOID), (argc == 7 ? args.get(6) : JSVAL_VOID));
//        args.rval().set(OBJECT_TO_JSVAL(obj));
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

// "create" in JS
// cc.MenuItemFont.create( string, callback_fn, [this] );
//bool js_cocos2dx_CCMenuItemFont_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1 && argc <= 3) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        JSStringWrapper arg0(args.get(0));
//        CrossApp::CAMenuItemFont* ret = CrossApp::CAMenuItemFont::create(arg0.get());
//        JSObject *obj = bind_menu_item<CrossApp::CAMenuItemFont>(cx, ret, (argc >= 2 ? args.get(1) : JSVAL_VOID), (argc == 3 ? args.get(2) : JSVAL_VOID));
//        args.rval().set(OBJECT_TO_JSVAL(obj));
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d or %d or %d", argc, 1, 2, 3);
//    return false;
//}


//bool js_cocos2dx_CCMenuItemToggle_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        CrossApp::CAMenuItemToggle* ret = CrossApp::CAMenuItemToggle::create();
//
//        for (uint32_t i=0; i < argc; i++) {
//            js_proxy_t *proxy;
//            JSObject *tmpObj = args.get(i).toObjectOrNull();
//            proxy = jsb_get_js_proxy(tmpObj);
//            CrossApp::CAMenuItem* item = (CrossApp::CAMenuItem*)(proxy ? proxy->ptr : NULL);
//            TEST_NATIVE_OBJECT(cx, item)
//            ret->addSubItem(item);
//        }
//
//        ret->setSelectedIndex(0);
//        
//        jsval jsret;
//        if (ret) {
//            js_proxy_t *proxy = jsb_get_native_proxy(ret);
//            if (proxy) {
//                jsret = OBJECT_TO_JSVAL(proxy->obj);
//            } else {
//                // create a new js obj of that class
//                proxy = js_get_or_create_proxy<CrossApp::CAMenuItemToggle>(cx, ret);
//                jsret = OBJECT_TO_JSVAL(proxy->obj);
//            }
//        } else {
//            jsret = JSVAL_NULL;
//        }
//        
//        args.rval().set(jsret);
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_cocos2dx_MenuItem_setCallback(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAMenuItem* cobj = (CrossApp::CAMenuItem *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_MenuItem_setCallback : Invalid Native Object");
//    if (argc == 1 || argc == 2) {
//        std::function<void (CrossApp::CACAObject *)> arg0;
//        do {
//		    if(JS_TypeOfValue(cx, args[0]) == JSTYPE_FUNCTION)
//		    {
//                JSObject* thisObj;
//                if (args.get(1).isObject())
//                {
//                    thisObj = args.get(1).toObjectOrNull();
//                }
//                else
//                {
//                    thisObj = JS_THIS_OBJECT(cx, vp);
//                }
//                std::shared_ptr<JSFunctionWrapper> func(new JSFunctionWrapper(cx, thisObj, args[0]));
//		        auto lambda = [=](CrossApp::CACAObject* larg0) -> void {
//		            jsval largv[1];
//                    do {
//                        if (larg0) {
//                            js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CACAObject>(cx, (CrossApp::CACAObject*)larg0);
//                            largv[0] = OBJECT_TO_JSVAL(jsProxy->obj);
//                        } else {
//                            largv[0] = JSVAL_NULL;
//                        }
//                    } while (0);
//                    JS::RootedValue rval(cx);
//		            bool invoke_ok = func->invoke(1, &largv[0], &rval);
//		            if (!invoke_ok && JS_IsExceptionPending(cx)) {
//		                JS_ReportPendingException(cx);
//		            }
//		        };
//		        arg0 = lambda;
//		    }
//		    else
//		    {
//		        arg0 = nullptr;
//		    }
//		} while(0)
//		;
//        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_MenuItem_setCallback : Error processing arguments");
//        cobj->setCallback(arg0);
//        args.rval().setUndefined();
//        return true;
//    }
//
//    JS_ReportError(cx, "js_cocos2dx_MenuItem_setCallback : wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

//bool js_cocos2dx_CCAnimation_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    bool ok = true;
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    if (argc <= 3) {
//        CrossApp::CAAnimation* ret = nullptr;
//        double arg1 = 0.0f;
//        if (argc == 2) {
//            Vector<SpriteFrame*> arg0;
//            if (argc > 0) {
//                ok &= jsval_to_ccvector(cx, args.get(0), &arg0);
//                JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//            }
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(1)), &arg1);
//            JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//            ret = CrossApp::CAAnimation::createWithSpriteFrames(arg0, arg1);
//        } else if (argc == 3) {
//            Vector<AnimationFrame*> arg0;
//            if (argc > 0) {
//                ok &= jsval_to_ccvector(cx, args.get(0), &arg0);
//                JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//            }
//            unsigned int loops;
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(1)), &arg1);
//            ok &= jsval_to_uint32(cx, args.get(2), &loops);
//            JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//            ret = CrossApp::CAAnimation::create(arg0, arg1, loops);
//        } else if (argc == 1) {
//            Vector<SpriteFrame*> arg0;
//            if (argc > 0) {
//                ok &= jsval_to_ccvector(cx, args.get(0), &arg0);
//                JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//            }
//            ret = CrossApp::CAAnimation::createWithSpriteFrames(arg0);
//        } else if (argc == 0) {
//            ret = CrossApp::CAAnimation::create();
//        }
//        jsval jsret;
//        if (ret) {
//            js_proxy_t *proxy = jsb_get_native_proxy(ret);
//            if (proxy) {
//                jsret = OBJECT_TO_JSVAL(proxy->obj);
//            } else {
//                // create a new js obj of that class
//                proxy = js_get_or_create_proxy<CrossApp::CAAnimation>(cx, ret);
//                jsret = OBJECT_TO_JSVAL(proxy->obj);
//            }
//        } else {
//            jsret = JSVAL_NULL;
//        }
//        args.rval().set(jsret);
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_cocos2dx_CCScene_init(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JSObject *obj = args.thisv().toObjectOrNull();
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Scene_init : Invalid Native Object");
//    if (argc == 0) {
//        bool ret = cobj->init();
//        jsval jsret = JSVAL_NULL;
//        jsret = BOOLEAN_TO_JSVAL(ret);
//        args.rval().set(jsret);
//        return true;
//    }
//    
//    JS_ReportError(cx, "js_cocos2dx_Scene_init : wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}

//bool js_cocos2dx_CCLayerMultiplex_create(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    Vector<Layer*> arg0;
//    bool ok = true;
//    ok &= jsvals_variadic_to_ccvector(cx, args, &arg0);
//    JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//    
//    CrossApp::CALayerMultiplex* ret = CrossApp::CALayerMultiplex::createWithArray(arg0);
//    jsval jsret;
//    do {
//        if (ret) {
//            js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CALayerMultiplex>(cx, ret);
//            jsret = OBJECT_TO_JSVAL(proxy->obj);
//        } else {
//            jsret = JSVAL_NULL;
//        }
//    } while (0);
//    args.rval().set(jsret);
//    return true;
//}

bool js_cocos2dx_JSTouchDelegate_registerStandardDelegate(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc == 1 || argc == 2)
    {
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);

        JSTouchDelegate *touch = new JSTouchDelegate();
        
        int priority = 1;
        if (argc == 2)
        {
            priority = args.get(1).toInt32();
        }
        
        touch->registerStandardDelegate(priority);
        
        JS::RootedObject jsobj(cx, args.get(0).toObjectOrNull());
        touch->setJSObject(jsobj);
        JSTouchDelegate::setDelegateForJSObject(jsobj, touch);
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_JSTouchDelegate_registerTargetedDelegate(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc == 3)
    {
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);

        JSTouchDelegate *touch = new JSTouchDelegate();
        touch->registerTargetedDelegate(args.get(0).toInt32(), args.get(1).toBoolean());
        
        JS::RootedObject jsobj(cx, args.get(2).toObjectOrNull());
        touch->setJSObject(jsobj);
        JSTouchDelegate::setDelegateForJSObject(jsobj, touch);

        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}

bool js_cocos2dx_JSTouchDelegate_unregisterTouchDelegate(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc == 1) {
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
        JSObject* jsobj = args.get(0).toObjectOrNull();
        JSTouchDelegate* pDelegate = JSTouchDelegate::getDelegateForJSObject(jsobj);
        if (pDelegate)
        {
            pDelegate->unregisterTouchDelegate();
            JSTouchDelegate::removeDelegateForJSObject(jsobj);
        }
        
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

JSObject* getObjectFromNamespace(JSContext* cx, JS::HandleObject ns, const char *name) {
    JS::RootedValue out(cx);
    bool ok = true;
    if (JS_GetProperty(cx, ns, name, &out) == true) {
        JS::RootedObject obj(cx);
        ok &= JS_ValueToObject(cx, out, &obj);
        JSB_PRECONDITION2(ok, cx, NULL, "Error processing arguments");
    }
    return NULL;
}

jsval anonEvaluate(JSContext *cx, JS::HandleObject thisObj, const char* string) {
    JS::RootedValue out(cx);
    //JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET
    if (JS_EvaluateScript(cx, thisObj, string, (unsigned int)strlen(string), "(string)", 1, &out) == true) {
        return out.get();
    }
    return JSVAL_VOID;
}

JSCallbackWrapper::JSCallbackWrapper()
{
    JSContext* cx = ScriptingCore::getInstance()->getGlobalContext();
    _jsCallback.construct(cx, JS::NullHandleValue);
    _jsThisObj.construct(cx, JS::NullHandleValue);
    _extraData.construct(cx, JS::NullHandleValue);
}

JSCallbackWrapper::~JSCallbackWrapper()
{
    _jsCallback.destroyIfConstructed();
    _jsThisObj.destroyIfConstructed();
    _extraData.destroyIfConstructed();
}

void JSCallbackWrapper::setJSCallbackFunc(JS::HandleValue func) {
    if (!func.isNullOrUndefined())
        _jsCallback.ref() = func;
}

void JSCallbackWrapper::setJSCallbackThis(JS::HandleValue thisObj) {
    if (!thisObj.isNullOrUndefined())
        _jsThisObj.ref() = thisObj;
}

void JSCallbackWrapper::setJSExtraData(JS::HandleValue data) {
    if (!data.isNullOrUndefined())
        _extraData.ref() = data;
}

const jsval JSCallbackWrapper::getJSCallbackFunc() const
{
    return _jsCallback.ref().get();
}

const jsval JSCallbackWrapper::getJSCallbackThis() const
{
    return _jsThisObj.ref().get();
}

const jsval JSCallbackWrapper::getJSExtraData() const
{
    return _extraData.ref().get();
}

// cc.CallFunc.create( func, this, [data])
// cc.CallFunc.create( func )
//static bool js_callFunc(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1 && argc <= 3) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//
//        std::shared_ptr<JSCallbackWrapper> tmpCobj(new JSCallbackWrapper());
//        
//        JS::RootedValue callback(cx, args.get(0));
//        tmpCobj->setJSCallbackFunc(callback);
//        if(argc >= 2) {
//            JS::RootedValue thisObj(cx, args.get(1));
//            tmpCobj->setJSCallbackThis(thisObj);
//        }
//        if(argc >= 3) {
//            JS::RootedValue data(cx, args.get(2));
//            tmpCobj->setJSExtraData(data);
//        }
//        
//        CCCallFunc *ret = CCCallFunc::create([=](Node* sender){
//            JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET
//            
//            JS::RootedValue jsvalThis(cx, tmpCobj->getJSCallbackThis());
//            JS::RootedObject thisObj(cx, jsvalThis.toObjectOrNull());
//            JS::RootedValue jsvalCallback(cx, tmpCobj->getJSCallbackFunc());
//            JS::RootedValue jsvalExtraData(cx, tmpCobj->getJSExtraData());
//            
//            JS::RootedValue senderVal(cx);
//            if (sender)
//            {
//                js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CANode>(cx, sender);
//                senderVal.set(OBJECT_TO_JSVAL(proxy->obj));
//            }
//            else
//            {
//                senderVal.set(JS::NullValue());
//            }
//            
//            if (!jsvalCallback.isNullOrUndefined())
//            {
//                JS::RootedValue retval(cx);
//                
//                jsval valArr[2];
//                valArr[0] = senderVal;
//                valArr[1] = jsvalExtraData;
//
//                JS::HandleValueArray callArgs = JS::HandleValueArray::fromMarkedLocation(2, valArr);
//                JS_CallFunctionValue(cx, thisObj, jsvalCallback, callArgs, &retval);
//            }
//        });
//        
//        js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CACallFunc>(cx, ret);
//        args.rval().set(OBJECT_TO_JSVAL(proxy->obj));
//        
//        return true;
//    }
//    JS_ReportError(cx, "Invalid number of arguments");
//    return false;
//}

// callFunc.initWithFunction( func, this, [data])
// callFunc.initWithFunction( func )
//bool js_cocos2dx_CallFunc_initWithFunction(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1 && argc <= 3) {
//        JSObject *obj = JS_THIS_OBJECT(cx, vp);
//        js_proxy_t *proxy = jsb_get_js_proxy(obj);
//        CallFuncN *action = (CrossApp::CACallFuncN *)(proxy ? proxy->ptr : NULL);
//        JSB_PRECONDITION2(action, cx, false, "Invalid Native Object");
//        
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//
//        std::shared_ptr<JSCallbackWrapper> tmpCobj(new JSCallbackWrapper());
//    
//        JS::RootedValue callback(cx, args.get(0));
//        tmpCobj->setJSCallbackFunc(callback);
//        if(argc >= 2) {
//            JS::RootedValue thisObj(cx, args.get(1));
//            tmpCobj->setJSCallbackThis(thisObj);
//        }
//        if(argc >= 3) {
//            JS::RootedValue data(cx, args.get(2));
//            tmpCobj->setJSExtraData(data);
//        }
//        
//        action->initWithFunction([=](Node* sender){
//            JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET
//            
//            JS::RootedValue jsvalThis(cx, tmpCobj->getJSCallbackThis());
//            JS::RootedObject thisObj(cx, jsvalThis.toObjectOrNull());
//            JS::RootedValue jsvalCallback(cx, tmpCobj->getJSCallbackFunc());
//            JS::RootedValue jsvalExtraData(cx, tmpCobj->getJSExtraData());
//            
//            JS::RootedValue senderVal(cx);
//            if (sender)
//            {
//                js_proxy_t *senderProxy = js_get_or_create_proxy<CrossApp::CANode>(cx, sender);
//                senderVal.set(OBJECT_TO_JSVAL(senderProxy->obj));
//            }
//            else
//            {
//                senderVal.set(JS::NullValue());
//            }
//            
//            if (!jsvalCallback.isNullOrUndefined())
//            {
//                JS::RootedValue retval(cx);
//                
//                jsval valArr[2];
//                valArr[0] = senderVal;
//                valArr[1] = jsvalExtraData;
//                
//                JS::HandleValueArray callArgs = JS::HandleValueArray::fromMarkedLocation(2, valArr);
//                JS_CallFunctionValue(cx, thisObj, jsvalCallback, callArgs, &retval);
//            }
//        });
//        return true;
//    }
//    JS_ReportError(cx, "Invalid number of arguments");
//    return false;
//}

JSScheduleWrapper::JSScheduleWrapper()
: _pTarget(NULL)
, _priority(0)
, _isUpdateSchedule(false)
{
    JSContext* cx = ScriptingCore::getInstance()->getGlobalContext();
    _pPureJSTarget.construct(cx);
}

JSScheduleWrapper::~JSScheduleWrapper()
{
    _pPureJSTarget.destroyIfConstructed();
}

void JSScheduleWrapper::setTargetForSchedule(JS::HandleValue sched, JSScheduleWrapper *target) {
    do {
        JSObject* jsfunc = sched.toObjectOrNull();
        auto targetArray = getTargetForSchedule(sched);
        if (NULL == targetArray) {
            targetArray = new CAVector<CrossApp::CAObject*>();
            targetArray->init();
            schedFunc_proxy_t *p = (schedFunc_proxy_t *)malloc(sizeof(schedFunc_proxy_t));
            assert(p);
            p->jsfuncObj = jsfunc;
            p->targets = targetArray;
            HASH_ADD_PTR(_schedFunc_target_ht, jsfuncObj, p);
        }

//**没有这个判断  CCASSERT(!targetArray->containsObject(target), "The target was already added.");

        targetArray->pushBack(target);
    } while(0);
}

CAVector<CrossApp::CAObject*> * JSScheduleWrapper::getTargetForSchedule(JS::HandleValue sched) {
    schedFunc_proxy_t *t = NULL;
    JSObject *o = sched.toObjectOrNull();
    HASH_FIND_PTR(_schedFunc_target_ht, &o, t);
    return t != NULL ? t->targets : NULL;
}


void JSScheduleWrapper::setTargetForJSObject(JS::HandleObject jsTargetObj, JSScheduleWrapper *target)
{
    auto targetArray = getTargetForJSObject(jsTargetObj);
    if (NULL == targetArray) {
        targetArray = new CAVector<CrossApp::CAObject*>();
        targetArray->init();
        schedTarget_proxy_t *p = (schedTarget_proxy_t *)malloc(sizeof(schedTarget_proxy_t));
        assert(p);
        p->jsTargetObj = jsTargetObj;
        p->targets = targetArray;
        HASH_ADD_PTR(_schedObj_target_ht, jsTargetObj, p);
    }
    
//    CCASSERT(!targetArray->containsObject(target), "The target was already added.");
    targetArray->pushBack(target);
}

CAVector<CrossApp::CAObject*> * JSScheduleWrapper::getTargetForJSObject(JS::HandleObject jsTargetObj)
{
    schedTarget_proxy_t *t = NULL;
    HASH_FIND_PTR(_schedObj_target_ht, &jsTargetObj.get(), t);
    return t != NULL ? t->targets : NULL;
}

void JSScheduleWrapper::removeAllTargets()
{
    CCLOGINFO("removeAllTargets begin");
    dump();
    
    {
        schedFunc_proxy_t *current, *tmp;
        HASH_ITER(hh, _schedFunc_target_ht, current, tmp) {
            current->targets->clear();
            current->targets->release();
            HASH_DEL(_schedFunc_target_ht, current);
            free(current);
        }
    }
    
    {
        schedTarget_proxy_t *current, *tmp;
        HASH_ITER(hh, _schedObj_target_ht, current, tmp) {
            current->targets->clear();
            current->targets->release();
            HASH_DEL(_schedObj_target_ht, current);
            free(current);
        }
    }
    
    dump();
    CCLOGINFO("removeAllTargets end");
}

void JSScheduleWrapper::removeAllTargetsForMinPriority(int minPriority)
{
    CCLOGINFO("removeAllTargetsForPriority begin");
    dump();
    
    {
        schedFunc_proxy_t *current, *tmp;
        HASH_ITER(hh, _schedFunc_target_ht, current, tmp) {
            std::vector<CAObject*> objectsNeedToBeReleased;
            auto targets = current->targets;
//            CAObject* pObj = NULL;
//            CCARRAY_FOREACH(targets, pObj)
//            {
//                JSScheduleWrapper* wrapper = static_cast<JSScheduleWrapper*>(pObj);
//                bool isUpdateSchedule = wrapper->isUpdateSchedule();
//                if (!isUpdateSchedule || (isUpdateSchedule && wrapper->getPriority() >= minPriority))
//                {
//                    objectsNeedToBeReleased.push_back(pObj);
//                }
//            }
            for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
                JSScheduleWrapper* wrapper = static_cast<JSScheduleWrapper*>(*it);
                bool isUpdateSchedule = wrapper->isUpdateSchedule();
                if (!isUpdateSchedule || (isUpdateSchedule && wrapper->getPriority() >= minPriority))
                {
                    objectsNeedToBeReleased.push_back(*it);
                }
            }

            
            std::vector<CAObject*>::iterator iter = objectsNeedToBeReleased.begin();
            for (; iter != objectsNeedToBeReleased.end(); ++iter)
            {
                targets->eraseObject(*iter, true);
            }
            
            if (targets->size() == 0)
            {
                HASH_DEL(_schedFunc_target_ht, current);
                targets->release();
                free(current);
            }
        }
    }
    
    {
        schedTarget_proxy_t *current, *tmp;
        HASH_ITER(hh, _schedObj_target_ht, current, tmp) {
            std::vector<CAObject*> objectsNeedToBeReleased;
            auto targets = current->targets;
//            CAObject* pObj = NULL;
//            CCARRAY_FOREACH(targets, pObj)
//            {
//                JSScheduleWrapper* wrapper = static_cast<JSScheduleWrapper*>(pObj);
//                bool isUpdateSchedule = wrapper->isUpdateSchedule();
//                if (!isUpdateSchedule || (isUpdateSchedule && wrapper->getPriority() >= minPriority))
//                {
//                    CCLOG("isUpdateSchedule2:%d", isUpdateSchedule);
//                    objectsNeedToBeReleased.push_back(pObj);
//                }
//            }
            for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();)
            {
                JSScheduleWrapper* wrapper = static_cast<JSScheduleWrapper*>(*it);
                bool isUpdateSchedule = wrapper->isUpdateSchedule();
                if (!isUpdateSchedule || (isUpdateSchedule && wrapper->getPriority() >= minPriority))
                {
                    CCLOG("isUpdateSchedule2:%d", isUpdateSchedule);
                    objectsNeedToBeReleased.push_back(*it);
                }
            }
            
            auto iter = objectsNeedToBeReleased.begin();
            for (; iter != objectsNeedToBeReleased.end(); ++iter)
            {
                targets->eraseObject(*iter, true);
            }
            
            if (targets->size() == 0)
            {
                HASH_DEL(_schedObj_target_ht, current);
                targets->release();
                free(current);
            }
        }
    }
    
    dump();
    CCLOGINFO("removeAllTargetsForPriority end");
}

void JSScheduleWrapper::removeAllTargetsForJSObject(JS::HandleObject jsTargetObj)
{
    CCLOGINFO("removeAllTargetsForNatiaveNode begin");
    dump();
    CrossApp::CAVector<CAObject*>* removeNativeTargets = NULL;
    schedTarget_proxy_t *t = NULL;
    HASH_FIND_PTR(_schedObj_target_ht, &jsTargetObj.get(), t);
    if (t != NULL) {
        removeNativeTargets = t->targets;
        HASH_DEL(_schedObj_target_ht, t);
    }

    if (removeNativeTargets == NULL) return;

    schedFunc_proxy_t *current, *tmp;
    HASH_ITER(hh, _schedFunc_target_ht, current, tmp) {
        std::vector<CAObject*> objectsNeedToBeReleased;
        auto targets = current->targets;
        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(targets, pObj)
//        {
//            if (removeNativeTargets->containsObject(pObj))
//            {
//                objectsNeedToBeReleased.push_back(pObj);
//            }
//        }
        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
            if (removeNativeTargets->contains(pObj))
            {
                objectsNeedToBeReleased.push_back(pObj);
            }
        }
        
        auto iter = objectsNeedToBeReleased.begin();
        for (; iter != objectsNeedToBeReleased.end(); ++iter)
        {
            targets->eraseObject(*iter, true);
        }

        if (targets->size() == 0)
        {
            HASH_DEL(_schedFunc_target_ht, current);
            targets->release();
            free(current);
        }  
    }

    removeNativeTargets->clear();
    removeNativeTargets->release();
    free(t);
    dump();
    CCLOGINFO("removeAllTargetsForNatiaveNode end");
}

void JSScheduleWrapper::removeTargetForJSObject(JS::HandleObject jsTargetObj, JSScheduleWrapper* target)
{
    CCLOGINFO("removeTargetForJSObject begin");
    dump();
    schedTarget_proxy_t *t = NULL;
    HASH_FIND_PTR(_schedObj_target_ht, &jsTargetObj.get(), t);
    if (t != NULL) {
        t->targets->eraseObject(target);
        if (t->targets->size() == 0)
        {
            t->targets->release();
            HASH_DEL(_schedObj_target_ht, t);
            free(t);
        }
    }

    schedFunc_proxy_t *current, *tmp, *removed=NULL;

    HASH_ITER(hh, _schedFunc_target_ht, current, tmp) {
        auto targets = current->targets;
        CAObject* pObj = NULL;
        
//        CCARRAY_FOREACH(targets, pObj)
//        {
//            JSScheduleWrapper* pOneTarget = static_cast<JSScheduleWrapper*>(pObj);
//            if (pOneTarget == target)
//            {
//                removed = current;
//                break;
//            }
//        }
        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
            JSScheduleWrapper* pOneTarget = static_cast<JSScheduleWrapper*>(pObj);
            if (pOneTarget == target)
            {
                removed = current;
                break;
            }
        }
        if (removed) break;
    }

    if (removed)
    {
        removed->targets->eraseObject(target);
        if (removed->targets->size() == 0)
        {
            removed->targets->release();
            HASH_DEL(_schedFunc_target_ht, removed);
            free(removed);
        }  
    }
    dump();
    CCLOGINFO("removeTargetForJSObject end");
}

void JSScheduleWrapper::dump()
{
#if COCOS2D_DEBUG > 1
    CCLOG("\n---------JSScheduleWrapper dump begin--------------\n");
    CCLOG("target hash count = %d, func hash count = %d", HASH_COUNT(_schedObj_target_ht), HASH_COUNT(_schedFunc_target_ht));
    schedTarget_proxy_t *current, *tmp;
    int nativeTargetsCount = 0;
    HASH_ITER(hh, _schedObj_target_ht, current, tmp) {
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(current->targets, pObj)
//        {
//            CCLOG("js target ( %p ), native target[%d]=( %p )", current->jsTargetObj, nativeTargetsCount, pObj);
//            nativeTargetsCount++;
//        }
        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
            CCLOG("js target ( %p ), native target[%d]=( %p )", current->jsTargetObj, nativeTargetsCount, pObj);
            nativeTargetsCount++;
        }
    }

    CCLOG("\n-----------------------------\n");

    schedFunc_proxy_t *current_func, *tmp_func;
    int jsfuncTargetCount = 0;
    HASH_ITER(hh, _schedFunc_target_ht, current_func, tmp_func) {
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(current_func->targets, pObj)
//        {
//            CCLOG("js func ( %p ), native target[%d]=( %p )", current_func->jsfuncObj, jsfuncTargetCount, pObj);
//            jsfuncTargetCount++;
//        }
        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
            CCLOG("js func ( %p ), native target[%d]=( %p )", current_func->jsfuncObj, jsfuncTargetCount, *it);
            jsfuncTargetCount++;
        }
    }
    CCASSERT(nativeTargetsCount == jsfuncTargetCount, "nativeTargetsCount should be equal to jsfuncTargetCount.");
    CCLOG("\n---------JSScheduleWrapper dump end--------------\n");
#endif
}

void JSScheduleWrapper::scheduleFunc(float dt)
{
    jsval data = DOUBLE_TO_JSVAL(dt);

    JSContext *cx = ScriptingCore::getInstance()->getGlobalContext();
    
    JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET

    JS::RootedValue callback(cx, getJSCallbackFunc());
    if(!callback.isNullOrUndefined()) {
        JS::HandleValueArray args = JS::HandleValueArray::fromMarkedLocation(1, &data);
        JS::RootedValue retval(cx);
        JS::RootedObject callbackTarget(cx, getJSCallbackThis().toObjectOrNull());
        JS_CallFunctionValue(cx, callbackTarget, callback, args, &retval);
    }
}

void JSScheduleWrapper::update(float dt)
{
    jsval data = DOUBLE_TO_JSVAL(dt);
    
    ScriptingCore::getInstance()->executeFunctionWithOwner(getJSCallbackThis(), "update", 1, &data);
}

CAObject* JSScheduleWrapper::getTarget()
{
    return _pTarget;
}

void JSScheduleWrapper::setTarget(CAObject* pTarget)
{
    _pTarget = pTarget;
}

void JSScheduleWrapper::setPureJSTarget(JS::HandleObject pPureJSTarget)
{
    _pPureJSTarget.ref() = pPureJSTarget;
}

JSObject* JSScheduleWrapper::getPureJSTarget()
{
    return _pPureJSTarget.ref().get();
}

void JSScheduleWrapper::setPriority(int priority)
{
    _priority = priority;
}

int  JSScheduleWrapper::getPriority()
{
    return _priority;
}

void JSScheduleWrapper::setUpdateSchedule(bool isUpdateSchedule)
{
    _isUpdateSchedule = isUpdateSchedule;
}

bool JSScheduleWrapper::isUpdateSchedule()
{
    return _isUpdateSchedule;
}

//bool js_CCNode_unschedule(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc == 1) {
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        
//        JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//        js_proxy_t *proxy = jsb_get_js_proxy(obj);
//        CrossApp::CAView *node = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//        JSB_PRECONDITION2(node, cx, false, "Invalid Native Object");
//        
//        CAScheduler *sched = node->getScheduler();
//        
//        auto targetArray = JSScheduleWrapper::getTargetForSchedule(args.get(0));
//        CCLOGINFO("unschedule target number: %d", targetArray->count());
////        CAObject* tmp = NULL;
////        CCARRAY_FOREACH(targetArray, tmp)
////        {
////            JSScheduleWrapper* target = static_cast<JSScheduleWrapper*>(tmp);
////            if (node == target->getTarget())
////            {
////                sched->unschedule(schedule_selector(JSScheduleWrapper::scheduleFunc), target);
////                JSScheduleWrapper::removeTargetForJSObject(obj, target);
////                break;
////            }
////        }
//        
//        for (CrossApp::CAVector<CAObject*>::iterator it = targetArray->begin(); it != targetArray->end();) {
//            JSScheduleWrapper* target = static_cast<JSScheduleWrapper*>(*it);
//            if (node == target->getTarget())
//            {
//                sched->unschedule(schedule_selector(JSScheduleWrapper::scheduleFunc), target);
//                JSScheduleWrapper::removeTargetForJSObject(obj, target);
//                break;
//            }
//        }
//        args.rval().setUndefined();
//    }
//    return true;
//}

//bool js_cocos2dx_CCNode_unscheduleAllSelectors(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    TEST_NATIVE_OBJECT(cx, cobj)
//    
//    if (argc == 0)
//    {
//        cobj->unscheduleAllCallbacks();
//
//        __Array *arr = JSScheduleWrapper::getTargetForJSObject(obj);
//        // If there aren't any targets, just return true.
//        // Otherwise, the for loop will break immediately. 
//        // It will lead to logic errors. 
//        // For details to reproduce it, please CAObjecter to SchedulerTest/SchedulerUpdate.
//        if(! arr) return true;
//        JSScheduleWrapper* wrapper = NULL;
//        for(ssize_t i = 0; i < arr->count(); ++i) {
//            wrapper = (JSScheduleWrapper*)arr->getObjectAtIndex(i);
//            if(wrapper) {
//                cobj->getScheduler()->unscheduleAllForTarget(wrapper);
//            }
//        }
//        
//        JSScheduleWrapper::removeAllTargetsForJSObject(obj);
//        
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}

//bool js_CCNode_scheduleOnce(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1) {
//        bool ok = true;
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        
//        JS::RootedValue thisValue(cx, args.thisv());
//        JS::RootedObject obj(cx, thisValue.toObjectOrNull());
//        js_proxy_t *proxy = jsb_get_js_proxy(obj);
//        CrossApp::CANode *node = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//        
//        Scheduler *sched = node->getScheduler();
//        
//        JSScheduleWrapper *tmpCobj = NULL;
//
//        //
//        // delay
//        //
//        double delay;
//        if( argc >= 2 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(1)), &delay );
//            JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        }
//        
//        bool bFound = false;
//        auto pTargetArr = JSScheduleWrapper::getTargetForJSObject(obj);
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(pTargetArr, pObj)
//        {
//            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(pObj);
//            if (args.get(0) == pTarget->getJSCallbackFunc())
//            {
//                tmpCobj = pTarget;
//                bFound = true;
//                break;
//            }
//        }
//        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
//        }
//
//        if (!bFound)
//        {
//            tmpCobj = new JSScheduleWrapper();
//            tmpCobj->autorelease();
//            tmpCobj->setJSCallbackThis(thisValue);
//            tmpCobj->setJSCallbackFunc(args.get(0));
//            tmpCobj->setTarget(node);
//
//            JSScheduleWrapper::setTargetForSchedule(args.get(0), tmpCobj);
//            JSScheduleWrapper::setTargetForJSObject(obj, tmpCobj);
//        }
//
//        if(argc == 1) {
//            sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCobj, 0, 0, 0.0f, !node->isRunning());
//        } else {
//            sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCobj, 0, 0, delay, !node->isRunning());
//        }
//
//        /* We shouldn't set the js callback function to reserved slot,
//           since the target object may execute more than one schedule.
//           TheCAObjectore, previous js callback function will be replaced 
//           by the current one. For example:
//              this.scheduleOnce(function() { temporary function 1 }, 0.5);
//              this.scheduleOnce(function() { temporary function 2 }, 0.5);
//           In this case, the temporary function 1 will be removed from reserved slot 0.
//           And temporary function 2 will be set to reserved slot 0 of this object.
//           If gc is triggered before the 'JSScheduleWrapper::scheduleFunc' is invoked, 
//           crash will happen. You could simply reproduce it by adding '__jsc__.garbageCollect();' after scheduleOnce.
//           
//           [Solution] Because one schedule corresponds to one JSScheduleWrapper, we root 
//           the js callback function in JSScheduleWrapper::setJSCallbackFunc and unroot it 
//           at the destructor of JSScheduleWrapper.
//        */
//        //jsb_set_reserved_slot(proxy->obj, 0, args.get(0));
//
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_CCNode_schedule(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 1) {
//        bool ok = true;
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        
//        JS::RootedValue thisValue(cx, args.thisv());
//        JS::RootedObject obj(cx, thisValue.toObjectOrNull());
//        js_proxy_t *proxy = jsb_get_js_proxy(obj);
//        CrossApp::CANode *node = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//        Scheduler *sched = node->getScheduler();
//
//        JSScheduleWrapper *tmpCobj = NULL;
//
//        double interval = 0.0;
//        if( argc >= 2 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(1)), &interval );
//        }
//        
//        //
//        // repeat
//        //
//        double repeat = 0.0;
//        if( argc >= 3 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(2)), &repeat );
//        }
//        
//        //
//        // delay
//        //
//        double delay = 0.0;
//        if( argc >= 4 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(3)), &delay );
//        }
//        
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        bool bFound = false;
//        auto pTargetArr = JSScheduleWrapper::getTargetForJSObject(obj);
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(pTargetArr, pObj)
//        {
//            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(pObj);
//            if (args.get(0) == pTarget->getJSCallbackFunc())
//            {
//                tmpCobj = pTarget;
//                bFound = true;
//                break;
//            }
//        }
//        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
//        }
//
//        if (!bFound)
//        {
//            tmpCobj = new JSScheduleWrapper();
//            tmpCobj->autorelease();
//            tmpCobj->setJSCallbackThis(thisValue);
//            tmpCobj->setJSCallbackFunc(args.get(0));
//            tmpCobj->setTarget(node);
//            JSScheduleWrapper::setTargetForSchedule(args.get(0), tmpCobj);
//            JSScheduleWrapper::setTargetForJSObject(obj, tmpCobj);
//        }
//        
//        if(argc == 1) {
//            sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCobj, 0, !node->isRunning());
//        }else if(argc == 2) {
//            sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCobj, interval, !node->isRunning());
//        }else if(argc == 3) {
//            sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCobj, interval, (unsigned int)repeat, 0, !node->isRunning());
//        }else if (argc == 4) {
//            sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCobj, interval, (unsigned int)repeat, delay, !node->isRunning());
//        }
//        
//        // I comment next line with the same reason in the js_CCNode_scheduleOnce.
//        //jsb_set_reserved_slot(proxy->obj, 0, args.get(0));
//
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_cocos2dx_CCNode_scheduleUpdateWithPriority(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JS::RootedValue thisValue(cx, args.thisv());
//    JS::RootedObject obj(cx, thisValue.toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
//    if (argc == 1) {
//        int arg0 = 0;
//        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        bool isFoundUpdate = false;
//        ok = JS_HasProperty(cx, obj, "update", &isFoundUpdate);
//        JS::RootedValue jsUpdateFunc(cx);
//        if (ok && isFoundUpdate) {
//            ok = JS_GetProperty(cx, obj, "update", &jsUpdateFunc);
//        }
//        
//        // if no 'update' property, return true directly.
//        if (!ok) {
//            args.rval().setUndefined();
//            return true;
//        }
//        
//        JSScheduleWrapper* tmpCobj = NULL;
//        
//        bool bFound = false;
//        auto pTargetArr = JSScheduleWrapper::getTargetForJSObject(obj);
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(pTargetArr, pObj)
//        {
//            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(pObj);
//            if (jsUpdateFunc == pTarget->getJSCallbackFunc())
//            {
//                tmpCobj = pTarget;
//                bFound = true;
//                break;
//            }
//        }
//        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
//        }
//        
//        if (!bFound)
//        {
//            tmpCobj = new JSScheduleWrapper();
//            tmpCobj->autorelease();
//            tmpCobj->setJSCallbackThis(thisValue);
//            tmpCobj->setJSCallbackFunc(jsUpdateFunc);
//            tmpCobj->setTarget(cobj);
//            tmpCobj->setUpdateSchedule(true);
//            JSScheduleWrapper::setTargetForSchedule(jsUpdateFunc, tmpCobj);
//            JSScheduleWrapper::setTargetForJSObject(obj, tmpCobj);
//        }
//        
//        tmpCobj->setPriority(arg0);
//        cobj->getScheduler()->scheduleUpdate(tmpCobj, arg0, !cobj->isRunning());
//        
//        args.rval().setUndefined();
//        return true;
//    }
//    
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

//bool js_cocos2dx_CCNode_unscheduleUpdate(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    TEST_NATIVE_OBJECT(cx, cobj)
//    
//    if (argc == 0)
//    {
//        cobj->unscheduleUpdate();
//        do {
//            __Array *arr = JSScheduleWrapper::getTargetForJSObject(obj);
//            // If there aren't any targets, just return true.
//            // Otherwise, the for loop will break immediately.
//            // It will lead to logic errors.
//            // For details to reproduce it, please CAObjecter to SchedulerTest/SchedulerUpdate.
//            if(! arr) return true;
//            
//            JSScheduleWrapper* wrapper = NULL;
//            for(ssize_t i = 0; i < arr->count(); ++i) {
//                wrapper = (JSScheduleWrapper*)arr->getObjectAtIndex(i);
//                if(wrapper && wrapper->isUpdateSchedule()) {
//                    cobj->getScheduler()->unscheduleUpdate(wrapper);
//                    CCASSERT(OBJECT_TO_JSVAL(obj) == wrapper->getJSCallbackThis(), "Wrong target object.");
//                    JSScheduleWrapper::removeTargetForJSObject(obj, wrapper);
//                    break;
//                }
//            }
//        } while (0);
//        
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}

//bool js_cocos2dx_CCNode_scheduleUpdate(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JS::RootedValue thisValue(cx, args.thisv());
//    JS::RootedObject obj(cx, thisValue.toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
//    if (argc == 0) {
//        
//        bool isFoundUpdate = false;
//        ok = JS_HasProperty(cx, obj, "update", &isFoundUpdate);
//        JS::RootedValue jsUpdateFunc(cx);
//        if (ok && isFoundUpdate) {
//            ok = JS_GetProperty(cx, obj, "update", &jsUpdateFunc);
//        }
//        
//        // if no 'update' property, return true directly.
//        if (!ok) {
//            args.rval().setUndefined();
//            return true;
//        }
//        
//        JSScheduleWrapper* tmpCobj = NULL;
//        
//        bool bFound = false;
//        auto pTargetArr = JSScheduleWrapper::getTargetForJSObject(obj);
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(pTargetArr, pObj)
//        {
//            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(pObj);
//            if (jsUpdateFunc == pTarget->getJSCallbackFunc())
//            {
//                tmpCobj = pTarget;
//                bFound = true;
//                break;
//            }
//        }
//        for (CrossApp::CAVector<CAObject*>::iterator it = targets->begin(); it != targets->end();) {
//        }
//        
//        if (!bFound)
//        {
//            tmpCobj = new JSScheduleWrapper();
//            tmpCobj->autorelease();
//            tmpCobj->setJSCallbackThis(thisValue);
//            tmpCobj->setJSCallbackFunc(jsUpdateFunc);
//            tmpCobj->setTarget(cobj);
//            tmpCobj->setUpdateSchedule(true);
//            JSScheduleWrapper::setTargetForSchedule(jsUpdateFunc, tmpCobj);
//            JSScheduleWrapper::setTargetForJSObject(obj, tmpCobj);
//        }
//        
//        cobj->getScheduler()->scheduleUpdate(tmpCobj, 0, !cobj->isRunning());
//        
//        args.rval().setUndefined();
//        return true;
//    }
//    
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

bool js_cocos2dx_CCScheduler_unscheduleAllSelectorsForTarget(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScheduler* cobj = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj)
    
    if (argc == 1) {
        do {
            JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
            
            CrossApp::CAVector<CAObject*> *arr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
            // If there aren't any targets, just return true.
            // Otherwise, the for loop will break immediately.
            // It will lead to logic errors.
            // For details to reproduce it, please CAObjecter to SchedulerTest/SchedulerUpdate.
            if(! arr) return true;
            
            JSScheduleWrapper* wrapper = NULL;
            for(ssize_t i = 0; i < arr->size(); ++i) {
                wrapper = (JSScheduleWrapper*)arr->at(i);
                if(wrapper) {
                    cobj->unscheduleAllForTarget(wrapper);
                }
            }
            JSScheduleWrapper::removeAllTargetsForJSObject(tmpObj);
            
        } while (0);
        
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_CCScheduler_scheduleUpdateForTarget(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc >= 1) {
        bool ok = true;
        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
        
        JSObject *obj = JS_THIS_OBJECT(cx, vp);
        js_proxy_t *proxy = jsb_get_js_proxy(obj);
        CrossApp::CAScheduler *sched = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
        
        JSScheduleWrapper *tmpCObj = NULL;
        
        JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
        proxy = jsb_get_js_proxy(tmpObj);
        bool isPureJSTarget = proxy ? false : true;
        
        bool isFoundUpdate = false;
        ok = JS_HasProperty(cx, tmpObj, "update", &isFoundUpdate);
        JS::RootedValue jsUpdateFunc(cx);
        if (ok && isFoundUpdate) {
            ok = JS_GetProperty(cx, tmpObj, "update", &jsUpdateFunc);
        }
        
        // if no 'update' property, return true directly.
        if (!ok) {
            args.rval().setUndefined();
            return true;
        }
        
        int arg1 = 0;
        if (argc >= 2) {
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
        }

        bool paused = false;
        
        if( argc >= 3 ) {
            paused = JS::ToBoolean(JS::RootedValue(cx, args.get(2)));
        }
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        bool bFound = false;
        auto pTargetArr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
//        CAObject* pObj = NULL;
//        CCARRAY_FOREACH(pTargetArr, pObj)
//        {
//            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(pObj);
//            if (jsUpdateFunc == pTarget->getJSCallbackFunc())
//            {
//                tmpCObj = pTarget;
//                bFound = true;
//                break;
//            }
//        }
        for (CrossApp::CAVector<CAObject*>::iterator it = pTargetArr->begin(); it != pTargetArr->end();)
        {
            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(*it);
            if (jsUpdateFunc == pTarget->getJSCallbackFunc())
            {
                tmpCObj = pTarget;
                bFound = true;
                break;
            }
        }
        if (!bFound)
        {
            tmpCObj = new JSScheduleWrapper();
            tmpCObj->autorelease();
            tmpCObj->setJSCallbackThis(args.get(0));
            tmpCObj->setJSCallbackFunc(jsUpdateFunc);
            tmpCObj->setUpdateSchedule(true);
            if (isPureJSTarget) {
                tmpCObj->setPureJSTarget(tmpObj);
            }
            
            JSScheduleWrapper::setTargetForSchedule(jsUpdateFunc, tmpCObj);
            JSScheduleWrapper::setTargetForJSObject(tmpObj, tmpCObj);
        }
        tmpCObj->setPriority(arg1);
//        sched->scheduleUpdate(tmpCObj, arg1, paused); ***
        
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments");
    return false;
}

bool js_CCScheduler_unscheduleUpdateForTarget(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScheduler* cobj = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj)
    
    if (argc == 1) {
        do {
            JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
            
            CAVector<CAObject*> *arr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
            // If there aren't any targets, just return true.
            // Otherwise, the for loop will break immediately.
            // It will lead to logic errors.
            // For details to reproduce it, please CAObjecter to SchedulerTest/SchedulerUpdate.
            if(! arr) return true;
            
            JSScheduleWrapper* wrapper = NULL;
            for(ssize_t i = 0; i < arr->size(); ++i) {
                wrapper = (JSScheduleWrapper*)arr->at(i);
                if(wrapper && wrapper->isUpdateSchedule()) {
//                    cobj->unscheduleUpdate(wrapper); **
                    CCAssert(args.get(0) == wrapper->getJSCallbackThis(), "Wrong target object.");
                    JSScheduleWrapper::removeTargetForJSObject(tmpObj, wrapper);
                    break;
                }
            }
        } while (0);
        
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

//bool js_CCScheduler_scheduleCallbackForTarget(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 2) {
//        bool ok = true;
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        
//        JS::RootedObject obj(cx);
//        obj = args.thisv().toObjectOrNull();
//        js_proxy_t *proxy = jsb_get_js_proxy(obj);
//        CrossApp::CAScheduler *sched = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
//        
//        JSScheduleWrapper *tmpCObj = NULL;
//        
//        JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
//        proxy = jsb_get_js_proxy(tmpObj);
//        bool isPureJSTarget = proxy ? false : true;
//        
//        double interval = 0;
//        if( argc >= 3 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(2)), &interval );
//        }
//        
//        //
//        // repeat
//        //
//        double repeat = kRepeatForever;
//        if( argc >= 4 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(3)), &repeat );
//        }
//        
//        //
//        // delay
//        //
//        double delay = 0;
//        if( argc >= 5 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(4)), &delay );
//        }
//        
//        bool paused = false;
//        
//        if( argc >= 6 ) {
//            paused = JS::ToBoolean(JS::RootedValue(cx,  args.get(5)));
//        }
//        
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        bool bFound = false;
//        auto pTargetArr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
////        CAObject* pObj = NULL;
////        CCARRAY_FOREACH(pTargetArr, pObj)
////        {
////            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(pObj);
////            if (args.get(1) == pTarget->getJSCallbackFunc())
////            {
////                tmpCObj = pTarget;
////                bFound = true;
////                break;
////            }
////        }
//        for (CrossApp::CAVector<CAObject*>::iterator it = pTargetArr->begin(); it != pTargetArr->end();) {
//            JSScheduleWrapper* pTarget = static_cast<JSScheduleWrapper*>(*it);
//            if (args.get(1) == pTarget->getJSCallbackFunc())
//            {
//                tmpCObj = pTarget;
//                bFound = true;
//                break;
//            }
//        }
//        if (!bFound)
//        {
//            tmpCObj = new JSScheduleWrapper();
//            tmpCObj->autorelease();
//            tmpCObj->setJSCallbackThis(args.get(0));
//            tmpCObj->setJSCallbackFunc(args.get(1));
//            if (isPureJSTarget) {
//                tmpCObj->setPureJSTarget(tmpObj);
//            }
//            
//            JSScheduleWrapper::setTargetForSchedule(args.get(1), tmpCObj);
//            JSScheduleWrapper::setTargetForJSObject(tmpObj, tmpCObj);
//        }
//        
//        sched->schedule(schedule_selector(JSScheduleWrapper::scheduleFunc), tmpCObj, interval, repeat, delay, paused);
//        
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_CCScheduler_schedule(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    if (argc >= 2) {
//        bool ok = true;
//        JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//        
//        JS::RootedObject obj(cx);
//        obj = args.thisv().toObjectOrNull();
//        js_proxy_t *proxy = jsb_get_js_proxy(obj);
//        CrossApp::CAScheduler *sched = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
//        
//        std::function<void (float)> callback;
//        JS::RootedObject targetObj(cx);
//        do {
//            JS::RootedValue callbackVal(cx);
//            if (JS_TypeOfValue(cx, args.get(0)) == JSTYPE_FUNCTION)
//            {
//                callbackVal.set(args.get(0));
//                targetObj.set(args.get(1).toObjectOrNull());
//            }
//            else if (JS_TypeOfValue(cx, args.get(1)) == JSTYPE_FUNCTION)
//            {
//                targetObj.set(args.get(0).toObjectOrNull());
//                callbackVal.set(args.get(1));
//            }
//            else
//            {
//                ok = false;
//                callback = nullptr;
//                break;
//            }
//            
//            std::shared_ptr<JSFunctionWrapper> func(new JSFunctionWrapper(cx, targetObj, callbackVal));
//            auto lambda = [=](float larg0) -> void {
//                JSB_AUTOCOMPARTMENT_WITH_GLOBAL_OBJCET
//                jsval largv[1];
//                largv[0] = DOUBLE_TO_JSVAL(larg0);
//                JS::RootedValue rval(cx);
//                bool invokeOk = func->invoke(1, &largv[0], &rval);
//                if (!invokeOk && JS_IsExceptionPending(cx)) {
//                    JS_ReportPendingException(cx);
//                }
//            };
//            callback = lambda;
//        } while(0);
//        
//        double interval = 0;
//        if( argc >= 3 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(2)), &interval );
//        }
//        
//        //
//        // repeat
//        //
//        double repeat = kRepeatForever;
//        if( argc >= 4 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(3)), &repeat );
//        }
//        
//        //
//        // delay
//        //
//        double delay = 0;
//        if( argc >= 5 ) {
//            ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(4)), &delay );
//        }
//        
//        //
//        // paused
//        //
//        bool paused = false;
//        if( argc >= 6 ) {
//            paused = JS::ToBoolean(JS::RootedValue(cx,  args.get(5)));
//        }
//        
//        //
//        // key
//        //
//        std::string key;
//        if ( argc >= 7 ) {
//            jsval_to_std_string(cx, args.get(6), &key);
//        }
//        
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        sched->schedule(callback, targetObj, interval, repeat, delay, paused, key);
//                
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments");
//    return false;
//}

//bool js_CCScheduler_unscheduleCallbackForTarget(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAScheduler* cobj = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
//    TEST_NATIVE_OBJECT(cx, cobj)
//    
//    if (argc == 2) {
//        do {
//            if (args.get(0).isString()) {
//                std::string key;
//                bool ok = jsval_to_std_string(cx, args.get(0), &key);
//                JSB_PRECONDITION2(ok, cx, false, "Error processing argument: key");
//                
//                JS::RootedObject tmpObj(cx, args.get(1).toObjectOrNull());
//                cobj->unschedule(key, tmpObj);
//            }
//            else {
//                JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
//                
//                CrossApp::CAVector<CAObject*> *arr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
//                // If there aren't any targets, just return true.
//                // Otherwise, the for loop will break immediately.
//                // It will lead to logic errors.
//                // For details to reproduce it, please CAObjecter to SchedulerTest/SchedulerUpdate.
//                if(! arr) return true;
//                
//                JSScheduleWrapper* wrapper = NULL;
//                for(ssize_t i = 0; i < arr->size(); ++i) {
//                    wrapper = (JSScheduleWrapper*)arr->at(i);
//                    if(wrapper && wrapper->getJSCallbackFunc() == args.get(1)) {
//                        cobj->unschedule(schedule_selector(JSScheduleWrapper::scheduleFunc), wrapper);
//                        JSScheduleWrapper::removeTargetForJSObject(tmpObj, wrapper);
//                        break;
//                    }
//                }
//            }
//        } while (0);
//        
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

bool js_cocos2dx_CCScheduler_unscheduleAll(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScheduler* cobj = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    if (argc == 0) {
        cobj->unscheduleAll();
        JSScheduleWrapper::removeAllTargets();
        args.rval().setUndefined();
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

//bool js_cocos2dx_CCScheduler_unscheduleAllCallbacksWithMinPriority(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAScheduler* cobj = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
//    if (argc == 1) {
//        int arg0;
//        ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        cobj->unscheduleAllWithMinPriority(arg0);
//        JSScheduleWrapper::removeAllTargetsForMinPriority(arg0);
//        args.rval().setUndefined();
//        return true;
//    }
//    
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}


bool js_cocos2dx_CCScheduler_pauseTarget(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScheduler *sched = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
    
    if (argc == 1) {
        do {
            JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
            CrossApp::CAVector<CAObject*> *arr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
            if(! arr) return true;
            for(ssize_t i = 0; i < arr->size(); ++i) {
                if(arr->at(i)) {
                    sched->pauseTarget(arr->at(i));
                }
            }

        } while (0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_CCScheduler_resumeTarget(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScheduler *sched = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
    
    if (argc == 1) {
        do {
            JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
            auto arr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
            if(! arr) return true;
            for(ssize_t i = 0; i < arr->size(); ++i) {
                if(arr->at(i)) {
                    sched->resumeTarget(arr->at(i));
                }
            }
            
        } while (0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_CCScheduler_isTargetPaused(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScheduler* cobj = (CrossApp::CAScheduler *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    if (argc == 1) {
        bool ret = false;
        do {
            JS::RootedObject tmpObj(cx, args.get(0).toObjectOrNull());
            CrossApp::CAVector<CAObject*> *arr = JSScheduleWrapper::getTargetForJSObject(tmpObj);
            if(! arr) return true;
            for(ssize_t i = 0; i < arr->size(); ++i) {
                if(arr->at(i)) {
                    ret = cobj->isTargetPaused(arr->at(i)) ? true : false;
                    // break directly since all targets have the same `pause` status.
                    break;
                }
            }
        } while (0);
//        JS_SET_RVAL(cx, vp, BOOLEAN_TO_JSVAL(ret));
        args.rval().set(BOOLEAN_TO_JSVAL(ret));
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_forceGC(JSContext *cx, uint32_t argc, jsval *vp) {
    JSRuntime *rt = JS_GetRuntime(cx);
    JS_GC(rt);
    return true;
}

bool js_cocos2dx_retain(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAObject* cobj = (CrossApp::CAObject *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_retain : Invalid Native Object");
    
    cobj->retain();
    args.rval().setUndefined();
    return true;
}

bool js_cocos2dx_release(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAObject* cobj = (CrossApp::CAObject *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_release : Invalid Native Object");
    
    cobj->release();
    args.rval().setUndefined();
    return true;
}
//**改名CAVIew
//bool js_cocos2dx_Node_onEnter(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_onEnter : Invalid Native Object");
//    
//    ScriptingCore::getInstance()->setCalledFromScript(true);
//    cobj->onEnter();
//    args.rval().setUndefined();
//    return true;
//}
//
//bool js_cocos2dx_Node_onExit(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_onExit : Invalid Native Object");
//    
//    ScriptingCore::getInstance()->setCalledFromScript(true);
//    cobj->onExit();
//    args.rval().setUndefined();
//    return true;
//}
//
//bool js_cocos2dx_Node_onEnterTransitionDidFinish(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_onEnterTransitionDidFinish : Invalid Native Object");
//    
//    ScriptingCore::getInstance()->setCalledFromScript(true);
//    cobj->onEnterTransitionDidFinish();
//    args.rval().setUndefined();
//    return true;
//}
//
//bool js_cocos2dx_Node_onExitTransitionDidStart(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_onExitTransitionDidStart : Invalid Native Object");
//    
//    ScriptingCore::getInstance()->setCalledFromScript(true);
//    cobj->onExitTransitionDidStart();
//    args.rval().setUndefined();
//    return true;
//}
//
//bool js_cocos2dx_Node_cleanup(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_cleanup : Invalid Native Object");
//    
//    ScriptingCore::getInstance()->setCalledFromScript(true);
//    cobj->cleanup();
//    args.rval().setUndefined();
//    return true;
//}
//
//bool js_cocos2dx_CCNode_setPosition(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    bool ok = true;
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAView* cobj = (CrossApp::CAView *)(proxy ? proxy->ptr : NULL);
//    TEST_NATIVE_OBJECT(cx, cobj)
//    
//    if (argc == 1) {
//        CrossApp::DPoint arg0;
//        ok &= jsval_to_dpoint(cx, args.get(0), &arg0);
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        cobj->setPosition(arg0);
//        args.rval().setUndefined();
//        return true;
//    } if (argc == 2) {
//        double x;
//        ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(0)), &x );
//        double y;
//        ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(1)), &y );
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        cobj->setPosition(Point(x,y));
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

//bool js_cocos2dx_CCNode_setContentSize(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    bool ok = true;
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    TEST_NATIVE_OBJECT(cx, cobj)
//    
//    if (argc == 1) {
//        CrossApp::CASize arg0;
//        ok &= jsval_to_ccsize(cx, args.get(0), &arg0);
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        cobj->setContentSize(arg0);
//        args.rval().setUndefined();
//        return true;
//    } if (argc == 2) {
//        double width;
//        ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(0)), &width );
//        double height;
//        ok &= JS::ToNumber(cx, JS::RootedValue(cx, args.get(1)), &height );
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        cobj->setContentSize(Size(width,height));
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

//bool js_cocos2dx_CCNode_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    bool ok = true;
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    TEST_NATIVE_OBJECT(cx, cobj)
//    
//    if (argc == 1) {
//        CrossApp::CAPoint arg0;
//        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        cobj->setAnchorPoint(arg0);
//        args.rval().setUndefined();
//        return true;
//    } if (argc == 2) {
//        double x;
//        ok &= JS::ToNumber(cx, args.get(0), &x );
//        double y;
//        ok &= JS::ToNumber(cx, args.get(1), &y );
//        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
//        
//        cobj->setAnchorPoint(Point(x,y));
//        args.rval().setUndefined();
//        return true;
//    }
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}

//bool js_cocos2dx_CCNode_setColor(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JSObject *obj = JS_THIS_OBJECT(cx, vp);
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_setColor : Invalid Native Object");
//    if (argc == 1) {
//        CrossApp::CAColor3B arg0;
//        ok &= jsval_to_cccolor3b(cx, args.get(0), &arg0);
//        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Node_setColor : Error processing arguments");
//        cobj->setColor(arg0);
//        
////        int32_t alpha;
////		ok &= jsval_cccolor_to_opacity(cx, args.get(0), &alpha);
////        if (ok) {
////            cobj->setOpacity(alpha);
////        }
//        args.rval().setUndefined();
//		return true;
//	}
//    
//    JS_ReportError(cx, "js_cocos2dx_Node_setColor : wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}
//
//bool js_cocos2dx_CCNode_pause(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_pause : Invalid Native Object");
//    if (argc == 0) {
//        do {
////            JSObject *tmpObj = obj;
//
//            __Array *arr = JSScheduleWrapper::getTargetForJSObject(obj);
//            if(arr){
//                JSScheduleWrapper* wrapper = NULL;
//                for(ssize_t i = 0; i < arr->count(); ++i) {
//                    wrapper = (JSScheduleWrapper*)arr->getObjectAtIndex(i);
//                    if(wrapper) {
//                        cobj->getScheduler()->pauseTarget(wrapper);
//                    }
//                }
//            }
//        } while (0);
//
//        cobj->pause();
//        args.rval().setUndefined();
//        return true;
//    }
//
//    JS_ReportError(cx, "js_cocos2dx_Node_pause : wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}

//bool js_cocos2dx_CCNode_resume(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_resume : Invalid Native Object");
//    if (argc == 0) {
//        do {
////            JSObject *tmpObj = obj;
//
//            __Array *arr = JSScheduleWrapper::getTargetForJSObject(obj);
//            if(arr){
//                JSScheduleWrapper* wrapper = NULL;
//                for(ssize_t i = 0; i < arr->count(); ++i) {
//                    wrapper = (JSScheduleWrapper*)arr->getObjectAtIndex(i);
//                    if(wrapper) {
//                        cobj->getScheduler()->resumeTarget(wrapper);
//                    }
//                }
//            }
//        } while (0);
//
//        cobj->resume();
//        args.rval().setUndefined();
//        return true;
//    }
//
//    JS_ReportError(cx, "js_cocos2dx_Node_resume : wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}

//bool js_cocos2dx_CCNode_convertToWorldSpace(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_CCNode_convertToWorldSpace : Invalid Native Object");
//    CrossApp::CAVec2 arg0;
//    if (argc == 1) {
//        ok &= jsval_to_vector2(cx, args.get(0), &arg0);
//        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_CCNode_convertToWorldSpace : Error processing arguments");
//    }
//    else if (argc != 0) {
//        JS_ReportError(cx, "js_cocos2dx_CCNode_convertToWorldSpace : wrong number of arguments: %d, was expecting 0 or 1", argc);
//        return false;
//    }
//    
//    CrossApp::CAVec2 ret = cobj->convertToWorldSpace(arg0);
//    jsval jsret = JSVAL_NULL;
//    jsret = vector2_to_jsval(cx, ret);
//    args.rval().set(jsret);
//    return true;
//}

//bool js_cocos2dx_CCNode_convertToWorldSpaceAR(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    bool ok = true;
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CANode* cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_CCNode_convertToWorldSpaceAR : Invalid Native Object");
//    CrossApp::CAVec2 arg0;
//    if (argc == 1) {
//        ok &= jsval_to_vector2(cx, args.get(0), &arg0);
//        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_CCNode_convertToWorldSpaceAR : Error processing arguments");
//    }
//    else if (argc != 0) {
//        JS_ReportError(cx, "js_cocos2dx_CCNode_convertToWorldSpaceAR : wrong number of arguments: %d, was expecting 0 or 1", argc);
//        return false;
//    }
//    
//    CrossApp::CAVec2 ret = cobj->convertToWorldSpaceAR(arg0);
//    jsval jsret = JSVAL_NULL;
//    jsret = vector2_to_jsval(cx, ret);
//    args.rval().set(jsret);
//    return true;
//}

//bool js_cocos2dx_CCTMXLayer_getTiles(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CATMXLayer* cobj = (CrossApp::CATMXLayer *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
//    if (argc == 0) {
//        uint32_t* ret = cobj->getTiles();
//        Size size = cobj->getLayerSize();
//        int count = size.width * size.height;
//        JSObject* array = JS_NewUint32Array(cx, count);
//        if (NULL == array) {
//            JS_ReportError(cx, "Can't allocate enough memory.");
//            return false;
//        }
//        uint32_t* bufdata = (uint32_t*)JS_GetArrayBufferViewData(array);
//        memcpy(bufdata, ret, count*sizeof(int32_t));
//
//        args.rval().set(OBJECT_TO_JSVAL(array));
//        return true;
//    }
//    
//    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);
//    return false;
//}


// Actions

//bool js_cocos2dx_ActionInterval_repeat(JSContext *cx, uint32_t argc, jsval *vp)
//{
//    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
//    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
//    js_proxy_t *proxy = jsb_get_js_proxy(obj);
//    CrossApp::CAActionInterval* cobj = (CrossApp::CAActionInterval *)(proxy ? proxy->ptr : NULL);
//    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_ActionInterval_repeat : Invalid Native Object");
//
//    if (argc == 1)
//    {
//        double times;
//        if( ! JS::ToNumber(cx, args.get(0), &times) ) {
//            return false;
//        }
//        int timesInt = (int)times;
//        if (timesInt <= 0) {
//            JS_ReportError(cx, "js_cocos2dx_ActionInterval_repeat : Repeat times must be greater than 0");
//        }
//        
//        CrossApp::CARepeat* action = CrossApp::CARepeat::create(cobj, timesInt);
//        // Unbind current proxy binding
//        JS::RemoveObjectRoot(cx, &proxy->obj);
//        jsb_remove_proxy(jsb_get_native_proxy(cobj), proxy);
//        // Rebind js obj with new action
//        js_proxy_t* newProxy = jsb_new_proxy(action, obj);
//        JS::AddNamedObjectRoot(cx, &newProxy->obj, "CrossApp::CARepeat");
//
//        args.rval().set(OBJECT_TO_JSVAL(obj));
//        return true;
//    }
//    
//    JS_ReportError(cx, "js_cocos2dx_ActionInterval_repeat : wrong number of arguments: %d, was expecting %d", argc, 1);
//    return false;
//}
/*
bool js_cocos2dx_ActionInterval_repeatForever(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAActionInterval* cobj = (CrossApp::CAActionInterval *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_ActionInterval_repeatForever : Invalid Native Object");
    
    if (argc == 0) {
        CrossApp::CARepeatForever* action = CrossApp::CARepeatForever::create(cobj);
        // Unbind current proxy binding
        JS::RemoveObjectRoot(cx, &proxy->obj);
        jsb_remove_proxy(jsb_get_native_proxy(cobj), proxy);
        // Rebind js obj with new action
        js_proxy_t* newProxy = jsb_new_proxy(action, obj);
        JS::AddNamedObjectRoot(cx, &newProxy->obj, "CrossApp::CARepeatForever");

        args.rval().set(OBJECT_TO_JSVAL(obj));
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_ActionInterval_repeatForever : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_ActionInterval_speed(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAActionInterval* cobj = (CrossApp::CAActionInterval *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_ActionInterval_speed : Invalid Native Object");

    if (argc == 1)
    {
        double speed;
        if( ! JS::ToNumber(cx, args.get(0), &speed) ) {
            return false;
        }
        if (speed < 0) {
            JS_ReportError(cx, "js_cocos2dx_ActionInterval_speed : Speed must not be negative");
            return false;
        }
        
        CrossApp::CASpeed* action = CrossApp::CASpeed::create(cobj, speed);
        // Unbind current proxy binding
        JS::RemoveObjectRoot(cx, &proxy->obj);
        jsb_remove_proxy(jsb_get_native_proxy(cobj), proxy);
        // Rebind js obj with new action
        js_proxy_t* newProxy = jsb_new_proxy(action, obj);
        JS::AddNamedObjectRoot(cx, &newProxy->obj, "CrossApp::CASpeed");

        args.rval().set(OBJECT_TO_JSVAL(obj));
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_ActionInterval_speed : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

enum ACTION_TAG {
    EASE_IN = 0,
    EASE_OUT,
    EASE_INOUT,
    EASE_EXPONENTIAL_IN,
    EASE_EXPONENTIAL_OUT,
    EASE_EXPONENTIAL_INOUT,
    EASE_SINE_IN,
    EASE_SINE_OUT,
    EASE_SINE_INOUT,
    EASE_ELASTIC_IN,
    EASE_ELASTIC_OUT,
    EASE_ELASTIC_INOUT,
    EASE_BOUNCE_IN,
    EASE_BOUNCE_OUT,
    EASE_BOUNCE_INOUT,
    EASE_BACK_IN,
    EASE_BACK_OUT,
    EASE_BACK_INOUT,
    
    EASE_BEZIER_ACTION,
    EASE_QUADRATIC_IN,
    EASE_QUADRATIC_OUT,
    EASE_QUADRATIC_INOUT,
    EASE_QUARTIC_IN,
    EASE_QUARTIC_OUT,
    EASE_QUARTIC_INOUT,
    EASE_QUINTIC_IN,
    EASE_QUINTIC_OUT,
    EASE_QUINTIC_INOUT,
    EASE_CIRCLE_IN,
    EASE_CIRCLE_OUT,
    EASE_CIRCLE_INOUT,
    EASE_CUBIC_IN,
    EASE_CUBIC_OUT,
    EASE_CUBIC_INOUT
};

bool js_cocos2dx_ActionInterval_easing(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAActionInterval* cobj = (CrossApp::CAActionInterval *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_ActionInterval_easing : Invalid Native Object");
    
    CrossApp::CAActionInterval* currentAction = cobj;
    JS::RootedObject tmp(cx);
    JS::RootedValue jsTag(cx);
    JS::RootedValue jsParam(cx);
    double tag;
    double parameter;

    for (int i = 0; i < argc; i++)
    {
//        jsval vpi = argv[i];
        JS::RootedValue vpi(cx, args.get(i));
        bool ok = vpi.isObject() &&
            JS_ValueToObject(cx, vpi, &tmp) &&
            JS_GetProperty(cx, tmp, "tag", &jsTag) &&
            JS::ToNumber(cx, jsTag, &tag);
        JS_GetProperty(cx, tmp, "param", &jsParam) && JS::ToNumber(cx, jsParam, &parameter);
        bool hasParam = (parameter == parameter);
        if (!ok) continue;

        CrossApp::CAActionEase* action;
        ok = true;
        if (tag == EASE_IN)
        {
            if (!hasParam) ok = false;
            action = CrossApp::CAEaseIn::create(currentAction, parameter);
        }
        else if (tag == EASE_OUT)
        {
            if (!hasParam) ok = false;
            action = CrossApp::CAEaseOut::create(currentAction, parameter);
        }
        else if (tag == EASE_INOUT)
        {
            if (!hasParam) ok = false;
            action = CrossApp::CAEaseInOut::create(currentAction, parameter);
        }
        else if (tag == EASE_EXPONENTIAL_IN)
            action = CrossApp::CAEaseExponentialIn::create(currentAction);
        else if (tag == EASE_EXPONENTIAL_OUT)
            action = CrossApp::CAEaseExponentialOut::create(currentAction);
        else if (tag == EASE_EXPONENTIAL_INOUT)
            action = CrossApp::CAEaseExponentialInOut::create(currentAction);
        else if (tag == EASE_SINE_IN)
            action = CrossApp::CAEaseSineIn::create(currentAction);
        else if (tag == EASE_SINE_OUT)
            action = CrossApp::CAEaseSineOut::create(currentAction);
        else if (tag == EASE_SINE_INOUT)
            action = CrossApp::CAEaseSineInOut::create(currentAction);
        else if (tag == EASE_ELASTIC_IN)
        {
            if (!hasParam) parameter = 0.3;
            action = CrossApp::CAEaseElasticIn::create(currentAction, parameter);
        }
        else if (tag == EASE_ELASTIC_OUT)
        {
            if (!hasParam) parameter = 0.3;
            action = CrossApp::CAEaseElasticOut::create(currentAction, parameter);
        }
        else if (tag == EASE_ELASTIC_INOUT)
        {
            if (!hasParam) parameter = 0.3;
            action = CrossApp::CAEaseElasticInOut::create(currentAction, parameter);
        }
        else if (tag == EASE_BOUNCE_IN)
            action = CrossApp::CAEaseBounceIn::create(currentAction);
        else if (tag == EASE_BOUNCE_OUT)
            action = CrossApp::CAEaseBounceOut::create(currentAction);
        else if (tag == EASE_BOUNCE_INOUT)
            action = CrossApp::CAEaseBounceInOut::create(currentAction);
        else if (tag == EASE_BACK_IN)
            action = CrossApp::CAEaseBackIn::create(currentAction);
        else if (tag == EASE_BACK_OUT)
            action = CrossApp::CAEaseBackOut::create(currentAction);
        else if (tag == EASE_BACK_INOUT)
            action = CrossApp::CAEaseBackInOut::create(currentAction);
        
        else if (tag == EASE_QUADRATIC_IN)
            action = CrossApp::CAEaseQuadraticActionIn::create(currentAction);
        else if (tag == EASE_QUADRATIC_OUT)
            action = CrossApp::CAEaseQuadraticActionOut::create(currentAction);
        else if (tag == EASE_QUADRATIC_INOUT)
            action = CrossApp::CAEaseQuadraticActionInOut::create(currentAction);
        else if (tag == EASE_QUARTIC_IN)
            action = CrossApp::CAEaseQuarticActionIn::create(currentAction);
        else if (tag == EASE_QUARTIC_OUT)
            action = CrossApp::CAEaseQuarticActionOut::create(currentAction);
        else if (tag == EASE_QUARTIC_INOUT)
            action = CrossApp::CAEaseQuarticActionInOut::create(currentAction);
        else if (tag == EASE_QUINTIC_IN)
            action = CrossApp::CAEaseQuinticActionIn::create(currentAction);
        else if (tag == EASE_QUINTIC_OUT)
            action = CrossApp::CAEaseQuinticActionOut::create(currentAction);
        else if (tag == EASE_QUINTIC_INOUT)
            action = CrossApp::CAEaseQuinticActionInOut::create(currentAction);
        else if (tag == EASE_CIRCLE_IN)
            action = CrossApp::CAEaseCircleActionIn::create(currentAction);
        else if (tag == EASE_CIRCLE_OUT)
            action = CrossApp::CAEaseCircleActionOut::create(currentAction);
        else if (tag == EASE_CIRCLE_INOUT)
            action = CrossApp::CAEaseCircleActionInOut::create(currentAction);
        else if (tag == EASE_CUBIC_IN)
            action = CrossApp::CAEaseCubicActionIn::create(currentAction);
        else if (tag == EASE_CUBIC_OUT)
            action = CrossApp::CAEaseCubicActionOut::create(currentAction);
        else if (tag == EASE_CUBIC_INOUT)
            action = CrossApp::CAEaseCubicActionInOut::create(currentAction);
        else if (tag == EASE_BEZIER_ACTION)
        {
            JS::RootedValue jsParam2(cx);
            JS::RootedValue jsParam3(cx);
            JS::RootedValue jsParam4(cx);
            double parameter2, parameter3, parameter4;
            ok &= JS_GetProperty(cx, tmp, "param2", &jsParam2);
            ok &= JS::ToNumber(cx, jsParam2, &parameter2);
            ok &= JS_GetProperty(cx, tmp, "param3", &jsParam3);
            ok &= JS::ToNumber(cx, jsParam3, &parameter3);
            ok &= JS_GetProperty(cx, tmp, "param4", &jsParam4);
            ok &= JS::ToNumber(cx, jsParam4, &parameter4);
            if (!ok) continue;
            
            action = CrossApp::CAEaseBezierAction::create(currentAction);
            ((EaseBezierAction *)action)->setBezierParamer(parameter, parameter2, parameter3, parameter4);
        }
        else
            continue;
        
        if (!ok || !action) {
            JS_ReportError(cx, "js_cocos2dx_ActionInterval_easing : Invalid action: At least one action was expecting parameter");
            return false;
        }
        
        currentAction = action;
    }
    
    // Unbind current proxy binding
    JS::RemoveObjectRoot(cx, &proxy->obj);
    jsb_remove_proxy(jsb_get_native_proxy(cobj), proxy);
    // Rebind js obj with new action
    js_proxy_t* newProxy = jsb_new_proxy(currentAction, obj);
    JS::AddNamedObjectRoot(cx, &newProxy->obj, "CrossApp::CAEaseAction");
    args.rval().set(OBJECT_TO_JSVAL(obj));
    return true;
}


template<class T>
bool js_BezierActions_create(JSContext *cx, uint32_t argc, jsval *vp) {
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);

    if (argc == 2) {
        double t;
        if( ! JS::ToNumber(cx, args.get(0), &t) ) {
            return false;
        }
        
        int num;
        Point *arr;
        jsval_to_ccarray_of_CCPoint(cx, args.get(1), &arr, &num);
        
        ccBezierConfig config;
        config.controlPoint_1 = arr[0];
        config.controlPoint_2 = arr[1];
        config.endPosition = arr[2];
        
        T* ret =  T::create(t, config);
        
        delete [] arr;

        jsval jsret;
        do {
            if (ret) {
                js_proxy_t *p = jsb_get_native_proxy(ret);
                if (p) {
                    jsret = OBJECT_TO_JSVAL(p->obj);
                } else {
                    // create a new js obj of that class
                    js_proxy_t *proxy = js_get_or_create_proxy<T>(cx, ret);
                    jsret = OBJECT_TO_JSVAL(proxy->obj);
                }
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
        
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

template<class T>
bool js_BezierActions_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    T* cobj = (T *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Bezier_initWithDuration : Invalid Native Object");
    if (argc == 2) {
        double arg0;
        CrossApp::CA_ccBezierConfig arg1;
        ok &= JS::ToNumber( cx, JS::RootedValue(cx, args.get(0)), &arg0);

        int num;
        CrossApp::CAVec2 *arr;
        jsval_to_ccarray_of_CCPoint(cx, args.get(1), &arr, &num);

        arg1.controlPoint_1 = arr[0];
        arg1.controlPoint_2 = arr[1];
        arg1.endPosition = arr[2];

        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Bezier_initWithDuration : Error processing arguments");
        bool ret = cobj->initWithDuration(arg0, arg1);
        delete [] arr;
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_BezierTo_initWithDuration : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

template<class T>
bool js_CardinalSplineActions_create(JSContext *cx, uint32_t argc, jsval *vp) {
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    
    if (argc == 3) {
        double dur;
        ok &= JS::ToNumber(cx, args.get(0), &dur);
        
        int num;
        Point *arr;
        ok &= jsval_to_ccarray_of_CCPoint(cx, args.get(1), &arr, &num);
        
        double ten;
        ok &= JS::ToNumber(cx, args.get(2), &ten);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        PointArray *points = PointArray::create(num);
        
        for( int i=0; i < num;i++) {
            points->addControlPoint(arr[i]);
        }
        
        T *ret = T::create(dur, points, ten);
        
        delete [] arr;
        
        jsval jsret;
        do {
            if (ret) {
                js_proxy_t *p = jsb_get_native_proxy(ret);
                if (p) {
                    jsret = OBJECT_TO_JSVAL(p->obj);
                } else {
                    // create a new js obj of that class
                    js_proxy_t *proxy = js_get_or_create_proxy<T>(cx, ret);
                    jsret = OBJECT_TO_JSVAL(proxy->obj);
                }
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
        
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

template<class T>
bool js_CatmullRomActions_create(JSContext *cx, uint32_t argc, jsval *vp) {
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    
    if (argc == 2) {
        double dur;
        ok &= JS::ToNumber(cx, args.get(0), &dur);
        
        int num;
        Point *arr;
        ok &= jsval_to_ccarray_of_CCPoint(cx, args.get(1), &arr, &num);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        PointArray *points = PointArray::create(num);
        
        for( int i=0; i < num;i++) {
            points->addControlPoint(arr[i]);
        }
        
        T *ret = T::create(dur, points);
        
        delete [] arr;
        
        jsval jsret;
        do {
            if (ret) {
                js_proxy_t *p = jsb_get_native_proxy(ret);
                if (p) {
                    jsret = OBJECT_TO_JSVAL(p->obj);
                } else {
                    // create a new js obj of that class
                    js_proxy_t *proxy = js_get_or_create_proxy<T>(cx, ret);
                    jsret = OBJECT_TO_JSVAL(proxy->obj);
                }
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
        
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

template<class T>
bool js_CatmullRomActions_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    T* cobj = (T *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_CatmullRom_initWithDuration : Invalid Native Object");
    if (argc == 2) {
        double arg0;
        ok &= JS::ToNumber( cx, JS::RootedValue(cx, args.get(0)), &arg0);

        int num;
        Point *arr;
        ok &= jsval_to_ccarray_of_CCPoint(cx, args.get(1), &arr, &num);
                
        CrossApp::CAPointArray* arg1 = CrossApp::CAPointArray::create(num);        
        for( int i=0; i < num;i++) {
            arg1->addControlPoint(arr[i]);
        }
               
        
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_CatmullRom_initWithDuration : Error processing arguments");
        bool ret = cobj->initWithDuration(arg0, arg1);
        delete [] arr;
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_CatmullRom_initWithDuration : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}


bool JSB_CCBezierBy_actionWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_BezierActions_create<CrossApp::CABezierBy>(cx, argc, vp);
}

bool JSB_CCBezierTo_actionWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_BezierActions_create<CrossApp::CABezierTo>(cx, argc, vp);
}

bool JSB_CCBezierBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
    return js_BezierActions_initWithDuration<CrossApp::CABezierBy>(cx, argc, vp);
}

bool JSB_CCBezierTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
    return js_BezierActions_initWithDuration<CrossApp::CABezierTo>(cx, argc, vp);
}

bool JSB_CCCardinalSplineBy_actionWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_CardinalSplineActions_create<CrossApp::CACardinalSplineBy>(cx, argc, vp);
}

bool JSB_CCCardinalSplineTo_actionWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_CardinalSplineActions_create<CrossApp::CACardinalSplineTo>(cx, argc, vp);
}

bool js_cocos2dx_CardinalSplineTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CACardinalSplineTo* cobj = (CrossApp::CACardinalSplineTo *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_CardinalSplineTo_initWithDuration : Invalid Native Object");
    if (argc == 3) {
        double arg0;
        
        double arg2;
        ok &= JS::ToNumber( cx, JS::RootedValue(cx, args.get(0)), &arg0);
        
        int num;
        Point *arr;
        ok &= jsval_to_ccarray_of_CCPoint(cx, args.get(1), &arr, &num);
        CrossApp::CAPointArray* arg1 = PointArray::create(num);
        for( int i=0; i < num;i++) {
            arg1->addControlPoint(arr[i]);
        }

        ok &= JS::ToNumber( cx, JS::RootedValue(cx, args.get(2)), &arg2);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_CardinalSplineTo_initWithDuration : Error processing arguments");
        bool ret = cobj->initWithDuration(arg0, arg1, arg2);
        
        delete [] arr;
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_CardinalSplineTo_initWithDuration : wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}

bool JSB_CCCatmullRomBy_actionWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_CatmullRomActions_create<CrossApp::CACatmullRomBy>(cx, argc, vp);
}

bool JSB_CCCatmullRomTo_actionWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_CatmullRomActions_create<CrossApp::CACatmullRomTo>(cx, argc, vp);
}

bool JSB_CatmullRomBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_CatmullRomActions_initWithDuration<CrossApp::CACatmullRomBy>(cx, argc, vp);
}

bool JSB_CatmullRomTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp) {
    return js_CatmullRomActions_initWithDuration<CrossApp::CACatmullRomTo>(cx, argc, vp);
}

bool js_cocos2dx_ccGLEnableVertexAttribs(JSContext *cx, uint32_t argc, jsval *vp)
{
    bool ok = true;
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    
    if (argc == 1) {
        unsigned int arg0;
        ok &= jsval_to_uint32(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        GL::enableVertexAttribs(arg0);
        args.rval().setUndefined();
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}



bool js_cocos2dx_ccpAdd(JSContext *cx, uint32_t argc, jsval *vp)
{
    bool ok = true;
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0 + arg1;
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpDistanceSQ(JSContext *cx, uint32_t argc, jsval *vp)
{
    bool ok = true;
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        float ret = arg0.getDistanceSq(arg1);
        
        jsval jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpDistance(JSContext *cx, uint32_t argc, jsval *vp)
{
    bool ok = true;
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        float ret = arg0.getDistance(arg1);
        
        jsval jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpClamp(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 3) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        CrossApp::CAPoint arg2;
        ok &= jsval_to_ccpoint(cx, args.get(2), &arg2);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0.getClampPoint(arg1, arg2);
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpLengthSQ(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        float ret = arg0.getLengthSq();

        jsval jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;

    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpLength(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        float ret = arg0.getLength();

        jsval jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;

    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpNeg(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = -arg0;
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpSub(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0 - arg1;
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpMult(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        
        double arg1;
        ok &= JS::ToNumber(cx, args.get(1), &arg1);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0 * arg1;
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccpMidpoint(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0.getMidpoint(arg1);
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
        
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}


bool js_cocos2dx_ccpDot(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        float ret = arg0.dot(arg1);
        
        jsval jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
        
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccpCross(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        float ret = arg0.cross(arg1);
        
        jsval jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
        
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccpPerp(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0.getPerp();
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}


bool js_cocos2dx_ccpRPerp(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0.getRPerp();
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
        
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}


bool js_cocos2dx_ccpProject(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0.project(arg1);
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
        
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccpRotate(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 2) {
        CrossApp::CAPoint arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        CrossApp::CAPoint arg1;
        ok &= jsval_to_ccpoint(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        Point ret = arg0.rotate(arg1);
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
        
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccpNormalize(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        CrossApp::CAVec2 ret;
        ok &= jsval_to_vector2(cx, args.get(0), &ret);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        ret.normalize();
        
        jsval jsret = ccpoint_to_jsval(cx, ret);
        args.rval().set(jsret);
        
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccobbGetCorners(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 1)
    {
        CrossApp::CAOBB obb;
        bool ok = jsval_to_obb(cx, args.get(0), &obb);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        CrossApp::CAVec3 verts[8];
        obb.getCorners(verts);

        JS::RootedObject array(cx, JS_NewArrayObject(cx, 8));
        for(int i = 0; i < 8; ++i)
        {
            JS::RootedValue vec(cx, vector3_to_jsval(cx, verts[i]));
            ok &= JS_SetElement(cx, array, i, vec);
            if(!ok)
                break;
        }

        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        args.rval().set(OBJECT_TO_JSVAL(array));
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccobbIntersects(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 2)
    {
        CrossApp::CAOBB obb1, obb2;
        bool ok = jsval_to_obb(cx, args.get(0), &obb1);
        ok &= jsval_to_obb(cx, args.get(1), &obb2);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        bool ret = obb1.intersects(obb2);

        args.rval().set(BOOLEAN_TO_JSVAL(ret));
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccrayIntersectsObb(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 2)
    {
        CrossApp::CARay ray;
        CrossApp::CAOBB obb;

        bool ok = jsval_to_ray(cx, args.get(0), &ray);
        ok &= jsval_to_obb(cx, args.get(1), &obb);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        bool ret = ray.intersects(obb);

        args.rval().set(BOOLEAN_TO_JSVAL(ret));
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccmat4CreateTranslation(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 1)
    {
        CrossApp::CAVec3 arg0;
        bool ok = jsval_to_vector3(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        CrossApp::CAMat4 ret;
        CrossApp::CAMat4::createTranslation(arg0, &ret);
        jsval jsret = matrix_to_jsval(cx, ret);

        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccmat4CreateRotation(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 1)
    {
        CrossApp::CAQuaternion arg0;
        bool ok = jsval_to_quaternion(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        CrossApp::CAMat4 ret;
        CrossApp::CAMat4::createRotation(arg0, &ret);
        jsval jsret = matrix_to_jsval(cx, ret);

        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccmat4Multiply(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 2)
    {
        CrossApp::CAMat4 arg0;
        CrossApp::CAMat4 arg1;
        bool ok = jsval_to_matrix(cx, args.get(0), &arg0);
        ok &= jsval_to_matrix(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        CrossApp::CAMat4 ret = arg0 * arg1;
        jsval jsret = matrix_to_jsval(cx, ret);

        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccmat4MultiplyVec3(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 2)
    {
        CrossApp::CAMat4 arg0;
        CrossApp::CAVec3 arg1;
        bool ok = jsval_to_matrix(cx, args.get(0), &arg0);
        ok &= jsval_to_vector3(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        CrossApp::CAVec3 ret = arg0 * arg1;
        jsval jsret = vector3_to_jsval(cx, ret);

        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_ccmat4GetInversed(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 1)
    {
        CrossApp::CAMat4 arg0;
        bool ok = jsval_to_matrix(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        jsval jsret = matrix_to_jsval(cx, arg0.getInversed());
        
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_ccmat4TransformVector(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc >= 2)
    {
        CrossApp::CAMat4 arg0;
        CrossApp::CAVec4 arg1;
        CrossApp::CAVec4 ret;
        bool ok = jsval_to_matrix(cx, args.get(0), &arg0);
        ok &= jsval_to_vector4(cx, args.get(1), &arg1);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        arg0.transformVector(arg1, &ret);
        jsval jsret = vector4_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    else if (argc >= 5)
    {
        CrossApp::CAMat4 arg0;
        double arg1 = 0.0,arg2 = 0.0,arg3 = 0.0, arg4 = 0.0;
        CrossApp::CAVec3 ret;
        
        bool ok = jsval_to_matrix(cx, args.get(0), &arg0) &&
                  JS::ToNumber(cx, args.get(1), &arg1) &&
                  JS::ToNumber(cx, args.get(2), &arg2) &&
                  JS::ToNumber(cx, args.get(3), &arg3) &&
                  JS::ToNumber(cx, args.get(4), &arg4);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        arg0.transformVector(arg1, arg2, arg3, arg4, &ret);
        jsval jsret = vector3_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}

bool js_cocos2dx_ccmat4TransformPoint(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc >= 2)
    {
        CrossApp::CAMat4 arg0;
        CrossApp::CAVec3 arg1;
        CrossApp::CAVec3 ret;
        bool ok = jsval_to_matrix(cx, args.get(0), &arg0);
        ok &= jsval_to_vector3(cx, args.get(1), &arg1);
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        arg0.transformPoint(arg1, &ret);
        jsval jsret = vector3_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}

bool js_cocos2dx_ccquatMultiply(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if(argc == 2)
    {
        CrossApp::CAQuaternion arg0;
        CrossApp::CAQuaternion arg1;
        bool ok = jsval_to_quaternion(cx, args.get(0), &arg0);
        ok &= jsval_to_quaternion(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        CrossApp::CAQuaternion ret = arg0 * arg1;
        jsval jsret = quaternion_to_jsval(cx, ret);

        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_Sprite_create(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    
    do {
        if (argc == 1) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            CrossApp::CASprite* ret = CrossApp::CASprite::create(arg0);
            jsval jsret = JSVAL_NULL;
            do {
                if (ret) {
                    js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CASprite>(cx, (CrossApp::CASprite*)ret);
                    jsret = OBJECT_TO_JSVAL(jsProxy->obj);
                } else {
                    jsret = JSVAL_NULL;
                }
            } while (0);
            args.rval().set(jsret);
            return true;
        }
    } while (0);
    
    do {
        if (argc == 0) {
            CrossApp::CASprite* ret = CrossApp::CASprite::create();
            jsval jsret = JSVAL_NULL;
            do {
                if (ret) {
                    js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CASprite>(cx, (CrossApp::CASprite*)ret);
                    jsret = OBJECT_TO_JSVAL(jsProxy->obj);
                } else {
                    jsret = JSVAL_NULL;
                }
            } while (0);
            args.rval().set(jsret);
            return true;
        }
    } while (0);
    
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            CrossApp::CARect arg1;
            ok &= jsval_to_ccrect(cx, args.get(1), &arg1);
            if (!ok) { ok = true; break; }
            CrossApp::CASprite* ret = CrossApp::CASprite::create(arg0, arg1);
            jsval jsret = JSVAL_NULL;
            do {
                if (ret) {
                    js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CASprite>(cx, (CrossApp::CASprite*)ret);
                    jsret = OBJECT_TO_JSVAL(jsProxy->obj);
                } else {
                    jsret = JSVAL_NULL;
                }
            } while (0);
            args.rval().set(jsret);
            return true;
        }
    } while (0);
    JS_ReportError(cx, "js_cocos2dx_Sprite_create : wrong number of arguments");
    return false;
}

bool js_cocos2dx_Sprite_initWithPolygon(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CASprite* cobj = (CrossApp::CASprite *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Sprite_initWithPolygon : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAPolygonInfo *arg0;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAPolygonInfo*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Sprite_initWithPolygon : Error processing arguments");
        bool ret = cobj->initWithPolygon(*arg0);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_Sprite_initWithPolygon : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_Sprite_setPolygonInfo(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CASprite* cobj = (CrossApp::CASprite *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Sprite_setPolygonInfo : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAPolygonInfo *arg0;
        do {
            if (args.get(0).isNull()) { arg0 = nullptr; break; }
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAPolygonInfo*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Sprite_setPolygonInfo : Error processing arguments");
        cobj->setPolygonInfo(*arg0);
        args.rval().setUndefined();
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_Sprite_setPolygonInfo : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_Sprite_textureLoaded(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    Sprite* cobj = (Sprite*)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj);
    
    bool ret = false;
    if( cobj->getTexture() )
        ret = true;

    args.rval().set(BOOLEAN_TO_JSVAL(ret));
    return true;
}

bool js_cocos2dx_CCTexture2D_setTexParameters(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    Texture2D* cobj = (Texture2D*)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj)

    if (argc == 4)
    {
        bool ok = true;

        GLuint arg0, arg1, arg2, arg3;

        ok &= jsval_to_uint32(cx, args.get(0), &arg0);
        ok &= jsval_to_uint32(cx, args.get(1), &arg1);
        ok &= jsval_to_uint32(cx, args.get(2), &arg2);
        ok &= jsval_to_uint32(cx, args.get(3), &arg3);

        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        Texture2D::TexParams param = { arg0, arg1, arg2, arg3 };

        cobj->setTexParameters(param);

        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 4);
    return false;       
}

bool js_cocos2dx_CCMenu_alignItemsInRows(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject jsthis(cx, args.thisv().toObjectOrNull());
    bool ok = true;
    js_proxy_t *proxy = jsb_get_js_proxy(jsthis);
    Menu* cobj = (Menu*)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj)

    ValueVector items;
    ok &= jsvals_variadic_to_ccvaluevector(cx, args.array(), argc, &items);
    if (ok)
    {
        cobj->alignItemsInRowsWithArray(items);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "Error in js_cocos2dx_CCMenu_alignItemsInRows");
    return false;
}

bool js_cocos2dx_CCMenu_alignItemsInColumns(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject jsthis(cx, args.thisv().toObjectOrNull());
    bool ok = true;
    js_proxy_t *proxy = jsb_get_js_proxy(jsthis);
    Menu* cobj = (Menu*)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj)


    ValueVector items;
    ok &= jsvals_variadic_to_ccvaluevector(cx, args.array(), argc, &items);
    if (ok)
    {
        cobj->alignItemsInColumnsWithArray(items);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "Error in js_cocos2dx_CCMenu_alignItemsInColumns");
    return false;
}

bool js_cocos2dx_CCLayer_init(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CALayer* cobj = (CrossApp::CALayer *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_CCLayer_init : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->init();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_CCLayer_init : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}


// TMXLayer
bool js_cocos2dx_CCTMXLayer_getTileFlagsAt(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj;
    TMXLayer* cobj;
    obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    cobj = (TMXLayer*)(proxy ? proxy->ptr : NULL);
    TEST_NATIVE_OBJECT(cx, cobj)
    if (argc == 1)
    {
        TMXTileFlags flags;
        Point arg0;
        ok &= jsval_to_ccpoint(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->getTileGIDAt(arg0, &flags);

        args.rval().set(UINT_TO_JSVAL((uint32_t)flags));
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

static bool jsval_to_string_vector(JSContext* cx, jsval v, std::vector<std::string>& ret) {
    JS::RootedObject jsobj(cx);
    bool ok = JS_ValueToObject( cx, JS::RootedValue(cx, v), &jsobj );
    JSB_PRECONDITION2( ok, cx, false, "Error converting value to object");
    JSB_PRECONDITION2( jsobj && JS_IsArrayObject( cx, jsobj),  cx, false, "Object must be an array");
    
    uint32_t len = 0;
    JS_GetArrayLength(cx, jsobj, &len);

    for (uint32_t i=0; i < len; i++) {
        JS::RootedValue elt(cx);
        if (JS_GetElement(cx, jsobj, i, &elt)) {
            
            if (elt.isString())
            {
                JSStringWrapper str(elt.toString());
                ret.push_back(str.get());
            }
        }
    }

    return true;
}


static jsval string_vector_to_jsval(JSContext* cx, const std::vector<std::string>& arr) {
    
    JS::RootedObject jsretArr(cx, JS_NewArrayObject(cx, 0));
    
    int i = 0;
    for(std::vector<std::string>::const_iterator iter = arr.begin(); iter != arr.end(); ++iter, ++i) {
        JS::RootedValue arrElement(cx, std_string_to_jsval(cx, *iter));
        if(!JS_SetElement(cx, jsretArr, i, arrElement)) {
            break;
        }
    }
    return OBJECT_TO_JSVAL(jsretArr);
}

bool js_cocos2dx_CCFileUtils_setSearchResolutionsOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_string_vector(cx, args.get(0), arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->setSearchResolutionsOrder(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_CCFileUtils_setSearchPaths(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    
    if (argc == 1) {
        std::vector<std::string> arg0;
        ok &= jsval_to_string_vector(cx, args.get(0), arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->setSearchPaths(arg0);
        args.rval().setUndefined();
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_cocos2dx_CCFileUtils_getSearchPaths(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    
    if (argc == 0) {
        std::vector<std::string> ret = cobj->getSearchPaths();
        jsval jsret;
        jsret = string_vector_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_CCFileUtils_getDataFromFile(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");

        Data data = cobj->getDataFromFile(arg0);
        do
        {
            if (!data.isNull())
            {
                uint32_t size = static_cast<uint32_t>(data.getSize());
                JSObject* array = JS_NewUint8Array(cx, size);
                if (nullptr == array)
                    break;

                uint8_t* bufdata = (uint8_t*)JS_GetArrayBufferViewData(array);
                memcpy(bufdata, data.getBytes(), size*sizeof(uint8_t));

                args.rval().set(OBJECT_TO_JSVAL(array));
                return true;
            }
        } while(false);
        
        JS_ReportError(cx, "get file(%s) data fails", arg0.c_str());
        return false;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}

bool js_cocos2dx_CCFileUtils_writeDataToFile(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_CCFileUtils_writeDataToFile : Invalid Native Object");
    if (argc == 2) {
        Data arg0;
        std::string arg1;

        // copy bytes from UInit8Array
        JSObject &obj0 = args.get(0).toObject();
        if( JS_IsUint8Array(&obj0) ) {
            uint32_t len = JS_GetArrayBufferViewByteLength(&obj0);
            uint8_t* bufdata = (uint8_t*)JS_GetArrayBufferViewData(&obj0);
            arg0.copy(bufdata, len);
        } else {
            ok = false;
        }
        
        ok &= jsval_to_std_string(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_CCFileUtils_writeDataToFile : Error processing arguments");
        bool ret = cobj->writeDataToFile(arg0, arg1);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_CCFileUtils_writeDataToFile : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

bool js_cocos2dx_CCFileUtils_getSearchResolutionsOrder(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    
    if (argc == 0) {
        std::vector<std::string> ret = cobj->getSearchResolutionsOrder();
        jsval jsret;
        jsret = string_vector_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

static bool js_cocos2dx_FileUtils_createDictionaryWithContentsOfFile(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAFileUtils* cobj = (CrossApp::CAFileUtils *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        CrossApp::CAValueMap ret = FileUtils::getInstance()->getValueMapFromFile(arg0.c_str());
        jsval jsret;
        jsret = ccvaluemap_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_CCGLProgram_setUniformLocationWith4f(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAGLProgram* cobj = (CrossApp::CAGLProgram *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    int arg0;
    double arg1;
    double arg2;
    double arg3;
    double arg4;
    ok &= jsval_to_int32(cx, args.get(0), (int32_t *)&arg0);
    ok &= JS::ToNumber(cx, args.get(1), &arg1);
    
    if(argc == 2) {
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->setUniformLocationWith1f(arg0, arg1);
    }
    if (argc == 3) {
        ok &= JS::ToNumber(cx, args.get(2), &arg2);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->setUniformLocationWith2f(arg0, arg1, arg2);
    }
    if(argc == 4) {
        ok &= JS::ToNumber(cx, args.get(2), &arg2);
        ok &= JS::ToNumber(cx, args.get(3), &arg3);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->setUniformLocationWith3f(arg0, arg1, arg2, arg3);
    }
    if(argc == 5) {
        ok &= JS::ToNumber(cx, args.get(2), &arg2);
        ok &= JS::ToNumber(cx, args.get(3), &arg3);
        ok &= JS::ToNumber(cx, args.get(4), &arg4);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        cobj->setUniformLocationWith4f(arg0, arg1, arg2, arg3, arg4);
    }
    
    args.rval().setUndefined();
    return true;
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 5);
    return false;
}

bool js_cocos2dx_CCGLProgram_setUniformLocationWithMatrixfvUnion(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAGLProgram* cobj = (CrossApp::CAGLProgram *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    
    if (argc == 4) {
        GLint arg0;
        std::vector<float> arg1;
        unsigned int arg2;
        int fvType;
        ok &= jsval_to_int32(cx, args.get(0), (int *)&arg0);
        ok &= jsval_to_std_vector_float(cx, args.get(1), &arg1);
        ok &= jsval_to_uint32(cx, args.get(2), &arg2);
        ok &= jsval_to_int32(cx, args.get(3), (int *)&fvType);
        
        // fvType defined in jsb_cocos2d.js
        switch(fvType)
        {
            case 2:
                cobj->setUniformLocationWithMatrix2fv(arg0, (GLfloat *)&arg1[0], arg2);
                break;
            case 3:
                cobj->setUniformLocationWithMatrix3fv(arg0, (GLfloat *)&arg1[0], arg2);
                break;
            case 4:
                cobj->setUniformLocationWithMatrix4fv(arg0, (GLfloat *)&arg1[0], arg2);
                break;
        }
        
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 4);
    return false;
}

bool js_cocos2dx_CCGLProgram_create(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if(argc != 2) {
        JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
        return false;
    }
    
    const char *arg0, *arg1;
    std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
    std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();

    GLProgram* ret = new GLProgram();
    ret->autorelease();
    
    ret->initWithFilenames(arg0, arg1);
    
    jsval jsret;
    do {
        if (ret) {
            js_proxy_t *p = jsb_get_native_proxy(ret);
            if (p) {
                jsret = OBJECT_TO_JSVAL(p->obj);
            } else {
                // create a new js obj of that class
                js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CAGLProgram>(cx, ret);
                jsret = OBJECT_TO_JSVAL(proxy->obj);
            }
        } else {
            jsret = JSVAL_NULL;
        }
    } while (0);
    args.rval().set(jsret);
    return true;

}


bool js_cocos2dx_CCGLProgram_createWithString(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if(argc != 2) {
        JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 2);
        return false;
    }
    
    const char *arg0, *arg1;
    std::string arg0_tmp; ok &= jsval_to_std_string(cx, args.get(0), &arg0_tmp); arg0 = arg0_tmp.c_str();
    std::string arg1_tmp; ok &= jsval_to_std_string(cx, args.get(1), &arg1_tmp); arg1 = arg1_tmp.c_str();
    
    GLProgram* ret = new GLProgram();
    ret->initWithByteArrays(arg0, arg1);
    
    jsval jsret;
    do {
        if (ret) {
            js_proxy_t *p = jsb_get_native_proxy(ret);
            if (p) {
                jsret = OBJECT_TO_JSVAL(p->obj);
            } else {
                // create a new js obj of that class
                js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CAGLProgram>(cx, ret);
                jsret = OBJECT_TO_JSVAL(proxy->obj);
            }
        } else {
            jsret = JSVAL_NULL;
        }
    } while (0);
    args.rval().set(jsret);
    return true;
    
}

bool js_cocos2dx_CCGLProgram_getProgram(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAGLProgram* cobj = (CrossApp::CAGLProgram *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");
    if (argc == 0) {
        GLuint ret = cobj->getProgram();
        args.rval().set(UINT_TO_JSVAL((uint32_t)ret));
        return true;
    }
    
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_GLProgramState_setVertexAttribPointer(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAGLProgramState* cobj = (CrossApp::CAGLProgramState *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_GLProgramState_setVertexAttribPointer : Invalid Native Object");
    if (argc == 6) {
        std::string arg0;
        int arg1;
        unsigned int arg2;
        uint16_t arg3;
        int arg4;
        long arg5;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
        ok &= jsval_to_uint32(cx, args.get(2), &arg2);
        ok &= jsval_to_uint16(cx, args.get(3), &arg3);
        ok &= jsval_to_int32(cx, args.get(4), (int32_t *)&arg4);
        ok &= jsval_to_long(cx, args.get(5), &arg5);

        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_GLProgramState_setVertexAttribPointer : Error processing arguments");
        cobj->setVertexAttribPointer(arg0, arg1, arg2, arg3, arg4, (GLvoid*)arg5);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_GLProgramState_setVertexAttribPointer : wrong number of arguments: %d, was expecting %d", argc, 6);
    return false;
}

bool js_cocos2dx_GLProgramState_setUniformVec4(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t* proxy = jsb_get_js_proxy(obj);
    CrossApp::CAGLProgramState* cobj = (CrossApp::CAGLProgramState *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_GLProgramState_setUniformVec4 : Invalid Native Object");
    bool ok = true;
    if(argc == 2)
    {
        do {
            if (argc == 2) {
                std::string arg0;
                ok &= jsval_to_std_string(cx, args.get(0), &arg0);
                if (!ok) { ok = true; break; }
                CrossApp::CAVec4 arg1;
                ok &= jsval_to_vector4(cx, args.get(1), &arg1);
                if (!ok) { ok = true; break; }
                cobj->setUniformVec4(arg0, arg1);
                args.rval().setUndefined();
                return true;
            }
        } while(0);

        do {
            if (argc == 2) {
                int arg0;
                ok &= jsval_to_int(cx, args.get(0), &arg0);
                if (!ok) { ok = true; break; }
                CrossApp::CAVec4 arg1;
                ok &= jsval_to_vector4(cx, args.get(1), &arg1);
                if (!ok) { ok = true; break; }
                cobj->setUniformVec4(arg0, arg1);
                args.rval().setUndefined();
                return true;
            }
        } while(0);
    }
    JS_ReportError(cx, "js_cocos2dx_GLProgramState_setUniformVec4 : wrong number of arguments: %d, was expecting %d", argc, 2);
    return false;
}

#define js_cocos2dx_CCCamera_getXYZ(funcName) \
    bool ok = true;                                                                                                  \
    JSObject *obj = JS_THIS_OBJECT(cx, vp);                                                                               \
    js_proxy_t *proxy = jsb_get_js_proxy(obj);                                                                            \
    CrossApp::CACamera* cobj = (CrossApp::CACamera *)(proxy ? proxy->ptr : NULL);                                           \
    JSB_PRECONDITION2( cobj, cx, false, "Invalid Native Object");                                                      \
    if (argc == 0) {                                                                                                      \
        float x;                                                                                                          \
        float y;                                                                                                          \
        float z;                                                                                                          \
        cobj->funcName(&x, &y, &z);                                                                                       \
        JSObject* tmp = JS_NewObject(cx, NULL, NULL, NULL);                                                               \
                                                                                                                          \
        do                                                                                                                \
        {                                                                                                                 \
            if (NULL == tmp) break;                                                                                       \
                                                                                                                          \
            ok = JS_DefineProperty(cx, tmp, "x", DOUBLE_TO_JSVAL(x), NULL, NULL, JSPROP_ENUMERATE | JSPROP_PERMANENT) &&  \
            JS_DefineProperty(cx, tmp, "y", DOUBLE_TO_JSVAL(y), NULL, NULL, JSPROP_ENUMERATE | JSPROP_PERMANENT) &&       \
            JS_DefineProperty(cx, tmp, "z", DOUBLE_TO_JSVAL(z), NULL, NULL, JSPROP_ENUMERATE | JSPROP_PERMANENT);         \
                                                                                                                          \
            if (ok) {                                                                                                     \
                JS_SET_RVAL(cx, vp, OBJECT_TO_JSVAL(tmp));                                                                \
                return true;                                                                                           \
            }                                                                                                             \
        } while (false);                                                                                                  \
                                                                                                                          \
        JS_SET_RVAL(cx, vp, JSVAL_NULL);                                                                                  \
        return true;                                                                                                   \
    }                                                                                                                     \
                                                                                                                          \
    JS_ReportError(cx, "wrong number of arguments: %d, was expecting %d", argc, 0);                                       \
    return false;



bool js_cocos2dx_SpriteBatchNode_getDescendants(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CASpriteBatchNode* cobj = (CrossApp::CASpriteBatchNode *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_SpriteBatchNode_getDescendants : Invalid Native Object");
    if (argc == 0) {
        std::vector<Sprite*> ret = cobj->getDescendants();
        
        JS::RootedObject jsretArr(cx, JS_NewArrayObject(cx, 0));
        size_t vSize = ret.size();
        JS::RootedValue jsret(cx);
        for (size_t i = 0; i < vSize; i++)
        {
            proxy = js_get_or_create_proxy<CrossApp::CASprite>(cx, ret[i]);
            jsret = OBJECT_TO_JSVAL(proxy->obj);
            JS_SetElement(cx, jsretArr, static_cast<uint32_t>(i), jsret);
        }
        args.rval().set(OBJECT_TO_JSVAL(jsretArr));
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_SpriteBatchNode_getDescendants : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

bool js_cocos2dx_NodeGrid_setGrid(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CANodeGrid* cobj = (CrossApp::CANodeGrid *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_NodeGrid_setGrid : Invalid Native Object");
    if (argc == 1) {
        CrossApp::CAGridBase* arg0;
        do {
            if(args.get(0).isNull()) { arg0 = nullptr; break;}
            if (!args.get(0).isObject()) { ok = false; break; }
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            proxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CAGridBase*)(proxy ? proxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_NodeGrid_setGrid : Error processing arguments");
        cobj->setGrid(arg0);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_NodeGrid_setGrid : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

// cc.PlistParser.getInstance()
bool js_PlistParser_getInstance(JSContext *cx, unsigned argc, JS::Value *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    __JSPlistDelegator* delegator = __JSPlistDelegator::getInstance();
    SAXParser* parser = delegator->getParser();
    
    jsval jsret;
    if (parser) {
        js_proxy_t *p = jsb_get_native_proxy(parser);
        if (p) {
            jsret = OBJECT_TO_JSVAL(p->obj);
        } else {
            // create a new js obj of that class
            js_proxy_t *proxy = js_get_or_create_proxy<SAXParser>(cx, parser);
            jsret = OBJECT_TO_JSVAL(proxy->obj);
        }
    } else {
        jsret = JSVAL_NULL;
    }
    args.rval().set(jsret);
    
    return true;
}
// cc.PlistParser.getInstance().parse(text)
bool js_PlistParser_parse(JSContext *cx, unsigned argc, JS::Value *vp) {
    __JSPlistDelegator* delegator = __JSPlistDelegator::getInstance();
    
    bool ok = true;
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "Error processing arguments");
        
        std::string parsedStr = delegator->parseText(arg0);
        std::replace(parsedStr.begin(), parsedStr.end(), '\n', ' ');
        
        jsval strVal = std_string_to_jsval(cx, parsedStr);
        // create a new js obj of the parsed string
        JS::RootedValue outVal(cx);

        //JS_GetStringCharsZ was removed in SpiderMonkey 33
        //ok = JS_ParseJSON(cx, JS_GetStringCharsZ(cx, strVal), static_cast<uint32_t>(JS_GetStringEncodingLength(JSVAL_TO_STRING(strVal))), &outVal);
        ok = JS_ParseJSON(cx, JS::RootedString(cx, strVal.toString()), &outVal);
        
        if (ok)
            args.rval().set(outVal);
        else {
            args.rval().setUndefined();
            JS_ReportError(cx, "js_PlistParser_parse : parse error");
        }
        return true;
    }
    JS_ReportError(cx, "js_PlistParser_parse : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

CrossApp::CASAXParser* __JSPlistDelegator::getParser() {
    return &_parser;
}

std::string __JSPlistDelegator::parse(const std::string& path) {
    _result.clear();
    
    SAXParser parser;
    if (false != parser.init("UTF-8") )
    {
        parser.setDelegator(this);
        parser.parse(FileUtils::getInstance()->fullPathForFilename(path).c_str());
    }
    
    return _result;
}

__JSPlistDelegator::~__JSPlistDelegator(){
    CCLOGINFO("deallocing __JSSAXDelegator: %p", this);
}

std::string __JSPlistDelegator::parseText(const std::string& text){
     _result.clear();
    
    SAXParser parser;
    if (false != parser.init("UTF-8") )
    {
        parser.setDelegator(this);
        parser.parse(text.c_str(), text.size());
    }
    
    return _result;
}

void __JSPlistDelegator::startElement(void *ctx, const char *name, const char **atts) {
    _isStoringCharacters = true;
    _currentValue.clear();
    
    std::string elementName = (char*)name;
    
    int end = (int)_result.size() - 1;
    if(end >= 0 && _result[end] != '{' && _result[end] != '[' && _result[end] != ':') {
        _result += ",";
    }
    
    if (elementName == "dict") {
        _result += "{";
    }
    else if (elementName == "array") {
        _result += "[";
    }
}

void __JSPlistDelegator::endElement(void *ctx, const char *name) {
    _isStoringCharacters = false;
    std::string elementName = (char*)name;
    
    if (elementName == "dict") {
        _result += "}";
    }
    else if (elementName == "array") {
        _result += "]";
    }
    else if (elementName == "key") {
        _result += "\"" + _currentValue + "\":";
    }
    else if (elementName == "string") {
        _result += "\"" + _currentValue + "\"";
    }
    else if (elementName == "false" || elementName == "true") {
        _result += elementName;
    }
    else if (elementName == "real" || elementName == "integer") {
        _result += _currentValue;
    }
}

void __JSPlistDelegator::textHandler(void *ctx, const char *ch, int len) {
    CC_UNUSED_PARAM(ctx);
    std::string text((char*)ch, 0, len);
    
    if (_isStoringCharacters)
    {
        _currentValue += text;
    }
}

bool jsval_to_TTFConfig(JSContext *cx, jsval v, TTFConfig* ret) {
    JS::RootedObject tmp(cx);
    JS::RootedValue js_fontFilePath(cx);
    JS::RootedValue js_fontSize(cx);
    JS::RootedValue js_outlineSize(cx);
    JS::RootedValue js_glyphs(cx);
    JS::RootedValue js_customGlyphs(cx);
    JS::RootedValue js_distanceFieldEnable(cx);

    std::string fontFilePath,customGlyphs;
    double fontSize, glyphs, outlineSize;

    bool ok = v.isObject() &&
        JS_ValueToObject(cx, JS::RootedValue(cx, v), &tmp) &&
        JS_GetProperty(cx, tmp, "fontFilePath", &js_fontFilePath) &&
        JS_GetProperty(cx, tmp, "fontSize", &js_fontSize) &&
        JS_GetProperty(cx, tmp, "outlineSize", &js_outlineSize) &&
        JS_GetProperty(cx, tmp, "glyphs", &js_glyphs) &&
        JS_GetProperty(cx, tmp, "customGlyphs", &js_customGlyphs) &&
        JS_GetProperty(cx, tmp, "distanceFieldEnable", &js_distanceFieldEnable) &&
        JS::ToNumber(cx, js_fontSize, &fontSize) &&
        JS::ToNumber(cx, js_outlineSize, &outlineSize) &&
        JS::ToNumber(cx, js_glyphs, &glyphs) &&
        jsval_to_std_string(cx,js_fontFilePath,&ret->fontFilePath) &&
        jsval_to_std_string(cx,js_customGlyphs,&customGlyphs);
    bool distanceFieldEnable = JS::ToBoolean(js_distanceFieldEnable);

    JSB_PRECONDITION3(ok, cx, false, "Error processing arguments");

    ret->fontSize = (int)fontSize;
    ret->outlineSize = (int)outlineSize;
    ret->glyphs = GlyphCollection((int)glyphs);
    ret->distanceFieldEnabled = distanceFieldEnable;
    if(ret->glyphs == GlyphCollection::CUSTOM && customGlyphs.length() > 0)
        ret->customGlyphs = customGlyphs.c_str();
    else
        ret->customGlyphs = nullptr;

    return true;
}

bool js_cocos2dx_Label_createWithTTF(JSContext *cx, uint32_t argc, jsval *vp)
{
    if (argc < 2)
        return false;

    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;

    TTFConfig ttfConfig("");
    std::string text;

    ok &= jsval_to_TTFConfig(cx, args.get(0), &ttfConfig);
    ok &= jsval_to_std_string(cx, args.get(1), &text);

    CrossApp::CALabel* ret = nullptr;

    if (argc == 2) {
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Label_createWithTTF : Error processing arguments");
        ret = CrossApp::CALabel::createWithTTF(ttfConfig, text);
        jsval jsret = JSVAL_NULL;
        if (ret) {
            js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CALabel>(cx, (CrossApp::CALabel*)ret);
            jsret = OBJECT_TO_JSVAL(proxy->obj);
        }
        args.rval().set(jsret);
        return true;
    }
    if (argc == 3) {
        int arg2;
        ok &= jsval_to_int32(cx, args.get(2), (int32_t *)&arg2);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Label_createWithTTF : Error processing arguments");
        TextHAlignment alignment = TextHAlignment(arg2);
        ret = CrossApp::CALabel::createWithTTF(ttfConfig, text, alignment);
        jsval jsret = JSVAL_NULL;
        if (ret) {
            js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CALabel>(cx, (CrossApp::CALabel*)ret);
            jsret = OBJECT_TO_JSVAL(proxy->obj);
        }
        args.rval().set(jsret);
        return true;
    }
    if (argc == 4) {
        int arg2,arg3;
        ok &= jsval_to_int32(cx, args.get(2), (int32_t *)&arg2);
        ok &= jsval_to_int32(cx, args.get(3), (int32_t *)&arg3);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Label_createWithTTF : Error processing arguments");
        TextHAlignment alignment = TextHAlignment(arg2);
        ret = CrossApp::CALabel::createWithTTF(ttfConfig, text, alignment, arg3);
        jsval jsret = JSVAL_NULL;
        if (ret) {
            js_proxy_t *proxy = js_get_or_create_proxy<CrossApp::CALabel>(cx, (CrossApp::CALabel*)ret);
            jsret = OBJECT_TO_JSVAL(proxy->obj);
        }
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_Label_createWithTTF : wrong number of arguments");
    return false;
}

bool js_cocos2dx_Label_setTTFConfig(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JSObject *obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CALabel* cobj = (CrossApp::CALabel *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Label_setTTFConfig : Invalid Native Object");

    if (argc == 1) {
        TTFConfig ttfConfig("");
        do {
            if (!args.get(0).isObject()) { ok = false; break; }
            ok &= jsval_to_TTFConfig(cx, args.get(0), &ttfConfig);
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Label_setTTFConfig : Error processing arguments");
        cobj->setTTFConfig(ttfConfig);
        args.rval().setUndefined();
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_Label_setTTFConfig : wrong number of arguments");
    return false;
}

bool js_cocos2dx_RenderTexture_saveToFile(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    
    JSObject *obj = NULL;
    CrossApp::CARenderTexture* cobj = NULL;
    obj = JS_THIS_OBJECT(cx, vp);
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    cobj = (CrossApp::CARenderTexture *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_RenderTexture_saveToFile : Invalid Native Object");
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            CrossApp::CAImage::Format arg1;
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            bool ret = cobj->saveToFile(arg0, arg1);
            jsval jsret = JSVAL_NULL;
            jsret = BOOLEAN_TO_JSVAL(ret);
            args.rval().set(jsret);
            return true;
        }
    } while(0);
    
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            CrossApp::CAImage::Format arg1;
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            bool arg2;
            arg2 = JS::ToBoolean(JS::RootedValue(cx, args.get(2)));
            bool ret = cobj->saveToFile(arg0, arg1, arg2);
            jsval jsret = JSVAL_NULL;
            jsret = BOOLEAN_TO_JSVAL(ret);
            args.rval().set(jsret);
            return true;
        }
    } while(0);
    
    do {
        if (argc == 4) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            CrossApp::CAImage::Format arg1;
            ok &= jsval_to_int32(cx, args.get(1), (int32_t *)&arg1);
            if (!ok) { ok = true; break; }
            bool arg2;
            arg2 = JS::ToBoolean(JS::RootedValue(cx, args.get(2)));
            std::function<void (CrossApp::CARenderTexture *, const std::basic_string<char> &)> arg3;
            do {
                std::shared_ptr<JSFunctionWrapper> func(new JSFunctionWrapper(cx, JS_THIS_OBJECT(cx, vp), args.get(3)));
                auto lambda = [=](CrossApp::CARenderTexture* larg0, const std::string& larg1) -> void {
                    jsval largv[2];
                    do {
                        if (larg0) {
                            js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CARenderTexture>(cx, (CrossApp::CARenderTexture*)larg0);
                            largv[0] = OBJECT_TO_JSVAL(jsProxy->obj);
                        } else {
                            largv[0] = JSVAL_NULL;
                        }
                    } while (0);
                    do {
                        largv[1] = std_string_to_jsval(cx, larg1);
                    } while (0);
                    JS::RootedValue rval(cx);
                    bool invokeOk = func->invoke(2, largv, &rval);
                    if (!invokeOk && JS_IsExceptionPending(cx)) {
                        JS_ReportPendingException(cx);
                    }
                };
                arg3 = lambda;
            } while(0)
                ;
            if (!ok) { ok = true; break; }
            bool ret = cobj->saveToFile(arg0, arg1, arg2, arg3);
            jsval jsret = JSVAL_NULL;
            jsret = BOOLEAN_TO_JSVAL(ret);
            args.rval().set(jsret);
            return true;
        }
    } while(0);
    
    do {
        if (argc == 1) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            bool ret = cobj->saveToFile(arg0);
            jsval jsret = JSVAL_NULL;
            jsret = BOOLEAN_TO_JSVAL(ret);
            args.rval().set(jsret);
            return true;
        }
    } while(0);
    
    do {
        if (argc == 2) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            bool arg1;
            arg1 = JS::ToBoolean(JS::RootedValue(cx, args.get(1)));
            bool ret = cobj->saveToFile(arg0, arg1);
            jsval jsret = JSVAL_NULL;
            jsret = BOOLEAN_TO_JSVAL(ret);
            args.rval().set(jsret);
            return true;
        }
    } while(0);
    
    do {
        if (argc == 3) {
            std::string arg0;
            ok &= jsval_to_std_string(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            bool arg1;
            arg1 = JS::ToBoolean(JS::RootedValue(cx, args.get(1)));
            std::function<void (CrossApp::CARenderTexture *, const std::basic_string<char> &)> arg2;
            do {
                std::shared_ptr<JSFunctionWrapper> func(new JSFunctionWrapper(cx, JS_THIS_OBJECT(cx, vp), args.get(2)));
                auto lambda = [=](CrossApp::CARenderTexture* larg0, const std::string& larg1) -> void {
                    jsval largv[2];
                    do {
                        if (larg0) {
                            js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CARenderTexture>(cx, (CrossApp::CARenderTexture*)larg0);
                            largv[0] = OBJECT_TO_JSVAL(jsProxy->obj);
                        } else {
                            largv[0] = JSVAL_NULL;
                        }
                    } while (0);
                    do {
                        largv[1] = std_string_to_jsval(cx, larg1);
                    } while (0);
                    JS::RootedValue rval(cx);
                    bool invokeOk = func->invoke(2, largv, &rval);
                    if (!invokeOk && JS_IsExceptionPending(cx)) {
                        JS_ReportPendingException(cx);
                    }
                };
                arg2 = lambda;
            } while(0)
                ;
            if (!ok) { ok = true; break; }
            bool ret = cobj->saveToFile(arg0, arg1, arg2);
            jsval jsret = JSVAL_NULL;
            jsret = BOOLEAN_TO_JSVAL(ret);
            args.rval().set(jsret);
            return true;
        }
    } while(0);
    
    JS_ReportError(cx, "js_cocos2dx_RenderTexture_saveToFile : wrong number of arguments");
    return false;
}

bool js_cocos2dx_Camera_unproject(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CACamera* cobj = (CrossApp::CACamera *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Camera_unproject : Invalid Native Object");
    if (argc >= 2) {
        CrossApp::CASize arg0;
        CrossApp::CAVec3 arg1;
        CrossApp::CAVec3 ret;
        ok &= jsval_to_ccsize(cx, args.get(0), &arg0);
        ok &= jsval_to_vector3(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Camera_unproject : Error processing arguments");
        cobj->unproject(arg0, &arg1, &ret);
        args.rval().set(vector3_to_jsval(cx, ret));
        return true;
    }
    else if (argc == 1)
    {
        CrossApp::CAVec3 arg0;
        ok &= jsval_to_vector3(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Camera_unproject : Error processing arguments");
        CrossApp::CAVec3 ret = cobj->unproject(arg0);
        args.rval().set(vector3_to_jsval(cx, ret));
        return true;
    }
    JS_ReportError(cx, "js_cocos2dx_Camera_unproject : wrong number of arguments: %d, was expecting %d", argc, 3);
    return false;
}

bool js_cocos2dx_Camera_isVisibleInFrustum(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CACamera* cobj = (CrossApp::CACamera *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Camera_isVisibleInFrustum : Invalid Native Object");
    if (argc == 1) {
         CrossApp::CAVec3  min;
        JS::RootedValue jsmin(cx);
        ok &= JS_GetProperty(cx, JS::RootedObject(cx, args.get(0).toObjectOrNull()), "min", &jsmin);
        ok &= jsval_to_vector3(cx, jsmin, &min);

        CrossApp::CAVec3 max;
        JS::RootedValue jsmax(cx);
        ok &= JS_GetProperty(cx, JS::RootedObject(cx, args.get(0).toObjectOrNull()), "max", &jsmax);
        ok &= jsval_to_vector3(cx, jsmax, &max);

        CrossApp::CAAABB aabb(min, max);

        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Camera_isVisibleInFrustum : Error processing arguments");
        bool ret = cobj->isVisibleInFrustum(&aabb);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }

    JS_ReportError(cx, "js_cocos2dx_Camera_isVisibleInFrustum : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

bool js_cocos2dx_Node_setAdditionalTransform(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;

    JS::RootedObject obj(cx);
    CrossApp::CANode* cobj = NULL;
    obj = args.thisv().toObjectOrNull();
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    cobj = (CrossApp::CANode *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Node_setAdditionalTransform : Invalid Native Object");

    do {
        if (argc == 1) {
            CrossApp::CAMat4 arg0;
            ok &= jsval_to_matrix(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            cobj->setAdditionalTransform(&arg0);
            args.rval().setUndefined();
            return true;
        }
    } while(0);

    do {
        if (argc == 1) {
            CrossApp::CAAffineTransform arg0;
            ok &= jsval_to_ccaffinetransform(cx, args.get(0), &arg0);
            if (!ok) { ok = true; break; }
            cobj->setAdditionalTransform(arg0);
            args.rval().setUndefined();
            return true;
        }
    } while(0);

    JS_ReportError(cx, "js_cocos2dx_Node_setAdditionalTransform : wrong number of arguments");
    return false;
}

bool js_cocos2dx_ClippingNode_init(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAClippingNode* cobj = (CrossApp::CAClippingNode *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_ClippingNode_init : Invalid Native Object");
    if (argc == 0) {
        bool ret = cobj->init();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    if (argc == 1) {
        CrossApp::CANode* arg0;
        do {
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CANode*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_ClippingNode_init : Error processing arguments");
        bool ret = cobj->init(arg0);
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_ClippingNode_init : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}

// EventKeyboard class bindings, need manual bind for transform key codes

JSClass  *jsb_cocos2d_EventKeyboard_class;
JSObject *jsb_cocos2d_EventKeyboard_prototype;

bool js_cocos2dx_EventKeyboard_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    
    CrossApp::CAEventKeyboard::KeyCode arg0;
    ScriptingCore *core = ScriptingCore::getInstance();
    JS::RootedValue retVal(cx);
    core->executeFunctionWithOwner(OBJECT_TO_JSVAL(core->getGlobalObject()), "parseKeyCode", args, &retVal);
    ok &= jsval_to_int32(cx, retVal, (int32_t *)&arg0);
    
    bool arg1;
    arg1 = JS::ToBoolean(JS::RootedValue(cx, args.get(1)));
    
    JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_EventKeyboard_constructor : Error processing arguments");
    
    CrossApp::CAEventKeyboard* cobj = new (std::nothrow) CrossApp::CAEventKeyboard(arg0, arg1);
    CrossApp::CACAObject *_ccobj = dynamic_cast<CrossApp::CACAObject *>(cobj);
    if (_ccobj) {
        _ccobj->autorelease();
    }
    TypeTest<CrossApp::CAEventKeyboard> t;
    js_type_class_t *typeClass = nullptr;
    std::string typeName = t.s_name();
    auto typeMapIter = _js_global_type_map.find(typeName);
    CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
    typeClass = typeMapIter->second;
    CCASSERT(typeClass, "The value is null.");
    JSObject *obj = JS_NewObject(cx, typeClass->jsclass, JS::RootedObject(cx, typeClass->proto), JS::RootedObject(cx, typeClass->parentProto));
    args.rval().set( OBJECT_TO_JSVAL(obj));
    // link the native object with the javascript object
    js_proxy_t* p = jsb_new_proxy(cobj, obj);
    JS::AddNamedObjectRoot(cx, &p->obj, "CrossApp::CAEventKeyboard");
    return true;
}


extern JSObject *jsb_cocos2d_Event_prototype;

void js_cocos2d_EventKeyboard_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (EventKeyboard)", obj);
}

static bool js_is_native_obj(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    args.rval().set(BOOLEAN_TO_JSVAL(true));
    return true;
}

void js_register_cocos2dx_EventKeyboard(JSContext *cx, JS::HandleObject global) {
    jsb_cocos2d_EventKeyboard_class = (JSClass *)calloc(1, sizeof(JSClass));
    jsb_cocos2d_EventKeyboard_class->name = "EventKeyboard";
    jsb_cocos2d_EventKeyboard_class->addProperty = JS_PropertyStub;
    jsb_cocos2d_EventKeyboard_class->delProperty = JS_DeletePropertyStub;
    jsb_cocos2d_EventKeyboard_class->getProperty = JS_PropertyStub;
    jsb_cocos2d_EventKeyboard_class->setProperty = JS_StrictPropertyStub;
    jsb_cocos2d_EventKeyboard_class->enumerate = JS_EnumerateStub;
    jsb_cocos2d_EventKeyboard_class->resolve = JS_ResolveStub;
    jsb_cocos2d_EventKeyboard_class->convert = JS_ConvertStub;
    jsb_cocos2d_EventKeyboard_class->finalize = js_cocos2d_EventKeyboard_finalize;
    jsb_cocos2d_EventKeyboard_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);
    
    static JSPropertySpec properties[] = {
        JS_PSG("__nativeObj", js_is_native_obj, JSPROP_ENUMERATE | JSPROP_PERMANENT),
        JS_PS_END
    };
    
    static JSFunctionSpec funcs[] = {
        JS_FS_END
    };
    
    JSFunctionSpec *st_funcs = NULL;
    
    jsb_cocos2d_EventKeyboard_prototype = JS_InitClass(
                                                       cx, global,
                                                       JS::RootedObject(cx, jsb_cocos2d_Event_prototype),
                                                       jsb_cocos2d_EventKeyboard_class,
                                                       js_cocos2dx_EventKeyboard_constructor, 0, // constructor
                                                       properties,
                                                       funcs,
                                                       NULL, // no static properties
                                                       st_funcs);
    // make the class enumerable in the registered namespace
    //  bool found;
    //FIXME: Removed in FiCAObjectox v27
    //  JS_SetPropertyAttributes(cx, global, "EventKeyboard", JSPROP_ENUMERATE | JSPROP_READONLY, &found);
    
    // add the proto and JSClass to the type->js info hash table
    TypeTest<CrossApp::CAEventKeyboard> t;
    js_type_class_t *p;
    std::string typeName = t.s_name();
    if (_js_global_type_map.find(typeName) == _js_global_type_map.end())
    {
        p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
        p->jsclass = jsb_cocos2d_EventKeyboard_class;
        p->proto = jsb_cocos2d_EventKeyboard_prototype;
        p->parentProto = jsb_cocos2d_Event_prototype;
        _js_global_type_map.insert(std::make_pair(typeName, p));
    }
}

// console.log("Message");
bool js_console_log(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    if (argc == 1) {
        std::string msg;
        bool ok = jsval_to_std_string(cx, args.get(0), &msg);
        JSB_PRECONDITION2(ok, cx, false, "js_console_log : Error processing arguments");
        
        log("%s", msg.c_str());
        args.rval().setUndefined();
        return true;
    }
    
    JS_ReportError(cx, "js_console_log : wrong number of arguments");
    return false;
}

void get_or_create_js_obj(JSContext* cx, JS::HandleObject obj, const std::string &name, JS::MutableHandleObject jsObj)
{
    JS::RootedValue nsval(cx);
    JS_GetProperty(cx, obj, name.c_str(), &nsval);
    if (nsval == JSVAL_VOID) {
        jsObj.set(JS_NewObject(cx, NULL, JS::NullPtr(), JS::NullPtr()));
        nsval = OBJECT_TO_JSVAL(jsObj);
        JS_SetProperty(cx, obj, name.c_str(), nsval);
    } else {
        jsObj.set(nsval.toObjectOrNull());
    }
}

#if CC_ENABLE_BULLET_INTEGRATION && CC_USE_3D_PHYSICS

#include "physics3d/CCPhysics3D.h"

bool js_cocos2dx_Scene_setPhysics3DDebugCamera(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Scene_setPhysics3DDebugCamera : Invalid Native Object");
    if (argc == 1)
    {
        CrossApp::CACamera* arg0;
        do
        {
            if (!args.get(0).isObject()) { ok = false; break; }
            js_proxy_t *jsProxy;
            JSObject *tmpObj = args.get(0).toObjectOrNull();
            jsProxy = jsb_get_js_proxy(tmpObj);
            arg0 = (CrossApp::CACamera*)(jsProxy ? jsProxy->ptr : NULL);
            JSB_PRECONDITION2( arg0, cx, false, "Invalid Native Object");
        } while (0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Scene_setPhysics3DDebugCamera : Error processing arguments");
        cobj->setPhysics3DDebugCamera(arg0);
        args.rval().setUndefined();
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_Scene_setPhysics3DDebugCamera : wrong number of arguments: %d, was expecting %d", argc, 1);
    return false;
}
bool js_cocos2dx_Scene_initWithPhysics(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Scene_initWithPhysics : Invalid Native Object");
    if (argc == 0)
    {
        bool ret = cobj->initWithPhysics();
        jsval jsret = JSVAL_NULL;
        jsret = BOOLEAN_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_Scene_initWithPhysics : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_cocos2dx_Scene_getPhysics3DWorld(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_Scene_getPhysics3DWorld : Invalid Native Object");
    if (argc == 0)
    {
        CrossApp::CAPhysics3DWorld* ret = cobj->getPhysics3DWorld();
        jsval jsret = JSVAL_NULL;
        do
        {
            if (ret)
            {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAPhysics3DWorld>(cx, (CrossApp::CAPhysics3DWorld*)ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else
            {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_Scene_getPhysics3DWorld : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
#endif //CC_ENABLE_BULLET_INTEGRATION && CC_USE_3D_PHYSICS
#if CC_USE_NAVMESH
bool js_cocos2dx_Scene_setNavMeshDebugCamera(JSContext *cx, uint32_t argc, jsval *vp)
{
	JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
	bool ok = true;
	JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2(cobj, cx, false, "js_cocos2dx_Scene_setNavMeshDebugCamera : Invalid Native Object");
	if (argc == 1) {
		CrossApp::CACamera* arg0;
		do {
			if (args.get(0).isNull()) { arg0 = nullptr; break; }
			if (!args.get(0).isObject()) { ok = false; break; }
			js_proxy_t *jsProxy;
			JSObject *tmpObj = args.get(0).toObjectOrNull();
			jsProxy = jsb_get_js_proxy(tmpObj);
			arg0 = (CrossApp::CACamera*)(jsProxy ? jsProxy->ptr : NULL);
			JSB_PRECONDITION2(arg0, cx, false, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Scene_setNavMeshDebugCamera : Error processing arguments");
		cobj->setNavMeshDebugCamera(arg0);
		args.rval().setUndefined();
		return true;
	}

	JS_ReportError(cx, "js_cocos2dx_Scene_setNavMeshDebugCamera : wrong number of arguments: %d, was expecting %d", argc, 1);
	return false;
}
bool js_cocos2dx_Scene_setNavMesh(JSContext *cx, uint32_t argc, jsval *vp)
{
	JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
	bool ok = true;
	JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2(cobj, cx, false, "js_cocos2dx_Scene_setNavMesh : Invalid Native Object");
	if (argc == 1) {
		CrossApp::CANavMesh* arg0;
		do {
			if (args.get(0).isNull()) { arg0 = nullptr; break; }
			if (!args.get(0).isObject()) { ok = false; break; }
			js_proxy_t *jsProxy;
			JSObject *tmpObj = args.get(0).toObjectOrNull();
			jsProxy = jsb_get_js_proxy(tmpObj);
			arg0 = (CrossApp::CANavMesh*)(jsProxy ? jsProxy->ptr : NULL);
			JSB_PRECONDITION2(arg0, cx, false, "Invalid Native Object");
		} while (0);
		JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_Scene_setNavMesh : Error processing arguments");
		cobj->setNavMesh(arg0);
		args.rval().setUndefined();
		return true;
	}

	JS_ReportError(cx, "js_cocos2dx_Scene_setNavMesh : wrong number of arguments: %d, was expecting %d", argc, 1);
	return false;
}
bool js_cocos2dx_Scene_getNavMesh(JSContext *cx, uint32_t argc, jsval *vp)
{
	JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
	JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
	js_proxy_t *proxy = jsb_get_js_proxy(obj);
	CrossApp::CAScene* cobj = (CrossApp::CAScene *)(proxy ? proxy->ptr : NULL);
	JSB_PRECONDITION2(cobj, cx, false, "js_cocos2dx_Scene_getNavMesh : Invalid Native Object");
	if (argc == 0) {
		CrossApp::CANavMesh* ret = cobj->getNavMesh();
		jsval jsret = JSVAL_NULL;
		do {
			if (ret) {
				js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CANavMesh>(cx, (CrossApp::CANavMesh*)ret);
				jsret = OBJECT_TO_JSVAL(jsProxy->obj);
			}
			else {
				jsret = JSVAL_NULL;
			}
		} while (0);
		args.rval().set(jsret);
		return true;
	}

	JS_ReportError(cx, "js_cocos2dx_Scene_getNavMesh : wrong number of arguments: %d, was expecting %d", argc, 0);
	return false;
}
#endif //CC_USE_NAVMESH

JSClass  *jsb_cocos2d_PolygonInfo_class;
JSObject *jsb_cocos2d_PolygonInfo_prototype;

bool js_cocos2dx_PolygonInfo_getArea(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_PolygonInfo_getArea : Invalid Native Object");
    if (argc == 0)
    {
        const float ret = cobj->getArea();
        jsval jsret = JSVAL_NULL;
        jsret = DOUBLE_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_PolygonInfo_getArea : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_cocos2dx_PolygonInfo_getTriaglesCount(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_PolygonInfo_getTriaglesCount : Invalid Native Object");
    if (argc == 0)
    {
        const unsigned int ret = cobj->getTriaglesCount();
        jsval jsret = JSVAL_NULL;
        jsret = uint32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_PolygonInfo_getTriaglesCount : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}
bool js_cocos2dx_PolygonInfo_getVertCount(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_PolygonInfo_getVertCount : Invalid Native Object");
    if (argc == 0)
    {
        const unsigned int ret = cobj->getVertCount();
        jsval jsret = JSVAL_NULL;
        jsret = uint32_to_jsval(cx, ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_PolygonInfo_getVertCount : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

// PolygonInfo.rect
bool js_get_PolygonInfo_rect(JSContext* cx, uint32_t argc, jsval* vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    if (cobj)
    {
        jsval ret = ccrect_to_jsval(cx, cobj->rect);
        
        if (ret != JSVAL_NULL)
        {
            args.rval().set(ret);
            return true;
        }
        CCLOGERROR("js_get_PolygonInfo_rect : Fail to retrieve property from PolygonInfo.");
        return false;
    }
    JS_ReportError(cx, "js_get_PolygonInfo_rect : Invalid native object.");
    return false;
}
bool js_set_PolygonInfo_rect(JSContext* cx, uint32_t argc, jsval* vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    if (cobj)
    {
        JS::RootedValue jsrect(cx, args.get(0));
        jsval_to_ccrect(cx, jsrect, &cobj->rect);
        return true;
    }
    JS_ReportError(cx, "js_set_PolygonInfo_rect : Invalid native object.");
    return false;
}

// PolygonInfo.filename
bool js_get_PolygonInfo_filename(JSContext* cx, uint32_t argc, jsval* vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    if (cobj)
    {
        jsval ret = std_string_to_jsval(cx, cobj->filename);
        
        if (ret != JSVAL_NULL)
        {
            args.rval().set(ret);
            return true;
        }
        CCLOGERROR("js_get_PolygonInfo_filename : Fail to retrieve property from PolygonInfo.");
        return false;
    }
    JS_ReportError(cx, "js_get_PolygonInfo_filename : Invalid native object.");
    return false;
}
bool js_set_PolygonInfo_filename(JSContext* cx, uint32_t argc, jsval* vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAPolygonInfo* cobj = (CrossApp::CAPolygonInfo *)(proxy ? proxy->ptr : NULL);
    if (cobj)
    {
        JS::RootedValue jsstr(cx, args.get(0));
        jsval_to_std_string(cx, jsstr, &cobj->filename);
        return true;
    }
    JS_ReportError(cx, "js_set_PolygonInfo_filename : Invalid native object.");
    return false;
}

bool js_cocos2dx_PolygonInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    CrossApp::CAPolygonInfo* cobj = new (std::nothrow) CrossApp::CAPolygonInfo();
    TypeTest<CrossApp::CAPolygonInfo> t;
    js_type_class_t *typeClass = nullptr;
    std::string typeName = t.s_name();
    auto typeMapIter = _js_global_type_map.find(typeName);
    CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
    typeClass = typeMapIter->second;
    CCASSERT(typeClass, "The value is null.");
    JS::RootedObject proto(cx, typeClass->proto.get());
    JS::RootedObject parent(cx, typeClass->parentProto.get());
    JS::RootedObject obj(cx, JS_NewObject(cx, typeClass->jsclass, proto, parent));
    args.rval().set(OBJECT_TO_JSVAL(obj));
    // link the native object with the javascript object
    jsb_new_proxy(cobj, obj);
    if (JS_HasProperty(cx, obj, "_ctor", &ok) && ok)
        ScriptingCore::getInstance()->executeFunctionWithOwner(OBJECT_TO_JSVAL(obj), "_ctor", args);
    return true;
}

void js_cocos2d_PolygonInfo_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (PolygonInfo)", obj);
    js_proxy_t* nproxy;
    js_proxy_t* jsproxy;
    jsproxy = jsb_get_js_proxy(obj);
    if (jsproxy)
    {
        nproxy = jsb_get_native_proxy(jsproxy->ptr);
        
        CrossApp::CAPolygonInfo *nobj = static_cast<CrossApp::CAPolygonInfo *>(nproxy->ptr);
        if (nobj)
            delete nobj;
        
        jsb_remove_proxy(nproxy, jsproxy);
    }
}

void js_register_cocos2dx_PolygonInfo(JSContext *cx, JS::HandleObject global)
{
    jsb_cocos2d_PolygonInfo_class = (JSClass *)calloc(1, sizeof(JSClass));
    jsb_cocos2d_PolygonInfo_class->name = "PolygonInfo";
    jsb_cocos2d_PolygonInfo_class->addProperty = JS_PropertyStub;
    jsb_cocos2d_PolygonInfo_class->delProperty = JS_DeletePropertyStub;
    jsb_cocos2d_PolygonInfo_class->getProperty = JS_PropertyStub;
    jsb_cocos2d_PolygonInfo_class->setProperty = JS_StrictPropertyStub;
    jsb_cocos2d_PolygonInfo_class->enumerate = JS_EnumerateStub;
    jsb_cocos2d_PolygonInfo_class->resolve = JS_ResolveStub;
    jsb_cocos2d_PolygonInfo_class->convert = JS_ConvertStub;
    jsb_cocos2d_PolygonInfo_class->finalize = js_cocos2d_PolygonInfo_finalize;
    jsb_cocos2d_PolygonInfo_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);
    
    static JSPropertySpec properties[] =
    {
        JS_PSG("__nativeObj", js_is_native_obj, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_PSGS("rect", js_get_PolygonInfo_rect, js_set_PolygonInfo_rect, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_PSGS("filename", js_get_PolygonInfo_filename, js_set_PolygonInfo_filename, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_PS_END
    };
    
    static JSFunctionSpec funcs[] =
    {
        JS_FN("getArea", js_cocos2dx_PolygonInfo_getArea, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getTriaglesCount", js_cocos2dx_PolygonInfo_getTriaglesCount, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FN("getVertCount", js_cocos2dx_PolygonInfo_getVertCount, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };
    
    JSFunctionSpec *st_funcs = NULL;
    
    jsb_cocos2d_PolygonInfo_prototype = JS_InitClass(
                                                     cx, global,
                                                     JS::NullPtr(), // parent proto
                                                     jsb_cocos2d_PolygonInfo_class,
                                                     js_cocos2dx_PolygonInfo_constructor, 0, // constructor
                                                     properties,
                                                     funcs,
                                                     NULL, // no static properties
                                                     st_funcs);
    
    // add the proto and JSClass to the type->js info hash table
    TypeTest<CrossApp::CAPolygonInfo> t;
    js_type_class_t *p;
    std::string typeName = t.s_name();
    if (_js_global_type_map.find(typeName) == _js_global_type_map.end())
    {
        p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
        p->jsclass = jsb_cocos2d_PolygonInfo_class;
        p->proto = jsb_cocos2d_PolygonInfo_prototype;
        p->parentProto = NULL;
        _js_global_type_map.insert(std::make_pair(typeName, p));
    }
}

JSClass  *jsb_cocos2d_AutoPolygon_class;
JSObject *jsb_cocos2d_AutoPolygon_prototype;

bool js_cocos2dx_AutoPolygon_generatePolygon(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    if (argc == 1) {
        std::string arg0;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_AutoPolygon_generatePolygon : Error processing arguments");
        CrossApp::CAPolygonInfo* ret = new CrossApp::CAPolygonInfo(CrossApp::CAAutoPolygon::generatePolygon(arg0));
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAPolygonInfo>(cx, ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }
    if (argc == 2) {
        std::string arg0;
        CrossApp::CARect arg1;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        ok &= jsval_to_ccrect(cx, args.get(1), &arg1);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_AutoPolygon_generatePolygon : Error processing arguments");
        CrossApp::CAPolygonInfo* ret = new CrossApp::CAPolygonInfo(CrossApp::CAAutoPolygon::generatePolygon(arg0, arg1));
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAPolygonInfo>(cx, ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }
    if (argc == 3) {
        std::string arg0;
        CrossApp::CARect arg1;
        double arg2;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        ok &= jsval_to_ccrect(cx, args.get(1), &arg1);
        ok &= JS::ToNumber( cx, args.get(2), &arg2) && !isnan(arg2);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_AutoPolygon_generatePolygon : Error processing arguments");
        CrossApp::CAPolygonInfo* ret = new CrossApp::CAPolygonInfo(CrossApp::CAAutoPolygon::generatePolygon(arg0, arg1, arg2));
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAPolygonInfo>(cx, ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }
    if (argc == 4) {
        std::string arg0;
        CrossApp::CARect arg1;
        double arg2;
        double arg3;
        ok &= jsval_to_std_string(cx, args.get(0), &arg0);
        ok &= jsval_to_ccrect(cx, args.get(1), &arg1);
        ok &= JS::ToNumber( cx, args.get(2), &arg2) && !isnan(arg2);
        ok &= JS::ToNumber( cx, args.get(3), &arg3) && !isnan(arg3);
        JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_AutoPolygon_generatePolygon : Error processing arguments");
        CrossApp::CAPolygonInfo* ret = new CrossApp::CAPolygonInfo(CrossApp::CAAutoPolygon::generatePolygon(arg0, arg1, arg2, arg3));
        jsval jsret = JSVAL_NULL;
        do {
            if (ret) {
                js_proxy_t *jsProxy = js_get_or_create_proxy<CrossApp::CAPolygonInfo>(cx, ret);
                jsret = OBJECT_TO_JSVAL(jsProxy->obj);
            } else {
                jsret = JSVAL_NULL;
            }
        } while (0);
        args.rval().set(jsret);
        return true;
    }
    JS_ReportError(cx, "js_cocos2dx_AutoPolygon_generatePolygon : wrong number of arguments");
    return false;
}

bool js_cocos2dx_AutoPolygon_constructor(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    bool ok = true;
    std::string arg0;
    ok &= jsval_to_std_string(cx, args.get(0), &arg0);
    JSB_PRECONDITION2(ok, cx, false, "js_cocos2dx_AutoPolygon_constructor : Error processing arguments");
    CrossApp::CAAutoPolygon* cobj = new (std::nothrow) CrossApp::CAAutoPolygon(arg0);
    TypeTest<CrossApp::CAAutoPolygon> t;
    js_type_class_t *typeClass = nullptr;
    std::string typeName = t.s_name();
    auto typeMapIter = _js_global_type_map.find(typeName);
    CCASSERT(typeMapIter != _js_global_type_map.end(), "Can't find the class type!");
    typeClass = typeMapIter->second;
    CCASSERT(typeClass, "The value is null.");
    JS::RootedObject proto(cx, typeClass->proto.get());
    JS::RootedObject parent(cx, typeClass->parentProto.get());
    JS::RootedObject obj(cx, JS_NewObject(cx, typeClass->jsclass, proto, parent));
    args.rval().set(OBJECT_TO_JSVAL(obj));
    // link the native object with the javascript object
    jsb_new_proxy(cobj, obj);
    if (JS_HasProperty(cx, obj, "_ctor", &ok) && ok)
        ScriptingCore::getInstance()->executeFunctionWithOwner(OBJECT_TO_JSVAL(obj), "_ctor", args);
    return true;
}

void js_cocos2d_AutoPolygon_finalize(JSFreeOp *fop, JSObject *obj) {
    CCLOGINFO("jsbindings: finalizing JS object %p (AutoPolygon)", obj);
    js_proxy_t* nproxy;
    js_proxy_t* jsproxy;
    jsproxy = jsb_get_js_proxy(obj);
    if (jsproxy) {
        nproxy = jsb_get_native_proxy(jsproxy->ptr);
        
        CrossApp::CAAutoPolygon *nobj = static_cast<CrossApp::CAAutoPolygon *>(nproxy->ptr);
        if (nobj)
            delete nobj;
        
        jsb_remove_proxy(nproxy, jsproxy);
    }
}

void js_register_cocos2dx_AutoPolygon(JSContext *cx, JS::HandleObject global) {
    jsb_cocos2d_AutoPolygon_class = (JSClass *)calloc(1, sizeof(JSClass));
    jsb_cocos2d_AutoPolygon_class->name = "AutoPolygon";
    jsb_cocos2d_AutoPolygon_class->addProperty = JS_PropertyStub;
    jsb_cocos2d_AutoPolygon_class->delProperty = JS_DeletePropertyStub;
    jsb_cocos2d_AutoPolygon_class->getProperty = JS_PropertyStub;
    jsb_cocos2d_AutoPolygon_class->setProperty = JS_StrictPropertyStub;
    jsb_cocos2d_AutoPolygon_class->enumerate = JS_EnumerateStub;
    jsb_cocos2d_AutoPolygon_class->resolve = JS_ResolveStub;
    jsb_cocos2d_AutoPolygon_class->convert = JS_ConvertStub;
    jsb_cocos2d_AutoPolygon_class->finalize = js_cocos2d_AutoPolygon_finalize;
    jsb_cocos2d_AutoPolygon_class->flags = JSCLASS_HAS_RESERVED_SLOTS(2);
    
    static JSPropertySpec properties[] = {
        JS_PSG("__nativeObj", js_is_native_obj, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_PS_END
    };
    
    static JSFunctionSpec funcs[] = {
        JS_FS_END
    };
    
    static JSFunctionSpec st_funcs[] = {
        JS_FN("generatePolygon", js_cocos2dx_AutoPolygon_generatePolygon, 1, JSPROP_PERMANENT | JSPROP_ENUMERATE),
        JS_FS_END
    };
    
    jsb_cocos2d_AutoPolygon_prototype = JS_InitClass(
                                                     cx, global,
                                                     JS::NullPtr(), // parent proto
                                                     jsb_cocos2d_AutoPolygon_class,
                                                     js_cocos2dx_AutoPolygon_constructor, 0, // constructor
                                                     properties,
                                                     funcs,
                                                     NULL, // no static properties
                                                     st_funcs);
    // make the class enumerable in the registered namespace
    //  bool found;
    //FIXME: Removed in FiCAObjectox v27
    //  JS_SetPropertyAttributes(cx, global, "AutoPolygon", JSPROP_ENUMERATE | JSPROP_READONLY, &found);
    
    // add the proto and JSClass to the type->js info hash table
    TypeTest<CrossApp::CAAutoPolygon> t;
    js_type_class_t *p;
    std::string typeName = t.s_name();
    if (_js_global_type_map.find(typeName) == _js_global_type_map.end())
    {
        p = (js_type_class_t *)malloc(sizeof(js_type_class_t));
        p->jsclass = jsb_cocos2d_AutoPolygon_class;
        p->proto = jsb_cocos2d_AutoPolygon_prototype;
        p->parentProto = NULL;
        _js_global_type_map.insert(std::make_pair(typeName, p));
    }
}

bool js_cocos2dx_ComponentJS_getScriptObject(JSContext *cx, uint32_t argc, jsval *vp)
{
    JS::CallArgs args = JS::CallArgsFromVp(argc, vp);
    JS::RootedObject obj(cx, args.thisv().toObjectOrNull());
    js_proxy_t *proxy = jsb_get_js_proxy(obj);
    CrossApp::CAComponentJS* cobj = (CrossApp::CAComponentJS *)(proxy ? proxy->ptr : NULL);
    JSB_PRECONDITION2( cobj, cx, false, "js_cocos2dx_ComponentJS_getScriptObject : Invalid Native Object");
    if (argc == 0) {
        JSObject* ret = static_cast<JSObject*>(cobj->getScriptObject());
        jsval jsret = OBJECT_TO_JSVAL(ret);
        args.rval().set(jsret);
        return true;
    }
    
    JS_ReportError(cx, "js_cocos2dx_ComponentJS_getScriptObject : wrong number of arguments: %d, was expecting %d", argc, 0);
    return false;
}

void register_cocos2dx_js_core(JSContext* cx, JS::HandleObject global)
{
    JS::RootedObject ccObj(cx);
    JS::RootedObject jsbObj(cx);
    JS::RootedValue tmpVal(cx);
    JS::RootedObject tmpObj(cx);
    get_or_create_js_obj(cx, global, "cc", &ccObj);
    get_or_create_js_obj(cx, global, "jsb", &jsbObj);
    
    js_register_cocos2dx_PolygonInfo(cx, jsbObj);
    js_register_cocos2dx_AutoPolygon(cx, jsbObj);
    
    JS_GetProperty(cx, ccObj, "PlistParser", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "getInstance", js_PlistParser_getInstance, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS::RootedObject proto(cx, jsb_cocos2d_SAXParser_prototype);
    JS_DefineFunction(cx, proto, "parse", js_PlistParser_parse, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "Label", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "createWithTTF", js_cocos2dx_Label_createWithTTF, 4, JSPROP_READONLY | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_Label_prototype);
    JS_DefineFunction(cx, tmpObj, "setTTFConfig", js_cocos2dx_Label_setTTFConfig, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_NodeGrid_prototype);
    JS_DefineFunction(cx, tmpObj, "setGrid", js_cocos2dx_NodeGrid_setGrid, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_Node_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "onEnter", js_cocos2dx_Node_onEnter, 0, JSPROP_ENUMERATE  | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "onExit", js_cocos2dx_Node_onExit, 0, JSPROP_ENUMERATE  | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "onEnterTransitionDidFinish", js_cocos2dx_Node_onEnterTransitionDidFinish, 0, JSPROP_ENUMERATE  | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "onExitTransitionDidStart", js_cocos2dx_Node_onExitTransitionDidStart, 0, JSPROP_ENUMERATE  | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "cleanup", js_cocos2dx_Node_cleanup, 0, JSPROP_ENUMERATE  | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "schedule", js_CCNode_schedule, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "scheduleOnce", js_CCNode_scheduleOnce, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "scheduleUpdateWithPriority", js_cocos2dx_CCNode_scheduleUpdateWithPriority, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleUpdate", js_cocos2dx_CCNode_unscheduleUpdate, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "scheduleUpdate", js_cocos2dx_CCNode_scheduleUpdate, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unschedule", js_CCNode_unschedule, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleAllCallbacks", js_cocos2dx_CCNode_unscheduleAllSelectors, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setPosition", js_cocos2dx_CCNode_setPosition, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setContentSize", js_cocos2dx_CCNode_setContentSize, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setAnchorPoint", js_cocos2dx_CCNode_setAnchorPoint, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setColor", js_cocos2dx_CCNode_setColor, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "pause", js_cocos2dx_CCNode_pause, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "resume", js_cocos2dx_CCNode_resume, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "convertToWorldSpace", js_cocos2dx_CCNode_convertToWorldSpace, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "convertToWorldSpaceAR", js_cocos2dx_CCNode_convertToWorldSpaceAR, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setAdditionalTransform", js_cocos2dx_Node_setAdditionalTransform, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_EventListener_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_Touch_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_EventTouch_prototype);
    JS_DefineFunction(cx, tmpObj, "getTouches", js_cocos2dx_EventTouch_getTouches, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setTouches", js_cocos2dx_EventTouch_setTouches, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_GLProgram_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setUniformLocationF32", js_cocos2dx_CCGLProgram_setUniformLocationWith4f, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "getProgram", js_cocos2dx_CCGLProgram_getProgram, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setUniformLocationWithMatrixfvUnion", js_cocos2dx_CCGLProgram_setUniformLocationWithMatrixfvUnion, 4, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_GLProgramState_prototype);
    JS_DefineFunction(cx, tmpObj, "setVertexAttribPointer", js_cocos2dx_GLProgramState_setVertexAttribPointer, 6, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setUniformVec4", js_cocos2dx_GLProgramState_setUniformVec4, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_Scheduler_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "resumeTarget", js_cocos2dx_CCScheduler_resumeTarget, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "pauseTarget", js_cocos2dx_CCScheduler_pauseTarget, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "scheduleUpdateForTarget", js_CCScheduler_scheduleUpdateForTarget, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleUpdate", js_CCScheduler_unscheduleUpdateForTarget, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "schedule", js_CCScheduler_schedule, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "scheduleCallbackForTarget", js_CCScheduler_scheduleCallbackForTarget, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unschedule", js_CCScheduler_unscheduleCallbackForTarget, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleCallbackForTarget", js_CCScheduler_unscheduleCallbackForTarget, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleAllForTarget", js_cocos2dx_CCScheduler_unscheduleAllSelectorsForTarget, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleAllCallbacks", js_cocos2dx_CCScheduler_unscheduleAll, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "unscheduleAllCallbacksWithMinPriority", js_cocos2dx_CCScheduler_unscheduleAllCallbacksWithMinPriority, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "isTargetPaused", js_cocos2dx_CCScheduler_isTargetPaused, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_ActionManager_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_TMXLayer_prototype);
    JS_DefineFunction(cx, tmpObj, "getTileFlagsAt", js_cocos2dx_CCTMXLayer_getTileFlagsAt, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_Texture2D_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setTexParameters", js_cocos2dx_CCTexture2D_setTexParameters, 4, JSPROP_ENUMERATE  | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_Menu_prototype);
    JS_DefineFunction(cx, tmpObj, "alignItemsInRows", js_cocos2dx_CCMenu_alignItemsInRows, 1, JSPROP_ENUMERATE  | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "alignItemsInColumns", js_cocos2dx_CCMenu_alignItemsInColumns, 1, JSPROP_ENUMERATE  | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_Layer_prototype);
    JS_DefineFunction(cx, tmpObj, "init", js_cocos2dx_CCLayer_init, 0, JSPROP_ENUMERATE  | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_FileUtils_prototype);
    JS_DefineFunction(cx, tmpObj, "setSearchResolutionsOrder", js_cocos2dx_CCFileUtils_setSearchResolutionsOrder, 1, JSPROP_PERMANENT );
    JS_DefineFunction(cx, tmpObj, "setSearchPaths", js_cocos2dx_CCFileUtils_setSearchPaths, 1, JSPROP_PERMANENT );
    JS_DefineFunction(cx, tmpObj, "getSearchPaths", js_cocos2dx_CCFileUtils_getSearchPaths, 0, JSPROP_PERMANENT );
    JS_DefineFunction(cx, tmpObj, "getSearchResolutionsOrder", js_cocos2dx_CCFileUtils_getSearchResolutionsOrder, 0, JSPROP_PERMANENT );
    JS_DefineFunction(cx, tmpObj, "createDictionaryWithContentsOfFile", js_cocos2dx_FileUtils_createDictionaryWithContentsOfFile, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "getDataFromFile", js_cocos2dx_CCFileUtils_getDataFromFile, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "writeDataToFile", js_cocos2dx_CCFileUtils_writeDataToFile, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    JS_GetProperty(cx, ccObj, "EventListenerTouchOneByOne", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_EventListenerTouchOneByOne_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "EventListenerTouchAllAtOnce", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_EventListenerTouchAllAtOnce_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "EventListenerMouse", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_EventListenerMouse_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "EventListenerKeyboard", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_EventListenerKeyboard_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "EventListenerFocus", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_EventListenerFocus_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "BezierBy", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", JSB_CCBezierBy_actionWithDuration, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_BezierBy_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithDuration", JSB_CCBezierBy_initWithDuration, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "BezierTo", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", JSB_CCBezierTo_actionWithDuration, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_BezierTo_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithDuration", JSB_CCBezierTo_initWithDuration, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "CardinalSplineBy", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", JSB_CCCardinalSplineBy_actionWithDuration, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "CardinalSplineTo", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", JSB_CCCardinalSplineTo_actionWithDuration, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_CardinalSplineTo_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithDuration", js_cocos2dx_CardinalSplineTo_initWithDuration, 3, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "CatmullRomBy", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", JSB_CCCatmullRomBy_actionWithDuration, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_CatmullRomBy_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithDuration", JSB_CatmullRomBy_initWithDuration, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "CatmullRomTo", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", JSB_CCCatmullRomTo_actionWithDuration, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_CatmullRomTo_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithDuration", JSB_CatmullRomBy_initWithDuration, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    JS_GetProperty(cx, ccObj, "Sprite", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_Sprite_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_Sprite_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithPolygon", js_cocos2dx_Sprite_initWithPolygon, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "setPolygonInfo", js_cocos2dx_Sprite_setPolygonInfo, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "textureLoaded", js_cocos2dx_Sprite_textureLoaded, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_SpriteBatchNode_prototype);
    JS_DefineFunction(cx, tmpObj, "getDescendants", js_cocos2dx_SpriteBatchNode_getDescendants, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_Action_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_Animation_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_SpriteFrame_prototype);
    JS_DefineFunction(cx, tmpObj, "retain", js_cocos2dx_retain, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "release", js_cocos2dx_release, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_MenuItem_prototype);
    JS_DefineFunction(cx, tmpObj, "setCallback", js_cocos2dx_MenuItem_setCallback, 2, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_TMXLayer_prototype);
    JS_DefineFunction(cx, tmpObj, "getTiles", js_cocos2dx_CCTMXLayer_getTiles, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_ActionInterval_prototype);
    JS_DefineFunction(cx, tmpObj, "repeat", js_cocos2dx_ActionInterval_repeat, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "repeatForever", js_cocos2dx_ActionInterval_repeatForever, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "_speed", js_cocos2dx_ActionInterval_speed, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "easing", js_cocos2dx_ActionInterval_easing, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_RenderTexture_prototype);
    JS_DefineFunction(cx, tmpObj, "saveToFile", js_cocos2dx_RenderTexture_saveToFile, 4, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "Menu", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "_create", js_cocos2dx_CCMenu_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "MenuItem", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCMenuItem_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "MenuItemSprite", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCMenuItemSprite_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "MenuItemLabel", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCMenuItemLabel_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "MenuItemAtlasFont", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCMenuItemAtlasFont_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "MenuItemFont", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCMenuItemFont_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "MenuItemToggle", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "_create", js_cocos2dx_CCMenuItemToggle_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "Sequence", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCSequence_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_GetProperty(cx, ccObj, "Spawn", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCSpawn_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    //JS_GetProperty(cx, ccObj, "Animation", &tmpVal);
    //tmpObj = tmpVal.toObjectOrNull();
    //JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCAnimation_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_Scene_prototype);
    JS_DefineFunction(cx, tmpObj, "init", js_cocos2dx_CCScene_init, 0, JSPROP_PERMANENT | JSPROP_ENUMERATE);
    JS_GetProperty(cx, ccObj, "LayerMultiplex", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCLayerMultiplex_create, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "CallFunc", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_callFunc, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    tmpObj.set(jsb_cocos2d_CallFuncN_prototype);
    JS_DefineFunction(cx, tmpObj, "initWithFunction", js_cocos2dx_CallFunc_initWithFunction, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    JS_GetProperty(cx, ccObj, "GLProgram", &tmpVal);
    tmpObj = tmpVal.toObjectOrNull();
    JS_DefineFunction(cx, tmpObj, "create", js_cocos2dx_CCGLProgram_create, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "createWithString", js_cocos2dx_CCGLProgram_createWithString, 1, JSPROP_READONLY | JSPROP_PERMANENT);

    tmpObj.set(jsb_cocos2d_Camera_prototype);
    JS_DefineFunction(cx, tmpObj, "unproject", js_cocos2dx_Camera_unproject, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "isVisibleInFrustum", js_cocos2dx_Camera_isVisibleInFrustum, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_ClippingNode_prototype);
    JS_DefineFunction(cx, tmpObj, "init", js_cocos2dx_ClippingNode_init, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    
    tmpObj.set(jsb_cocos2d_ComponentJS_prototype);
    JS_DefineFunction(cx, tmpObj, "getScriptObject", js_cocos2dx_ComponentJS_getScriptObject, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);

    JS_DefineFunction(cx, ccObj, "glEnableVertexAttribs", js_cocos2dx_ccGLEnableVertexAttribs, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pAdd", js_cocos2dx_ccpAdd, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pDistanceSQ", js_cocos2dx_ccpDistanceSQ, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pDistance", js_cocos2dx_ccpDistance, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pSub", js_cocos2dx_ccpSub, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pNeg", js_cocos2dx_ccpNeg, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pMult", js_cocos2dx_ccpMult, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pMidpoint", js_cocos2dx_ccpMidpoint, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pDot", js_cocos2dx_ccpDot, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pCross", js_cocos2dx_ccpCross, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pPerp", js_cocos2dx_ccpPerp, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pRPerp", js_cocos2dx_ccpRPerp, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pProject", js_cocos2dx_ccpProject, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pRotate", js_cocos2dx_ccpRotate, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pNormalize", js_cocos2dx_ccpNormalize, 0, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pClamp", js_cocos2dx_ccpClamp, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pLengthSQ", js_cocos2dx_ccpLengthSQ, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "pLength", js_cocos2dx_ccpLength, 1, JSPROP_READONLY | JSPROP_PERMANENT);


    JS_DefineFunction(cx, ccObj, "registerTargetedDelegate", js_cocos2dx_JSTouchDelegate_registerTargetedDelegate, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "registerStandardDelegate", js_cocos2dx_JSTouchDelegate_registerStandardDelegate, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, ccObj, "unregisterTouchDelegate", js_cocos2dx_JSTouchDelegate_unregisterTouchDelegate, 1, JSPROP_READONLY | JSPROP_PERMANENT);

    get_or_create_js_obj(cx, ccObj, "math", &tmpObj);
    JS_DefineFunction(cx, tmpObj, "obbGetCorners", js_cocos2dx_ccobbGetCorners, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "obbIntersectsObb", js_cocos2dx_ccobbIntersects, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "rayIntersectsObb", js_cocos2dx_ccrayIntersectsObb, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4CreateTranslation", js_cocos2dx_ccmat4CreateTranslation, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4CreateRotation", js_cocos2dx_ccmat4CreateRotation, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4Multiply", js_cocos2dx_ccmat4Multiply, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4MultiplyVec3", js_cocos2dx_ccmat4MultiplyVec3, 2, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4GetInversed", js_cocos2dx_ccmat4GetInversed, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4TransformVector", js_cocos2dx_ccmat4TransformVector, 3, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "mat4TransformPoint", js_cocos2dx_ccmat4TransformPoint, 3, JSPROP_READONLY | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "quatMultiply", js_cocos2dx_ccquatMultiply, 2, JSPROP_READONLY | JSPROP_PERMANENT);

    js_register_cocos2dx_EventKeyboard(cx, ccObj);

    get_or_create_js_obj(cx, global, "console", &tmpObj);
    JS_DefineFunction(cx, tmpObj, "log", js_console_log, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    
    JS_DefineFunction(cx, global, "garbageCollect", js_forceGC, 1, JSPROP_READONLY | JSPROP_PERMANENT);
    
#if CC_ENABLE_BULLET_INTEGRATION && CC_USE_3D_PHYSICS
    tmpObj.set(jsb_cocos2d_Scene_prototype);
    JS_DefineFunction(cx, tmpObj, "setPhysics3DDebugCamera", js_cocos2dx_Scene_setPhysics3DDebugCamera, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "initWithPhysics", js_cocos2dx_Scene_initWithPhysics, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
    JS_DefineFunction(cx, tmpObj, "getPhysics3DWorld", js_cocos2dx_Scene_getPhysics3DWorld, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
#endif //CC_ENABLE_BULLET_INTEGRATION && CC_USE_3D_PHYSICS

#if CC_USE_NAVMESH
	tmpObj.set(jsb_cocos2d_Scene_prototype);
	JS_DefineFunction(cx, tmpObj, "getNavMesh", js_cocos2dx_Scene_getNavMesh, 0, JSPROP_ENUMERATE | JSPROP_PERMANENT);
	JS_DefineFunction(cx, tmpObj, "setNavMeshDebugCamera", js_cocos2dx_Scene_setNavMeshDebugCamera, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
	JS_DefineFunction(cx, tmpObj, "setNavMesh", js_cocos2dx_Scene_setNavMesh, 1, JSPROP_ENUMERATE | JSPROP_PERMANENT);
#endif //CC_USE_NAVMESH
}
 */
