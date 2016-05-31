//CAApplication
ca.director = ca.CAApplication.getApplication();
//winSize
ca.winSize = ca.director.getWinSize();

//size
ca.size = function(w,h)
{
    return {width:w, height:h};
};
//rect
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
//color
ca.color = function (r, g, b, a) {
    if (r === undefined)
        return {r: 0, g: 0, b: 0, a: 255};
    if (typeof r === "string")
        return ca.hexToColor(r);
    if (typeof r === "object")
        return {r: r.r, g: r.g, b: r.b, a: (r.a === undefined) ? 255 : r.a};
    return  {r: r, g: g, b: b, a: (a === undefined ? 255 : a)};
};




var frame02 = ca.rect(0,400,400,150);

var frame03 = ca.rect(0,550,400,80);

var frame04 = ca.rect(0,630,200,200);

var frame05 = ca.rect(0,830,150,150);

var frame06 = ca.rect(0,0,600,930);

var frame07 = ca.rect(0,980,400,20);

var frame08 = ca.rect(0,1000,400,15);

var frame10 = ca.rect(0,1045,400,30);

var frame12 = ca.rect(0,1105,400,45);

var frame13 = ca.rect(420,0,350,200);

var frame14 = ca.rect(420,200,350,80);

var frame15 = ca.rect(420,290,350,90);

var frame16 = ca.rect(420,380,350,300);



var color02 = ca.color(255,255,255,0);


//new window
var window = new ca.CAWindow();
window.init();
//CAViewController
var vc = new ca.CAViewController();
vc.init();
window.setRootViewController(vc);


//CAImageView
var img = ca.CAImageView.createWithImage(ca.CAImage.create("r/HelloWorld.png"));
img.setFrame(ca.rect(0,0,ca.winSize.width,ca.winSize.height));
vc.getView().addSubview(img);

//CAView
var myView = ca.CAView.createWithFrame(ca.rect(0,0,ca.winSize.width,ca.winSize.height/4),ca.color(255,0,255,255));
vc.getView().addSubview(myView);

//CALabel
var lab = ca.CALabel.createWithFrame(ca.rect(50,50,ca.winSize.width-50,ca.winSize.height/4-50));
lab.setText("Hello CrossApp-js");
vc.getView().addSubview(lab);

//CAButton
var but_01 = ca.CAButton.createWithFrame(frame02,1);
vc.getView().addSubview(but_01);

//CASegmentedControl
var sem = ca.CASegmentedControl.createWithFrame(frame03,3);
sem.setTitleForSegmentAtIndex("Page01",0);
sem.setTitleForSegmentAtIndex("Page02",1);
sem.setTitleForSegmentAtIndex("Page03",2);
vc.getView().addSubview(sem);



//CAScale9ImageView
var scal_imge = ca.CAScale9ImageView.createWithImage(ca.CAImage.create("r/HelloWorld.png"));
scal_imge.setFrame(frame05);
vc.getView().addSubview(scal_imge);

//CAActivityIndicatorView
var idc1 = ca.CAActivityIndicatorView.createWithFrame(frame06);
idc1.setStyle(1);
idc1.startAnimating();

//CAProgress
var pro = ca.CAProgress.createWithFrame(frame07);
vc.getView().addSubview(pro);
//CASlider
var sli = ca.CASlider.createWithFrame(frame08);
vc.getView().addSubview(sli);
//CASwitch
var swi = ca.CASwitch.createWithFrame(ca.rect(200,800,100,80));
vc.getView().addSubview(swi);
//CAStepper
var step = ca.CAStepper.createWithFrame(frame10);
vc.getView().addSubview(step);


//CATextField
var fixed = ca.CATextField.createWithFrame(frame12);
fixed.setPlaceHolderText("Input");
fixed.setKeyboardType(1);
vc.getView().addSubview(fixed);

//textView
var text = ca.CATextView.createWithFrame(frame13);
vc.getView().addSubview(text);

//CATabBarItem
var barItem1 = ca.CATabBarItem.create("item1",ca.CAImage.create("r/HelloWorld.png"),ca.CAImage.create("r/HelloWorld.png"));
var barItem2 = ca.CATabBarItem.create("item2",ca.CAImage.create(""),ca.CAImage.create(""));
var barItem3 = ca.CATabBarItem.create("item3",ca.CAImage.create(""),ca.CAImage.create(""));

//CATabBar
var myItem = new Array(3);
myItem[0] = barItem1;
myItem[1] = barItem2;
myItem[2] = barItem3;
var taBar = ca.CATabBar.createWithFrame(frame15);
taBar.setItems(myItem);
taBar.showSelectedIndicator();
taBar.setSelectedAtIndex(0);
vc.getView().addSubview(taBar);

//CApageView
var view1 = ca.CAImageView.createWithImage(ca.CAImage.create("r/HelloWorld.png"));
var view2 = ca.CAImageView.createWithImage(ca.CAImage.create("r/HelloWorld.png"));
var view3 = ca.CAImageView.createWithImage(ca.CAImage.create("r/HelloWorld.png"));
var myimgView = new Array(3);
myItem[0] = view1;
myItem[1] = view2;
myItem[2] = view3;
var pageview = ca.CAPageView.createWithFrame(frame15,0);


//CAScrollView
var scrView = ca.CAScrollView.createWithFrame(frame16);
scrView.setMinimumZoomScale(0.2);
scrView.setMaximumZoomScale(5.0);
//vc.getView().addSubview(scrView);

//CAImageView
//var view1 = ca.CAImageView.createWithImage(ca.CAImage.create("r/HelloWorld.png"));
//view1.setFrame(frame16);
//scrView.addSubview(view1);

//CAAutoCollectionView
var autoView = ca.CAAutoCollectionView.createWithFrame(frame16);
autoView.setAllowsSelection(true);
autoView.setAllowsMultipleSelection(true);
autoView.setOrientation(0);
autoView.setHoriCellInterval(5);
autoView.setVertCellInterval(5);
vc.getView().addSubview(autoView);


//CATableView
var tableviews = ca.CATableView.createWithFrame(frame16);

//CAPickerView
var packView = ca.CAPickerView.createWithFrame(frame16);
var labeview = ca.CALabel.createWithFrame(frame16);
labeview.setText("hello");
vc.getView().addSubview(packView);


//gif
var gif = ca.CAGifView.createWithGif(ca.CAGif.createWithFilePath("r/gifview1.gif"));
gif.setFrame(frame16)
gif.setRepeatForever(true);
vc.getView().addSubview(gif);


//runWindow
ca.director = ca.CAApplication.getApplication();
ca.director.runWindow(window);
