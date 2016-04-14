/**
 * @module autogentestbindings_js
 */
var ca = ca || {};

/**
 * @class CACopying
 */
ca.CACopying = {

/**
 * @method copyWithZone
 * @param {cc.CAZone} arg0
 * @return {cc.CAObject}
 */
copyWithZone : function (
cazone 
)
{
    return cc.CAObject;
},

};

/**
 * @class CAObject
 */
ca.CAObject = {

/**
 * @method setUserData
 * @param {void} arg0
 */
setUserData : function (
void 
)
{
},

/**
 * @method getTextTag
 * @return {String}
 */
getTextTag : function (
)
{
    return ;
},

/**
 * @method retainCount
 * @return {unsigned int}
 */
retainCount : function (
)
{
    return 0;
},

/**
 * @method getUserData
 * @return {void}
 */
getUserData : function (
)
{
    return void;
},

/**
 * @method getUserObject
 * @return {cc.CAObject}
 */
getUserObject : function (
)
{
    return cc.CAObject;
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method isEqual
 * @param {cc.CAObject} arg0
 * @return {bool}
 */
isEqual : function (
caobject 
)
{
    return false;
},

/**
 * @method isSingleReference
 * @return {bool}
 */
isSingleReference : function (
)
{
    return false;
},

/**
 * @method autorelease
 * @return {cc.CAObject}
 */
autorelease : function (
)
{
    return cc.CAObject;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setTextTag
 * @param {String} arg0
 */
setTextTag : function (
str 
)
{
},

/**
 * @method setTag
 * @param {int} arg0
 */
setTag : function (
int 
)
{
},

/**
 * @method release
 */
release : function (
)
{
},

/**
 * @method retain
 * @return {cc.CAObject}
 */
retain : function (
)
{
    return cc.CAObject;
},

/**
 * @method getTag
 * @return {int}
 */
getTag : function (
)
{
    return 0;
},

/**
 * @method copy
 * @return {cc.CAObject}
 */
copy : function (
)
{
    return cc.CAObject;
},

/**
 * @method setUserObject
 * @param {cc.CAObject} arg0
 */
setUserObject : function (
caobject 
)
{
},

/**
 * @method CAObject
 * @constructor
 */
CAObject : function (
)
{
},

};

/**
 * @class CAZone
 */
ca.CAZone = {

/**
 * @method CAZone
 * @constructor
 */
CAZone : function (
)
{
},

};

/**
 * @class CATimer
 */
ca.CATimer = {

/**
 * @method getInterval
 * @return {float}
 */
getInterval : function (
)
{
    return 0;
},

/**
 * @method setInterval
 * @param {float} arg0
 */
setInterval : function (
float 
)
{
},

/**
 * @method initWithScriptHandler
 * @param {int} arg0
 * @param {float} arg1
 * @return {bool}
 */
initWithScriptHandler : function (
int, 
float 
)
{
    return false;
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method getSelector
 * @return {??}
 */
getSelector : function (
)
{
    return ??;
},

/**
 * @method getScriptHandler
 * @return {int}
 */
getScriptHandler : function (
)
{
    return 0;
},

/**
 * @method timerWithScriptHandler
 * @param {int} arg0
 * @param {float} arg1
 * @return {cc.CATimer}
 */
timerWithScriptHandler : function (
int, 
float 
)
{
    return cc.CATimer;
},

/**
 * @method CATimer
 * @constructor
 */
CATimer : function (
)
{
},

};

/**
 * @class CAScheduler
 */
ca.CAScheduler = {

/**
 * @method isTargetPaused
 * @param {cc.CAObject} arg0
 * @return {bool}
 */
isTargetPaused : function (
caobject 
)
{
    return false;
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method resumeTarget
 * @param {cc.CAObject} arg0
 */
resumeTarget : function (
caobject 
)
{
},

/**
 * @method pauseAllTargets
 * @return {cc.CCSet}
 */
pauseAllTargets : function (
)
{
    return cc.CCSet;
},

/**
 * @method resumeTargets
 * @param {cc.CCSet} arg0
 */
resumeTargets : function (
ccset 
)
{
},

/**
 * @method pauseTarget
 * @param {cc.CAObject} arg0
 */
pauseTarget : function (
caobject 
)
{
},

/**
 * @method pauseAllTargetsWithMinPriority
 * @param {int} arg0
 * @return {cc.CCSet}
 */
pauseAllTargetsWithMinPriority : function (
int 
)
{
    return cc.CCSet;
},

/**
 * @method unscheduleAllForTarget
 * @param {cc.CAObject} arg0
 */
unscheduleAllForTarget : function (
caobject 
)
{
},

/**
 * @method unscheduleAll
 */
unscheduleAll : function (
)
{
},

/**
 * @method getScheduler
 * @return {cc.CAScheduler}
 */
getScheduler : function (
)
{
    return cc.CAScheduler;
},

/**
 * @method CAScheduler
 * @constructor
 */
CAScheduler : function (
)
{
},

};

/**
 * @class CAImage
 */
ca.CAImage = {

/**
 * @method getShaderProgram
 * @return {cc.CAGLProgram}
 */
getShaderProgram : function (
)
{
    return cc.CAGLProgram;
},

/**
 * @method premultipliedImageData
 */
premultipliedImageData : function (
)
{
},

/**
 * @method initWithETCFile
 * @param {char} arg0
 * @return {bool}
 */
initWithETCFile : function (
char 
)
{
    return false;
},

/**
 * @method stringForFormat
 * @return {char}
 */
stringForFormat : function (
)
{
    return 0;
},

/**
 * @method setMaxS
 * @param {float} arg0
 */
setMaxS : function (
float 
)
{
},

/**
 * @method setShaderProgram
 * @param {cc.CAGLProgram} arg0
 */
setShaderProgram : function (
caglprogram 
)
{
},

/**
 * @method getMaxS
 * @return {float}
 */
getMaxS : function (
)
{
    return 0;
},

/**
 * @method getAspectRatio
 * @return {float}
 */
getAspectRatio : function (
)
{
    return 0;
},

/**
 * @method releaseData
* @param {unsigned char} char
*/
releaseData : function(
char 
)
{
},

/**
 * @method hasPremultipliedAlpha
 * @return {bool}
 */
hasPremultipliedAlpha : function (
)
{
    return false;
},

/**
 * @method getPixelsWide
 * @return {unsigned int}
 */
getPixelsWide : function (
)
{
    return 0;
},

/**
 * @method getPixelsHigh
 * @return {unsigned int}
 */
getPixelsHigh : function (
)
{
    return 0;
},

/**
 * @method setTexParameters
 * @param {cc._ccTexParams} arg0
 */
setTexParameters : function (
_cctexparams 
)
{
},

/**
 * @method freeName
 */
freeName : function (
)
{
},

/**
 * @method isTiff
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isTiff : function (
char, 
long 
)
{
    return false;
},

/**
 * @method bitsPerPixelForFormat
* @param {cc.CAImage::PixelFormat} pixelformat
* @return {unsigned int|unsigned int}
*/
bitsPerPixelForFormat : function(
pixelformat 
)
{
    return 0;
},

/**
 * @method getName
 * @return {unsigned int}
 */
getName : function (
)
{
    return 0;
},

/**
 * @method getGifImageIndex
 * @return {unsigned int}
 */
getGifImageIndex : function (
)
{
    return 0;
},

/**
 * @method setMaxT
 * @param {float} arg0
 */
setMaxT : function (
float 
)
{
},

/**
 * @method initWithImageFile
 * @param {String} arg0
 * @return {bool}
 */
initWithImageFile : function (
str 
)
{
    return false;
},

/**
 * @method drawInRect
 * @param {rect_object} arg0
 */
drawInRect : function (
drect 
)
{
},

/**
 * @method getGifImageCounts
 * @return {unsigned int}
 */
getGifImageCounts : function (
)
{
    return 0;
},

/**
 * @method getContentSize
 * @return {size_object}
 */
getContentSize : function (
)
{
    return cc.DSize;
},

/**
 * @method getMaxT
 * @return {float}
 */
getMaxT : function (
)
{
    return 0;
},

/**
 * @method initWithImageFileThreadSafe
 * @param {String} arg0
 * @return {bool}
 */
initWithImageFileThreadSafe : function (
str 
)
{
    return false;
},

/**
 * @method setAliasTexParameters
 */
setAliasTexParameters : function (
)
{
},

/**
 * @method isPng
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isPng : function (
char, 
long 
)
{
    return false;
},

/**
 * @method setAntiAliasTexParameters
 */
setAntiAliasTexParameters : function (
)
{
},

/**
 * @method generateMipmap
 */
generateMipmap : function (
)
{
},

/**
 * @method saveToFile
 * @param {String} arg0
 * @param {bool} arg1
 * @return {bool}
 */
saveToFile : function (
str, 
bool 
)
{
    return false;
},

/**
 * @method description
 * @return {char}
 */
description : function (
)
{
    return 0;
},

/**
 * @method isMonochrome
 * @return {bool}
 */
isMonochrome : function (
)
{
    return false;
},

/**
 * @method initWithImageData
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
initWithImageData : function (
char, 
long 
)
{
    return false;
},

/**
 * @method getPixelFormat
 * @return {cc.CAImage::PixelFormat}
 */
getPixelFormat : function (
)
{
    return 0;
},

/**
 * @method hasAlpha
 * @return {bool}
 */
hasAlpha : function (
)
{
    return false;
},

/**
 * @method isEtc
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isEtc : function (
char, 
long 
)
{
    return false;
},

/**
 * @method isWebp
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isWebp : function (
char, 
long 
)
{
    return false;
},

/**
 * @method updateGifImageWithIndex
 * @param {unsigned int} arg0
 */
updateGifImageWithIndex : function (
int 
)
{
},

/**
 * @method copy
 * @return {cc.CAImage}
 */
copy : function (
)
{
    return cc.CAImage;
},

/**
 * @method getImageFileType
 * @return {char}
 */
getImageFileType : function (
)
{
    return 0;
},

/**
 * @method drawAtPoint
 * @param {point_object} arg0
 */
drawAtPoint : function (
dpoint 
)
{
},

/**
 * @method initWithRawData
 * @param {unsigned char} arg0
 * @param {cc.CAImage::PixelFormat} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @return {bool}
 */
initWithRawData : function (
char, 
pixelformat, 
int, 
int 
)
{
    return false;
},

/**
 * @method repremultipliedImageData
 */
repremultipliedImageData : function (
)
{
},

/**
 * @method getData
 * @return {unsigned char}
 */
getData : function (
)
{
    return 0;
},

/**
 * @method detectFormat
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {cc.CAImage::Format}
 */
detectFormat : function (
char, 
long 
)
{
    return 0;
},

/**
 * @method hasMipmaps
 * @return {bool}
 */
hasMipmaps : function (
)
{
    return false;
},

/**
 * @method getDataLenght
 * @return {unsigned long}
 */
getDataLenght : function (
)
{
    return 0;
},

/**
 * @method isJpg
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isJpg : function (
char, 
long 
)
{
    return false;
},

/**
 * @method isPvr
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isPvr : function (
char, 
long 
)
{
    return false;
},

/**
 * @method isGif
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {bool}
 */
isGif : function (
char, 
long 
)
{
    return false;
},

/**
 * @method scaleToNewImageWithImage
* @param {cc.CAImage|cc.CAImage} caimage
* @param {float|size_object} float
* @param {float} float
* @return {cc.CAImage|cc.CAImage}
*/
scaleToNewImageWithImage : function(
caimage,
float,
float 
)
{
    return cc.CAImage;
},

/**
 * @method CC_WHITE_IMAGE
 * @return {cc.CAImage}
 */
CC_WHITE_IMAGE : function (
)
{
    return cc.CAImage;
},

/**
 * @method getFontHeight
 * @param {char} arg0
 * @param {unsigned long} arg1
 * @return {int}
 */
getFontHeight : function (
char, 
long 
)
{
    return 0;
},

/**
 * @method create
 * @param {String} arg0
 * @return {cc.CAImage}
 */
create : function (
str 
)
{
    return cc.CAImage;
},

/**
 * @method createWithRawData
 * @param {unsigned char} arg0
 * @param {cc.CAImage::PixelFormat} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @param {String} arg4
 * @return {cc.CAImage}
 */
createWithRawData : function (
char, 
pixelformat, 
int, 
int, 
str 
)
{
    return cc.CAImage;
},

/**
 * @method cutStringByWidth
 * @param {char} arg0
 * @param {unsigned long} arg1
 * @param {String} arg2
 * @param {int} arg3
 * @param {int} arg4
 * @return {int}
 */
cutStringByWidth : function (
char, 
long, 
str, 
int, 
int 
)
{
    return 0;
},

/**
 * @method createWithImageDataNoCache
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @return {cc.CAImage}
 */
createWithImageDataNoCache : function (
char, 
long 
)
{
    return cc.CAImage;
},

/**
 * @method cutStringByDSize
 * @param {String} arg0
 * @param {size_object} arg1
 * @param {char} arg2
 * @param {unsigned long} arg3
 * @param {bool} arg4
 * @param {int} arg5
 * @param {bool} arg6
 * @param {bool} arg7
 * @return {int}
 */
cutStringByDSize : function (
str, 
dsize, 
char, 
long, 
bool, 
int, 
bool, 
bool 
)
{
    return 0;
},

/**
 * @method createWithImageData
 * @param {unsigned char} arg0
 * @param {unsigned long} arg1
 * @param {String} arg2
 * @return {cc.CAImage}
 */
createWithImageData : function (
char, 
long, 
str 
)
{
    return cc.CAImage;
},

/**
 * @method getStringHeight
 * @param {char} arg0
 * @param {unsigned long} arg1
 * @param {String} arg2
 * @param {int} arg3
 * @param {int} arg4
 * @param {bool} arg5
 * @return {int}
 */
getStringHeight : function (
char, 
long, 
str, 
int, 
int, 
bool 
)
{
    return 0;
},

/**
 * @method getStringWidth
 * @param {char} arg0
 * @param {unsigned long} arg1
 * @param {String} arg2
 * @return {int}
 */
getStringWidth : function (
char, 
long, 
str 
)
{
    return 0;
},

/**
 * @method generateMipmapsWithImage
 * @param {cc.CAImage} arg0
 * @return {cc.CAImage}
 */
generateMipmapsWithImage : function (
caimage 
)
{
    return cc.CAImage;
},

/**
 * @method createWithRawDataNoCache
 * @param {unsigned char} arg0
 * @param {cc.CAImage::PixelFormat} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @return {cc.CAImage}
 */
createWithRawDataNoCache : function (
char, 
pixelformat, 
int, 
int 
)
{
    return cc.CAImage;
},

/**
 * @method reloadAllImages
 */
reloadAllImages : function (
)
{
},

/**
 * @method createWithString
 * @param {char} arg0
 * @param {cc._Color4B} arg1
 * @param {char} arg2
 * @param {float} arg3
 * @param {size_object} arg4
 * @param {cc.CATextAlignment} arg5
 * @param {cc.CAVerticalTextAlignment} arg6
 * @param {bool} arg7
 * @param {int} arg8
 * @param {bool} arg9
 * @param {bool} arg10
 * @param {bool} arg11
 * @param {bool} arg12
 * @return {cc.CAImage}
 */
createWithString : function (
char, 
_color4b, 
char, 
float, 
dsize, 
catextalignment, 
caverticaltextalignment, 
bool, 
int, 
bool, 
bool, 
bool, 
bool 
)
{
    return cc.CAImage;
},

/**
 * @method CAImage
 * @constructor
 */
CAImage : function (
)
{
},

};

/**
 * @class CARGBAProtocol
 */
ca.CARGBAProtocol = {

/**
 * @method setColor
 * @param {cc._Color4B} arg0
 */
setColor : function (
_color4b 
)
{
},

/**
 * @method getDisplayedColor
 * @return {cc._Color4B}
 */
getDisplayedColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method updateDisplayedAlpha
 * @param {float} arg0
 */
updateDisplayedAlpha : function (
float 
)
{
},

/**
 * @method getColor
 * @return {cc._Color4B}
 */
getColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setAlpha
 * @param {float} arg0
 */
setAlpha : function (
float 
)
{
},

/**
 * @method getDisplayedAlpha
 * @return {float}
 */
getDisplayedAlpha : function (
)
{
    return 0;
},

/**
 * @method getAlpha
 * @return {float}
 */
getAlpha : function (
)
{
    return 0;
},

/**
 * @method updateDisplayedColor
 * @param {cc._Color4B} arg0
 */
updateDisplayedColor : function (
_color4b 
)
{
},

};

/**
 * @class CAImageProtocol
 */
ca.CAImageProtocol = {

/**
 * @method getImage
 * @return {cc.CAImage}
 */
getImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getBlendFunc
 * @return {cc._ccBlendFunc}
 */
getBlendFunc : function (
)
{
    return cc._ccBlendFunc;
},

/**
 * @method setImage
 * @param {cc.CAImage} arg0
 */
setImage : function (
caimage 
)
{
},

/**
 * @method setBlendFunc
 * @param {cc._ccBlendFunc} arg0
 */
setBlendFunc : function (
_ccblendfunc 
)
{
},

};

/**
 * @class CCLabelProtocol
 */
ca.CCLabelProtocol = {

/**
 * @method setString
 * @param {String} arg0
 */
setString : function (
str 
)
{
},

/**
 * @method getString
 * @return {String}
 */
getString : function (
)
{
    return ;
},

};

/**
 * @class CATouch
 */
ca.CATouch = {

/**
 * @method getLocation
 * @return {point_object}
 */
getLocation : function (
)
{
    return cc.DPoint;
},

/**
 * @method getDelta
 * @return {point_object}
 */
getDelta : function (
)
{
    return cc.DPoint;
},

/**
 * @method getStartLocation
 * @return {point_object}
 */
getStartLocation : function (
)
{
    return cc.DPoint;
},

/**
 * @method getID
 * @return {int}
 */
getID : function (
)
{
    return 0;
},

/**
 * @method isDelta
 * @return {bool}
 */
isDelta : function (
)
{
    return false;
},

/**
 * @method setTouchInfo
 * @param {int} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
setTouchInfo : function (
int, 
float, 
float 
)
{
},

/**
 * @method getDeltaFromAToZ
 * @return {point_object}
 */
getDeltaFromAToZ : function (
)
{
    return cc.DPoint;
},

/**
 * @method getPreviousLocation
 * @return {point_object}
 */
getPreviousLocation : function (
)
{
    return cc.DPoint;
},

/**
 * @method CATouch
 * @constructor
 */
CATouch : function (
)
{
},

};

/**
 * @class CAEvent
 */
ca.CAEvent = {

/**
 * @method getEventType
 * @return {cc.EventType}
 */
getEventType : function (
)
{
    return 0;
},

/**
 * @method setEventType
 * @param {cc.EventType} arg0
 */
setEventType : function (
eventtype 
)
{
},

/**
 * @method CAEvent
 * @constructor
 */
CAEvent : function (
)
{
},

};

/**
 * @class CAResponder
 */
ca.CAResponder = {

/**
 * @method setReachBoundaryHandOverToSuperview
 * @param {bool} arg0
 */
setReachBoundaryHandOverToSuperview : function (
bool 
)
{
},

/**
 * @method mouseScrollWheel
 * @param {cc.CATouch} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {cc.CAEvent} arg3
 */
mouseScrollWheel : function (
catouch, 
float, 
float, 
caevent 
)
{
},

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setMouseScrollWheelEnabled
 * @param {bool} arg0
 */
setMouseScrollWheelEnabled : function (
bool 
)
{
},

/**
 * @method setMouseMovedEnabled
 * @param {bool} arg0
 */
setMouseMovedEnabled : function (
bool 
)
{
},

/**
 * @method isScrollEnabled
 * @return {bool}
 */
isScrollEnabled : function (
)
{
    return false;
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method isHaveNextResponder
 * @return {bool}
 */
isHaveNextResponder : function (
)
{
    return false;
},

/**
 * @method setHorizontalScrollEnabled
 * @param {bool} arg0
 */
setHorizontalScrollEnabled : function (
bool 
)
{
},

/**
 * @method isVerticalScrollEnabled
 * @return {bool}
 */
isVerticalScrollEnabled : function (
)
{
    return false;
},

/**
 * @method setPriorityScroll
 * @param {bool} arg0
 */
setPriorityScroll : function (
bool 
)
{
},

/**
 * @method isFirstResponder
 * @return {bool}
 */
isFirstResponder : function (
)
{
    return false;
},

/**
 * @method isTouchEnabled
 * @return {bool}
 */
isTouchEnabled : function (
)
{
    return false;
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setTouchEnabled
 * @param {bool} arg0
 */
setTouchEnabled : function (
bool 
)
{
},

/**
 * @method setScrollEnabled
 * @param {bool} arg0
 */
setScrollEnabled : function (
bool 
)
{
},

/**
 * @method getTouches
 * @return {Array}
 */
getTouches : function (
)
{
    return cc.CAVector<cc.CATouch >;
},

/**
 * @method isPriorityScroll
 * @return {bool}
 */
isPriorityScroll : function (
)
{
    return false;
},

/**
 * @method isHorizontalScrollEnabled
 * @return {bool}
 */
isHorizontalScrollEnabled : function (
)
{
    return false;
},

/**
 * @method setVerticalScrollEnabled
 * @param {bool} arg0
 */
setVerticalScrollEnabled : function (
bool 
)
{
},

/**
 * @method setHaveNextResponder
 * @param {bool} arg0
 */
setHaveNextResponder : function (
bool 
)
{
},

/**
 * @method nextResponder
 * @return {cc.CAResponder}
 */
nextResponder : function (
)
{
    return cc.CAResponder;
},

/**
 * @method isReachBoundaryRight
 * @return {bool}
 */
isReachBoundaryRight : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryDown
 * @return {bool}
 */
isReachBoundaryDown : function (
)
{
    return false;
},

/**
 * @method isTouchEventScrollHandOverToSuperview
 * @return {bool}
 */
isTouchEventScrollHandOverToSuperview : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryHandOverToSuperview
 * @return {bool}
 */
isReachBoundaryHandOverToSuperview : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryUp
 * @return {bool}
 */
isReachBoundaryUp : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryLeft
 * @return {bool}
 */
isReachBoundaryLeft : function (
)
{
    return false;
},

/**
 * @method getScrollRunning
 * @return {bool}
 */
getScrollRunning : function (
)
{
    return false;
},

/**
 * @method isMouseScrollWheelEnabled
 * @return {bool}
 */
isMouseScrollWheelEnabled : function (
)
{
    return false;
},

/**
 * @method resignFirstResponder
 * @return {bool}
 */
resignFirstResponder : function (
)
{
    return false;
},

/**
 * @method setTouchEventScrollHandOverToSuperview
 * @param {bool} arg0
 */
setTouchEventScrollHandOverToSuperview : function (
bool 
)
{
},

/**
 * @method isMouseMovedEnabled
 * @return {bool}
 */
isMouseMovedEnabled : function (
)
{
    return false;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method becomeFirstResponder
 * @return {bool}
 */
becomeFirstResponder : function (
)
{
    return false;
},

/**
 * @method getZLevel
 * @return {unsigned long}
 */
getZLevel : function (
)
{
    return 0;
},

/**
 * @method CAResponder
 * @constructor
 */
CAResponder : function (
)
{
},

};

/**
 * @class CAImageCache
 */
ca.CAImageCache = {

/**
 * @method description
 * @return {char}
 */
description : function (
)
{
    return 0;
},

/**
 * @method dumpCachedImageInfo
 */
dumpCachedImageInfo : function (
)
{
},

/**
 * @method removeAllImages
 */
removeAllImages : function (
)
{
},

/**
 * @method removeImage
 * @param {cc.CAImage} arg0
 */
removeImage : function (
caimage 
)
{
},

/**
 * @method removeUnusedImages
 */
removeUnusedImages : function (
)
{
},

/**
 * @method addImage
 * @param {String} arg0
 * @return {cc.CAImage}
 */
addImage : function (
str 
)
{
    return cc.CAImage;
},

/**
 * @method setImageForKey
 * @param {cc.CAImage} arg0
 * @param {String} arg1
 */
setImageForKey : function (
caimage, 
str 
)
{
},

/**
 * @method removeImageForKey
 * @param {String} arg0
 */
removeImageForKey : function (
str 
)
{
},

/**
 * @method reloadImage
 * @param {String} arg0
 * @return {bool}
 */
reloadImage : function (
str 
)
{
    return false;
},

/**
 * @method imageForKey
 * @param {String} arg0
 * @return {cc.CAImage}
 */
imageForKey : function (
str 
)
{
    return cc.CAImage;
},

/**
 * @method sharedImageCache
 * @return {cc.CAImageCache}
 */
sharedImageCache : function (
)
{
    return cc.CAImageCache;
},

/**
 * @method purgeSharedImageCache
 */
purgeSharedImageCache : function (
)
{
},

/**
 * @method reloadAllImages
 */
reloadAllImages : function (
)
{
},

/**
 * @method CAImageCache
 * @constructor
 */
CAImageCache : function (
)
{
},

};

/**
 * @class CAImageAtlas
 */
ca.CAImageAtlas = {

/**
 * @method updateQuad
 * @param {cc._ccV3F_C4B_T2F_Quad} arg0
 * @param {unsigned int} arg1
 */
updateQuad : function (
_ccv3f_c4b_t2f_quad, 
int 
)
{
},

/**
 * @method initWithImage
 * @param {cc.CAImage} arg0
 * @param {unsigned int} arg1
 * @return {bool}
 */
initWithImage : function (
caimage, 
int 
)
{
    return false;
},

/**
 * @method moveQuadsFromIndex
* @param {unsigned int|unsigned int} int
* @param {unsigned int|unsigned int} int
* @param {unsigned int} int
*/
moveQuadsFromIndex : function(
int,
int,
int 
)
{
},

/**
 * @method getSerialNumberOfDraws
 * @return {unsigned long}
 */
getSerialNumberOfDraws : function (
)
{
    return 0;
},

/**
 * @method drawQuads
 */
drawQuads : function (
)
{
},

/**
 * @method fillWithEmptyQuadsFromIndex
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
fillWithEmptyQuadsFromIndex : function (
int, 
int 
)
{
},

/**
 * @method getCapacity
 * @return {unsigned int}
 */
getCapacity : function (
)
{
    return 0;
},

/**
 * @method listenBackToForeground
 * @param {cc.CAObject} arg0
 */
listenBackToForeground : function (
caobject 
)
{
},

/**
 * @method description
 * @return {char}
 */
description : function (
)
{
    return 0;
},

/**
 * @method setQuads
 * @param {cc._ccV3F_C4B_T2F_Quad} arg0
 */
setQuads : function (
_ccv3f_c4b_t2f_quad 
)
{
},

/**
 * @method isDirty
 * @return {bool}
 */
isDirty : function (
)
{
    return false;
},

/**
 * @method insertQuad
 * @param {cc._ccV3F_C4B_T2F_Quad} arg0
 * @param {unsigned int} arg1
 */
insertQuad : function (
_ccv3f_c4b_t2f_quad, 
int 
)
{
},

/**
 * @method getTotalQuads
 * @return {unsigned int}
 */
getTotalQuads : function (
)
{
    return 0;
},

/**
 * @method setDirty
 * @param {bool} arg0
 */
setDirty : function (
bool 
)
{
},

/**
 * @method removeQuadsAtIndex
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
removeQuadsAtIndex : function (
int, 
int 
)
{
},

/**
 * @method removeAllQuads
 */
removeAllQuads : function (
)
{
},

/**
 * @method getImage
 * @return {cc.CAImage}
 */
getImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setImage
 * @param {cc.CAImage} arg0
 */
setImage : function (
caimage 
)
{
},

/**
 * @method getQuads
 * @return {cc._ccV3F_C4B_T2F_Quad}
 */
getQuads : function (
)
{
    return cc._ccV3F_C4B_T2F_Quad;
},

/**
 * @method resizeCapacity
 * @param {unsigned int} arg0
 * @return {bool}
 */
resizeCapacity : function (
int 
)
{
    return false;
},

/**
 * @method increaseTotalQuadsWith
 * @param {unsigned int} arg0
 */
increaseTotalQuadsWith : function (
int 
)
{
},

/**
 * @method drawNumberOfQuads
* @param {unsigned int|unsigned int} int
* @param {unsigned int} int
*/
drawNumberOfQuads : function(
int,
int 
)
{
},

/**
 * @method insertQuads
 * @param {cc._ccV3F_C4B_T2F_Quad} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
insertQuads : function (
_ccv3f_c4b_t2f_quad, 
int, 
int 
)
{
},

/**
 * @method insertQuadFromIndex
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
insertQuadFromIndex : function (
int, 
int 
)
{
},

/**
 * @method removeQuadAtIndex
 * @param {unsigned int} arg0
 */
removeQuadAtIndex : function (
int 
)
{
},

/**
 * @method createWithImage
 * @param {cc.CAImage} arg0
 * @param {unsigned int} arg1
 * @return {cc.CAImageAtlas}
 */
createWithImage : function (
caimage, 
int 
)
{
    return cc.CAImageAtlas;
},

/**
 * @method CAImageAtlas
 * @constructor
 */
CAImageAtlas : function (
)
{
},

};

/**
 * @class CAView
 */
ca.CAView = {

/**
 * @method removeFromSuperview
 */
removeFromSuperview : function (
)
{
},

/**
 * @method getShaderProgram
 * @return {cc.CAGLProgram}
 */
getShaderProgram : function (
)
{
    return cc.CAGLProgram;
},

/**
 * @method setLayout
 * @param {rect_object} arg0
 */
setLayout : function (
drectlayout 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method getSuperview
 * @return {cc.CAView}
 */
getSuperview : function (
)
{
    return cc.CAView;
},

/**
 * @method getSubviewByTag
 * @param {int} arg0
 * @return {cc.CAView}
 */
getSubviewByTag : function (
int 
)
{
    return cc.CAView;
},

/**
 * @method sortAllSubviews
 */
sortAllSubviews : function (
)
{
},

/**
 * @method copy
 * @return {cc.CAView}
 */
copy : function (
)
{
    return cc.CAView;
},

/**
 * @method updateDisplayedAlpha
 * @param {float} arg0
 */
updateDisplayedAlpha : function (
float 
)
{
},

/**
 * @method isFlipX
 * @return {bool}
 */
isFlipX : function (
)
{
    return false;
},

/**
 * @method isFlipY
 * @return {bool}
 */
isFlipY : function (
)
{
    return false;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setRotation
 * @param {int} arg0
 */
setRotation : function (
int 
)
{
},

/**
 * @method setZOrder
 * @param {int} arg0
 */
setZOrder : function (
int 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setScaleY
 * @param {float} arg0
 */
setScaleY : function (
float 
)
{
},

/**
 * @method setScaleX
 * @param {float} arg0
 */
setScaleX : function (
float 
)
{
},

/**
 * @method getAtlasIndex
 * @return {unsigned int}
 */
getAtlasIndex : function (
)
{
    return 0;
},

/**
 * @method removeSubviewByTag
 * @param {int} arg0
 */
removeSubviewByTag : function (
int 
)
{
},

/**
 * @method visitEve
 */
visitEve : function (
)
{
},

/**
 * @method getContentContainer
 * @return {cc.CAContentContainer}
 */
getContentContainer : function (
)
{
    return cc.CAContentContainer;
},

/**
 * @method onExit
 */
onExit : function (
)
{
},

/**
 * @method setSuperview
 * @param {cc.CAView} arg0
 */
setSuperview : function (
caview 
)
{
},

/**
 * @method setRotationX
 * @param {int} arg0
 */
setRotationX : function (
int 
)
{
},

/**
 * @method getAlpha
 * @return {float}
 */
getAlpha : function (
)
{
    return 0;
},

/**
 * @method setSkewX
 * @param {float} arg0
 */
setSkewX : function (
float 
)
{
},

/**
 * @method setSkewY
 * @param {float} arg0
 */
setSkewY : function (
float 
)
{
},

/**
 * @method removeSubview
 * @param {cc.CAView} arg0
 */
removeSubview : function (
caview 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method getLayout
 * @return {rect_object}
 */
getLayout : function (
)
{
    return cc.DRectLayout;
},

/**
 * @method setContentContainer
 * @param {cc.CAContentContainer} arg0
 */
setContentContainer : function (
cacontentcontainer 
)
{
},

/**
 * @method removeAllSubviews
 */
removeAllSubviews : function (
)
{
},

/**
 * @method convertTouchToNodeSpace
 * @param {cc.CATouch} arg0
 * @return {point_object}
 */
convertTouchToNodeSpace : function (
catouch 
)
{
    return cc.DPoint;
},

/**
 * @method reViewlayout
 * @param {size_object} arg0
 */
reViewlayout : function (
dsize 
)
{
},

/**
 * @method getSubviewByTextTag
 * @param {String} arg0
 * @return {cc.CAView}
 */
getSubviewByTextTag : function (
str 
)
{
    return cc.CAView;
},

/**
 * @method removeSubviewByTextTag
 * @param {String} arg0
 */
removeSubviewByTextTag : function (
str 
)
{
},

/**
 * @method getFrame
 * @return {rect_object}
 */
getFrame : function (
)
{
    return cc.DRect;
},

/**
 * @method getImageRect
 * @return {rect_object}
 */
getImageRect : function (
)
{
    return cc.DRect;
},

/**
 * @method initWithLayout
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithLayout : function (
drectlayout 
)
{
    return false;
},

/**
 * @method setBatch
 * @param {cc.CABatchView} arg0
 */
setBatch : function (
cabatchview 
)
{
},

/**
 * @method nodeToParentTransform
 * @return {cc.CATransformation}
 */
nodeToParentTransform : function (
)
{
    return cc.CATransformation;
},

/**
 * @method getLayoutType
 * @return {int}
 */
getLayoutType : function (
)
{
    return 0;
},

/**
 * @method nextResponder
 * @return {cc.CAResponder}
 */
nextResponder : function (
)
{
    return cc.CAResponder;
},

/**
 * @method getFrameOrigin
 * @return {point_object}
 */
getFrameOrigin : function (
)
{
    return cc.DPoint;
},

/**
 * @method setDirty
 * @param {bool} arg0
 */
setDirty : function (
bool 
)
{
},

/**
 * @method setGLServerState
 * @param {cc.ccGLServerState} arg0
 */
setGLServerState : function (
ccglserverstate 
)
{
},

/**
 * @method isImageRectRotated
 * @return {bool}
 */
isImageRectRotated : function (
)
{
    return false;
},

/**
 * @method getDisplayedColor
 * @return {cc._Color4B}
 */
getDisplayedColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getAnchorPoint
 * @return {point_object}
 */
getAnchorPoint : function (
)
{
    return cc.DPoint;
},

/**
 * @method updateTransform
 */
updateTransform : function (
)
{
},

/**
 * @method getAnchorPointInPoints
 * @return {point_object}
 */
getAnchorPointInPoints : function (
)
{
    return cc.DPoint;
},

/**
 * @method onEnter
 */
onEnter : function (
)
{
},

/**
 * @method setAtlasIndex
 * @param {unsigned int} arg0
 */
setAtlasIndex : function (
int 
)
{
},

/**
 * @method getCenterOrigin
 * @return {point_object}
 */
getCenterOrigin : function (
)
{
    return cc.DPoint;
},

/**
 * @method setShaderProgram
 * @param {cc.CAGLProgram} arg0
 */
setShaderProgram : function (
caglprogram 
)
{
},

/**
 * @method initWithCenter
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithCenter : function (
drect 
)
{
    return false;
},

/**
 * @method getRotation
 * @return {int}
 */
getRotation : function (
)
{
    return 0;
},

/**
 * @method getZOrder
 * @return {int}
 */
getZOrder : function (
)
{
    return 0;
},

/**
 * @method getSubviewsCount
 * @return {unsigned int}
 */
getSubviewsCount : function (
)
{
    return 0;
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method transform
 */
transform : function (
)
{
},

/**
 * @method setVertexZ
 * @param {float} arg0
 */
setVertexZ : function (
float 
)
{
},

/**
 * @method getSkewX
 * @return {float}
 */
getSkewX : function (
)
{
    return 0;
},

/**
 * @method getSkewY
 * @return {float}
 */
getSkewY : function (
)
{
    return 0;
},

/**
 * @method setRotationY
 * @param {int} arg0
 */
setRotationY : function (
int 
)
{
},

/**
 * @method insertSubview
 * @param {cc.CAView} arg0
 * @param {int} arg1
 */
insertSubview : function (
caview, 
int 
)
{
},

/**
 * @method setFlipY
 * @param {bool} arg0
 */
setFlipY : function (
bool 
)
{
},

/**
 * @method setFlipX
 * @param {bool} arg0
 */
setFlipX : function (
bool 
)
{
},

/**
 * @method getCenter
 * @return {rect_object}
 */
getCenter : function (
)
{
    return cc.DRect;
},

/**
 * @method isDirty
 * @return {bool}
 */
isDirty : function (
)
{
    return false;
},

/**
 * @method getRotationX
 * @return {int}
 */
getRotationX : function (
)
{
    return 0;
},

/**
 * @method getOrderOfArrival
 * @return {unsigned int}
 */
getOrderOfArrival : function (
)
{
    return 0;
},

/**
 * @method getRotationY
 * @return {int}
 */
getRotationY : function (
)
{
    return 0;
},

/**
 * @method isRunning
 * @return {bool}
 */
isRunning : function (
)
{
    return false;
},

/**
 * @method setBlendFunc
 * @param {cc._ccBlendFunc} arg0
 */
setBlendFunc : function (
_ccblendfunc 
)
{
},

/**
 * @method getQuad
 * @return {cc._ccV3F_C4B_T2F_Quad}
 */
getQuad : function (
)
{
    return cc._ccV3F_C4B_T2F_Quad;
},

/**
 * @method setVisible
 * @param {bool} arg0
 */
setVisible : function (
bool 
)
{
},

/**
 * @method reorderSubview
 * @param {cc.CAView} arg0
 * @param {int} arg1
 */
reorderSubview : function (
caview, 
int 
)
{
},

/**
 * @method getVertexZ
 * @return {float}
 */
getVertexZ : function (
)
{
    return 0;
},

/**
 * @method _setZOrder
 * @param {int} arg0
 */
_setZOrder : function (
int 
)
{
},

/**
 * @method setScale
* @param {float|float} float
* @param {float} float
*/
setScale : function(
float,
float 
)
{
},

/**
 * @method isDisplayRange
 * @return {bool}
 */
isDisplayRange : function (
)
{
    return false;
},

/**
 * @method getDisplayedAlpha
 * @return {float}
 */
getDisplayedAlpha : function (
)
{
    return 0;
},

/**
 * @method setOrderOfArrival
 * @param {unsigned int} arg0
 */
setOrderOfArrival : function (
int 
)
{
},

/**
 * @method getImageAtlas
 * @return {cc.CAImageAtlas}
 */
getImageAtlas : function (
)
{
    return cc.CAImageAtlas;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method getScaleY
 * @return {float}
 */
getScaleY : function (
)
{
    return 0;
},

/**
 * @method getScaleX
 * @return {float}
 */
getScaleX : function (
)
{
    return 0;
},

/**
 * @method addSubview
 * @param {cc.CAView} arg0
 */
addSubview : function (
caview 
)
{
},

/**
 * @method initWithFrame
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithFrame : function (
drect 
)
{
    return false;
},

/**
 * @method setDisplayRange
 * @param {bool} arg0
 */
setDisplayRange : function (
bool 
)
{
},

/**
 * @method setAlpha
 * @param {float} arg0
 */
setAlpha : function (
float 
)
{
},

/**
 * @method getSubviews
 * @return {Array}
 */
getSubviews : function (
)
{
    return cc.CAVector<cc.CAView >;
},

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method getBlendFunc
 * @return {cc._ccBlendFunc}
 */
getBlendFunc : function (
)
{
    return cc._ccBlendFunc;
},

/**
 * @method transformAncestors
 */
transformAncestors : function (
)
{
},

/**
 * @method description
 * @return {char}
 */
description : function (
)
{
    return 0;
},

/**
 * @method convertTouchToNodeSpaceAR
 * @param {cc.CATouch} arg0
 * @return {point_object}
 */
convertTouchToNodeSpaceAR : function (
catouch 
)
{
    return cc.DPoint;
},

/**
 * @method isVisible
 * @return {bool}
 */
isVisible : function (
)
{
    return false;
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method getBounds
 * @return {rect_object}
 */
getBounds : function (
)
{
    return cc.DRect;
},

/**
 * @method getScale
 * @return {float}
 */
getScale : function (
)
{
    return 0;
},

/**
 * @method setImageAtlas
 * @param {cc.CAImageAtlas} arg0
 */
setImageAtlas : function (
caimageatlas 
)
{
},

/**
 * @method initWithColor
 * @param {cc._Color4B} arg0
 * @return {bool}
 */
initWithColor : function (
_color4b 
)
{
    return false;
},

/**
 * @method getCamera
 * @return {cc.CACamera}
 */
getCamera : function (
)
{
    return cc.CACamera;
},

/**
 * @method getBatch
 * @return {cc.CABatchView}
 */
getBatch : function (
)
{
    return cc.CABatchView;
},

/**
 * @method getColor
 * @return {cc._Color4B}
 */
getColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getGLServerState
 * @return {cc.ccGLServerState}
 */
getGLServerState : function (
)
{
    return 0;
},

/**
 * @method create
 * @return {cc.CAView}
 */
create : function (
)
{
    return cc.CAView;
},

/**
 * @method createWithFrame
* @param {rect_object|rect_object} drect
* @param {cc._Color4B} _color4b
* @return {cc.CAView|cc.CAView}
*/
createWithFrame : function(
drect,
_color4b 
)
{
    return cc.CAView;
},

/**
 * @method createWithColor
 * @param {cc._Color4B} arg0
 * @return {cc.CAView}
 */
createWithColor : function (
_color4b 
)
{
    return cc.CAView;
},

/**
 * @method createWithLayout
* @param {rect_object|rect_object} drectlayout
* @param {cc._Color4B} _color4b
* @return {cc.CAView|cc.CAView}
*/
createWithLayout : function(
drectlayout,
_color4b 
)
{
    return cc.CAView;
},

/**
 * @method createWithCenter
* @param {rect_object|rect_object} drect
* @param {cc._Color4B} _color4b
* @return {cc.CAView|cc.CAView}
*/
createWithCenter : function(
drect,
_color4b 
)
{
    return cc.CAView;
},

/**
 * @method CAView
 * @constructor
 */
CAView : function (
)
{
},

};

/**
 * @class CAImageView
 */
ca.CAImageView = {

/**
 * @method isAnimating
 * @return {bool}
 */
isAnimating : function (
)
{
    return false;
},

/**
 * @method getAnimationRepeatCount
 * @return {unsigned int}
 */
getAnimationRepeatCount : function (
)
{
    return 0;
},

/**
 * @method stopAnimating
 */
stopAnimating : function (
)
{
},

/**
 * @method setImage
 * @param {cc.CAImage} arg0
 */
setImage : function (
caimage 
)
{
},

/**
 * @method copy
 * @return {cc.CAView}
 */
copy : function (
)
{
    return cc.CAView;
},

/**
 * @method initWithImage
 * @param {cc.CAImage} arg0
 * @return {bool}
 */
initWithImage : function (
caimage 
)
{
    return false;
},

/**
 * @method setAnimationImages
 * @param {Array} arg0
 */
setAnimationImages : function (
array 
)
{
},

/**
 * @method setImageAsyncWithFile
 * @param {String} arg0
 */
setImageAsyncWithFile : function (
str 
)
{
},

/**
 * @method getImageViewScaleType
 * @return {cc.CAImageViewScaleType}
 */
getImageViewScaleType : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setImageViewScaleType
 * @param {cc.CAImageViewScaleType} arg0
 */
setImageViewScaleType : function (
caimageviewscaletype 
)
{
},

/**
 * @method getAnimationImages
 * @return {Array}
 */
getAnimationImages : function (
)
{
    return cc.CAVector<cc.CAImage >;
},

/**
 * @method getAnimationDuration
 * @return {float}
 */
getAnimationDuration : function (
)
{
    return 0;
},

/**
 * @method startAnimating
 */
startAnimating : function (
)
{
},

/**
 * @method getImage
 * @return {cc.CAImage}
 */
getImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setAnimationDuration
 * @param {float} arg0
 */
setAnimationDuration : function (
float 
)
{
},

/**
 * @method setAnimationRepeatCount
 * @param {unsigned int} arg0
 */
setAnimationRepeatCount : function (
int 
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAImageView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAImageView;
},

/**
 * @method create
 * @return {cc.CAImageView}
 */
create : function (
)
{
    return cc.CAImageView;
},

/**
 * @method createWithImage
 * @param {cc.CAImage} arg0
 * @return {cc.CAImageView}
 */
createWithImage : function (
caimage 
)
{
    return cc.CAImageView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAImageView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAImageView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAImageView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAImageView;
},

/**
 * @method CAImageView
 * @constructor
 */
CAImageView : function (
)
{
},

};

/**
 * @class CAScale9ImageView
 */
ca.CAScale9ImageView = {

/**
 * @method setInsetBottom
 * @param {float} arg0
 */
setInsetBottom : function (
float 
)
{
},

/**
 * @method getOriginalSize
 * @return {size_object}
 */
getOriginalSize : function (
)
{
    return cc.DSize;
},

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method setColor
 * @param {cc._Color4B} arg0
 */
setColor : function (
_color4b 
)
{
},

/**
 * @method setImage
 * @param {cc.CAImage} arg0
 */
setImage : function (
caimage 
)
{
},

/**
 * @method initWithImage
 * @param {cc.CAImage} arg0
 * @return {bool}
 */
initWithImage : function (
caimage 
)
{
    return false;
},

/**
 * @method getInsetTop
 * @return {float}
 */
getInsetTop : function (
)
{
    return 0;
},

/**
 * @method setInsetLeft
 * @param {float} arg0
 */
setInsetLeft : function (
float 
)
{
},

/**
 * @method setCapInsets
 * @param {rect_object} arg0
 */
setCapInsets : function (
drect 
)
{
},

/**
 * @method getCapInsets
 * @return {rect_object}
 */
getCapInsets : function (
)
{
    return cc.DRect;
},

/**
 * @method setInsetTop
 * @param {float} arg0
 */
setInsetTop : function (
float 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setAlpha
 * @param {float} arg0
 */
setAlpha : function (
float 
)
{
},

/**
 * @method getColor
 * @return {cc._Color4B}
 */
getColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getInsetLeft
 * @return {float}
 */
getInsetLeft : function (
)
{
    return 0;
},

/**
 * @method getInsetBottom
 * @return {float}
 */
getInsetBottom : function (
)
{
    return 0;
},

/**
 * @method setInsetRight
 * @param {float} arg0
 */
setInsetRight : function (
float 
)
{
},

/**
 * @method copy
 * @return {cc.CAView}
 */
copy : function (
)
{
    return cc.CAView;
},

/**
 * @method getInsetRight
 * @return {float}
 */
getInsetRight : function (
)
{
    return 0;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAScale9ImageView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAScale9ImageView;
},

/**
 * @method create
 * @return {cc.CAScale9ImageView}
 */
create : function (
)
{
    return cc.CAScale9ImageView;
},

/**
 * @method createWithImage
 * @param {cc.CAImage} arg0
 * @return {cc.CAScale9ImageView}
 */
createWithImage : function (
caimage 
)
{
    return cc.CAScale9ImageView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAScale9ImageView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAScale9ImageView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAScale9ImageView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAScale9ImageView;
},

/**
 * @method CAScale9ImageView
 * @constructor
 */
CAScale9ImageView : function (
)
{
},

};

/**
 * @class CAViewAnimationModule
 */
ca.CAViewAnimationModule = {

/**
 * @method setAlreadyRunning
 * @param {bool} arg0
 */
setAlreadyRunning : function (
bool 
)
{
},

/**
 * @method isAlreadyRunning
 * @return {bool}
 */
isAlreadyRunning : function (
)
{
    return false;
},

/**
 * @method CAViewAnimationModule
 * @constructor
 */
CAViewAnimationModule : function (
)
{
},

};

/**
 * @class CAViewAnimation
 */
ca.CAViewAnimation = {

/**
 * @method setAnimationsEnabled
 * @param {bool} arg0
 */
setAnimationsEnabled : function (
bool 
)
{
},

/**
 * @method beginAnimations
 * @param {String} arg0
 * @param {void} arg1
 */
beginAnimations : function (
str, 
void 
)
{
},

/**
 * @method areBeginAnimationsWithID
 * @param {String} arg0
 * @return {bool}
 */
areBeginAnimationsWithID : function (
str 
)
{
    return false;
},

/**
 * @method setAnimationDelay
 * @param {float} arg0
 */
setAnimationDelay : function (
float 
)
{
},

/**
 * @method areAnimationsEnabled
 * @return {bool}
 */
areAnimationsEnabled : function (
)
{
    return false;
},

/**
 * @method removeAnimationsWithView
 * @param {cc.CAView} arg0
 */
removeAnimationsWithView : function (
caview 
)
{
},

/**
 * @method setAnimationDuration
 * @param {float} arg0
 */
setAnimationDuration : function (
float 
)
{
},

/**
 * @method removeAnimations
 * @param {String} arg0
 */
removeAnimations : function (
str 
)
{
},

/**
 * @method commitAnimations
 */
commitAnimations : function (
)
{
},

/**
 * @method setAnimationRepeatAutoreverses
 * @param {bool} arg0
 */
setAnimationRepeatAutoreverses : function (
bool 
)
{
},

/**
 * @method setAnimationCurve
 * @param {cc.CAViewAnimationCurve} arg0
 */
setAnimationCurve : function (
caviewanimationcurve 
)
{
},

/**
 * @method areBeginAnimations
 * @return {bool}
 */
areBeginAnimations : function (
)
{
    return false;
},

/**
 * @method setAnimationRepeatCount
 * @param {float} arg0
 */
setAnimationRepeatCount : function (
float 
)
{
},

};

/**
 * @class CAControl
 */
ca.CAControl = {

/**
 * @method setControlStateSelected
 */
setControlStateSelected : function (
)
{
},

/**
 * @method setControlStateHighlighted
 */
setControlStateHighlighted : function (
)
{
},

/**
 * @method getControlState
 * @return {cc.CAControlState}
 */
getControlState : function (
)
{
    return 0;
},

/**
 * @method setControlStateNormal
 */
setControlStateNormal : function (
)
{
},

/**
 * @method setControlState
 * @param {cc.CAControlState} arg0
 */
setControlState : function (
cacontrolstate 
)
{
},

/**
 * @method setControlStateLocked
 * @param {bool} arg0
 */
setControlStateLocked : function (
bool 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getControlStateLocked
 * @return {bool}
 */
getControlStateLocked : function (
)
{
    return false;
},

/**
 * @method setControlStateDisabled
 */
setControlStateDisabled : function (
)
{
},

/**
 * @method CAControl
 * @constructor
 */
CAControl : function (
)
{
},

};

/**
 * @class CATouchView
 */
ca.CATouchView = {

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method ccTouchPress
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchPress : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method CATouchView
 * @constructor
 */
CATouchView : function (
)
{
},

};

/**
 * @class CATextToolBarView
 */
ca.CATextToolBarView = {

/**
 * @method show
 */
show : function (
)
{
},

/**
 * @method isTextToolBarShow
 * @return {bool}
 */
isTextToolBarShow : function (
)
{
    return false;
},

/**
 * @method create
 * @return {cc.CATextToolBarView}
 */
create : function (
)
{
    return cc.CATextToolBarView;
},

/**
 * @method hideTextToolBar
 */
hideTextToolBar : function (
)
{
},

/**
 * @method CATextToolBarView
 * @constructor
 */
CATextToolBarView : function (
)
{
},

};

/**
 * @class CATextResponder
 */
ca.CATextResponder = {

/**
 * @method resignAllResponder
 * @param {cc.CATextResponder} arg0
 */
resignAllResponder : function (
catextresponder 
)
{
},

/**
 * @method resignResponder
 */
resignResponder : function (
)
{
},

/**
 * @method CATextResponder
 * @constructor
 */
CATextResponder : function (
)
{
},

};

/**
 * @class CALabel
 */
ca.CALabel = {

/**
 * @method setTextAlignment
 * @param {cc.CATextAlignment} arg0
 */
setTextAlignment : function (
catextalignment 
)
{
},

/**
 * @method setDimensions
 * @param {size_object} arg0
 */
setDimensions : function (
dsize 
)
{
},

/**
 * @method getFontSize
 * @return {unsigned int}
 */
getFontSize : function (
)
{
    return 0;
},

/**
 * @method getText
 * @return {String}
 */
getText : function (
)
{
    return ;
},

/**
 * @method isBold
 * @return {bool}
 */
isBold : function (
)
{
    return false;
},

/**
 * @method setUnderLine
 * @param {bool} arg0
 */
setUnderLine : function (
bool 
)
{
},

/**
 * @method isDeleteLine
 * @return {bool}
 */
isDeleteLine : function (
)
{
    return false;
},

/**
 * @method setFontName
 * @param {String} arg0
 */
setFontName : function (
str 
)
{
},

/**
 * @method isItalics
 * @return {bool}
 */
isItalics : function (
)
{
    return false;
},

/**
 * @method setLineSpacing
 * @param {int} arg0
 */
setLineSpacing : function (
int 
)
{
},

/**
 * @method setBold
 * @param {bool} arg0
 */
setBold : function (
bool 
)
{
},

/**
 * @method isUnderLine
 * @return {bool}
 */
isUnderLine : function (
)
{
    return false;
},

/**
 * @method sizeToFit
 */
sizeToFit : function (
)
{
},

/**
 * @method getLabelSize
 * @return {size_object}
 */
getLabelSize : function (
)
{
    return cc.DSize;
},

/**
 * @method visitEve
 */
visitEve : function (
)
{
},

/**
 * @method getColor
 * @return {cc._Color4B}
 */
getColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getEnableCopy
 * @return {bool}
 */
getEnableCopy : function (
)
{
    return false;
},

/**
 * @method getFontName
 * @return {String}
 */
getFontName : function (
)
{
    return ;
},

/**
 * @method getLineSpacing
 * @return {int}
 */
getLineSpacing : function (
)
{
    return 0;
},

/**
 * @method setVerticalTextAlignmet
 * @param {cc.CAVerticalTextAlignment} arg0
 */
setVerticalTextAlignmet : function (
caverticaltextalignment 
)
{
},

/**
 * @method getFont
 * @return {cc.CAFont}
 */
getFont : function (
)
{
    return cc.CAFont;
},

/**
 * @method getVerticalTextAlignmet
 * @return {cc.CAVerticalTextAlignment}
 */
getVerticalTextAlignmet : function (
)
{
    return 0;
},

/**
 * @method setItalics
 * @param {bool} arg0
 */
setItalics : function (
bool 
)
{
},

/**
 * @method setWordWrap
 * @param {bool} arg0
 */
setWordWrap : function (
bool 
)
{
},

/**
 * @method getDimensions
 * @return {size_object}
 */
getDimensions : function (
)
{
    return cc.DSize;
},

/**
 * @method getNumberOfLine
 * @return {unsigned int}
 */
getNumberOfLine : function (
)
{
    return 0;
},

/**
 * @method setFontSize
 * @param {unsigned int} arg0
 */
setFontSize : function (
int 
)
{
},

/**
 * @method isWordWrap
 * @return {bool}
 */
isWordWrap : function (
)
{
    return false;
},

/**
 * @method setColor
 * @param {cc._Color4B} arg0
 */
setColor : function (
_color4b 
)
{
},

/**
 * @method setDeleteLine
 * @param {bool} arg0
 */
setDeleteLine : function (
bool 
)
{
},

/**
 * @method unsizeToFit
 */
unsizeToFit : function (
)
{
},

/**
 * @method setText
 * @param {String} arg0
 */
setText : function (
str 
)
{
},

/**
 * @method setEnableCopy
 * @param {bool} arg0
 */
setEnableCopy : function (
bool 
)
{
},

/**
 * @method getTextAlignment
 * @return {cc.CATextAlignment}
 */
getTextAlignment : function (
)
{
    return 0;
},

/**
 * @method setNumberOfLine
 * @param {unsigned int} arg0
 */
setNumberOfLine : function (
int 
)
{
},

/**
 * @method setFont
 * @param {cc.CAFont} arg0
 */
setFont : function (
cafont 
)
{
},

/**
 * @method create
 * @return {cc.CALabel}
 */
create : function (
)
{
    return cc.CALabel;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CALabel}
 */
createWithFrame : function (
drect 
)
{
    return cc.CALabel;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CALabel}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CALabel;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CALabel}
 */
createWithCenter : function (
drect 
)
{
    return cc.CALabel;
},

/**
 * @method CALabel
 * @constructor
 */
CALabel : function (
)
{
},

};

/**
 * @class CAApplication
 */
ca.CAApplication = {

/**
 * @method setDefaultValues
 */
setDefaultValues : function (
)
{
},

/**
 * @method getDeltaTime
 * @return {float}
 */
getDeltaTime : function (
)
{
    return 0;
},

/**
 * @method setGLDefaultValues
 */
setGLDefaultValues : function (
)
{
},

/**
 * @method setAlphaBlending
 * @param {bool} arg0
 */
setAlphaBlending : function (
bool 
)
{
},

/**
 * @method updateDraw
 */
updateDraw : function (
)
{
},

/**
 * @method getKeypadDispatcher
 * @return {cc.CAKeypadDispatcher}
 */
getKeypadDispatcher : function (
)
{
    return cc.CAKeypadDispatcher;
},

/**
 * @method getWinSize
 * @return {size_object}
 */
getWinSize : function (
)
{
    return cc.DSize;
},

/**
 * @method end
 */
end : function (
)
{
},

/**
 * @method runWindow
 * @param {cc.CAWindow} arg0
 */
runWindow : function (
cawindow 
)
{
},

/**
 * @method getAnimationInterval
 * @return {double}
 */
getAnimationInterval : function (
)
{
    return 0;
},

/**
 * @method getVisibleOrigin
 * @return {point_object}
 */
getVisibleOrigin : function (
)
{
    return cc.DPoint;
},

/**
 * @method mainLoop
 */
mainLoop : function (
)
{
},

/**
 * @method isDrawing
 * @return {bool}
 */
isDrawing : function (
)
{
    return false;
},

/**
 * @method setDepthTest
 * @param {bool} arg0
 */
setDepthTest : function (
bool 
)
{
},

/**
 * @method getSecondsPerFrame
 * @return {float}
 */
getSecondsPerFrame : function (
)
{
    return 0;
},

/**
 * @method convertToUI
 * @param {point_object} arg0
 * @return {point_object}
 */
convertToUI : function (
dpoint 
)
{
    return cc.DPoint;
},

/**
 * @method setAccelerometer
 * @param {cc.CCAccelerometer} arg0
 */
setAccelerometer : function (
ccaccelerometer 
)
{
},

/**
 * @method getStatusBarStyle
 * @return {cc.CAStatusBarStyle}
 */
getStatusBarStyle : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method reshapeProjection
 * @param {size_object} arg0
 */
reshapeProjection : function (
dsize 
)
{
},

/**
 * @method startAnimation
 */
startAnimation : function (
)
{
},

/**
 * @method getAdaptationRatio
 * @return {float}
 */
getAdaptationRatio : function (
)
{
    return 0;
},

/**
 * @method getOpenGLView
 * @return {cc.CCEGLView}
 */
getOpenGLView : function (
)
{
    return cc.CCEGLView;
},

/**
 * @method setViewport
 */
setViewport : function (
)
{
},

/**
 * @method stopAnimation
 */
stopAnimation : function (
)
{
},

/**
 * @method getNumberOfDraws
 * @return {unsigned long}
 */
getNumberOfDraws : function (
)
{
    return 0;
},

/**
 * @method setKeypadDispatcher
 * @param {cc.CAKeypadDispatcher} arg0
 */
setKeypadDispatcher : function (
cakeypaddispatcher 
)
{
},

/**
 * @method run
 * @param {float} arg0
 */
run : function (
float 
)
{
},

/**
 * @method getProjection
 * @return {cc.CAApplication::Projection}
 */
getProjection : function (
)
{
    return 0;
},

/**
 * @method resume
 */
resume : function (
)
{
},

/**
 * @method isStatusBarHidden
 * @return {bool}
 */
isStatusBarHidden : function (
)
{
    return false;
},

/**
 * @method isNextDeltaTimeZero
 * @return {bool}
 */
isNextDeltaTimeZero : function (
)
{
    return false;
},

/**
 * @method getCurrentNumberOfDraws
 * @return {unsigned long}
 */
getCurrentNumberOfDraws : function (
)
{
    return 0;
},

/**
 * @method setStatusBarStyle
 * @param {cc.CAStatusBarStyle} arg0
 */
setStatusBarStyle : function (
castatusbarstyle 
)
{
},

/**
 * @method setOpenGLView
 * @param {cc.CCEGLView} arg0
 */
setOpenGLView : function (
cceglview 
)
{
},

/**
 * @method convertToGL
 * @param {point_object} arg0
 * @return {point_object}
 */
convertToGL : function (
dpoint 
)
{
    return cc.DPoint;
},

/**
 * @method purgeCachedData
 */
purgeCachedData : function (
)
{
},

/**
 * @method getTotalFrames
 * @return {unsigned int}
 */
getTotalFrames : function (
)
{
    return 0;
},

/**
 * @method pause
 */
pause : function (
)
{
},

/**
 * @method drawScene
 */
drawScene : function (
)
{
},

/**
 * @method setTouchDispatcher
 * @param {cc.CATouchDispatcher} arg0
 */
setTouchDispatcher : function (
catouchdispatcher 
)
{
},

/**
 * @method isDisplayStats
 * @return {bool}
 */
isDisplayStats : function (
)
{
    return false;
},

/**
 * @method setProjection
 * @param {cc.CAApplication::Projection} arg0
 */
setProjection : function (
projection 
)
{
},

/**
 * @method getTouchDispatcher
 * @return {cc.CATouchDispatcher}
 */
getTouchDispatcher : function (
)
{
    return cc.CATouchDispatcher;
},

/**
 * @method getZEye
 * @return {float}
 */
getZEye : function (
)
{
    return 0;
},

/**
 * @method setNextDeltaTimeZero
 * @param {bool} arg0
 */
setNextDeltaTimeZero : function (
bool 
)
{
},

/**
 * @method getAccelerometer
 * @return {cc.CCAccelerometer}
 */
getAccelerometer : function (
)
{
    return cc.CCAccelerometer;
},

/**
 * @method getVisibleSize
 * @return {size_object}
 */
getVisibleSize : function (
)
{
    return cc.DSize;
},

/**
 * @method setNotificationView
 * @param {cc.CAView} arg0
 */
setNotificationView : function (
caview 
)
{
},

/**
 * @method setAnimationInterval
 * @param {double} arg0
 */
setAnimationInterval : function (
double 
)
{
},

/**
 * @method getClassTypeInfo
 * @return {long}
 */
getClassTypeInfo : function (
)
{
    return 0;
},

/**
 * @method getNotificationView
 * @return {cc.CAView}
 */
getNotificationView : function (
)
{
    return cc.CAView;
},

/**
 * @method isPaused
 * @return {bool}
 */
isPaused : function (
)
{
    return false;
},

/**
 * @method setDisplayStats
 * @param {bool} arg0
 */
setDisplayStats : function (
bool 
)
{
},

/**
 * @method getRootWindow
 * @return {cc.CAWindow}
 */
getRootWindow : function (
)
{
    return cc.CAWindow;
},

/**
 * @method getApplication
 * @return {cc.CAApplication}
 */
getApplication : function (
)
{
    return cc.CAApplication;
},

/**
 * @method CAApplication
 * @constructor
 */
CAApplication : function (
)
{
},

};

/**
 * @class CCDisplayLinkDirector
 */
ca.CCDisplayLinkDirector = {

/**
 * @method startAnimation
 */
startAnimation : function (
)
{
},

/**
 * @method mainLoop
 */
mainLoop : function (
)
{
},

/**
 * @method stopAnimation
 */
stopAnimation : function (
)
{
},

/**
 * @method setAnimationInterval
 * @param {double} arg0
 */
setAnimationInterval : function (
double 
)
{
},

/**
 * @method CCDisplayLinkDirector
 * @constructor
 */
CCDisplayLinkDirector : function (
)
{
},

};

/**
 * @class CAAutoreleasePool
 */
ca.CAAutoreleasePool = {

/**
 * @method addObject
 * @param {cc.CAObject} arg0
 */
addObject : function (
caobject 
)
{
},

/**
 * @method clear
 */
clear : function (
)
{
},

/**
 * @method removeObject
 * @param {cc.CAObject} arg0
 */
removeObject : function (
caobject 
)
{
},

/**
 * @method CAAutoreleasePool
 * @constructor
 */
CAAutoreleasePool : function (
)
{
},

};

/**
 * @class CAPoolManager
 */
ca.CAPoolManager = {

/**
 * @method addObject
 * @param {cc.CAObject} arg0
 */
addObject : function (
caobject 
)
{
},

/**
 * @method finalize
 */
finalize : function (
)
{
},

/**
 * @method pop
 */
pop : function (
)
{
},

/**
 * @method push
 */
push : function (
)
{
},

/**
 * @method removeObject
 * @param {cc.CAObject} arg0
 */
removeObject : function (
caobject 
)
{
},

/**
 * @method purgePoolManager
 */
purgePoolManager : function (
)
{
},

/**
 * @method sharedPoolManager
 * @return {cc.CAPoolManager}
 */
sharedPoolManager : function (
)
{
    return cc.CAPoolManager;
},

/**
 * @method CAPoolManager
 * @constructor
 */
CAPoolManager : function (
)
{
},

};

/**
 * @class CACamera
 */
ca.CACamera = {

/**
 * @method locate
 */
locate : function (
)
{
},

/**
 * @method restore
 */
restore : function (
)
{
},

/**
 * @method setUpXYZ
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
setUpXYZ : function (
float, 
float, 
float 
)
{
},

/**
 * @method description
 * @return {char}
 */
description : function (
)
{
    return 0;
},

/**
 * @method setCenterXYZ
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
setCenterXYZ : function (
float, 
float, 
float 
)
{
},

/**
 * @method setEyeXYZ
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
setEyeXYZ : function (
float, 
float, 
float 
)
{
},

/**
 * @method getCenterXYZ
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
getCenterXYZ : function (
float, 
float, 
float 
)
{
},

/**
 * @method getEyeXYZ
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
getEyeXYZ : function (
float, 
float, 
float 
)
{
},

/**
 * @method isDirty
 * @return {bool}
 */
isDirty : function (
)
{
    return false;
},

/**
 * @method init
 */
init : function (
)
{
},

/**
 * @method getUpXYZ
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 */
getUpXYZ : function (
float, 
float, 
float 
)
{
},

/**
 * @method setDirty
 * @param {bool} arg0
 */
setDirty : function (
bool 
)
{
},

/**
 * @method getZEye
 * @return {float}
 */
getZEye : function (
)
{
    return 0;
},

/**
 * @method CACamera
 * @constructor
 */
CACamera : function (
)
{
},

};

/**
 * @class CALock
 */
ca.CALock = {

/**
 * @method Lock
 */
Lock : function (
)
{
},

/**
 * @method UnLock
 */
UnLock : function (
)
{
},

/**
 * @method CALock
 * @constructor
 */
CALock : function (
)
{
},

};

/**
 * @class CAAutoLock
 */
ca.CAAutoLock = {

/**
 * @method CAAutoLock
 * @constructor
 * @param {cc.CALock} arg0
 */
CAAutoLock : function (
calock 
)
{
},

};

/**
 * @class CAThread
 */
ca.CAThread = {

/**
 * @method setMaxMsgCount
 * @param {int} arg0
 */
setMaxMsgCount : function (
int 
)
{
},

/**
 * @method closeAtOnce
 */
closeAtOnce : function (
)
{
},

/**
 * @method isRunning
 * @return {bool}
 */
isRunning : function (
)
{
    return false;
},

/**
 * @method OnRunning
 */
OnRunning : function (
)
{
},

/**
 * @method clear
 */
clear : function (
)
{
},

/**
 * @method OnExitInstance
 */
OnExitInstance : function (
)
{
},

/**
 * @method start
 */
start : function (
)
{
},

/**
 * @method OnInitInstance
 */
OnInitInstance : function (
)
{
},

/**
 * @method close
 */
close : function (
)
{
},

/**
 * @method notifyRun
 * @param {void} arg0
 */
notifyRun : function (
void 
)
{
},

/**
 * @method CAThread
 * @constructor
 */
CAThread : function (
)
{
},

};

/**
 * @class CAButton
 */
ca.CAButton = {

/**
 * @method setImageSize
 * @param {size_object} arg0
 */
setImageSize : function (
dsize 
)
{
},

/**
 * @method setTitleFontSize
 * @param {float} arg0
 */
setTitleFontSize : function (
float 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method setTitleForState
 * @param {cc.CAControlState} arg0
 * @param {String} arg1
 */
setTitleForState : function (
cacontrolstate, 
str 
)
{
},

/**
 * @method isAllowsSelected
 * @return {bool}
 */
isAllowsSelected : function (
)
{
    return false;
},

/**
 * @method setBackgroundViewForState
 * @param {cc.CAControlState} arg0
 * @param {cc.CAView} arg1
 */
setBackgroundViewForState : function (
cacontrolstate, 
caview 
)
{
},

/**
 * @method isSelected
 * @return {bool}
 */
isSelected : function (
)
{
    return false;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setImageColorForState
 * @param {cc.CAControlState} arg0
 * @param {cc._Color4B} arg1
 */
setImageColorForState : function (
cacontrolstate, 
_color4b 
)
{
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method getImageForState
 * @param {cc.CAControlState} arg0
 * @return {cc.CAImage}
 */
getImageForState : function (
cacontrolstate 
)
{
    return cc.CAImage;
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setTitleLabelSize
 * @param {size_object} arg0
 */
setTitleLabelSize : function (
dsize 
)
{
},

/**
 * @method isTouchClick
 * @return {bool}
 */
isTouchClick : function (
)
{
    return false;
},

/**
 * @method setTitleFontName
 * @param {String} arg0
 */
setTitleFontName : function (
str 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setTitleOffset
 * @param {size_object} arg0
 */
setTitleOffset : function (
dsize 
)
{
},

/**
 * @method setTitleColorForState
 * @param {cc.CAControlState} arg0
 * @param {cc._Color4B} arg1
 */
setTitleColorForState : function (
cacontrolstate, 
_color4b 
)
{
},

/**
 * @method getBackgroundViewForState
 * @param {cc.CAControlState} arg0
 * @return {cc.CAView}
 */
getBackgroundViewForState : function (
cacontrolstate 
)
{
    return cc.CAView;
},

/**
 * @method interruptTouchState
 */
interruptTouchState : function (
)
{
},

/**
 * @method setImageOffset
 * @param {size_object} arg0
 */
setImageOffset : function (
dsize 
)
{
},

/**
 * @method setControlState
 * @param {cc.CAControlState} arg0
 */
setControlState : function (
cacontrolstate 
)
{
},

/**
 * @method setImageForState
 * @param {cc.CAControlState} arg0
 * @param {cc.CAImage} arg1
 */
setImageForState : function (
cacontrolstate, 
caimage 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method setAllowsSelected
 * @param {bool} arg0
 */
setAllowsSelected : function (
bool 
)
{
},

/**
 * @method getTitleForState
 * @param {cc.CAControlState} arg0
 * @return {String}
 */
getTitleForState : function (
cacontrolstate 
)
{
    return ;
},

/**
 * @method create
 * @param {cc.CAButtonType} arg0
 * @return {cc.CAButton}
 */
create : function (
cabuttontype 
)
{
    return cc.CAButton;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {cc.CAButtonType} arg1
 * @return {cc.CAButton}
 */
createWithFrame : function (
drect, 
cabuttontype 
)
{
    return cc.CAButton;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {cc.CAButtonType} arg1
 * @return {cc.CAButton}
 */
createWithLayout : function (
drectlayout, 
cabuttontype 
)
{
    return cc.CAButton;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {cc.CAButtonType} arg1
 * @return {cc.CAButton}
 */
createWithCenter : function (
drect, 
cabuttontype 
)
{
    return cc.CAButton;
},

/**
 * @method CAButton
 * @constructor
 * @param {cc.CAButtonType} arg0
 */
CAButton : function (
cabuttontype 
)
{
},

};

/**
 * @class CASegmentedControl
 */
ca.CASegmentedControl = {

/**
 * @method setTitleFontSize
 * @param {float} arg0
 */
setTitleFontSize : function (
float 
)
{
},

/**
 * @method setSegmentItemBackgroundImage
 * @param {cc.CAImage} arg0
 */
setSegmentItemBackgroundImage : function (
caimage 
)
{
},

/**
 * @method setTitleColor
 * @param {cc._Color4B} arg0
 */
setTitleColor : function (
_color4b 
)
{
},

/**
 * @method setSelectedAtIndex
 * @param {int} arg0
 */
setSelectedAtIndex : function (
int 
)
{
},

/**
 * @method setImageForSegmentAtIndex
 * @param {cc.CAImage} arg0
 * @param {int} arg1
 * @param {cc.CAControlState} arg2
 */
setImageForSegmentAtIndex : function (
caimage, 
int, 
cacontrolstate 
)
{
},

/**
 * @method setImageColor
 * @param {cc._Color4B} arg0
 */
setImageColor : function (
_color4b 
)
{
},

/**
 * @method getSelectedAtIndex
 * @return {int}
 */
getSelectedAtIndex : function (
)
{
    return 0;
},

/**
 * @method setTitleSelectedColor
 * @param {cc._Color4B} arg0
 */
setTitleSelectedColor : function (
_color4b 
)
{
},

/**
 * @method getNumberOfSegments
 * @return {unsigned int}
 */
getNumberOfSegments : function (
)
{
    return 0;
},

/**
 * @method setTitleForSegmentAtIndex
 * @param {String} arg0
 * @param {int} arg1
 */
setTitleForSegmentAtIndex : function (
str, 
int 
)
{
},

/**
 * @method setImageSizeAtIndex
 * @param {size_object} arg0
 * @param {int} arg1
 */
setImageSizeAtIndex : function (
dsize, 
int 
)
{
},

/**
 * @method isEnabledForSegmentAtIndex
 * @param {int} arg0
 * @return {bool}
 */
isEnabledForSegmentAtIndex : function (
int 
)
{
    return false;
},

/**
 * @method setBackgroundImage
 * @param {cc.CAImage} arg0
 */
setBackgroundImage : function (
caimage 
)
{
},

/**
 * @method setTitleFontName
 * @param {String} arg0
 */
setTitleFontName : function (
str 
)
{
},

/**
 * @method getTitleSelectedColor
 * @return {cc._Color4B}
 */
getTitleSelectedColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setImageSelectedColor
 * @param {cc._Color4B} arg0
 */
setImageSelectedColor : function (
_color4b 
)
{
},

/**
 * @method getContentOffsetForSegmentAtIndex
 * @param {int} arg0
 * @return {size_object}
 */
getContentOffsetForSegmentAtIndex : function (
int 
)
{
    return cc.DSize;
},

/**
 * @method getImageSelectedColor
 * @return {cc._Color4B}
 */
getImageSelectedColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getImageForSegmentAtIndex
 * @param {int} arg0
 * @return {cc.CAImage}
 */
getImageForSegmentAtIndex : function (
int 
)
{
    return cc.CAImage;
},

/**
 * @method setContentOffsetForSegmentAtIndex
 * @param {size_object} arg0
 * @param {int} arg1
 */
setContentOffsetForSegmentAtIndex : function (
dsize, 
int 
)
{
},

/**
 * @method getTitleColor
 * @return {cc._Color4B}
 */
getTitleColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setTintColor
 * @param {cc._Color4B} arg0
 */
setTintColor : function (
_color4b 
)
{
},

/**
 * @method getTitleForSegmentAtIndex
 * @param {int} arg0
 * @return {String}
 */
getTitleForSegmentAtIndex : function (
int 
)
{
    return ;
},

/**
 * @method getImageColor
 * @return {cc._Color4B}
 */
getImageColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method setEnabledForSegmentAtIndex
 * @param {bool} arg0
 * @param {int} arg1
 */
setEnabledForSegmentAtIndex : function (
bool, 
int 
)
{
},

/**
 * @method create
 * @param {unsigned int} arg0
 * @return {cc.CASegmentedControl}
 */
create : function (
int 
)
{
    return cc.CASegmentedControl;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {unsigned int} arg1
 * @return {cc.CASegmentedControl}
 */
createWithFrame : function (
drect, 
int 
)
{
    return cc.CASegmentedControl;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {unsigned int} arg1
 * @return {cc.CASegmentedControl}
 */
createWithLayout : function (
drectlayout, 
int 
)
{
    return cc.CASegmentedControl;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {unsigned int} arg1
 * @return {cc.CASegmentedControl}
 */
createWithCenter : function (
drect, 
int 
)
{
    return cc.CASegmentedControl;
},

/**
 * @method CASegmentedControl
 * @constructor
 * @param {unsigned int} arg0
 */
CASegmentedControl : function (
int 
)
{
},

};

/**
 * @class CABarItem
 */
ca.CABarItem = {

/**
 * @method setImage
 * @param {cc.CAImage} arg0
 */
setImage : function (
caimage 
)
{
},

/**
 * @method setTitle
 * @param {String} arg0
 */
setTitle : function (
str 
)
{
},

/**
 * @method getImage
 * @return {cc.CAImage}
 */
getImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getTitle
 * @return {String}
 */
getTitle : function (
)
{
    return ;
},

/**
 * @method CABarItem
 * @constructor
 */
CABarItem : function (
)
{
},

};

/**
 * @class CABarButtonItem
 */
ca.CABarButtonItem = {

/**
 * @method getSel
 * @return {??}
 */
getSel : function (
)
{
    return ??;
},

/**
 * @method getCustomView
 * @return {cc.CAView}
 */
getCustomView : function (
)
{
    return cc.CAView;
},

/**
 * @method initWithCustomView
 * @param {cc.CAView} arg0
 * @return {bool}
 */
initWithCustomView : function (
caview 
)
{
    return false;
},

/**
 * @method setItemWidth
 * @param {unsigned int} arg0
 */
setItemWidth : function (
int 
)
{
},

/**
 * @method initWithImage
 * @param {cc.CAImage} arg0
 * @param {cc.CAImage} arg1
 * @return {bool}
 */
initWithImage : function (
caimage, 
caimage 
)
{
    return false;
},

/**
 * @method getHighlightedImage
 * @return {cc.CAImage}
 */
getHighlightedImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getTarget
 * @return {cc.CAObject}
 */
getTarget : function (
)
{
    return cc.CAObject;
},

/**
 * @method setHighlightedImage
 * @param {cc.CAImage} arg0
 */
setHighlightedImage : function (
caimage 
)
{
},

/**
 * @method init
 * @param {String} arg0
 * @param {cc.CAImage} arg1
 * @param {cc.CAImage} arg2
 * @return {bool}
 */
init : function (
str, 
caimage, 
caimage 
)
{
    return false;
},

/**
 * @method initWithTitle
 * @param {String} arg0
 * @param {cc.CAImage} arg1
 * @param {cc.CAImage} arg2
 * @return {bool}
 */
initWithTitle : function (
str, 
caimage, 
caimage 
)
{
    return false;
},

/**
 * @method getItemWidth
 * @return {unsigned int}
 */
getItemWidth : function (
)
{
    return 0;
},

/**
 * @method create
 * @param {String} arg0
 * @param {cc.CAImage} arg1
 * @param {cc.CAImage} arg2
 * @return {cc.CABarButtonItem}
 */
create : function (
str, 
caimage, 
caimage 
)
{
    return cc.CABarButtonItem;
},

/**
 * @method CABarButtonItem
 * @constructor
 */
CABarButtonItem : function (
)
{
},

};

/**
 * @class CANavigationBarItem
 */
ca.CANavigationBarItem = {

/**
 * @method addLeftButtonItem
 * @param {cc.CABarButtonItem} arg0
 */
addLeftButtonItem : function (
cabarbuttonitem 
)
{
},

/**
 * @method getRightButtonItems
 * @return {Array}
 */
getRightButtonItems : function (
)
{
    return cc.CAVector<cc.CAObject >;
},

/**
 * @method setNagigationBarHidden
 * @param {bool} arg0
 */
setNagigationBarHidden : function (
bool 
)
{
},

/**
 * @method getTitleViewImage
 * @return {cc.CAImage}
 */
getTitleViewImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setShowGoBackButton
 * @param {bool} arg0
 */
setShowGoBackButton : function (
bool 
)
{
},

/**
 * @method addRightButtonItem
 * @param {cc.CABarButtonItem} arg0
 */
addRightButtonItem : function (
cabarbuttonitem 
)
{
},

/**
 * @method getTitleView
 * @return {cc.CAView}
 */
getTitleView : function (
)
{
    return cc.CAView;
},

/**
 * @method setTitleView
 * @param {cc.CAView} arg0
 */
setTitleView : function (
caview 
)
{
},

/**
 * @method init
 * @param {String} arg0
 * @return {bool}
 */
init : function (
str 
)
{
    return false;
},

/**
 * @method getLeftButtonItems
 * @return {Array}
 */
getLeftButtonItems : function (
)
{
    return cc.CAVector<cc.CAObject >;
},

/**
 * @method setTitleViewImage
 * @param {cc.CAImage} arg0
 */
setTitleViewImage : function (
caimage 
)
{
},

/**
 * @method isNagigationBarHidden
 * @return {bool}
 */
isNagigationBarHidden : function (
)
{
    return false;
},

/**
 * @method isShowGoBackButton
 * @return {bool}
 */
isShowGoBackButton : function (
)
{
    return false;
},

/**
 * @method create
 * @param {String} arg0
 * @return {cc.CANavigationBarItem}
 */
create : function (
str 
)
{
    return cc.CANavigationBarItem;
},

/**
 * @method CANavigationBarItem
 * @constructor
 */
CANavigationBarItem : function (
)
{
},

};

/**
 * @class CATabBarItem
 */
ca.CATabBarItem = {

/**
 * @method getBadgeValue
 * @return {String}
 */
getBadgeValue : function (
)
{
    return ;
},

/**
 * @method setSelectedImage
 * @param {cc.CAImage} arg0
 */
setSelectedImage : function (
caimage 
)
{
},

/**
 * @method getSelectedImage
 * @return {cc.CAImage}
 */
getSelectedImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method init
 * @param {String} arg0
 * @param {cc.CAImage} arg1
 * @param {cc.CAImage} arg2
 * @return {bool}
 */
init : function (
str, 
caimage, 
caimage 
)
{
    return false;
},

/**
 * @method setBadgeValue
 * @param {String} arg0
 */
setBadgeValue : function (
str 
)
{
},

/**
 * @method create
 * @param {String} arg0
 * @param {cc.CAImage} arg1
 * @param {cc.CAImage} arg2
 * @return {cc.CATabBarItem}
 */
create : function (
str, 
caimage, 
caimage 
)
{
    return cc.CATabBarItem;
},

/**
 * @method CATabBarItem
 * @constructor
 */
CATabBarItem : function (
)
{
},

};

/**
 * @class CANavigationBarDelegate
 */
ca.CANavigationBarDelegate = {

/**
 * @method navigationPopViewController
 * @param {cc.CANavigationBar} arg0
 * @param {bool} arg1
 */
navigationPopViewController : function (
canavigationbar, 
bool 
)
{
},

};

/**
 * @class CANavigationBar
 */
ca.CANavigationBar = {

/**
 * @method getDelegate
 * @return {cc.CANavigationBarDelegate}
 */
getDelegate : function (
)
{
    return cc.CANavigationBarDelegate;
},

/**
 * @method getItem
 * @return {cc.CANavigationBarItem}
 */
getItem : function (
)
{
    return cc.CANavigationBarItem;
},

/**
 * @method setButtonColor
 * @param {cc._Color4B} arg0
 */
setButtonColor : function (
_color4b 
)
{
},

/**
 * @method getTitleColor
 * @return {cc._Color4B}
 */
getTitleColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setItem
 * @param {cc.CANavigationBarItem} arg0
 */
setItem : function (
canavigationbaritem 
)
{
},

/**
 * @method getBackgroundView
 * @return {cc.CAView}
 */
getBackgroundView : function (
)
{
    return cc.CAView;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setBackgroundView
 * @param {cc.CAView} arg0
 */
setBackgroundView : function (
caview 
)
{
},

/**
 * @method setDelegate
 * @param {cc.CANavigationBarDelegate} arg0
 */
setDelegate : function (
canavigationbardelegate 
)
{
},

/**
 * @method getButtonColor
 * @return {cc._Color4B}
 */
getButtonColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method setTitleColor
 * @param {cc._Color4B} arg0
 */
setTitleColor : function (
_color4b 
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {bool} arg1
 * @return {cc.CANavigationBar}
 */
createWithFrame : function (
drect, 
bool 
)
{
    return cc.CANavigationBar;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {bool} arg1
 * @return {cc.CANavigationBar}
 */
createWithLayout : function (
drectlayout, 
bool 
)
{
    return cc.CANavigationBar;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {bool} arg1
 * @return {cc.CANavigationBar}
 */
createWithCenter : function (
drect, 
bool 
)
{
    return cc.CANavigationBar;
},

/**
 * @method CANavigationBar
 * @constructor
 */
CANavigationBar : function (
)
{
},

};

/**
 * @class CATabBarDelegate
 */
ca.CATabBarDelegate = {

/**
 * @method tabBarClickToForbidSelectedItem
 * @param {cc.CATabBar} arg0
 * @param {cc.CATabBarItem} arg1
 * @param {unsigned int} arg2
 */
tabBarClickToForbidSelectedItem : function (
catabbar, 
catabbaritem, 
int 
)
{
},

/**
 * @method tabBarSelectedItem
 * @param {cc.CATabBar} arg0
 * @param {cc.CATabBarItem} arg1
 * @param {unsigned int} arg2
 */
tabBarSelectedItem : function (
catabbar, 
catabbaritem, 
int 
)
{
},

};

/**
 * @class CABadgeView
 */
ca.CABadgeView = {

/**
 * @method setBadgeText
 * @param {String} arg0
 */
setBadgeText : function (
str 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setContentSize
 * @param {size_object} arg0
 */
setContentSize : function (
dsize 
)
{
},

/**
 * @method CABadgeView
 * @constructor
 */
CABadgeView : function (
)
{
},

};

/**
 * @class CATabBar
 */
ca.CATabBar = {

/**
 * @method setSelectedBackgroundImage
 * @param {cc.CAImage} arg0
 */
setSelectedBackgroundImage : function (
caimage 
)
{
},

/**
 * @method setSelectedIndicatorColor
 * @param {cc._Color4B} arg0
 */
setSelectedIndicatorColor : function (
_color4b 
)
{
},

/**
 * @method getItemSize
 * @return {size_object}
 */
getItemSize : function (
)
{
    return cc.DSize;
},

/**
 * @method replaceItemAtIndex
 * @param {unsigned long} arg0
 * @param {cc.CATabBarItem} arg1
 */
replaceItemAtIndex : function (
long, 
catabbaritem 
)
{
},

/**
 * @method getSelectedIndicatorColor
 * @return {cc._Color4B}
 */
getSelectedIndicatorColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getBackgroundColor
 * @return {cc._Color4B}
 */
getBackgroundColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getContentViewFrame
 * @return {rect_object}
 */
getContentViewFrame : function (
)
{
    return cc.DRect;
},

/**
 * @method setSelectedAtIndex
 * @param {int} arg0
 */
setSelectedAtIndex : function (
int 
)
{
},

/**
 * @method showSelectedIndicator
 */
showSelectedIndicator : function (
)
{
},

/**
 * @method addForbidSelectedAtIndex
 * @param {int} arg0
 */
addForbidSelectedAtIndex : function (
int 
)
{
},

/**
 * @method getSelectedIndex
 * @return {int}
 */
getSelectedIndex : function (
)
{
    return 0;
},

/**
 * @method setSelectedIndicatorImage
 * @param {cc.CAImage} arg0
 */
setSelectedIndicatorImage : function (
caimage 
)
{
},

/**
 * @method getTitleColorForNormal
 * @return {cc._Color4B}
 */
getTitleColorForNormal : function (
)
{
    return cc._Color4B;
},

/**
 * @method getTitleColorForSelected
 * @return {cc._Color4B}
 */
getTitleColorForSelected : function (
)
{
    return cc._Color4B;
},

/**
 * @method setItems
 * @param {Array} arg0
 */
setItems : function (
array 
)
{
},

/**
 * @method getBackgroundImage
 * @return {cc.CAImage}
 */
getBackgroundImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getItems
 * @return {Array}
 */
getItems : function (
)
{
    return cc.CAVector<cc.CATabBarItem >;
},

/**
 * @method setBackgroundImage
 * @param {cc.CAImage} arg0
 */
setBackgroundImage : function (
caimage 
)
{
},

/**
 * @method setBackgroundColor
 * @param {cc._Color4B} arg0
 */
setBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method setTitleColorForSelected
 * @param {cc._Color4B} arg0
 */
setTitleColorForSelected : function (
_color4b 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setDelegate
 * @param {cc.CATabBarDelegate} arg0
 */
setDelegate : function (
catabbardelegate 
)
{
},

/**
 * @method getForbidSelectedIndexs
 * @return {std::set<int, std::less<int>, std::allocator<int> >}
 */
getForbidSelectedIndexs : function (
)
{
    return std::set<int, std::less<int>, std::allocator<int> >;
},

/**
 * @method getSelectedBackgroundColor
 * @return {cc._Color4B}
 */
getSelectedBackgroundColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setSelectedBackgroundColor
 * @param {cc._Color4B} arg0
 */
setSelectedBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method getDelegate
 * @return {cc.CATabBarDelegate}
 */
getDelegate : function (
)
{
    return cc.CATabBarDelegate;
},

/**
 * @method getSelectedIndicatorImage
 * @return {cc.CAImage}
 */
getSelectedIndicatorImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setTitleColorForNormal
 * @param {cc._Color4B} arg0
 */
setTitleColorForNormal : function (
_color4b 
)
{
},

/**
 * @method getSelectedBackgroundImage
 * @return {cc.CAImage}
 */
getSelectedBackgroundImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {bool} arg1
 * @return {cc.CATabBar}
 */
createWithFrame : function (
drect, 
bool 
)
{
    return cc.CATabBar;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {bool} arg1
 * @return {cc.CATabBar}
 */
createWithLayout : function (
drectlayout, 
bool 
)
{
    return cc.CATabBar;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {bool} arg1
 * @return {cc.CATabBar}
 */
createWithCenter : function (
drect, 
bool 
)
{
    return cc.CATabBar;
},

/**
 * @method CATabBar
 * @constructor
 */
CATabBar : function (
)
{
},

};

/**
 * @class CARenderImage
 */
ca.CARenderImage = {

/**
 * @method clearStencil
 * @param {int} arg0
 */
clearStencil : function (
int 
)
{
},

/**
 * @method listenToForeground
 * @param {cc.CAObject} arg0
 */
listenToForeground : function (
caobject 
)
{
},

/**
 * @method getClearDepth
 * @return {float}
 */
getClearDepth : function (
)
{
    return 0;
},

/**
 * @method printscreenWithView
* @param {cc.CAView|cc.CAView|cc.CAView|cc.CAView} caview
* @param {point_object|cc._Color4B|point_object} dpoint
* @param {cc._Color4B} _color4b
*/
printscreenWithView : function(
caview,
dpoint,
_color4b 
)
{
},

/**
 * @method getClearStencil
 * @return {int}
 */
getClearStencil : function (
)
{
    return 0;
},

/**
 * @method setClearStencil
 * @param {float} arg0
 */
setClearStencil : function (
float 
)
{
},

/**
 * @method setImageView
 * @param {cc.CAImageView} arg0
 */
setImageView : function (
caimageview 
)
{
},

/**
 * @method initWithWidthAndHeight
* @param {int|int} int
* @param {int|int} int
* @param {cc.CAImage::PixelFormat|cc.CAImage::PixelFormat} pixelformat
* @param {unsigned int} int
* @return {bool|bool}
*/
initWithWidthAndHeight : function(
int,
int,
pixelformat,
int 
)
{
    return false;
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method isAutoDraw
 * @return {bool}
 */
isAutoDraw : function (
)
{
    return false;
},

/**
 * @method getImageView
 * @return {cc.CAImageView}
 */
getImageView : function (
)
{
    return cc.CAImageView;
},

/**
 * @method setClearFlags
 * @param {unsigned int} arg0
 */
setClearFlags : function (
int 
)
{
},

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method saveToFile
 * @param {char} arg0
 * @return {bool}
 */
saveToFile : function (
char 
)
{
    return false;
},

/**
 * @method setAutoDraw
 * @param {bool} arg0
 */
setAutoDraw : function (
bool 
)
{
},

/**
 * @method setClearColor
 * @param {cc._Color4F} arg0
 */
setClearColor : function (
_color4f 
)
{
},

/**
 * @method clearDepth
 * @param {float} arg0
 */
clearDepth : function (
float 
)
{
},

/**
 * @method getClearColor
 * @return {cc._Color4F}
 */
getClearColor : function (
)
{
    return cc._Color4F;
},

/**
 * @method listenToBackground
 * @param {cc.CAObject} arg0
 */
listenToBackground : function (
caobject 
)
{
},

/**
 * @method clear
 * @param {cc._Color4B} arg0
 */
clear : function (
_color4b 
)
{
},

/**
 * @method getClearFlags
 * @return {unsigned int}
 */
getClearFlags : function (
)
{
    return 0;
},

/**
 * @method setClearDepth
 * @param {float} arg0
 */
setClearDepth : function (
float 
)
{
},

/**
 * @method create
* @param {int|int|int} int
* @param {int|int|int} int
* @param {cc.CAImage::PixelFormat|cc.CAImage::PixelFormat} pixelformat
* @param {unsigned int} int
* @return {cc.CARenderImage|cc.CARenderImage|cc.CARenderImage}
*/
create : function(
int,
int,
pixelformat,
int 
)
{
    return cc.CARenderImage;
},

/**
 * @method CARenderImage
 * @constructor
 */
CARenderImage : function (
)
{
},

};

/**
 * @class CAProgress
 */
ca.CAProgress = {

/**
 * @method setProgressTintImage
 * @param {cc.CAImage} arg0
 */
setProgressTintImage : function (
caimage 
)
{
},

/**
 * @method getProgressTintImage
 * @return {cc.CAImage}
 */
getProgressTintImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setProgressTrackColor
 * @param {cc._Color4B} arg0
 */
setProgressTrackColor : function (
_color4b 
)
{
},

/**
 * @method setColor
 * @param {cc._Color4B} arg0
 */
setColor : function (
_color4b 
)
{
},

/**
 * @method setProgressTrackImage
 * @param {cc.CAImage} arg0
 */
setProgressTrackImage : function (
caimage 
)
{
},

/**
 * @method getProgressTintColor
 * @return {cc._Color4B}
 */
getProgressTintColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getProgressTrackImage
 * @return {cc.CAImage}
 */
getProgressTrackImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getProgressTrackColor
 * @return {cc._Color4B}
 */
getProgressTrackColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method getProgress
 * @return {float}
 */
getProgress : function (
)
{
    return 0;
},

/**
 * @method setProgress
 * @param {float} arg0
 * @param {bool} arg1
 */
setProgress : function (
float, 
bool 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method setProgressTintColor
 * @param {cc._Color4B} arg0
 */
setProgressTintColor : function (
_color4b 
)
{
},

/**
 * @method create
 * @return {cc.CAProgress}
 */
create : function (
)
{
    return cc.CAProgress;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAProgress}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAProgress;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAProgress}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAProgress;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAProgress}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAProgress;
},

/**
 * @method CAProgress
 * @constructor
 */
CAProgress : function (
)
{
},

};

/**
 * @class CASwitch
 */
ca.CASwitch = {

/**
 * @method getOnImage
 * @return {cc.CAImage}
 */
getOnImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setOffImage
 * @param {cc.CAImage} arg0
 */
setOffImage : function (
caimage 
)
{
},

/**
 * @method isTouchClick
 * @return {bool}
 */
isTouchClick : function (
)
{
    return false;
},

/**
 * @method getThumbTintImage
 * @return {cc.CAImage}
 */
getThumbTintImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setIsOn
 * @param {bool} arg0
 * @param {bool} arg1
 */
setIsOn : function (
bool, 
bool 
)
{
},

/**
 * @method isOn
 * @return {bool}
 */
isOn : function (
)
{
    return false;
},

/**
 * @method setOnImage
 * @param {cc.CAImage} arg0
 */
setOnImage : function (
caimage 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method getOffImage
 * @return {cc.CAImage}
 */
getOffImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method setThumbTintImage
 * @param {cc.CAImage} arg0
 */
setThumbTintImage : function (
caimage 
)
{
},

/**
 * @method create
 * @return {cc.CASwitch}
 */
create : function (
)
{
    return cc.CASwitch;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CASwitch}
 */
createWithFrame : function (
drect 
)
{
    return cc.CASwitch;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CASwitch}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CASwitch;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CASwitch}
 */
createWithCenter : function (
drect 
)
{
    return cc.CASwitch;
},

/**
 * @method CASwitch
 * @constructor
 */
CASwitch : function (
)
{
},

};

/**
 * @class CASlider
 */
ca.CASlider = {

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method initWithCenter
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithCenter : function (
drect 
)
{
    return false;
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method getTrackHeight
 * @return {float}
 */
getTrackHeight : function (
)
{
    return 0;
},

/**
 * @method setMinValue
 * @param {float} arg0
 */
setMinValue : function (
float 
)
{
},

/**
 * @method getMinValue
 * @return {float}
 */
getMinValue : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method getMaxValue
 * @return {float}
 */
getMaxValue : function (
)
{
    return 0;
},

/**
 * @method setMaxTrackTintImage
 * @param {cc.CAImage} arg0
 */
setMaxTrackTintImage : function (
caimage 
)
{
},

/**
 * @method setValue
 * @param {float} arg0
 */
setValue : function (
float 
)
{
},

/**
 * @method isTouchClick
 * @return {bool}
 */
isTouchClick : function (
)
{
    return false;
},

/**
 * @method initWithFrame
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithFrame : function (
drect 
)
{
    return false;
},

/**
 * @method layoutSubViews
 */
layoutSubViews : function (
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setThumbTintImage
 * @param {cc.CAImage} arg0
 */
setThumbTintImage : function (
caimage 
)
{
},

/**
 * @method getMinTrackTintImage
 * @return {cc.CAImage}
 */
getMinTrackTintImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setTrackHeight
 * @param {float} arg0
 */
setTrackHeight : function (
float 
)
{
},

/**
 * @method getThumbTintImage
 * @return {cc.CAImage}
 */
getThumbTintImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setMaxValue
 * @param {float} arg0
 */
setMaxValue : function (
float 
)
{
},

/**
 * @method getValue
 * @return {float}
 */
getValue : function (
)
{
    return 0;
},

/**
 * @method getMaxTrackTintImage
 * @return {cc.CAImage}
 */
getMaxTrackTintImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method setMinTrackTintImage
 * @param {cc.CAImage} arg0
 */
setMinTrackTintImage : function (
caimage 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method create
 * @return {cc.CASlider}
 */
create : function (
)
{
    return cc.CASlider;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CASlider}
 */
createWithFrame : function (
drect 
)
{
    return cc.CASlider;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CASlider}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CASlider;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CASlider}
 */
createWithCenter : function (
drect 
)
{
    return cc.CASlider;
},

/**
 * @method CASlider
 * @constructor
 */
CASlider : function (
)
{
},

};

/**
 * @class CAPageControl
 */
ca.CAPageControl = {

/**
 * @method setDefersCurrentPageDisplay
 * @param {bool} arg0
 */
setDefersCurrentPageDisplay : function (
bool 
)
{
},

/**
 * @method onEnter
 */
onEnter : function (
)
{
},

/**
 * @method getPageIndicatorImage
 * @return {cc.CAImage}
 */
getPageIndicatorImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method initWithCenter
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithCenter : function (
drect 
)
{
    return false;
},

/**
 * @method sizeForNumberOfPages
 * @param {int} arg0
 * @return {size_object}
 */
sizeForNumberOfPages : function (
int 
)
{
    return cc.DSize;
},

/**
 * @method isSinglePage
 * @return {bool}
 */
isSinglePage : function (
)
{
    return false;
},

/**
 * @method setPageIndicatorImage
 * @param {cc.CAImage} arg0
 */
setPageIndicatorImage : function (
caimage 
)
{
},

/**
 * @method setNumberOfPages
 * @param {int} arg0
 */
setNumberOfPages : function (
int 
)
{
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method getNumberOfPages
 * @return {int}
 */
getNumberOfPages : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setTouchEnabled
 * @param {bool} arg0
 */
setTouchEnabled : function (
bool 
)
{
},

/**
 * @method setPageIndicatorTintColor
 * @param {cc._Color4B} arg0
 */
setPageIndicatorTintColor : function (
_color4b 
)
{
},

/**
 * @method initWithFrame
 * @param {rect_object} arg0
 * @return {bool}
 */
initWithFrame : function (
drect 
)
{
    return false;
},

/**
 * @method setSinglePage
 * @param {bool} arg0
 */
setSinglePage : function (
bool 
)
{
},

/**
 * @method getStyle
 * @return {cc.CAPageControlStyle}
 */
getStyle : function (
)
{
    return 0;
},

/**
 * @method getPageIndicatorTintColor
 * @return {cc._Color4B}
 */
getPageIndicatorTintColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setStyle
 * @param {cc.CAPageControlStyle} arg0
 */
setStyle : function (
capagecontrolstyle 
)
{
},

/**
 * @method isDefersCurrentPageDisplay
 * @return {bool}
 */
isDefersCurrentPageDisplay : function (
)
{
    return false;
},

/**
 * @method setCurrentPageIndicatorTintColor
 * @param {cc._Color4B} arg0
 */
setCurrentPageIndicatorTintColor : function (
_color4b 
)
{
},

/**
 * @method setCurrentPage
 * @param {int} arg0
 */
setCurrentPage : function (
int 
)
{
},

/**
 * @method updateCurrentPageDisplay
 */
updateCurrentPageDisplay : function (
)
{
},

/**
 * @method getCurrentPage
 * @return {int}
 */
getCurrentPage : function (
)
{
    return 0;
},

/**
 * @method onExit
 */
onExit : function (
)
{
},

/**
 * @method getCurrentPageIndicatorTintColor
 * @return {cc._Color4B}
 */
getCurrentPageIndicatorTintColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setCurrIndicatorImage
 * @param {cc.CAImage} arg0
 */
setCurrIndicatorImage : function (
caimage 
)
{
},

/**
 * @method getCurrIndicatorImage
 * @return {cc.CAImage}
 */
getCurrIndicatorImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method create
 * @return {cc.CAPageControl}
 */
create : function (
)
{
    return cc.CAPageControl;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAPageControl}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAPageControl;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAPageControl}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAPageControl;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAPageControl}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAPageControl;
},

/**
 * @method CAPageControl
 * @constructor
 */
CAPageControl : function (
)
{
},

};

/**
 * @class CAStepper
 */
ca.CAStepper = {

/**
 * @method onEnter
 */
onEnter : function (
)
{
},

/**
 * @method setMinValue
 * @param {double} arg0
 */
setMinValue : function (
double 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method getBackgroundImageForState
 * @param {cc.CAControlState} arg0
 * @return {cc.CAImage}
 */
getBackgroundImageForState : function (
cacontrolstate 
)
{
    return cc.CAImage;
},

/**
 * @method setWraps
 * @param {bool} arg0
 */
setWraps : function (
bool 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method setValue
 * @param {double} arg0
 */
setValue : function (
double 
)
{
},

/**
 * @method setTailorImageAtIndex
 * @param {int} arg0
 */
setTailorImageAtIndex : function (
int 
)
{
},

/**
 * @method getContinuous
 * @return {bool}
 */
getContinuous : function (
)
{
    return false;
},

/**
 * @method getTailorImageAtIndex
 * @param {int} arg0
 * @return {cc.CAView}
 */
getTailorImageAtIndex : function (
int 
)
{
    return cc.CAView;
},

/**
 * @method getAutoRepeat
 * @return {bool}
 */
getAutoRepeat : function (
)
{
    return false;
},

/**
 * @method setContinuous
 * @param {bool} arg0
 */
setContinuous : function (
bool 
)
{
},

/**
 * @method getMinValue
 * @return {double}
 */
getMinValue : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getIncrementImageForState
 * @param {cc.CAControlState} arg0
 * @return {cc.CAImage}
 */
getIncrementImageForState : function (
cacontrolstate 
)
{
    return cc.CAImage;
},

/**
 * @method setDividerColor
 * @param {cc._Color4B} arg0
 */
setDividerColor : function (
_color4b 
)
{
},

/**
 * @method getDecrementImageForState
 * @param {cc.CAControlState} arg0
 * @return {cc.CAImage}
 */
getDecrementImageForState : function (
cacontrolstate 
)
{
    return cc.CAImage;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method getMaxValue
 * @return {double}
 */
getMaxValue : function (
)
{
    return 0;
},

/**
 * @method setDecrementImage
 * @param {cc.CAImage} arg0
 * @param {cc.CAControlState} arg1
 */
setDecrementImage : function (
caimage, 
cacontrolstate 
)
{
},

/**
 * @method getWraps
 * @return {bool}
 */
getWraps : function (
)
{
    return false;
},

/**
 * @method setStepValue
 * @param {double} arg0
 */
setStepValue : function (
double 
)
{
},

/**
 * @method setBackgroundImage
 * @param {cc.CAImage} arg0
 * @param {cc.CAControlState} arg1
 */
setBackgroundImage : function (
caimage, 
cacontrolstate 
)
{
},

/**
 * @method setAutoRepeat
 * @param {bool} arg0
 */
setAutoRepeat : function (
bool 
)
{
},

/**
 * @method removeAllTargets
 */
removeAllTargets : function (
)
{
},

/**
 * @method getDividerColor
 * @return {cc._Color4B}
 */
getDividerColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setTouchEffect
 * @param {bool} arg0
 */
setTouchEffect : function (
bool 
)
{
},

/**
 * @method onExit
 */
onExit : function (
)
{
},

/**
 * @method setIncrementImage
 * @param {cc.CAImage} arg0
 * @param {cc.CAControlState} arg1
 */
setIncrementImage : function (
caimage, 
cacontrolstate 
)
{
},

/**
 * @method getStepValue
 * @return {double}
 */
getStepValue : function (
)
{
    return 0;
},

/**
 * @method setMaxValue
 * @param {double} arg0
 */
setMaxValue : function (
double 
)
{
},

/**
 * @method getValue
 * @return {double}
 */
getValue : function (
)
{
    return 0;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method getTouchEffect
 * @return {bool}
 */
getTouchEffect : function (
)
{
    return false;
},

/**
 * @method create
 * @return {cc.CAStepper}
 */
create : function (
)
{
    return cc.CAStepper;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {cc.CAStepperOrientation} arg1
 * @return {cc.CAStepper}
 */
createWithFrame : function (
drect, 
castepperorientation 
)
{
    return cc.CAStepper;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {cc.CAStepperOrientation} arg1
 * @return {cc.CAStepper}
 */
createWithLayout : function (
drectlayout, 
castepperorientation 
)
{
    return cc.CAStepper;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {cc.CAStepperOrientation} arg1
 * @return {cc.CAStepper}
 */
createWithCenter : function (
drect, 
castepperorientation 
)
{
    return cc.CAStepper;
},

/**
 * @method CAStepper
 * @constructor
 */
CAStepper : function (
)
{
},

};

/**
 * @class CAActivityIndicatorView
 */
ca.CAActivityIndicatorView = {

/**
 * @method setCycleTime
 * @param {float} arg0
 */
setCycleTime : function (
float 
)
{
},

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method onEnter
 */
onEnter : function (
)
{
},

/**
 * @method onExit
 */
onExit : function (
)
{
},

/**
 * @method getActivityBackView
 * @return {cc.CAView}
 */
getActivityBackView : function (
)
{
    return cc.CAView;
},

/**
 * @method getActivityIndicatorView
 * @return {cc.CAView}
 */
getActivityIndicatorView : function (
)
{
    return cc.CAView;
},

/**
 * @method setTimesOneCycle
 * @param {float} arg0
 */
setTimesOneCycle : function (
float 
)
{
},

/**
 * @method getColor
 * @return {cc._Color4B}
 */
getColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method setActivityBackView
 * @param {cc.CAView} arg0
 */
setActivityBackView : function (
caview 
)
{
},

/**
 * @method setStyle
 * @param {cc.CAActivityIndicatorViewStyle} arg0
 */
setStyle : function (
caactivityindicatorviewstyle 
)
{
},

/**
 * @method setLoadingMinTime
 * @param {float} arg0
 */
setLoadingMinTime : function (
float 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method isAnimating
 * @return {bool}
 */
isAnimating : function (
)
{
    return false;
},

/**
 * @method setActivityIndicatorView
 * @param {cc.CAView} arg0
 */
setActivityIndicatorView : function (
caview 
)
{
},

/**
 * @method getLoadingMinTime
 * @return {float}
 */
getLoadingMinTime : function (
)
{
    return 0;
},

/**
 * @method startAnimating
 */
startAnimating : function (
)
{
},

/**
 * @method stopAnimating
 */
stopAnimating : function (
)
{
},

/**
 * @method create
 * @return {cc.CAActivityIndicatorView}
 */
create : function (
)
{
    return cc.CAActivityIndicatorView;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAActivityIndicatorView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAActivityIndicatorView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAActivityIndicatorView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAActivityIndicatorView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAActivityIndicatorView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAActivityIndicatorView;
},

/**
 * @method CAActivityIndicatorView
 * @constructor
 */
CAActivityIndicatorView : function (
)
{
},

};

/**
 * @class CAPullToRefreshView
 */
ca.CAPullToRefreshView = {

/**
 * @method getLoadingView
 * @return {cc.CAActivityIndicatorView}
 */
getLoadingView : function (
)
{
    return cc.CAActivityIndicatorView;
},

/**
 * @method setPullToRefreshText
 * @param {String} arg0
 */
setPullToRefreshText : function (
str 
)
{
},

/**
 * @method getPullToRefreshType
 * @return {cc.CAPullToRefreshView::CAPullToRefreshType}
 */
getPullToRefreshType : function (
)
{
    return 0;
},

/**
 * @method getRefreshingText
 * @return {String}
 */
getRefreshingText : function (
)
{
    return ;
},

/**
 * @method setLoadingView
 * @param {cc.CAActivityIndicatorView} arg0
 */
setLoadingView : function (
caactivityindicatorview 
)
{
},

/**
 * @method setRefreshingText
 * @param {String} arg0
 */
setRefreshingText : function (
str 
)
{
},

/**
 * @method getLabelColor
 * @return {cc._Color4B}
 */
getLabelColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getPullToImage
 * @return {cc.CAImage}
 */
getPullToImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getReleaseToRefreshText
 * @return {String}
 */
getReleaseToRefreshText : function (
)
{
    return ;
},

/**
 * @method setLayoutLinearType
 * @param {cc.CALayoutLinearType} arg0
 */
setLayoutLinearType : function (
calayoutlineartype 
)
{
},

/**
 * @method setLabelColor
 * @param {cc._Color4B} arg0
 */
setLabelColor : function (
_color4b 
)
{
},

/**
 * @method setReleaseToRefreshText
 * @param {String} arg0
 */
setReleaseToRefreshText : function (
str 
)
{
},

/**
 * @method getLayoutLinearType
 * @return {cc.CALayoutLinearType}
 */
getLayoutLinearType : function (
)
{
    return 0;
},

/**
 * @method setPullToImage
 * @param {cc.CAImage} arg0
 */
setPullToImage : function (
caimage 
)
{
},

/**
 * @method getPullToRefreshText
 * @return {String}
 */
getPullToRefreshText : function (
)
{
    return ;
},

/**
 * @method create
 * @param {cc.CAPullToRefreshView::CAPullToRefreshType} arg0
 * @return {cc.CAPullToRefreshView}
 */
create : function (
capulltorefreshtype 
)
{
    return cc.CAPullToRefreshView;
},

/**
 * @method CAPullToRefreshView
 * @constructor
 * @param {cc.CAPullToRefreshView::CAPullToRefreshType} arg0
 */
CAPullToRefreshView : function (
capulltorefreshtype 
)
{
},

};

/**
 * @class CAScrollViewDelegate
 */
ca.CAScrollViewDelegate = {

/**
 * @method scrollViewDidMoved
 * @param {cc.CAScrollView} arg0
 */
scrollViewDidMoved : function (
cascrollview 
)
{
},

/**
 * @method scrollViewDidEndDragging
 * @param {cc.CAScrollView} arg0
 */
scrollViewDidEndDragging : function (
cascrollview 
)
{
},

/**
 * @method scrollViewStopMoved
 * @param {cc.CAScrollView} arg0
 */
scrollViewStopMoved : function (
cascrollview 
)
{
},

/**
 * @method scrollViewFooterBeginRefreshing
 * @param {cc.CAScrollView} arg0
 */
scrollViewFooterBeginRefreshing : function (
cascrollview 
)
{
},

/**
 * @method scrollViewTouchUpWithoutMoved
 * @param {cc.CAScrollView} arg0
 * @param {point_object} arg1
 */
scrollViewTouchUpWithoutMoved : function (
cascrollview, 
dpoint 
)
{
},

/**
 * @method scrollViewHeaderBeginRefreshing
 * @param {cc.CAScrollView} arg0
 */
scrollViewHeaderBeginRefreshing : function (
cascrollview 
)
{
},

/**
 * @method scrollViewDidZoom
 * @param {cc.CAScrollView} arg0
 */
scrollViewDidZoom : function (
cascrollview 
)
{
},

/**
 * @method scrollViewDragging
 * @param {cc.CAScrollView} arg0
 */
scrollViewDragging : function (
cascrollview 
)
{
},

/**
 * @method scrollViewWillBeginDragging
 * @param {cc.CAScrollView} arg0
 */
scrollViewWillBeginDragging : function (
cascrollview 
)
{
},

};

/**
 * @class CAScrollView
 */
ca.CAScrollView = {

/**
 * @method mouseScrollWheel
 * @param {cc.CATouch} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {cc.CAEvent} arg3
 */
mouseScrollWheel : function (
catouch, 
float, 
float, 
caevent 
)
{
},

/**
 * @method setBounceVertical
 * @param {bool} arg0
 */
setBounceVertical : function (
bool 
)
{
},

/**
 * @method removeAllSubviews
 */
removeAllSubviews : function (
)
{
},

/**
 * @method isTracking
 * @return {bool}
 */
isTracking : function (
)
{
    return false;
},

/**
 * @method startDeaccelerateScroll
 */
startDeaccelerateScroll : function (
)
{
},

/**
 * @method isBounceVertical
 * @return {bool}
 */
isBounceVertical : function (
)
{
    return false;
},

/**
 * @method isShowsScrollIndicators
 * @return {bool}
 */
isShowsScrollIndicators : function (
)
{
    return false;
},

/**
 * @method setShowsHorizontalScrollIndicator
 * @param {bool} arg0
 */
setShowsHorizontalScrollIndicator : function (
bool 
)
{
},

/**
 * @method setTouchEnabledAtSubviews
 * @param {bool} arg0
 */
setTouchEnabledAtSubviews : function (
bool 
)
{
},

/**
 * @method getZoomScale
 * @return {float}
 */
getZoomScale : function (
)
{
    return 0;
},

/**
 * @method isDecelerating
 * @return {bool}
 */
isDecelerating : function (
)
{
    return false;
},

/**
 * @method endFooterRefresh
 */
endFooterRefresh : function (
)
{
},

/**
 * @method isBounceHorizontal
 * @return {bool}
 */
isBounceHorizontal : function (
)
{
    return false;
},

/**
 * @method setFooterRefreshView
 * @param {cc.CAPullToRefreshView} arg0
 */
setFooterRefreshView : function (
capulltorefreshview 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method getHeaderRefreshView
 * @return {cc.CAPullToRefreshView}
 */
getHeaderRefreshView : function (
)
{
    return cc.CAPullToRefreshView;
},

/**
 * @method addSubview
 * @param {cc.CAView} arg0
 */
addSubview : function (
caview 
)
{
},

/**
 * @method setShowsVerticalScrollIndicator
 * @param {bool} arg0
 */
setShowsVerticalScrollIndicator : function (
bool 
)
{
},

/**
 * @method setContentOffset
 * @param {point_object} arg0
 * @param {bool} arg1
 */
setContentOffset : function (
dpoint, 
bool 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method isShowsVerticalScrollIndicator
 * @return {bool}
 */
isShowsVerticalScrollIndicator : function (
)
{
    return false;
},

/**
 * @method startPullToHeaderRefreshView
 */
startPullToHeaderRefreshView : function (
)
{
},

/**
 * @method getSubviews
 * @return {Array}
 */
getSubviews : function (
)
{
    return cc.CAVector<cc.CAView >;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method getMultitouchGesture
 * @return {cc.CAScrollView::MultitouchGesture}
 */
getMultitouchGesture : function (
)
{
    return 0;
},

/**
 * @method setHeaderRefreshView
 * @param {cc.CAPullToRefreshView} arg0
 */
setHeaderRefreshView : function (
capulltorefreshview 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method getScrollViewDelegate
 * @return {cc.CAScrollViewDelegate}
 */
getScrollViewDelegate : function (
)
{
    return cc.CAScrollViewDelegate;
},

/**
 * @method setBounces
 * @param {bool} arg0
 */
setBounces : function (
bool 
)
{
},

/**
 * @method getContentOffset
 * @return {point_object}
 */
getContentOffset : function (
)
{
    return cc.DPoint;
},

/**
 * @method setViewSize
 * @param {size_object} arg0
 */
setViewSize : function (
dsize 
)
{
},

/**
 * @method insertSubview
 * @param {cc.CAView} arg0
 * @param {int} arg1
 */
insertSubview : function (
caview, 
int 
)
{
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method removeSubviewByTag
 * @param {int} arg0
 */
removeSubviewByTag : function (
int 
)
{
},

/**
 * @method getSubviewByTag
 * @param {int} arg0
 * @return {cc.CAView}
 */
getSubviewByTag : function (
int 
)
{
    return cc.CAView;
},

/**
 * @method isBounces
 * @return {bool}
 */
isBounces : function (
)
{
    return false;
},

/**
 * @method setBackgroundColor
 * @param {cc._Color4B} arg0
 */
setBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method getMaximumZoomScale
 * @return {float}
 */
getMaximumZoomScale : function (
)
{
    return 0;
},

/**
 * @method getViewSize
 * @return {size_object}
 */
getViewSize : function (
)
{
    return cc.DSize;
},

/**
 * @method setMaximumZoomScale
 * @param {float} arg0
 */
setMaximumZoomScale : function (
float 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method isReachBoundaryDown
 * @return {bool}
 */
isReachBoundaryDown : function (
)
{
    return false;
},

/**
 * @method isZooming
 * @return {bool}
 */
isZooming : function (
)
{
    return false;
},

/**
 * @method setBackgroundImage
 * @param {cc.CAImage} arg0
 */
setBackgroundImage : function (
caimage 
)
{
},

/**
 * @method isShowsHorizontalScrollIndicator
 * @return {bool}
 */
isShowsHorizontalScrollIndicator : function (
)
{
    return false;
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method isReachBoundaryUp
 * @return {bool}
 */
isReachBoundaryUp : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryLeft
 * @return {bool}
 */
isReachBoundaryLeft : function (
)
{
    return false;
},

/**
 * @method getFooterRefreshView
 * @return {cc.CAPullToRefreshView}
 */
getFooterRefreshView : function (
)
{
    return cc.CAPullToRefreshView;
},

/**
 * @method stopDeaccelerateScroll
 */
stopDeaccelerateScroll : function (
)
{
},

/**
 * @method setScrollViewDelegate
 * @param {cc.CAScrollViewDelegate} arg0
 */
setScrollViewDelegate : function (
cascrollviewdelegate 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method isTouchEnabledAtSubviews
 * @return {bool}
 */
isTouchEnabledAtSubviews : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryRight
 * @return {bool}
 */
isReachBoundaryRight : function (
)
{
    return false;
},

/**
 * @method setMinimumZoomScale
 * @param {float} arg0
 */
setMinimumZoomScale : function (
float 
)
{
},

/**
 * @method endHeaderRefresh
 */
endHeaderRefresh : function (
)
{
},

/**
 * @method getMinimumZoomScale
 * @return {float}
 */
getMinimumZoomScale : function (
)
{
    return 0;
},

/**
 * @method setBounceHorizontal
 * @param {bool} arg0
 */
setBounceHorizontal : function (
bool 
)
{
},

/**
 * @method removeSubview
 * @param {cc.CAView} arg0
 */
removeSubview : function (
caview 
)
{
},

/**
 * @method setZoomScale
 * @param {float} arg0
 */
setZoomScale : function (
float 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method setMultitouchGesture
 * @param {cc.CAScrollView::MultitouchGesture} arg0
 */
setMultitouchGesture : function (
multitouchgesture 
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAScrollView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAScrollView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAScrollView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAScrollView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAScrollView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAScrollView;
},

/**
 * @method CAScrollView
 * @constructor
 */
CAScrollView : function (
)
{
},

};

/**
 * @class CAIndicator
 */
ca.CAIndicator = {

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method setIndicator
 * @param {size_object} arg0
 * @param {rect_object} arg1
 */
setIndicator : function (
dsize, 
drect 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setHide
 * @param {bool} arg0
 */
setHide : function (
bool 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method getMyScrollView
 * @return {cc.CAScrollView}
 */
getMyScrollView : function (
)
{
    return cc.CAScrollView;
},

/**
 * @method create
 * @param {cc.CAIndicator::CAIndicatorType} arg0
 * @param {cc.CAScrollView} arg1
 * @return {cc.CAIndicator}
 */
create : function (
caindicatortype, 
cascrollview 
)
{
    return cc.CAIndicator;
},

/**
 * @method CAIndicator
 * @constructor
 * @param {cc.CAIndicator::CAIndicatorType} arg0
 * @param {cc.CAScrollView} arg1
 */
CAIndicator : function (
caindicatortype, 
cascrollview 
)
{
},

};

/**
 * @class CAPageViewDelegate
 */
ca.CAPageViewDelegate = {

/**
 * @method pageViewDidBeginTurning
 * @param {CAPageView} arg0
 */
pageViewDidBeginTurning : function (
capageview 
)
{
},

/**
 * @method pageViewDidSelectedPageAtIndex
 * @param {CAPageView} arg0
 * @param {unsigned int} arg1
 * @param {point_object} arg2
 */
pageViewDidSelectedPageAtIndex : function (
capageview, 
int, 
dpoint 
)
{
},

/**
 * @method pageViewDidEndTurning
 * @param {CAPageView} arg0
 */
pageViewDidEndTurning : function (
capageview 
)
{
},

};

/**
 * @class CAPageView
 */
ca.CAPageView = {

/**
 * @method setPageViewDelegate
 * @param {CAPageViewDelegate} arg0
 */
setPageViewDelegate : function (
capageviewdelegate 
)
{
},

/**
 * @method setSpacing
 * @param {int} arg0
 */
setSpacing : function (
int 
)
{
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method getPageViewDirection
 * @return {CAPageViewDirection}
 */
getPageViewDirection : function (
)
{
    return CAPageViewDirection;
},

/**
 * @method setViews
* @param {Array|cc.CADeque<cc.CAView >} array
*/
setViews : function(
cadeque<crossapp::caview > 
)
{
},

/**
 * @method getSpacing
 * @return {int}
 */
getSpacing : function (
)
{
    return 0;
},

/**
 * @method getCurrPage
 * @return {int}
 */
getCurrPage : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getPageViewDelegate
 * @return {CAPageViewDelegate}
 */
getPageViewDelegate : function (
)
{
    return CAPageViewDelegate;
},

/**
 * @method getPageCount
 * @return {unsigned int}
 */
getPageCount : function (
)
{
    return 0;
},

/**
 * @method setCurrPage
 * @param {int} arg0
 * @param {bool} arg1
 * @param {bool} arg2
 */
setCurrPage : function (
int, 
bool, 
bool 
)
{
},

/**
 * @method getSubViewAtIndex
 * @param {int} arg0
 * @return {cc.CAView}
 */
getSubViewAtIndex : function (
int 
)
{
    return cc.CAView;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {CAPageViewDirection} arg1
 * @return {CAPageView}
 */
createWithFrame : function (
drect, 
capageviewdirection 
)
{
    return CAPageView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {CAPageViewDirection} arg1
 * @return {CAPageView}
 */
createWithLayout : function (
drectlayout, 
capageviewdirection 
)
{
    return CAPageView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {CAPageViewDirection} arg1
 * @return {CAPageView}
 */
createWithCenter : function (
drect, 
capageviewdirection 
)
{
    return CAPageView;
},

/**
 * @method CAPageView
 * @constructor
 * @param {CAPageViewDirection} arg0
 */
CAPageView : function (
capageviewdirection 
)
{
},

};

/**
 * @class CAKeypadDelegate
 */
ca.CAKeypadDelegate = {

/**
 * @method keyBackClicked
 */
keyBackClicked : function (
)
{
},

/**
 * @method keyMenuClicked
 */
keyMenuClicked : function (
)
{
},

};

/**
 * @class CAKeypadHandler
 */
ca.CAKeypadHandler = {

/**
 * @method getDelegate
 * @return {cc.CAKeypadDelegate}
 */
getDelegate : function (
)
{
    return cc.CAKeypadDelegate;
},

/**
 * @method initWithDelegate
 * @param {cc.CAKeypadDelegate} arg0
 * @return {bool}
 */
initWithDelegate : function (
cakeypaddelegate 
)
{
    return false;
},

/**
 * @method setDelegate
 * @param {cc.CAKeypadDelegate} arg0
 */
setDelegate : function (
cakeypaddelegate 
)
{
},

/**
 * @method handlerWithDelegate
 * @param {cc.CAKeypadDelegate} arg0
 * @return {cc.CAKeypadHandler}
 */
handlerWithDelegate : function (
cakeypaddelegate 
)
{
    return cc.CAKeypadHandler;
},

};

/**
 * @class CAKeypadDispatcher
 */
ca.CAKeypadDispatcher = {

/**
 * @method forceRemoveDelegate
 * @param {cc.CAKeypadDelegate} arg0
 */
forceRemoveDelegate : function (
cakeypaddelegate 
)
{
},

/**
 * @method dispatchKeypadMSG
 * @param {cc.ccKeypadMSGType} arg0
 * @return {bool}
 */
dispatchKeypadMSG : function (
cckeypadmsgtype 
)
{
    return false;
},

/**
 * @method forceAddDelegate
 * @param {cc.CAKeypadDelegate} arg0
 */
forceAddDelegate : function (
cakeypaddelegate 
)
{
},

/**
 * @method addDelegate
 * @param {cc.CAKeypadDelegate} arg0
 */
addDelegate : function (
cakeypaddelegate 
)
{
},

/**
 * @method removeDelegate
 * @param {cc.CAKeypadDelegate} arg0
 */
removeDelegate : function (
cakeypaddelegate 
)
{
},

/**
 * @method CAKeypadDispatcher
 * @constructor
 */
CAKeypadDispatcher : function (
)
{
},

};

/**
 * @class CAViewController
 */
ca.CAViewController = {

/**
 * @method getView
 * @return {cc.CAView}
 */
getView : function (
)
{
    return cc.CAView;
},

/**
 * @method dismissModalViewController
 * @param {bool} arg0
 */
dismissModalViewController : function (
bool 
)
{
},

/**
 * @method getTabBarItem
 * @return {cc.CATabBarItem}
 */
getTabBarItem : function (
)
{
    return cc.CATabBarItem;
},

/**
 * @method keyBackClicked
 */
keyBackClicked : function (
)
{
},

/**
 * @method setTabBarItem
 * @param {cc.CATabBarItem} arg0
 */
setTabBarItem : function (
catabbaritem 
)
{
},

/**
 * @method getViewWithID
 * @param {String} arg0
 * @return {cc.CAView}
 */
getViewWithID : function (
str 
)
{
    return cc.CAView;
},

/**
 * @method setTitle
 * @param {String} arg0
 */
setTitle : function (
str 
)
{
},

/**
 * @method isKeypadEnabled
 * @return {bool}
 */
isKeypadEnabled : function (
)
{
    return false;
},

/**
 * @method isViewRunning
 * @return {bool}
 */
isViewRunning : function (
)
{
    return false;
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method viewDidLoad
 */
viewDidLoad : function (
)
{
},

/**
 * @method presentModalViewController
 * @param {cc.CAViewController} arg0
 * @param {bool} arg1
 */
presentModalViewController : function (
caviewcontroller, 
bool 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getNavigationBarItem
 * @return {cc.CANavigationBarItem}
 */
getNavigationBarItem : function (
)
{
    return cc.CANavigationBarItem;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method removeViewFromSuperview
 */
removeViewFromSuperview : function (
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method viewDidDisappear
 */
viewDidDisappear : function (
)
{
},

/**
 * @method getNibName
 * @return {String}
 */
getNibName : function (
)
{
    return ;
},

/**
 * @method setNavigationBarItem
 * @param {cc.CANavigationBarItem} arg0
 */
setNavigationBarItem : function (
canavigationbaritem 
)
{
},

/**
 * @method nextResponder
 * @return {cc.CAResponder}
 */
nextResponder : function (
)
{
    return cc.CAResponder;
},

/**
 * @method getTitle
 * @return {String}
 */
getTitle : function (
)
{
    return ;
},

/**
 * @method viewDidAppear
 */
viewDidAppear : function (
)
{
},

/**
 * @method addViewFromSuperview
 * @param {cc.CAView} arg0
 */
addViewFromSuperview : function (
caview 
)
{
},

/**
 * @method getNavigationController
 * @return {cc.CANavigationController}
 */
getNavigationController : function (
)
{
    return cc.CANavigationController;
},

/**
 * @method getTabBarController
 * @return {cc.CATabBarController}
 */
getTabBarController : function (
)
{
    return cc.CATabBarController;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method viewDidUnload
 */
viewDidUnload : function (
)
{
},

/**
 * @method setKeypadEnabled
 * @param {bool} arg0
 */
setKeypadEnabled : function (
bool 
)
{
},

/**
 * @method keyMenuClicked
 */
keyMenuClicked : function (
)
{
},

/**
 * @method CAViewController
 * @constructor
 */
CAViewController : function (
)
{
},

};

/**
 * @class CANavigationController
 */
ca.CANavigationController = {

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setNavigationBarTitleColor
 * @param {cc._Color4B} arg0
 */
setNavigationBarTitleColor : function (
_color4b 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method setNavigationBarButtonColor
 * @param {cc._Color4B} arg0
 */
setNavigationBarButtonColor : function (
_color4b 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method updateItem
 * @param {cc.CAViewController} arg0
 */
updateItem : function (
caviewcontroller 
)
{
},

/**
 * @method getBackViewController
 * @return {cc.CAViewController}
 */
getBackViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method getNavigationBarBackgroundColor
 * @return {cc._Color4B}
 */
getNavigationBarBackgroundColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getViewControllerCount
 * @return {unsigned long}
 */
getViewControllerCount : function (
)
{
    return 0;
},

/**
 * @method setNavigationBarHidden
 * @param {bool} arg0
 * @param {bool} arg1
 */
setNavigationBarHidden : function (
bool, 
bool 
)
{
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method replaceViewController
 * @param {cc.CAViewController} arg0
 * @param {bool} arg1
 */
replaceViewController : function (
caviewcontroller, 
bool 
)
{
},

/**
 * @method popToRootViewControllerAnimated
 * @param {bool} arg0
 */
popToRootViewControllerAnimated : function (
bool 
)
{
},

/**
 * @method pushViewController
 * @param {cc.CAViewController} arg0
 * @param {bool} arg1
 */
pushViewController : function (
caviewcontroller, 
bool 
)
{
},

/**
 * @method isReachBoundaryDown
 * @return {bool}
 */
isReachBoundaryDown : function (
)
{
    return false;
},

/**
 * @method setTouchMoved
 * @param {bool} arg0
 */
setTouchMoved : function (
bool 
)
{
},

/**
 * @method initWithRootViewController
 * @param {cc.CAViewController} arg0
 * @return {bool}
 */
initWithRootViewController : function (
caviewcontroller 
)
{
    return false;
},

/**
 * @method isReachBoundaryRight
 * @return {bool}
 */
isReachBoundaryRight : function (
)
{
    return false;
},

/**
 * @method popViewControllerAnimated
 * @param {bool} arg0
 * @return {cc.CAViewController}
 */
popViewControllerAnimated : function (
bool 
)
{
    return cc.CAViewController;
},

/**
 * @method getNavigationBarButtonColor
 * @return {cc._Color4B}
 */
getNavigationBarButtonColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method isTouchMoved
 * @return {bool}
 */
isTouchMoved : function (
)
{
    return false;
},

/**
 * @method getNavigationBarTitleColor
 * @return {cc._Color4B}
 */
getNavigationBarTitleColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method isReachBoundaryUp
 * @return {bool}
 */
isReachBoundaryUp : function (
)
{
    return false;
},

/**
 * @method isReachBoundaryLeft
 * @return {bool}
 */
isReachBoundaryLeft : function (
)
{
    return false;
},

/**
 * @method setNavigationBarBackgroundColor
 * @param {cc._Color4B} arg0
 */
setNavigationBarBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method isNavigationBarHidden
 * @return {bool}
 */
isNavigationBarHidden : function (
)
{
    return false;
},

/**
 * @method getNavigationBarBackgroundImage
 * @return {cc.CAImage}
 */
getNavigationBarBackgroundImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getViewControllerAtIndex
 * @param {int} arg0
 * @return {cc.CAViewController}
 */
getViewControllerAtIndex : function (
int 
)
{
    return cc.CAViewController;
},

/**
 * @method setNavigationBarBackgroundImage
 * @param {cc.CAImage} arg0
 */
setNavigationBarBackgroundImage : function (
caimage 
)
{
},

/**
 * @method popFirstViewController
 * @return {cc.CAViewController}
 */
popFirstViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method popViewControllerAtIndex
 * @param {int} arg0
 * @return {cc.CAViewController}
 */
popViewControllerAtIndex : function (
int 
)
{
    return cc.CAViewController;
},

/**
 * @method CANavigationController
 * @constructor
 */
CANavigationController : function (
)
{
},

};

/**
 * @class CATabBarController
 */
ca.CATabBarController = {

/**
 * @method getSelectedViewController
 * @return {cc.CAViewController}
 */
getSelectedViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method setTabBarSelectedBackgroundImage
 * @param {cc.CAImage} arg0
 */
setTabBarSelectedBackgroundImage : function (
caimage 
)
{
},

/**
 * @method setTabBarBackgroundImage
 * @param {cc.CAImage} arg0
 */
setTabBarBackgroundImage : function (
caimage 
)
{
},

/**
 * @method setTabBarTitleColorForSelected
 * @param {cc._Color4B} arg0
 */
setTabBarTitleColorForSelected : function (
_color4b 
)
{
},

/**
 * @method showSelectedViewControllerAtIndex
 * @param {unsigned int} arg0
 * @return {bool}
 */
showSelectedViewControllerAtIndex : function (
int 
)
{
    return false;
},

/**
 * @method setTabBarHidden
 * @param {bool} arg0
 * @param {bool} arg1
 */
setTabBarHidden : function (
bool, 
bool 
)
{
},

/**
 * @method updateItem
 * @param {cc.CAViewController} arg0
 */
updateItem : function (
caviewcontroller 
)
{
},

/**
 * @method setTabBarTitleColorForNormal
 * @param {cc._Color4B} arg0
 */
setTabBarTitleColorForNormal : function (
_color4b 
)
{
},

/**
 * @method setTabBarSelectedIndicatorImage
 * @param {cc.CAImage} arg0
 */
setTabBarSelectedIndicatorImage : function (
caimage 
)
{
},

/**
 * @method getTabBarTitleColorForSelected
 * @return {cc._Color4B}
 */
getTabBarTitleColorForSelected : function (
)
{
    return cc._Color4B;
},

/**
 * @method getSelectedViewControllerAtIndex
 * @return {unsigned int}
 */
getSelectedViewControllerAtIndex : function (
)
{
    return 0;
},

/**
 * @method getTabBarSelectedBackgroundColor
 * @return {cc._Color4B}
 */
getTabBarSelectedBackgroundColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method showSelectedViewController
 * @param {cc.CAViewController} arg0
 * @return {bool}
 */
showSelectedViewController : function (
caviewcontroller 
)
{
    return false;
},

/**
 * @method getTabBarSelectedBackgroundImage
 * @return {cc.CAImage}
 */
getTabBarSelectedBackgroundImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getTabBarBackgroundColor
 * @return {cc._Color4B}
 */
getTabBarBackgroundColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getTabBarBackgroundImage
 * @return {cc.CAImage}
 */
getTabBarBackgroundImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method getTabBarVerticalAlignment
 * @return {cc.CABarVerticalAlignment}
 */
getTabBarVerticalAlignment : function (
)
{
    return 0;
},

/**
 * @method getTabBarSelectedIndicatorColor
 * @return {cc._Color4B}
 */
getTabBarSelectedIndicatorColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setTabBarSelectedIndicatorColor
 * @param {cc._Color4B} arg0
 */
setTabBarSelectedIndicatorColor : function (
_color4b 
)
{
},

/**
 * @method showTabBarSelectedIndicator
 */
showTabBarSelectedIndicator : function (
)
{
},

/**
 * @method getTabBarSelectedIndicatorImage
 * @return {cc.CAImage}
 */
getTabBarSelectedIndicatorImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method initWithViewControllers
 * @param {Array} arg0
 * @param {cc.CABarVerticalAlignment} arg1
 * @return {bool}
 */
initWithViewControllers : function (
array, 
cabarverticalalignment 
)
{
    return false;
},

/**
 * @method getTabBarTitleColorForNormal
 * @return {cc._Color4B}
 */
getTabBarTitleColorForNormal : function (
)
{
    return cc._Color4B;
},

/**
 * @method getViewControllerAtIndex
 * @param {unsigned int} arg0
 * @return {cc.CAViewController}
 */
getViewControllerAtIndex : function (
int 
)
{
    return cc.CAViewController;
},

/**
 * @method setTabBarBackgroundColor
 * @param {cc._Color4B} arg0
 */
setTabBarBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method setTabBarSelectedBackgroundColor
 * @param {cc._Color4B} arg0
 */
setTabBarSelectedBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method isTabBarHidden
 * @return {bool}
 */
isTabBarHidden : function (
)
{
    return false;
},

/**
 * @method CATabBarController
 * @constructor
 */
CATabBarController : function (
)
{
},

};

/**
 * @class CADrawerController
 */
ca.CADrawerController = {

/**
 * @method hideLeftViewController
 * @param {bool} arg0
 */
hideLeftViewController : function (
bool 
)
{
},

/**
 * @method isReachBoundaryLeft
 * @return {bool}
 */
isReachBoundaryLeft : function (
)
{
    return false;
},

/**
 * @method showLeftViewController
 * @param {bool} arg0
 */
showLeftViewController : function (
bool 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setTouchMoved
 * @param {bool} arg0
 */
setTouchMoved : function (
bool 
)
{
},

/**
 * @method getEffect3D
 * @return {bool}
 */
getEffect3D : function (
)
{
    return false;
},

/**
 * @method getRightViewController
 * @return {cc.CAViewController}
 */
getRightViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method getBackgroundView
 * @return {cc.CAView}
 */
getBackgroundView : function (
)
{
    return cc.CAView;
},

/**
 * @method isShowLeftViewController
 * @return {bool}
 */
isShowLeftViewController : function (
)
{
    return false;
},

/**
 * @method isTouchMoved
 * @return {bool}
 */
isTouchMoved : function (
)
{
    return false;
},

/**
 * @method initWithController
 * @param {cc.CAViewController} arg0
 * @param {cc.CAViewController} arg1
 * @param {float} arg2
 * @return {bool}
 */
initWithController : function (
caviewcontroller, 
caviewcontroller, 
float 
)
{
    return false;
},

/**
 * @method setEffect3D
 * @param {bool} arg0
 */
setEffect3D : function (
bool 
)
{
},

/**
 * @method isReachBoundaryRight
 * @return {bool}
 */
isReachBoundaryRight : function (
)
{
    return false;
},

/**
 * @method replaceRightViewController
 * @param {cc.CAViewController} arg0
 */
replaceRightViewController : function (
caviewcontroller 
)
{
},

/**
 * @method getLeftViewController
 * @return {cc.CAViewController}
 */
getLeftViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method setBackgroundView
 * @param {cc.CAView} arg0
 */
setBackgroundView : function (
caview 
)
{
},

/**
 * @method CADrawerController
 * @constructor
 */
CADrawerController : function (
)
{
},

};

/**
 * @class CCSet
 */
ca.CCSet = {

/**
 * @method count
 * @return {int}
 */
count : function (
)
{
    return 0;
},

/**
 * @method addObject
 * @param {cc.CAObject} arg0
 */
addObject : function (
caobject 
)
{
},

/**
 * @method begin
 * @return {std::_Rb_tree_const_iterator<cc.CAObject >}
 */
begin : function (
)
{
    return std::_Rb_tree_const_iterator<CrossApp::CAObject >;
},

/**
 * @method end
 * @return {std::_Rb_tree_const_iterator<cc.CAObject >}
 */
end : function (
)
{
    return std::_Rb_tree_const_iterator<CrossApp::CAObject >;
},

/**
 * @method mutableCopy
 * @return {cc.CCSet}
 */
mutableCopy : function (
)
{
    return cc.CCSet;
},

/**
 * @method anyObject
 * @return {cc.CAObject}
 */
anyObject : function (
)
{
    return cc.CAObject;
},

/**
 * @method removeAllObjects
 */
removeAllObjects : function (
)
{
},

/**
 * @method removeObject
 * @param {cc.CAObject} arg0
 */
removeObject : function (
caobject 
)
{
},

/**
 * @method copy
 * @return {cc.CCSet}
 */
copy : function (
)
{
    return cc.CCSet;
},

/**
 * @method containsObject
 * @param {cc.CAObject} arg0
 * @return {bool}
 */
containsObject : function (
caobject 
)
{
    return false;
},

/**
 * @method create
 * @return {cc.CCSet}
 */
create : function (
)
{
    return cc.CCSet;
},

/**
 * @method CCSet
 * @constructor
 */
CCSet : function (
)
{
},

};

/**
 * @class CCEGLTouchDelegate
 */
ca.CCEGLTouchDelegate = {

/**
 * @method mouseScrollWheel
 * @param {cc.CATouch} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {cc.CAEvent} arg3
 */
mouseScrollWheel : function (
catouch, 
float, 
float, 
caevent 
)
{
},

/**
 * @method touchesBegan
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesBegan : function (
ccset, 
caevent 
)
{
},

/**
 * @method touchesCancelled
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesCancelled : function (
ccset, 
caevent 
)
{
},

/**
 * @method touchesMoved
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesMoved : function (
ccset, 
caevent 
)
{
},

/**
 * @method touchesEnded
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesEnded : function (
ccset, 
caevent 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

};

/**
 * @class CATouchController
 */
ca.CATouchController = {

/**
 * @method touchMoved
 */
touchMoved : function (
)
{
},

/**
 * @method setEvent
 * @param {cc.CAEvent} arg0
 */
setEvent : function (
caevent 
)
{
},

/**
 * @method getEvent
 * @return {cc.CAEvent}
 */
getEvent : function (
)
{
    return cc.CAEvent;
},

/**
 * @method getTouch
 * @return {cc.CATouch}
 */
getTouch : function (
)
{
    return cc.CATouch;
},

/**
 * @method touchBegan
 */
touchBegan : function (
)
{
},

/**
 * @method touchEnded
 */
touchEnded : function (
)
{
},

/**
 * @method getTouchID
 * @return {int}
 */
getTouchID : function (
)
{
    return 0;
},

/**
 * @method setTouch
 * @param {cc.CATouch} arg0
 */
setTouch : function (
catouch 
)
{
},

/**
 * @method touchCancelled
 */
touchCancelled : function (
)
{
},

/**
 * @method CATouchController
 * @constructor
 */
CATouchController : function (
)
{
},

};

/**
 * @class CATouchDispatcher
 */
ca.CATouchDispatcher = {

/**
 * @method removeMouseMovedResponder
 * @param {cc.CAResponder} arg0
 */
removeMouseMovedResponder : function (
caresponder 
)
{
},

/**
 * @method mouseScrollWheel
 * @param {cc.CATouch} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {cc.CAEvent} arg3
 */
mouseScrollWheel : function (
catouch, 
float, 
float, 
caevent 
)
{
},

/**
 * @method isDispatchEvents
 * @return {bool}
 */
isDispatchEvents : function (
)
{
    return false;
},

/**
 * @method touchesCancelled
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesCancelled : function (
ccset, 
caevent 
)
{
},

/**
 * @method setScrollRunningResponder
 * @param {cc.CAResponder} arg0
 */
setScrollRunningResponder : function (
caresponder 
)
{
},

/**
 * @method setFirstResponder
 * @param {cc.CAResponder} arg0
 */
setFirstResponder : function (
caresponder 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method touchesEnded
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesEnded : function (
ccset, 
caevent 
)
{
},

/**
 * @method addMouseScrollWheel
 * @param {cc.CAResponder} arg0
 */
addMouseScrollWheel : function (
caresponder 
)
{
},

/**
 * @method getTouchCount
 * @return {int}
 */
getTouchCount : function (
)
{
    return 0;
},

/**
 * @method setDispatchEvents
 * @param {bool} arg0
 */
setDispatchEvents : function (
bool 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method touchesBegan
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesBegan : function (
ccset, 
caevent 
)
{
},

/**
 * @method setDispatchEventsTrue
 */
setDispatchEventsTrue : function (
)
{
},

/**
 * @method touchesMoved
 * @param {cc.CCSet} arg0
 * @param {cc.CAEvent} arg1
 */
touchesMoved : function (
ccset, 
caevent 
)
{
},

/**
 * @method addMouseMovedResponder
 * @param {cc.CAResponder} arg0
 */
addMouseMovedResponder : function (
caresponder 
)
{
},

/**
 * @method getScrollRunningResponder
 * @return {cc.CAResponder}
 */
getScrollRunningResponder : function (
)
{
    return cc.CAResponder;
},

/**
 * @method setDispatchEventsFalse
 */
setDispatchEventsFalse : function (
)
{
},

/**
 * @method getFirstResponder
 * @return {cc.CAResponder}
 */
getFirstResponder : function (
)
{
    return cc.CAResponder;
},

/**
 * @method removeMouseScrollWheel
 * @param {cc.CAResponder} arg0
 */
removeMouseScrollWheel : function (
caresponder 
)
{
},

/**
 * @method removeScrollRunningResponder
 * @param {cc.CAResponder} arg0
 */
removeScrollRunningResponder : function (
caresponder 
)
{
},

/**
 * @method CATouchDispatcher
 * @constructor
 */
CATouchDispatcher : function (
)
{
},

};

/**
 * @class CAGif
 */
ca.CAGif = {

/**
 * @method getImage
 * @return {cc.CAImage}
 */
getImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method initWithFilePath
 * @param {String} arg0
 * @return {bool}
 */
initWithFilePath : function (
str 
)
{
    return false;
},

/**
 * @method initWithData
 * @param {unsigned char} arg0
 * @return {bool}
 */
initWithData : function (
char 
)
{
    return false;
},

/**
 * @method setGifImageWithIndex
 * @param {unsigned int} arg0
 */
setGifImageWithIndex : function (
int 
)
{
},

/**
 * @method getGifImageIndex
 * @return {unsigned int}
 */
getGifImageIndex : function (
)
{
    return 0;
},

/**
 * @method getHeight
 * @return {int}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method getWidth
 * @return {int}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method getImageDuration
 * @return {float}
 */
getImageDuration : function (
)
{
    return 0;
},

/**
 * @method getGifImageCounts
 * @return {unsigned int}
 */
getGifImageCounts : function (
)
{
    return 0;
},

/**
 * @method nextGifImageIndex
 */
nextGifImageIndex : function (
)
{
},

/**
 * @method createWithFilePath
 * @param {String} arg0
 * @return {cc.CAGif}
 */
createWithFilePath : function (
str 
)
{
    return cc.CAGif;
},

/**
 * @method createWithData
 * @param {unsigned char} arg0
 * @return {cc.CAGif}
 */
createWithData : function (
char 
)
{
    return cc.CAGif;
},

/**
 * @method CAGif
 * @constructor
 */
CAGif : function (
)
{
},

};

/**
 * @class CAWindow
 */
ca.CAWindow = {

/**
 * @method presentModalViewController
 * @param {cc.CAViewController} arg0
 * @param {bool} arg1
 */
presentModalViewController : function (
caviewcontroller, 
bool 
)
{
},

/**
 * @method setRootViewController
 * @param {cc.CAViewController} arg0
 */
setRootViewController : function (
caviewcontroller 
)
{
},

/**
 * @method getRootViewController
 * @return {cc.CAViewController}
 */
getRootViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method dismissModalViewController
 * @param {bool} arg0
 */
dismissModalViewController : function (
bool 
)
{
},

/**
 * @method getModalViewController
 * @return {cc.CAViewController}
 */
getModalViewController : function (
)
{
    return cc.CAViewController;
},

/**
 * @method create
 * @return {cc.CAWindow}
 */
create : function (
)
{
    return cc.CAWindow;
},

/**
 * @method CAWindow
 * @constructor
 */
CAWindow : function (
)
{
},

};

/**
 * @class CAGifView
 */
ca.CAGifView = {

/**
 * @method setTimes
 * @param {float} arg0
 */
setTimes : function (
float 
)
{
},

/**
 * @method initWithGif
 * @param {cc.CAGif} arg0
 * @return {bool}
 */
initWithGif : function (
cagif 
)
{
    return false;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setGif
 * @param {cc.CAGif} arg0
 */
setGif : function (
cagif 
)
{
},

/**
 * @method isRepeatForever
 * @return {bool}
 */
isRepeatForever : function (
)
{
    return false;
},

/**
 * @method setRepeatForever
 * @param {bool} arg0
 */
setRepeatForever : function (
bool 
)
{
},

/**
 * @method createWithGif
 * @param {cc.CAGif} arg0
 * @return {cc.CAGifView}
 */
createWithGif : function (
cagif 
)
{
    return cc.CAGifView;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAGifView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAGifView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAGifView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAGifView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAGifView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAGifView;
},

/**
 * @method CAGifView
 * @constructor
 */
CAGifView : function (
)
{
},

};

/**
 * @class CABatchView
 */
ca.CABatchView = {

/**
 * @method reorderSubview
 * @param {cc.CAView} arg0
 * @param {int} arg1
 */
reorderSubview : function (
caview, 
int 
)
{
},

/**
 * @method reorderBatch
 * @param {bool} arg0
 */
reorderBatch : function (
bool 
)
{
},

/**
 * @method lowestAtlasIndexInSubview
 * @param {cc.CAView} arg0
 * @return {unsigned int}
 */
lowestAtlasIndexInSubview : function (
caview 
)
{
    return 0;
},

/**
 * @method setBlendFunc
 * @param {cc._ccBlendFunc} arg0
 */
setBlendFunc : function (
_ccblendfunc 
)
{
},

/**
 * @method removeAllSubviews
 */
removeAllSubviews : function (
)
{
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method initWithImage
 * @param {cc.CAImage} arg0
 * @param {unsigned int} arg1
 * @return {bool}
 */
initWithImage : function (
caimage, 
int 
)
{
    return false;
},

/**
 * @method insertSubview
* @param {cc.CAView|cc.CAView} caview
* @param {int|unsigned int} int
*/
insertSubview : function(
caview,
int 
)
{
},

/**
 * @method atlasIndexForSubview
 * @param {cc.CAView} arg0
 * @param {int} arg1
 * @return {unsigned int}
 */
atlasIndexForSubview : function (
caview, 
int 
)
{
    return 0;
},

/**
 * @method highestAtlasIndexInSubview
 * @param {cc.CAView} arg0
 * @return {unsigned int}
 */
highestAtlasIndexInSubview : function (
caview 
)
{
    return 0;
},

/**
 * @method increaseAtlasCapacity
 */
increaseAtlasCapacity : function (
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method removeViewFromAtlas
 * @param {cc.CAView} arg0
 */
removeViewFromAtlas : function (
caview 
)
{
},

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method getBlendFunc
 * @return {cc._ccBlendFunc}
 */
getBlendFunc : function (
)
{
    return cc._ccBlendFunc;
},

/**
 * @method sortAllSubview
 */
sortAllSubview : function (
)
{
},

/**
 * @method getImageAtlas
 * @return {cc.CAImageAtlas}
 */
getImageAtlas : function (
)
{
    return cc.CAImageAtlas;
},

/**
 * @method removeSubviewAtIndex
 * @param {unsigned int} arg0
 */
removeSubviewAtIndex : function (
int 
)
{
},

/**
 * @method appendSubview
 * @param {cc.CAView} arg0
 */
appendSubview : function (
caview 
)
{
},

/**
 * @method setImageAtlas
 * @param {cc.CAImageAtlas} arg0
 */
setImageAtlas : function (
caimageatlas 
)
{
},

/**
 * @method setImage
 * @param {cc.CAImage} arg0
 */
setImage : function (
caimage 
)
{
},

/**
 * @method rebuildIndexInOrder
 * @param {cc.CAView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
rebuildIndexInOrder : function (
caview, 
int 
)
{
    return 0;
},

/**
 * @method addSubview
 * @param {cc.CAView} arg0
 */
addSubview : function (
caview 
)
{
},

/**
 * @method getDescendants
 * @return {Array}
 */
getDescendants : function (
)
{
    return cc.CAVector<cc.CAView >;
},

/**
 * @method getImage
 * @return {cc.CAImage}
 */
getImage : function (
)
{
    return cc.CAImage;
},

/**
 * @method removeSubview
 * @param {cc.CAView} arg0
 */
removeSubview : function (
caview 
)
{
},

/**
 * @method createWithImage
* @param {cc.CAImage|cc.CAImage} caimage
* @param {unsigned int} int
* @return {cc.CABatchView|cc.CABatchView}
*/
createWithImage : function(
caimage,
int 
)
{
    return cc.CABatchView;
},

/**
 * @method CABatchView
 * @constructor
 */
CABatchView : function (
)
{
},

};

/**
 * @class CAClippingView
 */
ca.CAClippingView = {

/**
 * @method isClippingEnabled
 * @return {bool}
 */
isClippingEnabled : function (
)
{
    return false;
},

/**
 * @method onEnter
 */
onEnter : function (
)
{
},

/**
 * @method onExit
 */
onExit : function (
)
{
},

/**
 * @method setInverted
 * @param {bool} arg0
 */
setInverted : function (
bool 
)
{
},

/**
 * @method visit
 */
visit : function (
)
{
},

/**
 * @method setStencil
 * @param {cc.CAView} arg0
 */
setStencil : function (
caview 
)
{
},

/**
 * @method getAlphaThreshold
 * @return {float}
 */
getAlphaThreshold : function (
)
{
    return 0;
},

/**
 * @method init
* @param {cc.CAView} caview
* @return {bool|bool}
*/
init : function(
caview 
)
{
    return false;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method getStencil
 * @return {cc.CAView}
 */
getStencil : function (
)
{
    return cc.CAView;
},

/**
 * @method setClippingEnabled
 * @param {bool} arg0
 */
setClippingEnabled : function (
bool 
)
{
},

/**
 * @method setAlphaThreshold
 * @param {float} arg0
 */
setAlphaThreshold : function (
float 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method isInverted
 * @return {bool}
 */
isInverted : function (
)
{
    return false;
},

/**
 * @method create
* @param {cc.CAView} caview
* @return {cc.CAClippingView|cc.CAClippingView}
*/
create : function(
caview 
)
{
    return cc.CAClippingView;
},

};

/**
 * @class CAListViewDelegate
 */
ca.CAListViewDelegate = {

/**
 * @method listViewDidDeselectCellAtIndex
 * @param {cc.CAListView} arg0
 * @param {unsigned int} arg1
 */
listViewDidDeselectCellAtIndex : function (
calistview, 
int 
)
{
},

/**
 * @method listViewDidSelectCellAtIndex
 * @param {cc.CAListView} arg0
 * @param {unsigned int} arg1
 */
listViewDidSelectCellAtIndex : function (
calistview, 
int 
)
{
},

};

/**
 * @class CAListViewDataSource
 */
ca.CAListViewDataSource = {

/**
 * @method listViewCellAtIndex
 * @param {cc.CAListView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAListViewCell}
 */
listViewCellAtIndex : function (
calistview, 
dsize, 
int 
)
{
    return cc.CAListViewCell;
},

/**
 * @method numberOfIndex
 * @param {cc.CAListView} arg0
 * @return {unsigned int}
 */
numberOfIndex : function (
calistview 
)
{
    return 0;
},

/**
 * @method listViewWillDisplayCellAtIndex
 * @param {cc.CAListView} arg0
 * @param {cc.CAListViewCell} arg1
 * @param {unsigned int} arg2
 */
listViewWillDisplayCellAtIndex : function (
calistview, 
calistviewcell, 
int 
)
{
},

/**
 * @method listViewHeightForIndex
 * @param {cc.CAListView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
listViewHeightForIndex : function (
calistview, 
int 
)
{
    return 0;
},

};

/**
 * @class CAListView
 */
ca.CAListView = {

/**
 * @method isAllowsSelection
 * @return {bool}
 */
isAllowsSelection : function (
)
{
    return false;
},

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method setListViewDataSource
 * @param {cc.CAListViewDataSource} arg0
 */
setListViewDataSource : function (
calistviewdatasource 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setListFooterHeight
 * @param {unsigned int} arg0
 */
setListFooterHeight : function (
int 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method setSeparatorColor
 * @param {cc._Color4B} arg0
 */
setSeparatorColor : function (
_color4b 
)
{
},

/**
 * @method getListViewDelegate
 * @return {cc.CAListViewDelegate}
 */
getListViewDelegate : function (
)
{
    return cc.CAListViewDelegate;
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setSelectAtIndex
 * @param {unsigned int} arg0
 */
setSelectAtIndex : function (
int 
)
{
},

/**
 * @method clearData
 */
clearData : function (
)
{
},

/**
 * @method setListViewOrientation
 * @param {cc.CAListViewOrientation} arg0
 */
setListViewOrientation : function (
calistvieworientation 
)
{
},

/**
 * @method getSeparatorViewHeight
 * @return {unsigned int}
 */
getSeparatorViewHeight : function (
)
{
    return 0;
},

/**
 * @method setListViewDelegate
 * @param {cc.CAListViewDelegate} arg0
 */
setListViewDelegate : function (
calistviewdelegate 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getListViewDataSource
 * @return {cc.CAListViewDataSource}
 */
getListViewDataSource : function (
)
{
    return cc.CAListViewDataSource;
},

/**
 * @method setAllowsHeadAndFootHover
 * @param {bool} arg0
 */
setAllowsHeadAndFootHover : function (
bool 
)
{
},

/**
 * @method getSeparatorColor
 * @return {cc._Color4B}
 */
getSeparatorColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setAllowsSelection
 * @param {bool} arg0
 */
setAllowsSelection : function (
bool 
)
{
},

/**
 * @method reloadData
 */
reloadData : function (
)
{
},

/**
 * @method setAllowsMultipleSelection
 * @param {bool} arg0
 */
setAllowsMultipleSelection : function (
bool 
)
{
},

/**
 * @method isAllowsMultipleSelection
 * @return {bool}
 */
isAllowsMultipleSelection : function (
)
{
    return false;
},

/**
 * @method displayingListCell
 * @return {Array}
 */
displayingListCell : function (
)
{
    return cc.CAVector<cc.CAListViewCell >;
},

/**
 * @method setListHeaderView
 * @param {cc.CAView} arg0
 */
setListHeaderView : function (
caview 
)
{
},

/**
 * @method getAllowsHeadAndFootHover
 * @return {bool}
 */
getAllowsHeadAndFootHover : function (
)
{
    return false;
},

/**
 * @method getListFooterHeight
 * @return {unsigned int}
 */
getListFooterHeight : function (
)
{
    return 0;
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method setListHeaderHeight
 * @param {unsigned int} arg0
 */
setListHeaderHeight : function (
int 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method getListHeaderView
 * @return {cc.CAView}
 */
getListHeaderView : function (
)
{
    return cc.CAView;
},

/**
 * @method setSeparatorViewHeight
 * @param {unsigned int} arg0
 */
setSeparatorViewHeight : function (
int 
)
{
},

/**
 * @method reloadViewSizeData
 */
reloadViewSizeData : function (
)
{
},

/**
 * @method getListViewOrientation
 * @return {cc.CAListViewOrientation}
 */
getListViewOrientation : function (
)
{
    return 0;
},

/**
 * @method setListFooterView
 * @param {cc.CAView} arg0
 */
setListFooterView : function (
caview 
)
{
},

/**
 * @method getListFooterView
 * @return {cc.CAView}
 */
getListFooterView : function (
)
{
    return cc.CAView;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method cellForRowAtIndex
 * @param {unsigned int} arg0
 * @return {cc.CAListViewCell}
 */
cellForRowAtIndex : function (
int 
)
{
    return cc.CAListViewCell;
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method setUnSelectAtIndex
 * @param {unsigned int} arg0
 */
setUnSelectAtIndex : function (
int 
)
{
},

/**
 * @method dequeueReusableCellWithIdentifier
 * @param {char} arg0
 * @return {cc.CAListViewCell}
 */
dequeueReusableCellWithIdentifier : function (
char 
)
{
    return cc.CAListViewCell;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method getListHeaderHeight
 * @return {unsigned int}
 */
getListHeaderHeight : function (
)
{
    return 0;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAListView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAListView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAListView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAListView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAListView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAListView;
},

/**
 * @method CAListView
 * @constructor
 */
CAListView : function (
)
{
},

};

/**
 * @class CAListViewCell
 */
ca.CAListViewCell = {

/**
 * @method getIndex
 * @return {unsigned int}
 */
getIndex : function (
)
{
    return 0;
},

/**
 * @method getContentView
 * @return {cc.CAView}
 */
getContentView : function (
)
{
    return cc.CAView;
},

/**
 * @method setReuseIdentifier
 * @param {String} arg0
 */
setReuseIdentifier : function (
str 
)
{
},

/**
 * @method isAllowsSelected
 * @return {bool}
 */
isAllowsSelected : function (
)
{
    return false;
},

/**
 * @method getReuseIdentifier
 * @return {String}
 */
getReuseIdentifier : function (
)
{
    return ;
},

/**
 * @method setAllowsSelected
 * @param {bool} arg0
 */
setAllowsSelected : function (
bool 
)
{
},

/**
 * @method setControlStateEffect
 * @param {bool} arg0
 */
setControlStateEffect : function (
bool 
)
{
},

/**
 * @method getBackgroundView
 * @return {cc.CAView}
 */
getBackgroundView : function (
)
{
    return cc.CAView;
},

/**
 * @method isControlStateEffect
 * @return {bool}
 */
isControlStateEffect : function (
)
{
    return false;
},

/**
 * @method initWithReuseIdentifier
 * @param {String} arg0
 * @return {bool}
 */
initWithReuseIdentifier : function (
str 
)
{
    return false;
},

/**
 * @method setBackgroundView
 * @param {cc.CAView} arg0
 */
setBackgroundView : function (
caview 
)
{
},

/**
 * @method create
 * @param {String} arg0
 * @return {cc.CAListViewCell}
 */
create : function (
str 
)
{
    return cc.CAListViewCell;
},

/**
 * @method CAListViewCell
 * @constructor
 */
CAListViewCell : function (
)
{
},

};

/**
 * @class CATableViewDelegate
 */
ca.CATableViewDelegate = {

/**
 * @method tableViewDidSelectRowAtIndexPath
 * @param {cc.CATableView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
tableViewDidSelectRowAtIndexPath : function (
catableview, 
int, 
int 
)
{
},

/**
 * @method tableViewDidDeselectRowAtIndexPath
 * @param {cc.CATableView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
tableViewDidDeselectRowAtIndexPath : function (
catableview, 
int, 
int 
)
{
},

};

/**
 * @class CATableViewDataSource
 */
ca.CATableViewDataSource = {

/**
 * @method tableViewHeightForFooterInSection
 * @param {cc.CATableView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
tableViewHeightForFooterInSection : function (
catableview, 
int 
)
{
    return 0;
},

/**
 * @method tableViewSectionViewForHeaderInSection
 * @param {cc.CATableView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
tableViewSectionViewForHeaderInSection : function (
catableview, 
dsize, 
int 
)
{
    return cc.CAView;
},

/**
 * @method tableViewSectionViewForFooterInSection
 * @param {cc.CATableView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
tableViewSectionViewForFooterInSection : function (
catableview, 
dsize, 
int 
)
{
    return cc.CAView;
},

/**
 * @method tableViewHeightForRowAtIndexPath
 * @param {cc.CATableView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {unsigned int}
 */
tableViewHeightForRowAtIndexPath : function (
catableview, 
int, 
int 
)
{
    return 0;
},

/**
 * @method numberOfSections
 * @param {cc.CATableView} arg0
 * @return {unsigned int}
 */
numberOfSections : function (
catableview 
)
{
    return 0;
},

/**
 * @method tableCellAtIndex
 * @param {cc.CATableView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @return {cc.CATableViewCell}
 */
tableCellAtIndex : function (
catableview, 
dsize, 
int, 
int 
)
{
    return cc.CATableViewCell;
},

/**
 * @method numberOfRowsInSection
 * @param {cc.CATableView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
numberOfRowsInSection : function (
catableview, 
int 
)
{
    return 0;
},

/**
 * @method tableViewHeightForHeaderInSection
 * @param {cc.CATableView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
tableViewHeightForHeaderInSection : function (
catableview, 
int 
)
{
    return 0;
},

/**
 * @method tableViewWillDisplayCellAtIndex
 * @param {cc.CATableView} arg0
 * @param {cc.CATableViewCell} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 */
tableViewWillDisplayCellAtIndex : function (
catableview, 
catableviewcell, 
int, 
int 
)
{
},

};

/**
 * @class CATableView
 */
ca.CATableView = {

/**
 * @method getTableFooterView
 * @return {cc.CAView}
 */
getTableFooterView : function (
)
{
    return cc.CAView;
},

/**
 * @method isAllowsSelection
 * @return {bool}
 */
isAllowsSelection : function (
)
{
    return false;
},

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method getSectionFooterHeightInSection
 * @param {unsigned int} arg0
 * @return {float}
 */
getSectionFooterHeightInSection : function (
int 
)
{
    return 0;
},

/**
 * @method setSeparatorColor
 * @param {cc._Color4B} arg0
 */
setSeparatorColor : function (
_color4b 
)
{
},

/**
 * @method setTableFooterHeight
 * @param {unsigned int} arg0
 */
setTableFooterHeight : function (
int 
)
{
},

/**
 * @method setTableHeaderHeight
 * @param {unsigned int} arg0
 */
setTableHeaderHeight : function (
int 
)
{
},

/**
 * @method setAlwaysTopSectionHeader
 * @param {bool} arg0
 */
setAlwaysTopSectionHeader : function (
bool 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method isAlwaysBottomSectionFooter
 * @return {bool}
 */
isAlwaysBottomSectionFooter : function (
)
{
    return false;
},

/**
 * @method getRowHeightInSectionInRow
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @return {float}
 */
getRowHeightInSectionInRow : function (
int, 
int 
)
{
    return 0;
},

/**
 * @method setTableHeaderView
 * @param {cc.CAView} arg0
 */
setTableHeaderView : function (
caview 
)
{
},

/**
 * @method getNumberOfSections
 * @return {unsigned int}
 */
getNumberOfSections : function (
)
{
    return 0;
},

/**
 * @method getSeparatorViewHeight
 * @return {unsigned int}
 */
getSeparatorViewHeight : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setSelectRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
setSelectRowAtIndexPath : function (
int, 
int 
)
{
},

/**
 * @method getTableViewDataSource
 * @return {cc.CATableViewDataSource}
 */
getTableViewDataSource : function (
)
{
    return cc.CATableViewDataSource;
},

/**
 * @method getSectionHeightInSection
 * @param {unsigned int} arg0
 * @return {float}
 */
getSectionHeightInSection : function (
int 
)
{
    return 0;
},

/**
 * @method isAllowsMultipleSelection
 * @return {bool}
 */
isAllowsMultipleSelection : function (
)
{
    return false;
},

/**
 * @method getSeparatorColor
 * @return {cc._Color4B}
 */
getSeparatorColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setAllowsSelection
 * @param {bool} arg0
 */
setAllowsSelection : function (
bool 
)
{
},

/**
 * @method reloadData
 */
reloadData : function (
)
{
},

/**
 * @method setAllowsMultipleSelection
 * @param {bool} arg0
 */
setAllowsMultipleSelection : function (
bool 
)
{
},

/**
 * @method getTableFooterHeight
 * @return {unsigned int}
 */
getTableFooterHeight : function (
)
{
    return 0;
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method cellForRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @return {cc.CATableViewCell}
 */
cellForRowAtIndexPath : function (
int, 
int 
)
{
    return cc.CATableViewCell;
},

/**
 * @method displayingTableCell
 * @return {Array}
 */
displayingTableCell : function (
)
{
    return cc.CAVector<cc.CATableViewCell >;
},

/**
 * @method getTableHeaderView
 * @return {cc.CAView}
 */
getTableHeaderView : function (
)
{
    return cc.CAView;
},

/**
 * @method setAlwaysBottomSectionFooter
 * @param {bool} arg0
 */
setAlwaysBottomSectionFooter : function (
bool 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method isAlwaysTopSectionHeader
 * @return {bool}
 */
isAlwaysTopSectionHeader : function (
)
{
    return false;
},

/**
 * @method setTableFooterView
 * @param {cc.CAView} arg0
 */
setTableFooterView : function (
caview 
)
{
},

/**
 * @method setSeparatorViewHeight
 * @param {unsigned int} arg0
 */
setSeparatorViewHeight : function (
int 
)
{
},

/**
 * @method setTableViewDelegate
 * @param {cc.CATableViewDelegate} arg0
 */
setTableViewDelegate : function (
catableviewdelegate 
)
{
},

/**
 * @method setTableViewDataSource
 * @param {cc.CATableViewDataSource} arg0
 */
setTableViewDataSource : function (
catableviewdatasource 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method getNumberOfRowsInSection
 * @param {unsigned int} arg0
 * @return {unsigned int}
 */
getNumberOfRowsInSection : function (
int 
)
{
    return 0;
},

/**
 * @method setUnSelectRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
setUnSelectRowAtIndexPath : function (
int, 
int 
)
{
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method getSectionHeaderHeightInSection
 * @param {unsigned int} arg0
 * @return {float}
 */
getSectionHeaderHeightInSection : function (
int 
)
{
    return 0;
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method dequeueReusableCellWithIdentifier
 * @param {char} arg0
 * @return {cc.CATableViewCell}
 */
dequeueReusableCellWithIdentifier : function (
char 
)
{
    return cc.CATableViewCell;
},

/**
 * @method getTableViewDelegate
 * @return {cc.CATableViewDelegate}
 */
getTableViewDelegate : function (
)
{
    return cc.CATableViewDelegate;
},

/**
 * @method getTableHeaderHeight
 * @return {unsigned int}
 */
getTableHeaderHeight : function (
)
{
    return 0;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CATableView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CATableView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CATableView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CATableView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CATableView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CATableView;
},

/**
 * @method CATableView
 * @constructor
 */
CATableView : function (
)
{
},

};

/**
 * @class CATableViewCell
 */
ca.CATableViewCell = {

/**
 * @method getContentView
 * @return {cc.CAView}
 */
getContentView : function (
)
{
    return cc.CAView;
},

/**
 * @method setReuseIdentifier
 * @param {String} arg0
 */
setReuseIdentifier : function (
str 
)
{
},

/**
 * @method isAllowsSelected
 * @return {bool}
 */
isAllowsSelected : function (
)
{
    return false;
},

/**
 * @method getReuseIdentifier
 * @return {String}
 */
getReuseIdentifier : function (
)
{
    return ;
},

/**
 * @method setAllowsSelected
 * @param {bool} arg0
 */
setAllowsSelected : function (
bool 
)
{
},

/**
 * @method setControlStateEffect
 * @param {bool} arg0
 */
setControlStateEffect : function (
bool 
)
{
},

/**
 * @method getRow
 * @return {unsigned int}
 */
getRow : function (
)
{
    return 0;
},

/**
 * @method getBackgroundView
 * @return {cc.CAView}
 */
getBackgroundView : function (
)
{
    return cc.CAView;
},

/**
 * @method getSection
 * @return {unsigned int}
 */
getSection : function (
)
{
    return 0;
},

/**
 * @method isControlStateEffect
 * @return {bool}
 */
isControlStateEffect : function (
)
{
    return false;
},

/**
 * @method initWithReuseIdentifier
 * @param {String} arg0
 * @return {bool}
 */
initWithReuseIdentifier : function (
str 
)
{
    return false;
},

/**
 * @method setBackgroundView
 * @param {cc.CAView} arg0
 */
setBackgroundView : function (
caview 
)
{
},

/**
 * @method create
 * @param {String} arg0
 * @return {cc.CATableViewCell}
 */
create : function (
str 
)
{
    return cc.CATableViewCell;
},

/**
 * @method CATableViewCell
 * @constructor
 */
CATableViewCell : function (
)
{
},

};

/**
 * @class CACollectionViewDelegate
 */
ca.CACollectionViewDelegate = {

/**
 * @method collectionViewDidSelectCellAtIndexPath
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 */
collectionViewDidSelectCellAtIndexPath : function (
cacollectionview, 
int, 
int, 
int 
)
{
},

/**
 * @method collectionViewDidDeselectCellAtIndexPath
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 */
collectionViewDidDeselectCellAtIndexPath : function (
cacollectionview, 
int, 
int, 
int 
)
{
},

};

/**
 * @class CACollectionViewDataSource
 */
ca.CACollectionViewDataSource = {

/**
 * @method numberOfSections
 * @param {cc.CACollectionView} arg0
 * @return {unsigned int}
 */
numberOfSections : function (
cacollectionview 
)
{
    return 0;
},

/**
 * @method collectionViewHeightForRowAtIndexPath
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {unsigned int}
 */
collectionViewHeightForRowAtIndexPath : function (
cacollectionview, 
int, 
int 
)
{
    return 0;
},

/**
 * @method collectionViewHeightForHeaderInSection
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
collectionViewHeightForHeaderInSection : function (
cacollectionview, 
int 
)
{
    return 0;
},

/**
 * @method collectionViewHeightForFooterInSection
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
collectionViewHeightForFooterInSection : function (
cacollectionview, 
int 
)
{
    return 0;
},

/**
 * @method collectionViewSectionViewForHeaderInSection
 * @param {cc.CACollectionView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
collectionViewSectionViewForHeaderInSection : function (
cacollectionview, 
dsize, 
int 
)
{
    return cc.CAView;
},

/**
 * @method numberOfItemsInRowsInSection
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {unsigned int}
 */
numberOfItemsInRowsInSection : function (
cacollectionview, 
int, 
int 
)
{
    return 0;
},

/**
 * @method numberOfRowsInSection
 * @param {cc.CACollectionView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
numberOfRowsInSection : function (
cacollectionview, 
int 
)
{
    return 0;
},

/**
 * @method collectionViewWillDisplayCellAtIndex
 * @param {cc.CACollectionView} arg0
 * @param {cc.CACollectionViewCell} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @param {unsigned int} arg4
 */
collectionViewWillDisplayCellAtIndex : function (
cacollectionview, 
cacollectionviewcell, 
int, 
int, 
int 
)
{
},

/**
 * @method collectionViewSectionViewForFooterInSection
 * @param {cc.CACollectionView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
collectionViewSectionViewForFooterInSection : function (
cacollectionview, 
dsize, 
int 
)
{
    return cc.CAView;
},

/**
 * @method collectionCellAtIndex
 * @param {cc.CACollectionView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @param {unsigned int} arg4
 * @return {cc.CACollectionViewCell}
 */
collectionCellAtIndex : function (
cacollectionview, 
dsize, 
int, 
int, 
int 
)
{
    return cc.CACollectionViewCell;
},

};

/**
 * @class CACollectionView
 */
ca.CACollectionView = {

/**
 * @method setCollectionFooterHeight
 * @param {unsigned int} arg0
 */
setCollectionFooterHeight : function (
int 
)
{
},

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method isAllowsSelection
 * @return {bool}
 */
isAllowsSelection : function (
)
{
    return false;
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setCollectionHeaderView
 * @param {cc.CAView} arg0
 */
setCollectionHeaderView : function (
caview 
)
{
},

/**
 * @method getVertInterval
 * @return {unsigned int}
 */
getVertInterval : function (
)
{
    return 0;
},

/**
 * @method setCollectionFooterView
 * @param {cc.CAView} arg0
 */
setCollectionFooterView : function (
caview 
)
{
},

/**
 * @method getCollectionFooterView
 * @return {cc.CAView}
 */
getCollectionFooterView : function (
)
{
    return cc.CAView;
},

/**
 * @method setAlwaysTopSectionHeader
 * @param {bool} arg0
 */
setAlwaysTopSectionHeader : function (
bool 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method isAlwaysBottomSectionFooter
 * @return {bool}
 */
isAlwaysBottomSectionFooter : function (
)
{
    return false;
},

/**
 * @method getHoriInterval
 * @return {unsigned int}
 */
getHoriInterval : function (
)
{
    return 0;
},

/**
 * @method clearData
 */
clearData : function (
)
{
},

/**
 * @method setCollectionViewDelegate
 * @param {cc.CACollectionViewDelegate} arg0
 */
setCollectionViewDelegate : function (
cacollectionviewdelegate 
)
{
},

/**
 * @method setHoriInterval
 * @param {unsigned int} arg0
 */
setHoriInterval : function (
int 
)
{
},

/**
 * @method setSelectRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
setSelectRowAtIndexPath : function (
int, 
int, 
int 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method isAllowsMultipleSelection
 * @return {bool}
 */
isAllowsMultipleSelection : function (
)
{
    return false;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setAllowsSelection
 * @param {bool} arg0
 */
setAllowsSelection : function (
bool 
)
{
},

/**
 * @method reloadData
 */
reloadData : function (
)
{
},

/**
 * @method setAllowsMultipleSelection
 * @param {bool} arg0
 */
setAllowsMultipleSelection : function (
bool 
)
{
},

/**
 * @method getCollectionHeaderView
 * @return {cc.CAView}
 */
getCollectionHeaderView : function (
)
{
    return cc.CAView;
},

/**
 * @method setCollectionViewDataSource
 * @param {cc.CACollectionViewDataSource} arg0
 */
setCollectionViewDataSource : function (
cacollectionviewdatasource 
)
{
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method cellForRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {cc.CACollectionViewCell}
 */
cellForRowAtIndexPath : function (
int, 
int, 
int 
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method displayingCollectionCell
 * @return {Array}
 */
displayingCollectionCell : function (
)
{
    return cc.CAVector<cc.CACollectionViewCell >;
},

/**
 * @method getCollectionViewDataSource
 * @return {cc.CACollectionViewDataSource}
 */
getCollectionViewDataSource : function (
)
{
    return cc.CACollectionViewDataSource;
},

/**
 * @method setAlwaysBottomSectionFooter
 * @param {bool} arg0
 */
setAlwaysBottomSectionFooter : function (
bool 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method isAlwaysTopSectionHeader
 * @return {bool}
 */
isAlwaysTopSectionHeader : function (
)
{
    return false;
},

/**
 * @method getCollectionHeaderHeight
 * @return {unsigned int}
 */
getCollectionHeaderHeight : function (
)
{
    return 0;
},

/**
 * @method getCollectionViewDelegate
 * @return {cc.CACollectionViewDelegate}
 */
getCollectionViewDelegate : function (
)
{
    return cc.CACollectionViewDelegate;
},

/**
 * @method setVertInterval
 * @param {unsigned int} arg0
 */
setVertInterval : function (
int 
)
{
},

/**
 * @method getCollectionFooterHeight
 * @return {unsigned int}
 */
getCollectionFooterHeight : function (
)
{
    return 0;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method setCollectionHeaderHeight
 * @param {unsigned int} arg0
 */
setCollectionHeaderHeight : function (
int 
)
{
},

/**
 * @method setUnSelectRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
setUnSelectRowAtIndexPath : function (
int, 
int, 
int 
)
{
},

/**
 * @method getHighlightCollectionCell
 * @return {cc.CACollectionViewCell}
 */
getHighlightCollectionCell : function (
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method dequeueReusableCellWithIdentifier
 * @param {char} arg0
 * @return {cc.CACollectionViewCell}
 */
dequeueReusableCellWithIdentifier : function (
char 
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CACollectionView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CACollectionView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CACollectionView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CACollectionView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CACollectionView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CACollectionView;
},

/**
 * @method CACollectionView
 * @constructor
 */
CACollectionView : function (
)
{
},

};

/**
 * @class CACollectionViewCell
 */
ca.CACollectionViewCell = {

/**
 * @method getContentView
 * @return {cc.CAView}
 */
getContentView : function (
)
{
    return cc.CAView;
},

/**
 * @method setReuseIdentifier
 * @param {String} arg0
 */
setReuseIdentifier : function (
str 
)
{
},

/**
 * @method isAllowsSelected
 * @return {bool}
 */
isAllowsSelected : function (
)
{
    return false;
},

/**
 * @method getReuseIdentifier
 * @return {String}
 */
getReuseIdentifier : function (
)
{
    return ;
},

/**
 * @method setAllowsSelected
 * @param {bool} arg0
 */
setAllowsSelected : function (
bool 
)
{
},

/**
 * @method setControlStateEffect
 * @param {bool} arg0
 */
setControlStateEffect : function (
bool 
)
{
},

/**
 * @method getRow
 * @return {unsigned int}
 */
getRow : function (
)
{
    return 0;
},

/**
 * @method getBackgroundView
 * @return {cc.CAView}
 */
getBackgroundView : function (
)
{
    return cc.CAView;
},

/**
 * @method getSection
 * @return {unsigned int}
 */
getSection : function (
)
{
    return 0;
},

/**
 * @method isControlStateEffect
 * @return {bool}
 */
isControlStateEffect : function (
)
{
    return false;
},

/**
 * @method getItem
 * @return {unsigned int}
 */
getItem : function (
)
{
    return 0;
},

/**
 * @method initWithReuseIdentifier
 * @param {String} arg0
 * @return {bool}
 */
initWithReuseIdentifier : function (
str 
)
{
    return false;
},

/**
 * @method setBackgroundView
 * @param {cc.CAView} arg0
 */
setBackgroundView : function (
caview 
)
{
},

/**
 * @method create
 * @param {String} arg0
 * @return {cc.CACollectionViewCell}
 */
create : function (
str 
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method CACollectionViewCell
 * @constructor
 */
CACollectionViewCell : function (
)
{
},

};

/**
 * @class CAAutoCollectionViewDelegate
 */
ca.CAAutoCollectionViewDelegate = {

/**
 * @method collectionViewDidSelectCellAtIndexPath
 * @param {cc.CAAutoCollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
collectionViewDidSelectCellAtIndexPath : function (
caautocollectionview, 
int, 
int 
)
{
},

/**
 * @method collectionViewDidDeselectCellAtIndexPath
 * @param {cc.CAAutoCollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
collectionViewDidDeselectCellAtIndexPath : function (
caautocollectionview, 
int, 
int 
)
{
},

};

/**
 * @class CAAutoCollectionViewDataSource
 */
ca.CAAutoCollectionViewDataSource = {

/**
 * @method numberOfItemsInSection
 * @param {cc.CAAutoCollectionView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
numberOfItemsInSection : function (
caautocollectionview, 
int 
)
{
    return 0;
},

/**
 * @method numberOfSections
 * @param {cc.CAAutoCollectionView} arg0
 * @return {unsigned int}
 */
numberOfSections : function (
caautocollectionview 
)
{
    return 0;
},

/**
 * @method collectionViewHeightForHeaderInSection
 * @param {cc.CAAutoCollectionView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
collectionViewHeightForHeaderInSection : function (
caautocollectionview, 
int 
)
{
    return 0;
},

/**
 * @method collectionViewHeightForFooterInSection
 * @param {cc.CAAutoCollectionView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
collectionViewHeightForFooterInSection : function (
caautocollectionview, 
int 
)
{
    return 0;
},

/**
 * @method collectionViewSectionViewForHeaderInSection
 * @param {cc.CAAutoCollectionView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
collectionViewSectionViewForHeaderInSection : function (
caautocollectionview, 
dsize, 
int 
)
{
    return cc.CAView;
},

/**
 * @method collectionViewWillDisplayCellAtIndex
 * @param {cc.CAAutoCollectionView} arg0
 * @param {cc.CACollectionViewCell} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 */
collectionViewWillDisplayCellAtIndex : function (
caautocollectionview, 
cacollectionviewcell, 
int, 
int 
)
{
},

/**
 * @method collectionViewSizeForItemAtIndexPath
 * @param {cc.CAAutoCollectionView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {size_object}
 */
collectionViewSizeForItemAtIndexPath : function (
caautocollectionview, 
int, 
int 
)
{
    return cc.DSize;
},

/**
 * @method collectionViewSectionViewForFooterInSection
 * @param {cc.CAAutoCollectionView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
collectionViewSectionViewForFooterInSection : function (
caautocollectionview, 
dsize, 
int 
)
{
    return cc.CAView;
},

/**
 * @method collectionCellAtIndex
 * @param {cc.CAAutoCollectionView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @param {unsigned int} arg3
 * @return {cc.CACollectionViewCell}
 */
collectionCellAtIndex : function (
caautocollectionview, 
dsize, 
int, 
int 
)
{
    return cc.CACollectionViewCell;
},

};

/**
 * @class CAAutoCollectionView
 */
ca.CAAutoCollectionView = {

/**
 * @method setCollectionFooterHeight
 * @param {unsigned int} arg0
 */
setCollectionFooterHeight : function (
int 
)
{
},

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method isAllowsSelection
 * @return {bool}
 */
isAllowsSelection : function (
)
{
    return false;
},

/**
 * @method getCellVertAlign
 * @return {cc.CAAutoCollectionView::CellVertAlign}
 */
getCellVertAlign : function (
)
{
    return 0;
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setCollectionHeaderView
 * @param {cc.CAView} arg0
 */
setCollectionHeaderView : function (
caview 
)
{
},

/**
 * @method getOrientation
 * @return {cc.CAAutoCollectionView::Orientation}
 */
getOrientation : function (
)
{
    return 0;
},

/**
 * @method setCollectionFooterView
 * @param {cc.CAView} arg0
 */
setCollectionFooterView : function (
caview 
)
{
},

/**
 * @method getCollectionFooterView
 * @return {cc.CAView}
 */
getCollectionFooterView : function (
)
{
    return cc.CAView;
},

/**
 * @method setHoriCellInterval
 * @param {unsigned int} arg0
 */
setHoriCellInterval : function (
int 
)
{
},

/**
 * @method getCellHoriAlign
 * @return {cc.CAAutoCollectionView::CellHoriAlign}
 */
getCellHoriAlign : function (
)
{
    return 0;
},

/**
 * @method getVertMargins
 * @return {unsigned int}
 */
getVertMargins : function (
)
{
    return 0;
},

/**
 * @method isAlwaysBottomSectionFooter
 * @return {bool}
 */
isAlwaysBottomSectionFooter : function (
)
{
    return false;
},

/**
 * @method setCollectionViewDelegate
 * @param {cc.CAAutoCollectionViewDelegate} arg0
 */
setCollectionViewDelegate : function (
caautocollectionviewdelegate 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setCellHoriAlign
 * @param {cc.CAAutoCollectionView::CellHoriAlign} arg0
 */
setCellHoriAlign : function (
cellhorialign 
)
{
},

/**
 * @method setSelectRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
setSelectRowAtIndexPath : function (
int, 
int 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method getHoriCellInterval
 * @return {unsigned int}
 */
getHoriCellInterval : function (
)
{
    return 0;
},

/**
 * @method isAllowsMultipleSelection
 * @return {bool}
 */
isAllowsMultipleSelection : function (
)
{
    return false;
},

/**
 * @method setVertMargins
 * @param {unsigned int} arg0
 */
setVertMargins : function (
int 
)
{
},

/**
 * @method setAllowsSelection
 * @param {bool} arg0
 */
setAllowsSelection : function (
bool 
)
{
},

/**
 * @method reloadData
 */
reloadData : function (
)
{
},

/**
 * @method setAllowsMultipleSelection
 * @param {bool} arg0
 */
setAllowsMultipleSelection : function (
bool 
)
{
},

/**
 * @method getCollectionHeaderView
 * @return {cc.CAView}
 */
getCollectionHeaderView : function (
)
{
    return cc.CAView;
},

/**
 * @method setCollectionViewDataSource
 * @param {cc.CAAutoCollectionViewDataSource} arg0
 */
setCollectionViewDataSource : function (
caautocollectionviewdatasource 
)
{
},

/**
 * @method setAlwaysTopSectionHeader
 * @param {bool} arg0
 */
setAlwaysTopSectionHeader : function (
bool 
)
{
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method cellForRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {cc.CACollectionViewCell}
 */
cellForRowAtIndexPath : function (
int, 
int, 
int 
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method displayingCollectionCell
 * @return {Array}
 */
displayingCollectionCell : function (
)
{
    return cc.CAVector<cc.CACollectionViewCell >;
},

/**
 * @method getCollectionViewDataSource
 * @return {cc.CAAutoCollectionViewDataSource}
 */
getCollectionViewDataSource : function (
)
{
    return cc.CAAutoCollectionViewDataSource;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setAlwaysBottomSectionFooter
 * @param {bool} arg0
 */
setAlwaysBottomSectionFooter : function (
bool 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setCellVertAlign
 * @param {cc.CAAutoCollectionView::CellVertAlign} arg0
 */
setCellVertAlign : function (
cellvertalign 
)
{
},

/**
 * @method isAlwaysTopSectionHeader
 * @return {bool}
 */
isAlwaysTopSectionHeader : function (
)
{
    return false;
},

/**
 * @method getCollectionHeaderHeight
 * @return {unsigned int}
 */
getCollectionHeaderHeight : function (
)
{
    return 0;
},

/**
 * @method setOrientation
 * @param {cc.CAAutoCollectionView::Orientation} arg0
 */
setOrientation : function (
orientation 
)
{
},

/**
 * @method getCollectionViewDelegate
 * @return {cc.CAAutoCollectionViewDelegate}
 */
getCollectionViewDelegate : function (
)
{
    return cc.CAAutoCollectionViewDelegate;
},

/**
 * @method getVertCellInterval
 * @return {unsigned int}
 */
getVertCellInterval : function (
)
{
    return 0;
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method getCollectionFooterHeight
 * @return {unsigned int}
 */
getCollectionFooterHeight : function (
)
{
    return 0;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method setHoriMargins
 * @param {unsigned int} arg0
 */
setHoriMargins : function (
int 
)
{
},

/**
 * @method setCollectionHeaderHeight
 * @param {unsigned int} arg0
 */
setCollectionHeaderHeight : function (
int 
)
{
},

/**
 * @method setUnSelectRowAtIndexPath
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 */
setUnSelectRowAtIndexPath : function (
int, 
int 
)
{
},

/**
 * @method getHighlightCollectionCell
 * @return {cc.CACollectionViewCell}
 */
getHighlightCollectionCell : function (
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method setVertCellInterval
 * @param {unsigned int} arg0
 */
setVertCellInterval : function (
int 
)
{
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method getHoriMargins
 * @return {unsigned int}
 */
getHoriMargins : function (
)
{
    return 0;
},

/**
 * @method dequeueReusableCellWithIdentifier
 * @param {char} arg0
 * @return {cc.CACollectionViewCell}
 */
dequeueReusableCellWithIdentifier : function (
char 
)
{
    return cc.CACollectionViewCell;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAAutoCollectionView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAAutoCollectionView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAAutoCollectionView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAAutoCollectionView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAAutoCollectionView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAAutoCollectionView;
},

/**
 * @method CAAutoCollectionView
 * @constructor
 */
CAAutoCollectionView : function (
)
{
},

};

/**
 * @class CAAlertView
 */
ca.CAAlertView = {

/**
 * @method setAlertMessage
 * @param {String} arg0
 * @param {cc._Color4B} arg1
 */
setAlertMessage : function (
str, 
_color4b 
)
{
},

/**
 * @method hide
 */
hide : function (
)
{
},

/**
 * @method show
 */
show : function (
)
{
},

/**
 * @method setTitle
 * @param {String} arg0
 * @param {cc._Color4B} arg1
 */
setTitle : function (
str, 
_color4b 
)
{
},

/**
 * @method addButton
* @param {cc.CAButton|String} cabutton
* @param {cc._Color4B} _color4b
* @param {cc.CAImage} caimage
* @param {cc.CAImage} caimage
*/
addButton : function(
str,
_color4b,
caimage,
caimage 
)
{
},

/**
 * @method setMessageFontName
 * @param {String} arg0
 */
setMessageFontName : function (
str 
)
{
},

/**
 * @method create
 * @return {cc.CAAlertView}
 */
create : function (
)
{
    return cc.CAAlertView;
},

/**
 * @method hideWithDisplayed
 * @return {bool}
 */
hideWithDisplayed : function (
)
{
    return false;
},

/**
 * @method CAAlertView
 * @constructor
 */
CAAlertView : function (
)
{
},

};

/**
 * @class CAPickerViewDelegate
 */
ca.CAPickerViewDelegate = {

/**
 * @method didSelectRow
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 */
didSelectRow : function (
capickerview, 
int, 
int 
)
{
},

};

/**
 * @class CAPickerViewDataSource
 */
ca.CAPickerViewDataSource = {

/**
 * @method numberOfComponentsInPickerView
 * @param {cc.CAPickerView} arg0
 * @return {unsigned int}
 */
numberOfComponentsInPickerView : function (
capickerview 
)
{
    return 0;
},

/**
 * @method numberOfRowsInComponent
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
numberOfRowsInComponent : function (
capickerview, 
int 
)
{
    return 0;
},

/**
 * @method viewForSelect
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @param {size_object} arg2
 * @return {cc.CAView}
 */
viewForSelect : function (
capickerview, 
int, 
dsize 
)
{
    return cc.CAView;
},

/**
 * @method viewForRow
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAView}
 */
viewForRow : function (
capickerview, 
int, 
int 
)
{
    return cc.CAView;
},

/**
 * @method widthForComponent
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @return {float}
 */
widthForComponent : function (
capickerview, 
int 
)
{
    return 0;
},

/**
 * @method titleForRow
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @return {char}
 */
titleForRow : function (
capickerview, 
int, 
int 
)
{
    return 0;
},

/**
 * @method rowHeightForComponent
 * @param {cc.CAPickerView} arg0
 * @param {unsigned int} arg1
 * @return {float}
 */
rowHeightForComponent : function (
capickerview, 
int 
)
{
    return 0;
},

};

/**
 * @class CAPickerView
 */
ca.CAPickerView = {

/**
 * @method setFontSizeNormal
 * @param {float} arg0
 */
setFontSizeNormal : function (
float 
)
{
},

/**
 * @method getFontSizeNormal
 * @return {float}
 */
getFontSizeNormal : function (
)
{
    return 0;
},

/**
 * @method getPickerViewDataSource
 * @return {cc.CAPickerViewDataSource}
 */
getPickerViewDataSource : function (
)
{
    return cc.CAPickerViewDataSource;
},

/**
 * @method reloadAllComponents
 */
reloadAllComponents : function (
)
{
},

/**
 * @method getPickerViewDelegate
 * @return {cc.CAPickerViewDelegate}
 */
getPickerViewDelegate : function (
)
{
    return cc.CAPickerViewDelegate;
},

/**
 * @method getFontSizeSelected
 * @return {float}
 */
getFontSizeSelected : function (
)
{
    return 0;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method reloadComponent
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {bool} arg2
 */
reloadComponent : function (
int, 
int, 
bool 
)
{
},

/**
 * @method getFontColorSelected
 * @return {cc._Color4B}
 */
getFontColorSelected : function (
)
{
    return cc._Color4B;
},

/**
 * @method visitEve
 */
visitEve : function (
)
{
},

/**
 * @method setBackgroundColor
 * @param {cc._Color4B} arg0
 */
setBackgroundColor : function (
_color4b 
)
{
},

/**
 * @method setFontColorNormal
 * @param {cc._Color4B} arg0
 */
setFontColorNormal : function (
_color4b 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method numberOfRowsInComponent
 * @param {unsigned int} arg0
 * @return {int}
 */
numberOfRowsInComponent : function (
int 
)
{
    return 0;
},

/**
 * @method getSeparateColor
 * @return {cc._Color4B}
 */
getSeparateColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method selectRow
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @param {bool} arg2
 */
selectRow : function (
int, 
int, 
bool 
)
{
},

/**
 * @method setPickerViewDataSource
 * @param {cc.CAPickerViewDataSource} arg0
 */
setPickerViewDataSource : function (
capickerviewdatasource 
)
{
},

/**
 * @method numberOfComponents
 * @return {int}
 */
numberOfComponents : function (
)
{
    return 0;
},

/**
 * @method setFontColorSelected
 * @param {cc._Color4B} arg0
 */
setFontColorSelected : function (
_color4b 
)
{
},

/**
 * @method rowSizeForComponent
 * @param {unsigned int} arg0
 * @return {size_object}
 */
rowSizeForComponent : function (
int 
)
{
    return cc.DSize;
},

/**
 * @method selectedRowInComponent
 * @param {unsigned int} arg0
 * @return {int}
 */
selectedRowInComponent : function (
int 
)
{
    return 0;
},

/**
 * @method setSeparateColor
 * @param {cc._Color4B} arg0
 */
setSeparateColor : function (
_color4b 
)
{
},

/**
 * @method setPickerViewDelegate
 * @param {cc.CAPickerViewDelegate} arg0
 */
setPickerViewDelegate : function (
capickerviewdelegate 
)
{
},

/**
 * @method getFontColorNormal
 * @return {cc._Color4B}
 */
getFontColorNormal : function (
)
{
    return cc._Color4B;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method viewForRow
 * @param {unsigned int} arg0
 * @param {unsigned int} arg1
 * @return {cc.CAView}
 */
viewForRow : function (
int, 
int 
)
{
    return cc.CAView;
},

/**
 * @method setFontSizeSelected
 * @param {float} arg0
 */
setFontSizeSelected : function (
float 
)
{
},

/**
 * @method create
 * @return {cc.CAPickerView}
 */
create : function (
)
{
    return cc.CAPickerView;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAPickerView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAPickerView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAPickerView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAPickerView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAPickerView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAPickerView;
},

/**
 * @method CAPickerView
 * @constructor
 */
CAPickerView : function (
)
{
},

};

/**
 * @class CADatePickerViewDelegate
 */
ca.CADatePickerViewDelegate = {

/**
 * @method didSelectRow
 * @param {tm} arg0
 */
didSelectRow : function (
tm 
)
{
},

};

/**
 * @class CADatePickerView
 */
ca.CADatePickerView = {

/**
 * @method getDelegate
 * @return {cc.CADatePickerViewDelegate}
 */
getDelegate : function (
)
{
    return cc.CADatePickerViewDelegate;
},

/**
 * @method onEnter
 */
onEnter : function (
)
{
},

/**
 * @method onExit
 */
onExit : function (
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setDelegate
 * @param {cc.CADatePickerViewDelegate} arg0
 */
setDelegate : function (
cadatepickerviewdelegate 
)
{
},

/**
 * @method setDate
 * @param {int} arg0
 * @param {int} arg1
 * @param {int} arg2
 * @param {bool} arg3
 */
setDate : function (
int, 
int, 
int, 
bool 
)
{
},

/**
 * @method create
 * @param {cc.CADatePickerMode} arg0
 * @return {cc.CADatePickerView}
 */
create : function (
cadatepickermode 
)
{
    return cc.CADatePickerView;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @param {cc.CADatePickerMode} arg1
 * @return {cc.CADatePickerView}
 */
createWithFrame : function (
drect, 
cadatepickermode 
)
{
    return cc.CADatePickerView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @param {cc.CADatePickerMode} arg1
 * @return {cc.CADatePickerView}
 */
createWithLayout : function (
drectlayout, 
cadatepickermode 
)
{
    return cc.CADatePickerView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {cc.CADatePickerMode} arg1
 * @return {cc.CADatePickerView}
 */
createWithCenter : function (
drect, 
cadatepickermode 
)
{
    return cc.CADatePickerView;
},

/**
 * @method CADatePickerView
 * @constructor
 * @param {cc.CADatePickerMode} arg0
 */
CADatePickerView : function (
cadatepickermode 
)
{
},

};

/**
 * @class CAWebViewDelegate
 */
ca.CAWebViewDelegate = {

/**
 * @method onShouldStartLoading
 * @param {cc.CAWebView} arg0
 * @param {String} arg1
 * @return {bool}
 */
onShouldStartLoading : function (
cawebview, 
str 
)
{
    return false;
},

/**
 * @method onJSCallback
 * @param {cc.CAWebView} arg0
 * @param {String} arg1
 */
onJSCallback : function (
cawebview, 
str 
)
{
},

/**
 * @method onDidFailLoading
 * @param {cc.CAWebView} arg0
 * @param {String} arg1
 */
onDidFailLoading : function (
cawebview, 
str 
)
{
},

/**
 * @method onDidFinishLoading
 * @param {cc.CAWebView} arg0
 * @param {String} arg1
 */
onDidFinishLoading : function (
cawebview, 
str 
)
{
},

};

/**
 * @class CAWebView
 */
ca.CAWebView = {

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method canGoBack
 * @return {bool}
 */
canGoBack : function (
)
{
    return false;
},

/**
 * @method loadHTMLString
 * @param {String} arg0
 * @param {String} arg1
 */
loadHTMLString : function (
str, 
str 
)
{
},

/**
 * @method reload
 */
reload : function (
)
{
},

/**
 * @method goForward
 */
goForward : function (
)
{
},

/**
 * @method goBack
 */
goBack : function (
)
{
},

/**
 * @method setScalesPageToFit
 * @param {bool} arg0
 */
setScalesPageToFit : function (
bool 
)
{
},

/**
 * @method getWebViewDelegate
 * @return {cc.CAWebViewDelegate}
 */
getWebViewDelegate : function (
)
{
    return cc.CAWebViewDelegate;
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method showNativeWeb
 */
showNativeWeb : function (
)
{
},

/**
 * @method loadFile
 * @param {String} arg0
 */
loadFile : function (
str 
)
{
},

/**
 * @method loadURL
 * @param {String} arg0
 */
loadURL : function (
str 
)
{
},

/**
 * @method evaluateJS
 * @param {String} arg0
 * @return {String}
 */
evaluateJS : function (
str 
)
{
    return ;
},

/**
 * @method showLoadingActivity
 * @param {bool} arg0
 */
showLoadingActivity : function (
bool 
)
{
},

/**
 * @method setJavascriptInterfaceScheme
 * @param {String} arg0
 */
setJavascriptInterfaceScheme : function (
str 
)
{
},

/**
 * @method update
 * @param {float} arg0
 */
update : function (
float 
)
{
},

/**
 * @method setActivityView
 * @param {cc.CAActivityIndicatorView} arg0
 */
setActivityView : function (
caactivityindicatorview 
)
{
},

/**
 * @method setWebViewDelegate
 * @param {cc.CAWebViewDelegate} arg0
 */
setWebViewDelegate : function (
cawebviewdelegate 
)
{
},

/**
 * @method canGoForward
 * @return {bool}
 */
canGoForward : function (
)
{
    return false;
},

/**
 * @method stopLoading
 */
stopLoading : function (
)
{
},

/**
 * @method getHTMLSource
 * @return {String}
 */
getHTMLSource : function (
)
{
    return ;
},

/**
 * @method setVisible
 * @param {bool} arg0
 */
setVisible : function (
bool 
)
{
},

/**
 * @method hideNativeWebAndShowImage
 */
hideNativeWebAndShowImage : function (
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAWebView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAWebView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAWebView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAWebView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAWebView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAWebView;
},

/**
 * @method CAWebView
 * @constructor
 */
CAWebView : function (
)
{
},

};

/**
 * @class CADrawView
 */
ca.CADrawView = {

/**
 * @method draw
 */
draw : function (
)
{
},

/**
 * @method getBlendFunc
 * @return {cc._ccBlendFunc}
 */
getBlendFunc : function (
)
{
    return cc._ccBlendFunc;
},

/**
 * @method drawPolygon
 * @param {point_object} arg0
 * @param {unsigned int} arg1
 * @param {cc._Color4F} arg2
 * @param {float} arg3
 * @param {cc._Color4F} arg4
 */
drawPolygon : function (
dpoint, 
int, 
_color4f, 
float, 
_color4f 
)
{
},

/**
 * @method clear
 */
clear : function (
)
{
},

/**
 * @method setBlendFunc
 * @param {cc._ccBlendFunc} arg0
 */
setBlendFunc : function (
_ccblendfunc 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method drawDot
 * @param {point_object} arg0
 * @param {float} arg1
 * @param {cc._Color4F} arg2
 */
drawDot : function (
dpoint, 
float, 
_color4f 
)
{
},

/**
 * @method drawSegment
 * @param {point_object} arg0
 * @param {point_object} arg1
 * @param {float} arg2
 * @param {cc._Color4F} arg3
 */
drawSegment : function (
dpoint, 
dpoint, 
float, 
_color4f 
)
{
},

/**
 * @method listenBackToForeground
 * @param {cc.CAObject} arg0
 */
listenBackToForeground : function (
caobject 
)
{
},

/**
 * @method create
 * @return {cc.CADrawView}
 */
create : function (
)
{
    return cc.CADrawView;
},

/**
 * @method CADrawView
 * @constructor
 */
CADrawView : function (
)
{
},

};

/**
 * @class CAWaterfallViewDataSource
 */
ca.CAWaterfallViewDataSource = {

/**
 * @method waterfallViewWillDisplayCellAtIndex
 * @param {cc.CAWaterfallView} arg0
 * @param {cc.CAWaterfallViewCell} arg1
 * @param {unsigned int} arg2
 */
waterfallViewWillDisplayCellAtIndex : function (
cawaterfallview, 
cawaterfallviewcell, 
int 
)
{
},

/**
 * @method waterfallViewSectionViewForHeader
 * @param {cc.CAWaterfallView} arg0
 * @param {size_object} arg1
 * @return {cc.CAView}
 */
waterfallViewSectionViewForHeader : function (
cawaterfallview, 
dsize 
)
{
    return cc.CAView;
},

/**
 * @method waterfallViewHeightForItemAtIndex
 * @param {cc.CAWaterfallView} arg0
 * @param {unsigned int} arg1
 * @return {unsigned int}
 */
waterfallViewHeightForItemAtIndex : function (
cawaterfallview, 
int 
)
{
    return 0;
},

/**
 * @method numberOfItems
 * @param {cc.CAWaterfallView} arg0
 * @return {unsigned int}
 */
numberOfItems : function (
cawaterfallview 
)
{
    return 0;
},

/**
 * @method waterfallCellAtIndex
 * @param {cc.CAWaterfallView} arg0
 * @param {size_object} arg1
 * @param {unsigned int} arg2
 * @return {cc.CAWaterfallViewCell}
 */
waterfallCellAtIndex : function (
cawaterfallview, 
dsize, 
int 
)
{
    return cc.CAWaterfallViewCell;
},

/**
 * @method waterfallViewHeightForFooter
 * @param {cc.CAWaterfallView} arg0
 * @return {unsigned int}
 */
waterfallViewHeightForFooter : function (
cawaterfallview 
)
{
    return 0;
},

/**
 * @method waterfallViewSectionViewForFooter
 * @param {cc.CAWaterfallView} arg0
 * @param {size_object} arg1
 * @return {cc.CAView}
 */
waterfallViewSectionViewForFooter : function (
cawaterfallview, 
dsize 
)
{
    return cc.CAView;
},

/**
 * @method waterfallViewHeightForHeader
 * @param {cc.CAWaterfallView} arg0
 * @return {unsigned int}
 */
waterfallViewHeightForHeader : function (
cawaterfallview 
)
{
    return 0;
},

};

/**
 * @class CAWaterfallViewDelegate
 */
ca.CAWaterfallViewDelegate = {

/**
 * @method waterfallViewDidSelectCellAtIndexPath
 * @param {cc.CAWaterfallView} arg0
 * @param {unsigned int} arg1
 */
waterfallViewDidSelectCellAtIndexPath : function (
cawaterfallview, 
int 
)
{
},

/**
 * @method waterfallViewDidDeselectCellAtIndexPath
 * @param {cc.CAWaterfallView} arg0
 * @param {unsigned int} arg1
 */
waterfallViewDidDeselectCellAtIndexPath : function (
cawaterfallview, 
int 
)
{
},

};

/**
 * @class CAWaterfallView
 */
ca.CAWaterfallView = {

/**
 * @method setWaterfallViewDelegate
 * @param {cc.CAWaterfallViewDelegate} arg0
 */
setWaterfallViewDelegate : function (
cawaterfallviewdelegate 
)
{
},

/**
 * @method isAllowsSelection
 * @return {bool}
 */
isAllowsSelection : function (
)
{
    return false;
},

/**
 * @method mouseMovedOutSide
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMovedOutSide : function (
catouch, 
caevent 
)
{
},

/**
 * @method getWaterfallViewDataSource
 * @return {cc.CAWaterfallViewDataSource}
 */
getWaterfallViewDataSource : function (
)
{
    return cc.CAWaterfallViewDataSource;
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method setColumnMargin
 * @param {unsigned int} arg0
 */
setColumnMargin : function (
int 
)
{
},

/**
 * @method getWaterfallHeaderView
 * @return {cc.CAView}
 */
getWaterfallHeaderView : function (
)
{
    return cc.CAView;
},

/**
 * @method getColumnCount
 * @return {unsigned int}
 */
getColumnCount : function (
)
{
    return 0;
},

/**
 * @method setAlwaysTopSectionHeader
 * @param {bool} arg0
 */
setAlwaysTopSectionHeader : function (
bool 
)
{
},

/**
 * @method getWaterfallViewDelegate
 * @return {cc.CAWaterfallViewDelegate}
 */
getWaterfallViewDelegate : function (
)
{
    return cc.CAWaterfallViewDelegate;
},

/**
 * @method isAlwaysBottomSectionFooter
 * @return {bool}
 */
isAlwaysBottomSectionFooter : function (
)
{
    return false;
},

/**
 * @method getWaterfallHeaderHeight
 * @return {unsigned int}
 */
getWaterfallHeaderHeight : function (
)
{
    return 0;
},

/**
 * @method setColumnCount
 * @param {unsigned int} arg0
 */
setColumnCount : function (
int 
)
{
},

/**
 * @method setWaterfallHeaderView
 * @param {cc.CAView} arg0
 */
setWaterfallHeaderView : function (
caview 
)
{
},

/**
 * @method mouseMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
mouseMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setWaterfallViewDataSource
 * @param {cc.CAWaterfallViewDataSource} arg0
 */
setWaterfallViewDataSource : function (
cawaterfallviewdatasource 
)
{
},

/**
 * @method setWaterfallFooterHeight
 * @param {unsigned int} arg0
 */
setWaterfallFooterHeight : function (
int 
)
{
},

/**
 * @method setSelectRowAtIndexPath
 * @param {unsigned int} arg0
 */
setSelectRowAtIndexPath : function (
int 
)
{
},

/**
 * @method setWaterfallHeaderHeight
 * @param {unsigned int} arg0
 */
setWaterfallHeaderHeight : function (
int 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method isAllowsMultipleSelection
 * @return {bool}
 */
isAllowsMultipleSelection : function (
)
{
    return false;
},

/**
 * @method getHighlightWaterfallCell
 * @return {cc.CAWaterfallViewCell}
 */
getHighlightWaterfallCell : function (
)
{
    return cc.CAWaterfallViewCell;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method setAllowsSelection
 * @param {bool} arg0
 */
setAllowsSelection : function (
bool 
)
{
},

/**
 * @method reloadData
 */
reloadData : function (
)
{
},

/**
 * @method setAllowsMultipleSelection
 * @param {bool} arg0
 */
setAllowsMultipleSelection : function (
bool 
)
{
},

/**
 * @method setShowsScrollIndicators
 * @param {bool} arg0
 */
setShowsScrollIndicators : function (
bool 
)
{
},

/**
 * @method cellForRowAtIndexPath
 * @param {unsigned int} arg0
 * @return {cc.CAWaterfallViewCell}
 */
cellForRowAtIndexPath : function (
int 
)
{
    return cc.CAWaterfallViewCell;
},

/**
 * @method setWaterfallFooterView
 * @param {cc.CAView} arg0
 */
setWaterfallFooterView : function (
caview 
)
{
},

/**
 * @method getColumnMargin
 * @return {unsigned int}
 */
getColumnMargin : function (
)
{
    return 0;
},

/**
 * @method getWaterfallFooterView
 * @return {cc.CAView}
 */
getWaterfallFooterView : function (
)
{
    return cc.CAView;
},

/**
 * @method setAlwaysBottomSectionFooter
 * @param {bool} arg0
 */
setAlwaysBottomSectionFooter : function (
bool 
)
{
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setItemMargin
 * @param {unsigned int} arg0
 */
setItemMargin : function (
int 
)
{
},

/**
 * @method isAlwaysTopSectionHeader
 * @return {bool}
 */
isAlwaysTopSectionHeader : function (
)
{
    return false;
},

/**
 * @method displayingWaterfallCell
 * @return {Array}
 */
displayingWaterfallCell : function (
)
{
    return cc.CAVector<cc.CAWaterfallViewCell >;
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method getItemMargin
 * @return {unsigned int}
 */
getItemMargin : function (
)
{
    return 0;
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method setUnSelectRowAtIndexPath
 * @param {unsigned int} arg0
 */
setUnSelectRowAtIndexPath : function (
int 
)
{
},

/**
 * @method getWaterfallFooterHeight
 * @return {unsigned int}
 */
getWaterfallFooterHeight : function (
)
{
    return 0;
},

/**
 * @method switchPCMode
 * @param {bool} arg0
 */
switchPCMode : function (
bool 
)
{
},

/**
 * @method dequeueReusableCellWithIdentifier
 * @param {char} arg0
 * @return {cc.CAWaterfallViewCell}
 */
dequeueReusableCellWithIdentifier : function (
char 
)
{
    return cc.CAWaterfallViewCell;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAWaterfallView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAWaterfallView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAWaterfallView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAWaterfallView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAWaterfallView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAWaterfallView;
},

/**
 * @method CAWaterfallView
 * @constructor
 */
CAWaterfallView : function (
)
{
},

};

/**
 * @class CAWaterfallViewCell
 */
ca.CAWaterfallViewCell = {

/**
 * @method getContentView
 * @return {cc.CAView}
 */
getContentView : function (
)
{
    return cc.CAView;
},

/**
 * @method setReuseIdentifier
 * @param {String} arg0
 */
setReuseIdentifier : function (
str 
)
{
},

/**
 * @method isAllowsSelected
 * @return {bool}
 */
isAllowsSelected : function (
)
{
    return false;
},

/**
 * @method getReuseIdentifier
 * @return {String}
 */
getReuseIdentifier : function (
)
{
    return ;
},

/**
 * @method setAllowsSelected
 * @param {bool} arg0
 */
setAllowsSelected : function (
bool 
)
{
},

/**
 * @method setControlStateEffect
 * @param {bool} arg0
 */
setControlStateEffect : function (
bool 
)
{
},

/**
 * @method getItemIndex
 * @return {unsigned int}
 */
getItemIndex : function (
)
{
    return 0;
},

/**
 * @method getBackgroundView
 * @return {cc.CAView}
 */
getBackgroundView : function (
)
{
    return cc.CAView;
},

/**
 * @method isControlStateEffect
 * @return {bool}
 */
isControlStateEffect : function (
)
{
    return false;
},

/**
 * @method initWithReuseIdentifier
 * @param {String} arg0
 * @return {bool}
 */
initWithReuseIdentifier : function (
str 
)
{
    return false;
},

/**
 * @method setBackgroundView
 * @param {cc.CAView} arg0
 */
setBackgroundView : function (
caview 
)
{
},

/**
 * @method create
 * @param {String} arg0
 * @return {cc.CAWaterfallViewCell}
 */
create : function (
str 
)
{
    return cc.CAWaterfallViewCell;
},

/**
 * @method CAWaterfallViewCell
 * @constructor
 */
CAWaterfallViewCell : function (
)
{
},

};

/**
 * @class VPFrame
 */
ca.VPFrame = {

/**
 * @method getType
 * @return {cc.VPFrameType}
 */
getType : function (
)
{
    return 0;
},

/**
 * @method getDuration
 * @return {float}
 */
getDuration : function (
)
{
    return 0;
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method setDuration
 * @param {float} arg0
 */
setDuration : function (
float 
)
{
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

/**
 * @method setType
 * @param {cc.VPFrameType} arg0
 */
setType : function (
vpframetype 
)
{
},

/**
 * @method VPFrame
 * @constructor
 */
VPFrame : function (
)
{
},

};

/**
 * @class VPAudioFrame
 */
ca.VPAudioFrame = {

/**
 * @method setData
 * @param {char} arg0
 */
setData : function (
char 
)
{
},

/**
 * @method setDataLength
 * @param {unsigned int} arg0
 */
setDataLength : function (
int 
)
{
},

/**
 * @method getData
 * @return {char}
 */
getData : function (
)
{
    return 0;
},

/**
 * @method getDataLength
 * @return {unsigned int}
 */
getDataLength : function (
)
{
    return 0;
},

/**
 * @method VPAudioFrame
 * @constructor
 */
VPAudioFrame : function (
)
{
},

};

/**
 * @class VPVideoFrame
 */
ca.VPVideoFrame = {

/**
 * @method setHeight
 * @param {unsigned int} arg0
 */
setHeight : function (
int 
)
{
},

/**
 * @method setFormat
 * @param {cc.VPVideoFrameFormat} arg0
 */
setFormat : function (
vpvideoframeformat 
)
{
},

/**
 * @method setWidth
 * @param {unsigned int} arg0
 */
setWidth : function (
int 
)
{
},

/**
 * @method getHeight
 * @return {unsigned int}
 */
getHeight : function (
)
{
    return 0;
},

/**
 * @method getWidth
 * @return {unsigned int}
 */
getWidth : function (
)
{
    return 0;
},

/**
 * @method getFormat
 * @return {cc.VPVideoFrameFormat}
 */
getFormat : function (
)
{
    return 0;
},

/**
 * @method VPVideoFrame
 * @constructor
 */
VPVideoFrame : function (
)
{
},

};

/**
 * @class VPVideoFrameRGB
 */
ca.VPVideoFrameRGB = {

/**
 * @method getDataLength
 * @return {unsigned int}
 */
getDataLength : function (
)
{
    return 0;
},

/**
 * @method setLineSize
 * @param {unsigned int} arg0
 */
setLineSize : function (
int 
)
{
},

/**
 * @method getLineSize
 * @return {unsigned int}
 */
getLineSize : function (
)
{
    return 0;
},

/**
 * @method setDataLength
 * @param {unsigned int} arg0
 */
setDataLength : function (
int 
)
{
},

/**
 * @method getData
 * @return {char}
 */
getData : function (
)
{
    return 0;
},

/**
 * @method setData
 * @param {char} arg0
 */
setData : function (
char 
)
{
},

/**
 * @method VPVideoFrameRGB
 * @constructor
 */
VPVideoFrameRGB : function (
)
{
},

};

/**
 * @class VPVideoFrameYUV
 */
ca.VPVideoFrameYUV = {

/**
 * @method getChromaB
 * @return {char}
 */
getChromaB : function (
)
{
    return 0;
},

/**
 * @method setChromaR
 * @param {char} arg0
 */
setChromaR : function (
char 
)
{
},

/**
 * @method setChromaRLength
 * @param {unsigned int} arg0
 */
setChromaRLength : function (
int 
)
{
},

/**
 * @method getChromaBLength
 * @return {unsigned int}
 */
getChromaBLength : function (
)
{
    return 0;
},

/**
 * @method getLumaLength
 * @return {unsigned int}
 */
getLumaLength : function (
)
{
    return 0;
},

/**
 * @method getChromaRLength
 * @return {unsigned int}
 */
getChromaRLength : function (
)
{
    return 0;
},

/**
 * @method setLumaLength
 * @param {unsigned int} arg0
 */
setLumaLength : function (
int 
)
{
},

/**
 * @method getLuma
 * @return {char}
 */
getLuma : function (
)
{
    return 0;
},

/**
 * @method getChromaR
 * @return {char}
 */
getChromaR : function (
)
{
    return 0;
},

/**
 * @method setChromaB
 * @param {char} arg0
 */
setChromaB : function (
char 
)
{
},

/**
 * @method setChromaBLength
 * @param {unsigned int} arg0
 */
setChromaBLength : function (
int 
)
{
},

/**
 * @method setLuma
 * @param {char} arg0
 */
setLuma : function (
char 
)
{
},

/**
 * @method VPVideoFrameYUV
 * @constructor
 */
VPVideoFrameYUV : function (
)
{
},

};

/**
 * @class VPDecoder
 */
ca.VPDecoder = {

/**
 * @method isValidAudio
 * @return {bool}
 */
isValidAudio : function (
)
{
    return false;
},

/**
 * @method getStartTime
 * @return {float}
 */
getStartTime : function (
)
{
    return 0;
},

/**
 * @method openFile
 * @param {String} arg0
 * @return {bool}
 */
openFile : function (
str 
)
{
    return false;
},

/**
 * @method isEOF
 * @return {bool}
 */
isEOF : function (
)
{
    return false;
},

/**
 * @method getFrameHeight
 * @return {unsigned int}
 */
getFrameHeight : function (
)
{
    return 0;
},

/**
 * @method isValidVideo
 * @return {bool}
 */
isValidVideo : function (
)
{
    return false;
},

/**
 * @method decodeFrames
 * @param {float} arg0
 * @return {Array}
 */
decodeFrames : function (
float 
)
{
    return new Array();
},

/**
 * @method getDuration
 * @return {float}
 */
getDuration : function (
)
{
    return 0;
},

/**
 * @method getFirstVideoFrame
 * @return {cc.VPVideoFrame}
 */
getFirstVideoFrame : function (
)
{
    return cc.VPVideoFrame;
},

/**
 * @method enableAudio
 * @param {bool} arg0
 */
enableAudio : function (
bool 
)
{
},

/**
 * @method getSampleRate
 * @return {float}
 */
getSampleRate : function (
)
{
    return 0;
},

/**
 * @method getFrameWidth
 * @return {unsigned int}
 */
getFrameWidth : function (
)
{
    return 0;
},

/**
 * @method onAudioCallback
 * @param {unsigned char} arg0
 * @param {int} arg1
 */
onAudioCallback : function (
char, 
int 
)
{
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method setupVideoFrameFormat
 * @param {cc.VPVideoFrameFormat} arg0
 * @return {bool}
 */
setupVideoFrameFormat : function (
vpvideoframeformat 
)
{
    return false;
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

/**
 * @method closeFile
 */
closeFile : function (
)
{
},

/**
 * @method VPDecoder
 * @constructor
 */
VPDecoder : function (
)
{
},

};

/**
 * @class VPFrameRender
 */
ca.VPFrameRender = {

/**
 * @method updateVertices
 * @param {float} arg0
 * @param {float} arg1
 * @param {float} arg2
 * @param {float} arg3
 * @return {rect_object}
 */
updateVertices : function (
float, 
float, 
float, 
float 
)
{
    return cc.DRect;
},

/**
 * @method draw
 * @param {cc.VPVideoFrame} arg0
 * @param {long} arg1
 */
draw : function (
vpvideoframe, 
long 
)
{
},

/**
 * @method fragmentShader
 * @return {char}
 */
fragmentShader : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {cc.VPVideoFrame} arg0
 */
setFrame : function (
vpvideoframe 
)
{
},

/**
 * @method isValid
 * @return {bool}
 */
isValid : function (
)
{
    return false;
},

/**
 * @method prepareRender
 * @return {bool}
 */
prepareRender : function (
)
{
    return false;
},

/**
 * @method loadShaders
 * @return {bool}
 */
loadShaders : function (
)
{
    return false;
},

/**
 * @method key
 * @return {char}
 */
key : function (
)
{
    return 0;
},

/**
 * @method resolveUniforms
 * @param {unsigned int} arg0
 */
resolveUniforms : function (
int 
)
{
},

/**
 * @method VPFrameRender
 * @constructor
 */
VPFrameRender : function (
)
{
},

};

/**
 * @class VPFrameRenderRGB
 */
ca.VPFrameRenderRGB = {

/**
 * @method fragmentShader
 * @return {char}
 */
fragmentShader : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {cc.VPVideoFrame} arg0
 */
setFrame : function (
vpvideoframe 
)
{
},

/**
 * @method isValid
 * @return {bool}
 */
isValid : function (
)
{
    return false;
},

/**
 * @method prepareRender
 * @return {bool}
 */
prepareRender : function (
)
{
    return false;
},

/**
 * @method resolveUniforms
 * @param {unsigned int} arg0
 */
resolveUniforms : function (
int 
)
{
},

/**
 * @method VPFrameRenderRGB
 * @constructor
 */
VPFrameRenderRGB : function (
)
{
},

};

/**
 * @class VPFrameRenderYUV
 */
ca.VPFrameRenderYUV = {

/**
 * @method fragmentShader
 * @return {char}
 */
fragmentShader : function (
)
{
    return 0;
},

/**
 * @method setFrame
 * @param {cc.VPVideoFrame} arg0
 */
setFrame : function (
vpvideoframe 
)
{
},

/**
 * @method isValid
 * @return {bool}
 */
isValid : function (
)
{
    return false;
},

/**
 * @method prepareRender
 * @return {bool}
 */
prepareRender : function (
)
{
    return false;
},

/**
 * @method resolveUniforms
 * @param {unsigned int} arg0
 */
resolveUniforms : function (
int 
)
{
},

/**
 * @method VPFrameRenderYUV
 * @constructor
 */
VPFrameRenderYUV : function (
)
{
},

};

/**
 * @class CAVideoPlayerViewDelegate
 */
ca.CAVideoPlayerViewDelegate = {

/**
 * @method movieFinishedCallback
 * @param {cc.CAVideoPlayerView} arg0
 */
movieFinishedCallback : function (
cavideoplayerview 
)
{
},

};

/**
 * @class CAVideoPlayerView
 */
ca.CAVideoPlayerView = {

/**
 * @method setPlayerViewDelegate
 * @param {cc.CAVideoPlayerViewDelegate} arg0
 */
setPlayerViewDelegate : function (
cavideoplayerviewdelegate 
)
{
},

/**
 * @method play
 */
play : function (
)
{
},

/**
 * @method pause
 */
pause : function (
)
{
},

/**
 * @method setFirstVideoFrame
 */
setFirstVideoFrame : function (
)
{
},

/**
 * @method getDuration
 * @return {float}
 */
getDuration : function (
)
{
    return 0;
},

/**
 * @method enableAudio
 * @param {bool} arg0
 */
enableAudio : function (
bool 
)
{
},

/**
 * @method setUrl
 * @param {String} arg0
 * @param {bool} arg1
 */
setUrl : function (
str, 
bool 
)
{
},

/**
 * @method isDecoderInited
 * @return {bool}
 */
isDecoderInited : function (
)
{
    return false;
},

/**
 * @method setFullPath
 * @param {String} arg0
 * @param {bool} arg1
 */
setFullPath : function (
str, 
bool 
)
{
},

/**
 * @method setPosition
 * @param {float} arg0
 */
setPosition : function (
float 
)
{
},

/**
 * @method isPlaying
 * @return {bool}
 */
isPlaying : function (
)
{
    return false;
},

/**
 * @method getPlayerViewDelegate
 * @return {cc.CAVideoPlayerViewDelegate}
 */
getPlayerViewDelegate : function (
)
{
    return cc.CAVideoPlayerViewDelegate;
},

/**
 * @method getPosition
 * @return {float}
 */
getPosition : function (
)
{
    return 0;
},

/**
 * @method create
 * @return {cc.CAVideoPlayerView}
 */
create : function (
)
{
    return cc.CAVideoPlayerView;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAVideoPlayerView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAVideoPlayerView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAVideoPlayerView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAVideoPlayerView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAVideoPlayerView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAVideoPlayerView;
},

/**
 * @method CAVideoPlayerView
 * @constructor
 */
CAVideoPlayerView : function (
)
{
},

};

/**
 * @class CAVideoPlayerControlViewDelegate
 */
ca.CAVideoPlayerControlViewDelegate = {

/**
 * @method onBackButtonClicked
 * @param {cc.CAVideoPlayerControlView} arg0
 */
onBackButtonClicked : function (
cavideoplayercontrolview 
)
{
},

};

/**
 * @class CAVideoPlayerControlView
 */
ca.CAVideoPlayerControlView = {

/**
 * @method getPlayerControlViewDelegate
 * @return {cc.CAVideoPlayerControlViewDelegate}
 */
getPlayerControlViewDelegate : function (
)
{
    return cc.CAVideoPlayerControlViewDelegate;
},

/**
 * @method setPlayerViewDelegate
 * @param {cc.CAVideoPlayerViewDelegate} arg0
 */
setPlayerViewDelegate : function (
cavideoplayerviewdelegate 
)
{
},

/**
 * @method setShowBackButton
 * @param {bool} arg0
 */
setShowBackButton : function (
bool 
)
{
},

/**
 * @method setTitle
 * @param {String} arg0
 */
setTitle : function (
str 
)
{
},

/**
 * @method setUrl
 * @param {String} arg0
 */
setUrl : function (
str 
)
{
},

/**
 * @method setPlayerControlViewDelegate
 * @param {cc.CAVideoPlayerControlViewDelegate} arg0
 */
setPlayerControlViewDelegate : function (
cavideoplayercontrolviewdelegate 
)
{
},

/**
 * @method getTitle
 * @return {String}
 */
getTitle : function (
)
{
    return ;
},

/**
 * @method setFullPath
 * @param {String} arg0
 */
setFullPath : function (
str 
)
{
},

/**
 * @method getShowBackButton
 * @return {bool}
 */
getShowBackButton : function (
)
{
    return false;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CAVideoPlayerControlView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CAVideoPlayerControlView;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CAVideoPlayerControlView}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CAVideoPlayerControlView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CAVideoPlayerControlView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CAVideoPlayerControlView;
},

/**
 * @method CAVideoPlayerControlView
 * @constructor
 */
CAVideoPlayerControlView : function (
)
{
},

};

/**
 * @class CACalendar
 */
ca.CACalendar = {

/**
 * @method dayOfWeek
 * @return {int}
 */
dayOfWeek : function (
)
{
    return 0;
},

/**
 * @method dateByDayOfYear
 * @param {int} arg0
 * @param {int} arg1
 * @param {int} arg2
 * @param {int} arg3
 */
dateByDayOfYear : function (
int, 
int, 
int, 
int 
)
{
},

/**
 * @method _dayCountOfYear
 * @param {int} arg0
 * @return {int}
 */
_dayCountOfYear : function (
int 
)
{
    return 0;
},

/**
 * @method addYear
 */
addYear : function (
)
{
},

/**
 * @method weekOfYear
 * @return {int}
 */
weekOfYear : function (
)
{
    return 0;
},

/**
 * @method isLeapYear
 * @return {bool}
 */
isLeapYear : function (
)
{
    return false;
},

/**
 * @method dayCountOfYear
 * @return {int}
 */
dayCountOfYear : function (
)
{
    return 0;
},

/**
 * @method dayOfYear
 * @return {int}
 */
dayOfYear : function (
)
{
    return 0;
},

/**
 * @method _dayCountOfMonth
 * @param {int} arg0
 * @param {int} arg1
 * @return {int}
 */
_dayCountOfMonth : function (
int, 
int 
)
{
    return 0;
},

/**
 * @method dayCountOfMonth
 * @return {int}
 */
dayCountOfMonth : function (
)
{
    return 0;
},

/**
 * @method _compareDate
 * @param {tm} arg0
 * @param {tm} arg1
 * @return {int}
 */
_compareDate : function (
tm, 
tm 
)
{
    return 0;
},

/**
 * @method addDay
 */
addDay : function (
)
{
},

/**
 * @method _isLeapYear
 * @param {int} arg0
 * @return {bool}
 */
_isLeapYear : function (
int 
)
{
    return false;
},

/**
 * @method addMonth
 */
addMonth : function (
)
{
},

/**
 * @method monthOfYear
 * @return {int}
 */
monthOfYear : function (
)
{
    return 0;
},

/**
 * @method setCalendar
* @param {long|int} long
* @param {int} int
* @param {int} int
*/
setCalendar : function(
int,
int,
int 
)
{
},

/**
 * @method _calcDayCount
 * @param {tm} arg0
 * @return {int}
 */
_calcDayCount : function (
tm 
)
{
    return 0;
},

/**
 * @method dayOfMonth
 * @return {int}
 */
dayOfMonth : function (
)
{
    return 0;
},

/**
 * @method create
* @param {int|long} int
* @param {int} int
* @param {int} int
* @return {cc.CACalendar|cc.CACalendar|cc.CACalendar}
*/
create : function(
int,
int,
int 
)
{
    return cc.CACalendar;
},

/**
 * @method CACalendar
 * @constructor
 */
CACalendar : function (
)
{
},

};

/**
 * @class CATextFieldDelegate
 */
ca.CATextFieldDelegate = {

/**
 * @method textFieldShouldBeginEditing
 * @param {cc.CATextField} arg0
 * @return {bool}
 */
textFieldShouldBeginEditing : function (
catextfield 
)
{
    return false;
},

/**
 * @method keyBoardHeight
 * @param {cc.CATextField} arg0
 * @param {int} arg1
 */
keyBoardHeight : function (
catextfield, 
int 
)
{
},

/**
 * @method textFieldShouldEndEditing
 * @param {cc.CATextField} arg0
 * @return {bool}
 */
textFieldShouldEndEditing : function (
catextfield 
)
{
    return false;
},

/**
 * @method textFieldShouldReturn
 * @param {cc.CATextField} arg0
 */
textFieldShouldReturn : function (
catextfield 
)
{
},

/**
 * @method textFieldShouldChangeCharacters
 * @param {cc.CATextField} arg0
 * @param {unsigned int} arg1
 * @param {unsigned int} arg2
 * @param {String} arg3
 * @return {bool}
 */
textFieldShouldChangeCharacters : function (
catextfield, 
int, 
int, 
str 
)
{
    return false;
},

};

/**
 * @class CATextField
 */
ca.CATextField = {

/**
 * @method getFontSize
 * @return {int}
 */
getFontSize : function (
)
{
    return 0;
},

/**
 * @method setKeyboardType
 * @param {cc.CATextField::KeyboardType} arg0
 */
setKeyboardType : function (
keyboardtype 
)
{
},

/**
 * @method ccTouchBegan
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 * @return {bool}
 */
ccTouchBegan : function (
catouch, 
caevent 
)
{
    return false;
},

/**
 * @method getText
 * @return {String}
 */
getText : function (
)
{
    return ;
},

/**
 * @method setClearButtonMode
 * @param {cc.CATextField::ClearButtonMode} arg0
 */
setClearButtonMode : function (
clearbuttonmode 
)
{
},

/**
 * @method ccTouchEnded
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchEnded : function (
catouch, 
caevent 
)
{
},

/**
 * @method getTextColor
 * @return {cc._Color4B}
 */
getTextColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method getKeyboardType
 * @return {cc.CATextField::KeyboardType}
 */
getKeyboardType : function (
)
{
    return 0;
},

/**
 * @method isSecureTextEntry
 * @return {bool}
 */
isSecureTextEntry : function (
)
{
    return false;
},

/**
 * @method getMaxLenght
 * @return {int}
 */
getMaxLenght : function (
)
{
    return 0;
},

/**
 * @method setTextFieldAlign
 * @param {cc.CATextField::TextFieldAlign} arg0
 */
setTextFieldAlign : function (
textfieldalign 
)
{
},

/**
 * @method setMarginImageLeft
 * @param {size_object} arg0
 * @param {String} arg1
 */
setMarginImageLeft : function (
dsize, 
str 
)
{
},

/**
 * @method init
 * @return {bool}
 */
init : function (
)
{
    return false;
},

/**
 * @method setMarginRight
 * @param {int} arg0
 */
setMarginRight : function (
int 
)
{
},

/**
 * @method getClearButtonMode
 * @return {cc.CATextField::ClearButtonMode}
 */
getClearButtonMode : function (
)
{
    return 0;
},

/**
 * @method ccTouchMoved
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchMoved : function (
catouch, 
caevent 
)
{
},

/**
 * @method getReturnType
 * @return {cc.CATextField::ReturnType}
 */
getReturnType : function (
)
{
    return 0;
},

/**
 * @method getPlaceHolderText
 * @return {String}
 */
getPlaceHolderText : function (
)
{
    return ;
},

/**
 * @method setAllowkeyBoardHide
 * @param {bool} arg0
 */
setAllowkeyBoardHide : function (
bool 
)
{
},

/**
 * @method getPlaceHolderColor
 * @return {cc._Color4B}
 */
getPlaceHolderColor : function (
)
{
    return cc._Color4B;
},

/**
 * @method setPlaceHolderText
 * @param {String} arg0
 */
setPlaceHolderText : function (
str 
)
{
},

/**
 * @method setBackgroundImage
 * @param {cc.CAImage} arg0
 */
setBackgroundImage : function (
caimage 
)
{
},

/**
 * @method getMarginRight
 * @return {int}
 */
getMarginRight : function (
)
{
    return 0;
},

/**
 * @method onExitTransitionDidStart
 */
onExitTransitionDidStart : function (
)
{
},

/**
 * @method setMarginLeft
 * @param {int} arg0
 */
setMarginLeft : function (
int 
)
{
},

/**
 * @method setDelegate
 * @param {cc.CATextFieldDelegate} arg0
 */
setDelegate : function (
catextfielddelegate 
)
{
},

/**
 * @method setFontSize
 * @param {int} arg0
 */
setFontSize : function (
int 
)
{
},

/**
 * @method setPlaceHolderColor
 * @param {cc._Color4B} arg0
 */
setPlaceHolderColor : function (
_color4b 
)
{
},

/**
 * @method setTextColor
 * @param {cc._Color4B} arg0
 */
setTextColor : function (
_color4b 
)
{
},

/**
 * @method setReturnType
 * @param {cc.CATextField::ReturnType} arg0
 */
setReturnType : function (
returntype 
)
{
},

/**
 * @method getDelegate
 * @return {cc.CATextFieldDelegate}
 */
getDelegate : function (
)
{
    return cc.CATextFieldDelegate;
},

/**
 * @method resignFirstResponder
 * @return {bool}
 */
resignFirstResponder : function (
)
{
    return false;
},

/**
 * @method setText
 * @param {String} arg0
 */
setText : function (
str 
)
{
},

/**
 * @method getTextFieldAlign
 * @return {cc.CATextField::TextFieldAlign}
 */
getTextFieldAlign : function (
)
{
    return 0;
},

/**
 * @method setMarginImageRight
 * @param {size_object} arg0
 * @param {String} arg1
 */
setMarginImageRight : function (
dsize, 
str 
)
{
},

/**
 * @method ccTouchCancelled
 * @param {cc.CATouch} arg0
 * @param {cc.CAEvent} arg1
 */
ccTouchCancelled : function (
catouch, 
caevent 
)
{
},

/**
 * @method getMarginLeft
 * @return {int}
 */
getMarginLeft : function (
)
{
    return 0;
},

/**
 * @method setMaxLenght
 * @param {int} arg0
 */
setMaxLenght : function (
int 
)
{
},

/**
 * @method becomeFirstResponder
 * @return {bool}
 */
becomeFirstResponder : function (
)
{
    return false;
},

/**
 * @method setSecureTextEntry
 * @param {bool} arg0
 */
setSecureTextEntry : function (
bool 
)
{
},

/**
 * @method isAllowkeyBoardHide
 * @return {bool}
 */
isAllowkeyBoardHide : function (
)
{
    return false;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CATextField}
 */
createWithFrame : function (
drect 
)
{
    return cc.CATextField;
},

/**
 * @method createWithLayout
 * @param {rect_object} arg0
 * @return {cc.CATextField}
 */
createWithLayout : function (
drectlayout 
)
{
    return cc.CATextField;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CATextField}
 */
createWithCenter : function (
drect 
)
{
    return cc.CATextField;
},

/**
 * @method CATextField
 * @constructor
 */
CATextField : function (
)
{
},

};

/**
 * @class CCScriptHandlerEntry
 */
ca.CCScriptHandlerEntry = {

/**
 * @method getHandler
 * @return {int}
 */
getHandler : function (
)
{
    return 0;
},

/**
 * @method getEntryId
 * @return {int}
 */
getEntryId : function (
)
{
    return 0;
},

/**
 * @method create
 * @param {int} arg0
 * @return {cc.CCScriptHandlerEntry}
 */
create : function (
int 
)
{
    return cc.CCScriptHandlerEntry;
},

};

/**
 * @class CCSchedulerScriptHandlerEntry
 */
ca.CCSchedulerScriptHandlerEntry = {

/**
 * @method isMarkedForDeletion
 * @return {bool}
 */
isMarkedForDeletion : function (
)
{
    return false;
},

/**
 * @method markedForDeletion
 */
markedForDeletion : function (
)
{
},

/**
 * @method isPaused
 * @return {bool}
 */
isPaused : function (
)
{
    return false;
},

/**
 * @method getTimer
 * @return {cc.CATimer}
 */
getTimer : function (
)
{
    return cc.CATimer;
},

/**
 * @method create
 * @param {int} arg0
 * @param {float} arg1
 * @param {bool} arg2
 * @return {cc.CCSchedulerScriptHandlerEntry}
 */
create : function (
int, 
float, 
bool 
)
{
    return cc.CCSchedulerScriptHandlerEntry;
},

};

/**
 * @class CCTouchScriptHandlerEntry
 */
ca.CCTouchScriptHandlerEntry = {

/**
 * @method isMultiTouches
 * @return {bool}
 */
isMultiTouches : function (
)
{
    return false;
},

/**
 * @method getSwallowsTouches
 * @return {bool}
 */
getSwallowsTouches : function (
)
{
    return false;
},

/**
 * @method getPriority
 * @return {int}
 */
getPriority : function (
)
{
    return 0;
},

/**
 * @method create
 * @param {int} arg0
 * @param {bool} arg1
 * @param {int} arg2
 * @param {bool} arg3
 * @return {cc.CCTouchScriptHandlerEntry}
 */
create : function (
int, 
bool, 
int, 
bool 
)
{
    return cc.CCTouchScriptHandlerEntry;
},

};

/**
 * @class CCScriptEngineProtocol
 */
ca.CCScriptEngineProtocol = {

/**
 * @method parseConfig
 * @param {cc.CCScriptEngineProtocol::ConfigType} arg0
 * @param {String} arg1
 * @return {bool}
 */
parseConfig : function (
configtype, 
str 
)
{
    return false;
},

/**
 * @method getScriptType
 * @return {cc.ccScriptType}
 */
getScriptType : function (
)
{
    return 0;
},

/**
 * @method removeScriptObjectByCCObject
 * @param {cc.CAObject} arg0
 */
removeScriptObjectByCCObject : function (
caobject 
)
{
},

/**
 * @method executeScriptFile
 * @param {char} arg0
 * @return {int}
 */
executeScriptFile : function (
char 
)
{
    return 0;
},

/**
 * @method executeNodeEvent
 * @param {cc.CAViewController} arg0
 * @param {int} arg1
 * @return {int}
 */
executeNodeEvent : function (
caviewcontroller, 
int 
)
{
    return 0;
},

/**
 * @method executeString
 * @param {char} arg0
 * @return {int}
 */
executeString : function (
char 
)
{
    return 0;
},

/**
 * @method handleAssert
 * @param {char} arg0
 * @return {bool}
 */
handleAssert : function (
char 
)
{
    return false;
},

/**
 * @method removeScriptHandler
 * @param {int} arg0
 */
removeScriptHandler : function (
int 
)
{
},

/**
 * @method reallocateScriptHandler
 * @param {int} arg0
 * @return {int}
 */
reallocateScriptHandler : function (
int 
)
{
    return 0;
},

};

/**
 * @class CCScriptEngineManager
 */
ca.CCScriptEngineManager = {

/**
 * @method setScriptEngine
 * @param {cc.CCScriptEngineProtocol} arg0
 */
setScriptEngine : function (
ccscriptengineprotocol 
)
{
},

/**
 * @method getScriptEngine
 * @return {cc.CCScriptEngineProtocol}
 */
getScriptEngine : function (
)
{
    return cc.CCScriptEngineProtocol;
},

/**
 * @method removeScriptEngine
 */
removeScriptEngine : function (
)
{
},

/**
 * @method sharedManager
 * @return {cc.CCScriptEngineManager}
 */
sharedManager : function (
)
{
    return cc.CCScriptEngineManager;
},

/**
 * @method purgeSharedManager
 */
purgeSharedManager : function (
)
{
},

};

/**
 * @class JSViewController
 */
ca.JSViewController = {

/**
 * @method viewDidUnload
 */
viewDidUnload : function (
)
{
},

/**
 * @method viewDidLoad
 */
viewDidLoad : function (
)
{
},

/**
 * @method JSViewController
 * @constructor
 */
JSViewController : function (
)
{
},

};
