#include "ccConfig.h"
#ifndef __autogentestbindings_js_h__
#define __autogentestbindings_js_h__

#include "jsapi.h"
#include "jsfriendapi.h"

extern JSClass  *jsb_CrossApp_CAView_class;
extern JSObject *jsb_CrossApp_CAView_prototype;

bool js_autogentestbindings_js_CAView_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_autogentestbindings_js_CAView_finalize(JSContext *cx, JSObject *obj);
void js_register_autogentestbindings_js_CAView(JSContext *cx, JS::HandleObject global);
void register_all_autogentestbindings_js(JSContext* cx, JS::HandleObject obj);
bool js_autogentestbindings_js_CAView_removeFromSuperview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getSuperview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getSubviewByTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_sortAllSubviews(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_copy(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_updateDisplayedAlpha(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isFlipX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isFlipY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_init(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_removeSubviewByTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_visitEve(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_onExit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setSuperview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setRotationX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getAlpha(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_removeSubview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_onEnterTransitionDidFinish(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_removeAllSubviews(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_reViewlayout(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getSubviewByTextTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_removeSubviewByTextTag(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getImageRect(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_nodeToParentTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getFrameOrigin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setDirty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setGLServerState(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isImageRectRotated(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getDisplayedColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_updateTransform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getAnchorPointInPoints(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_onEnter(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getCenterOrigin(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_initWithCenter(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getRotation(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_visit(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_transform(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getSkewX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getSkewY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setRotationY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_insertSubview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setFlipY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setFlipX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getCenter(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isDirty(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getRotationX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getRotationY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isRunning(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getQuad(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setVisible(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_reorderSubview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView__setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isDisplayRange(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getDisplayedAlpha(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getScaleY(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getScaleX(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_addSubview(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_initWithFrame(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setDisplayRange(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_setAlpha(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_draw(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getBlendFunc(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_transformAncestors(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_description(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_isVisible(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_update(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_onExitTransitionDidStart(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getBounds(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getScale(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_initWithColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getCamera(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_getGLServerState(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_create(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_createWithColor(JSContext *cx, uint32_t argc, jsval *vp);
bool js_autogentestbindings_js_CAView_CAView(JSContext *cx, uint32_t argc, jsval *vp);

#endif // __autogentestbindings_js_h__
