/**
 * @module autogentestbindings_js
 */
var ca = ca || {};

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
 * @method removeAllSubviews
 */
removeAllSubviews : function (
)
{
},

/**
 * @method reViewlayout
 * @param {size_object} arg0
 * @param {bool} arg1
 */
reViewlayout : function (
dsize, 
bool 
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
 * @method nodeToParentTransform
 * @return {cc.CATransformation}
 */
nodeToParentTransform : function (
)
{
    return cc.CATransformation;
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
 * @method setFrame
 * @param {rect_object} arg0
 */
setFrame : function (
drect 
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

};

/**
 * @class CAFont
 */
ca.CAFont = {

/**
 * @method CAFont
 * @constructor
 */
CAFont : function (
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
 * @method getStatusBarOrientation
 * @return {cc.CAInterfaceOrientation}
 */
getStatusBarOrientation : function (
)
{
    return 0;
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
 * @method getNotificationView
 * @return {cc.CAView}
 */
getNotificationView : function (
)
{
    return cc.CAView;
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
 * @method getRootWindow
 * @return {cc.CAWindow}
 */
getRootWindow : function (
)
{
    return cc.CAWindow;
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
 * @method getAnimationInterval
 * @return {double}
 */
getAnimationInterval : function (
)
{
    return 0;
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
 * @method getCurrentNumberOfDraws
 * @return {unsigned long}
 */
getCurrentNumberOfDraws : function (
)
{
    return 0;
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
 * @method getApplication
 * @return {cc.CAApplication}
 */
getApplication : function (
)
{
    return cc.CAApplication;
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
 * @class CAScrollView
 */
ca.CAScrollView = {

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
 * @method getOrientation
 * @return {CAPageView::Orientation}
 */
getOrientation : function (
)
{
    return CAPageView::Orientation;
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
 * @param {CAPageView::Orientation} arg1
 * @return {CAPageView}
 */
createWithFrame : function (
drect, 
orientation 
)
{
    return CAPageView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @param {CAPageView::Orientation} arg1
 * @return {CAPageView}
 */
createWithCenter : function (
drect, 
orientation 
)
{
    return CAPageView;
},

/**
 * @method CAPageView
 * @constructor
 * @param {CAPageView::Orientation} arg0
 */
CAPageView : function (
orientation 
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
 * @method removeViewFromSuperview
 */
removeViewFromSuperview : function (
)
{
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
 * @return {cc.CACollectionViewCell}
 */
cellForRowAtIndexPath : function (
int, 
int 
)
{
    return cc.CACollectionViewCell;
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
 * @method getCollectionFooterHeight
 * @return {unsigned int}
 */
getCollectionFooterHeight : function (
)
{
    return 0;
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
 * @class CATextView
 */
ca.CATextView = {

/**
 * @method setTextViewAlign
 * @param {cc.CATextView::TextViewAlign} arg0
 */
setTextViewAlign : function (
textviewalign 
)
{
},

/**
 * @method getDelegate
 * @return {cc.CATextViewDelegate}
 */
getDelegate : function (
)
{
    return cc.CATextViewDelegate;
},

/**
 * @method getTextFontSize
 * @return {int}
 */
getTextFontSize : function (
)
{
    return 0;
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
 * @method setBackgroundImage
 * @param {cc.CAImage} arg0
 */
setBackgroundImage : function (
caimage 
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
 * @method setReturnType
 * @param {cc.CATextView::ReturnType} arg0
 */
setReturnType : function (
returntype 
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
 * @method getTextColor
 * @return {cc._Color4B}
 */
getTextColor : function (
)
{
    return cc._Color4B;
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
 * @method getText
 * @return {String}
 */
getText : function (
)
{
    return ;
},

/**
 * @method setDelegate
 * @param {cc.CATextViewDelegate} arg0
 */
setDelegate : function (
catextviewdelegate 
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
 * @method setTextFontSize
 * @param {int} arg0
 */
setTextFontSize : function (
int 
)
{
},

/**
 * @method getReturnType
 * @return {cc.CATextView::ReturnType}
 */
getReturnType : function (
)
{
    return 0;
},

/**
 * @method onEnterTransitionDidFinish
 */
onEnterTransitionDidFinish : function (
)
{
},

/**
 * @method getTextViewAlign
 * @return {cc.CATextView::TextViewAlign}
 */
getTextViewAlign : function (
)
{
    return 0;
},

/**
 * @method createWithFrame
 * @param {rect_object} arg0
 * @return {cc.CATextView}
 */
createWithFrame : function (
drect 
)
{
    return cc.CATextView;
},

/**
 * @method createWithCenter
 * @param {rect_object} arg0
 * @return {cc.CATextView}
 */
createWithCenter : function (
drect 
)
{
    return cc.CATextView;
},

/**
 * @method CATextView
 * @constructor
 */
CATextView : function (
)
{
},

};
