log('jsb.js');

ca.ENGINE_VERSION = "CrossApp-JS v1.4";

ca.LANGUAGE_ENGLISH    = 0;
ca.LANGUAGE_CHINESE    = 1;
ca.LANGUAGE_FRENCH     = 2;
ca.LANGUAGE_ITALIAN    = 3;
ca.LANGUAGE_GERMAN     = 4;
ca.LANGUAGE_SPANISH    = 5;
ca.LANGUAGE_RUSSIAN    = 6;
ca.LANGUAGE_KOREAN     = 7;
ca.LANGUAGE_JAPANESE   = 8;
ca.LANGUAGE_HUNGARIAN  = 9;
ca.LANGUAGE_PORTUGUESE = 10;
ca.LANGUAGE_ARABIC     = 11;


ca.RED = {r:255, g:0, b:0};
ca.GREEN = {r:0, g:255, b:0};
ca.BLUE = {r:0, g:0, b:255};
ca.BLACK = {r:0, g:0, b:0};
ca.WHITE = {r:255, g:255, b:255};
ca.YELLOW = {r:255, g:255, b:0};



//
// Reusable objects
//
ca._reuse_p = [ {x:0, y:0}, {x:0,y:0}, {x:0,y:0}, {x:0,y:0} ];
ca._reuse_p_index = 0;
ca._reuse_size = {width:0, height:0};
ca._reuse_rect = {x:0, y:0, width:0, height:0};
ca._reuse_color3b = {r:255, g:255, b:255 };
ca._reuse_color4b = {r:255, g:255, b:255, a:255 };

//
// Basic sturcture : Point
//
ca.p = function( x, y )
{
    if (x == undefined)
        return {x: 0, y: 0};
    if (y == undefined)
        return {x: x.x, y: x.y};
    return {x:x, y:y};
};
ca.DPoint = function( x, y )
{
    if( ca._reuse_p_index == ca._reuse_p.length )
        ca._reuse_p_index = 0;
    
    var p = ca._reuse_p[ ca._reuse_p_index];
    ca._reuse_p_index++;
    p.x = x;
    p.y = y;
    return p;
};

ca.dpointEqualToDPoint = function (point1, point2) {
    return ((point1.x == point2.x) && (point1.y == point2.y));
};

ca.DPointZero = function () {
    return ca.p(0, 0);
};

//
// Basic sturcture : Size
//
ca.size = function(w,h)
{
    return {width:w, height:h};
};
ca.dsize = function(w,h)
{
    ca._reuse_size.width = w;
    ca._reuse_size.height = h;
    return ca._reuse_size;
};
ca.dsizeEqualToDSize = function (size1, size2)
{
    return ((size1.width == size2.width) && (size1.height == size2.height));
};

ca.DSizeZero = function () {
    return ca.size(0, 0);
};


/**
 * create a ca.rect object
 * @param {Number|ca.point|ca.rect} [x] a Number value as x or a ca.point object as origin or a ca.rect clone object
 * @param {Number|ca.size} [y] x1 a Number value as y or a ca.size object as size
 * @param {Number} [w]
 * @param {Number} [h]
 * @return {Object} a ca.rect object
 */
ca.rect = function(x,y,w,h)
{
    var argLen = arguments.length;
    if (argLen === 0)
        return { x: 0, y: 0, width: 0, height: 0 };
    
    if (argLen === 1)
        return { x: x.x, y: x.y, width: x.width, height: x.height };
    
    if (argLen === 2)
        return { x: x.x, y: x.y, width: y.width, height: y.height };
    
    if (argLen === 4)
        return { x: x, y: y, width: w, height: h };
    
    throw "unknown argument type";
};
ca.drect = function(x,y,w,h)
{
    ca._reuse_rect.x = x;
    ca._reuse_rect.y = y;
    ca._reuse_rect.width = w;
    ca._reuse_rect.height = h;
    return ca._reuse_rect;
};
ca.rectEqualToRect = function (rect1, rect2) {
    return ( rect1.x==rect2.x && rect1.y==rect2.y && rect1.width==rect2.width && rect1.height==rect2.height);
};

ca.rectContainsRect = function (rect1, rect2) {
    if ((rect1.x >= rect2.x) || (rect1.y >= rect2.y) ||
        ( rect1.x + rect1.width <= rect2.x + rect2.width) ||
        ( rect1.y + rect1.height <= rect2.y + rect2.height))
        return false;
    return true;
};

ca.RectZero = function () {
    return ca.rect(0, 0, 0, 0);
};


// Basic sturcture : Color
ca.Color = function (r, g, b, a) {
    this.r = r || 0;
    this.g = g || 0;
    this.b = b || 0;
    this.a = (a === undefined) ? 255 : a;
};

/**
 * Generate a color object based on multiple forms of parameters
 * @example
 *
 * // 1. All channels seperately as parameters
 * var color1 = ca.color(255, 255, 255, 255);
 *
 * // 2. Convert a hex string to a color
 * var color2 = ca.color("#000000");
 *
 * // 3. An color object as parameter
 * var color3 = ca.color({r: 255, g: 255, b: 255, a: 255});
 *
 * Alpha channel is optional. Default value is 255
 *
 * @param {Number|String|ca.Color} r
 * @param {Number} g
 * @param {Number} b
 * @param {Number} [a=255]
 * @returns {ca.Color}
 */
ca.color = function (r, g, b, a) {
    if (r === undefined)
        return {r: 0, g: 0, b: 0, a: 255};
    if (typeof r === "string")
        return ca.hexToColor(r);
    if (typeof r === "object")
        return {r: r.r, g: r.g, b: r.b, a: (r.a === undefined) ? 255 : r.a};
    return  {r: r, g: g, b: b, a: (a === undefined ? 255 : a)};
};

/**
 * returns true if both caColor3B are equal. Otherwise it returns false.
 * @param {ca.Color} color1
 * @param {ca.Color} color2
 * @return {Boolean}  true if both caColor3B are equal. Otherwise it returns false.
 */
ca.colorEqual = function(color1, color2){
    return color1.r === color2.r && color1.g === color2.g && color1.b === color2.b;
};

/**
 * convert a string of color for style to Color.
 * e.g. "#ff06ff"  to : ca.color(255,6,255)
 * @param {String} hex
 * @return {ca.Color}
 */
ca.hexToColor = function (hex) {
    hex = hex.replace(/^#?/, "0x");
    var c = parseInt(hex);
    var r = c >> 16;
    var g = (c >> 8) % 256;
    var b = c % 256;
    return ca.color(r, g, b);
};

/**
 * convert Color to a string of color for style.
 * e.g.  ca.color(255,6,255)  to : "#ff06ff"
 * @param {ca.Color} color
 * @return {String}
 */
ca.colorToHex = function (color) {
    var hR = color.r.toString(16);
    var hG = color.g.toString(16);
    var hB = color.b.toString(16);
    var hex = "#" + (color.r < 16 ? ("0" + hR) : hR) + (color.g < 16 ? ("0" + hG) : hG) + (color.b < 16 ? ("0" + hB) : hB);
    return hex;
};

/**
 * White color (255, 255, 255, 255)
 * @returns {ca.Color}
 * @private
 */
ca.color._getWhite = function(){
    return ca.color(255, 255, 255, 255);
};

/**
 *  Yellow color (255, 255, 0, 255)
 * @returns {ca.Color}
 * @private
 */
ca.color._getYellow = function () {
    return ca.color(255, 255, 0, 255);
};

/**
 *  Blue color (0, 0, 255, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getBlue = function () {
    return  ca.color(0, 0, 255, 255);
};

/**
 *  Green Color (0, 255, 0, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getGreen = function () {
    return ca.color(0, 255, 0, 255);
};

/**
 *  Red Color (255, 0, 0, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getRed = function () {
    return ca.color(255, 0, 0, 255);
};

/**
 *  Magenta Color (255, 0, 255, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getMagenta = function () {
    return ca.color(255, 0, 255, 255);
};

/**
 *  Black Color (0, 0, 0, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getBlack = function () {
    return ca.color(0, 0, 0, 255);
};

/**
 *  Orange Color (255, 127, 0, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getOrange = function () {
    return ca.color(255, 127, 0, 255);
};

/**
 *  Gray Color (166, 166, 166, 255)
 * @type {ca.Color}
 * @private
 */
ca.color._getGray = function () {
    return ca.color(166, 166, 166, 255);
};

var _proto = ca.color;
/** @expose */
_proto.WHITE;
ca.defineGetterSetter(_proto, "WHITE", _proto._getWhite);
/** @expose */
_proto.YELLOW;
ca.defineGetterSetter(_proto, "YELLOW", _proto._getYellow);
/** @expose */
_proto.BLUE;
ca.defineGetterSetter(_proto, "BLUE", _proto._getBlue);
/** @expose */
_proto.GREEN;
ca.defineGetterSetter(_proto, "GREEN", _proto._getGreen);
/** @expose */
_proto.RED;
ca.defineGetterSetter(_proto, "RED", _proto._getRed);
/** @expose */
_proto.MAGENTA;
ca.defineGetterSetter(_proto, "MAGENTA", _proto._getMagenta);
/** @expose */
_proto.BLACK;
ca.defineGetterSetter(_proto, "BLACK", _proto._getBlack);
/** @expose */
_proto.ORANGE;
ca.defineGetterSetter(_proto, "ORANGE", _proto._getOrange);
/** @expose */
_proto.GRAY;
ca.defineGetterSetter(_proto, "GRAY", _proto._getGray);

// Cocos2d-html5 supports multi scene resources preloading.
// This is a compatible function for JSB.
ca.Loader = ca.Class.extend({
                                initWith:function (resources, selector, target) {
                                    if (selector) {
                                        this._selector = selector;
                                        this._target = target;
                                    }
                                    this._selector.call(this._target);
                                }
                            });

ca.Loader.preload = function (resources, selector, target) {
    if (!this._instance) {
        this._instance = new ca.Loader();
    }
    this._instance.initWith(resources, selector, target);
    return this._instance;
};

ca.LoaderScene = ca.Loader;

var ConfigType = {
NONE: 0,
COCOSTUDIO: 1
};


