

#ifndef __SCRIPT_SUPPORT_H__
#define __SCRIPT_SUPPORT_H__

#include "platform/CCCommon.h"  //多国语言
#include "dispatcher/CATouch.h" //事件
#include "dispatcher/CATouchDispatcher.h" //触摸和鼠标事件
#include "dispatcher/CAKeypadDelegate.h" //键盘事件 
#include <map>
#include <string>
#include <list>
#include "controller/CAViewController.h"
typedef struct lua_State lua_State;

NS_CC_BEGIN


class CATimer;
class CCLayer;
class CCMenuItem;
class CCNotificationCenter;
class CCCallFunc;
class CCAcceleration;

enum ccScriptType {
    kScriptTypeNone = 0,
    kScriptTypeLua,
    kScriptTypeJavascript
};
/**
 * @js NA
 * @lua NA
 */
class CC_DLL CCScriptHandlerEntry : public CAObject
{
public:
    static CCScriptHandlerEntry* create(int nHandler);
    
    ~CCScriptHandlerEntry(void);
    
    int getHandler(void) {
        return m_nHandler;
    }
    
    int getEntryId(void) {
        return m_nEntryId;
    }
    
protected:
    CCScriptHandlerEntry(int nHandler)
    : m_nHandler(nHandler)
    {
        static int newEntryId = 0;
        newEntryId++;
        m_nEntryId = newEntryId;
    }
    
    int m_nHandler;
    int m_nEntryId;
};

/**
 * @addtogroup script_support
 * @{
 * @js NA
 * @lua NA
 */

class CCSchedulerScriptHandlerEntry : public CCScriptHandlerEntry
{
public:

    static CCSchedulerScriptHandlerEntry* create(int nHandler, float fInterval, bool bPaused);
    
    ~CCSchedulerScriptHandlerEntry(void);
    
    CrossApp::CATimer* getTimer(void) {
        return m_pTimer;
    }
    
    bool isPaused(void) {
        return m_bPaused;
    }
    
    void markedForDeletion(void) {
        m_bMarkedForDeletion = true;
    }
    
    bool isMarkedForDeletion(void) {
        return m_bMarkedForDeletion;
    }
    
private:
    CCSchedulerScriptHandlerEntry(int nHandler)
    : CCScriptHandlerEntry(nHandler)
    , m_pTimer(NULL)
    , m_bPaused(false)
    , m_bMarkedForDeletion(false)
    {
    }
    bool init(float fInterval, bool bPaused);
    
    CrossApp::CATimer*   m_pTimer;
    bool                m_bPaused;
    bool                m_bMarkedForDeletion;
};


/**
 * @js NA
 * @lua NA
 */
class CCTouchScriptHandlerEntry : public CCScriptHandlerEntry
{
public:
    static CCTouchScriptHandlerEntry* create(int nHandler, bool bIsMultiTouches, int nPriority, bool bSwallowsTouches);
    ~CCTouchScriptHandlerEntry(void);
    
    bool isMultiTouches(void) {
        return m_bIsMultiTouches;
    }
    
    int getPriority(void) {
        return m_nPriority;
    }
    
    bool getSwallowsTouches(void) {
        return m_bSwallowsTouches;
    }
    
private:
    CCTouchScriptHandlerEntry(int nHandler)
    : CCScriptHandlerEntry(nHandler)
    , m_bIsMultiTouches(false)
    , m_nPriority(0)
    , m_bSwallowsTouches(false)
    {
    }
    bool init(bool bIsMultiTouches, int nPriority, bool bSwallowsTouches);
    
    bool    m_bIsMultiTouches;
    int     m_nPriority;
    bool    m_bSwallowsTouches;
};

/** ScriptEventType enum*/  //**事件类型需要修改
enum ScriptEventType
{
    kNodeEvent = 0,
    kMenuClickedEvent,
    kCallFuncEvent,
    kScheduleEvent,
    kTouchEvent,
    kTouchesEvent,
    kKeypadEvent,
    kAccelerometerEvent,
    kControlEvent,
    kCommonEvent,
    kComponentEvent,
    kRestartGame,
    kScriptActionEvent
};

/**
 * For Lua, Wrapper the script data that should be used to find the handler corresponding to the Lua function by the nativeobject pointer and store the value pointer which would be converted concretely by the different events,then the converted data would be passed into the Lua stack.
 * @js NA
 */
struct BasicScriptData
{
    /**
     * For Lua, nativeobject is used to get handler corresponding to the Lua function.
     *
     * @js NA
     * @lua NA
     */
    void* nativeObject;
    
    /**
     * A pointer point to the value data which would be converted by different events.
     *
     * @js NA
     * @lua NA
     */
    void* value;
    
    /**
     * Constructor of BasicScriptData.
     *
     * @js NA
     * @lua NA
     */
    BasicScriptData(void* inObject,void* inValue = nullptr)
    : nativeObject(inObject),value(inValue)
    {
    }
};

/**
 * For Lua, the TouchScriptData is used to find the Lua function pointer by the nativeObject, then call the Lua function by push touch data and actionType converted to string type into the Lua stack as the parameters when the touch event is triggered.
 * @js NA
 */
//struct TouchScriptData
//{
//    /**
//     * The EventTouch::EventCode type.
//     *
//     * @lua NA
//     * @js NA
//     */
//    EventTouch::EventCode actionType;
//    /**
//     * For Lua, it Used to find the Lua function pointer by the ScriptHandlerMgr.
//     *
//     * @lua NA
//     * @js NA
//     */
//    void* nativeObject;
//    /**
//     * touch information. it would be in x,y form to push into the Lua stack.
//     *
//     * @lua NA
//     * @js NA
//     */
//    CATouch* touch;
//    /**
//     * event information,it is useless for Lua.
//     *
//     * @lua NA
//     * @js NA
//     */
//    CAEvent* event;
//    
//    /**
//     * Constructor of TouchScriptData.
//     *
//     * @lua NA
//     * @js NA
//     */
//    TouchScriptData(EventTouch::EventCode inActionType, void* inNativeObject, CATouch* inTouch, CAEvent* evt)
//    : actionType(inActionType),
//    nativeObject(inNativeObject),
//    touch(inTouch),
//    event(evt)
//    {
//    }
//};

/**
 * The ScriptEvent wrapper the different script data corresponding to the ScriptEventType in to the unified struct.
 * when the corresponding event is triggered, we could call the `sendEvent` of ScriptEngineProtocol to handle the event.
 * @js NA
 */
struct ScriptEvent
{
    /**
     * The specific type of ScriptEventType.
     *
     * @lua NA
     * @js NA
     */
    ScriptEventType type;
    /**
     * Pointer point to the different data.
     *
     * @lua NA
     * @js NA
     */
    void* data;
    
    /**
     * Constructor of ScriptEvent.
     *
     * @lua NA
     * @js NA
     */
    ScriptEvent(ScriptEventType inType,void* inData)
    : type(inType),
    data(inData)
    {
    }
};
// Don't make CCScriptEngineProtocol inherits from CCObject since setScriptEngine is invoked only once in AppDelegate.cpp,
// It will affect the lifecycle of ScriptCore instance, the autorelease pool will be destroyed before destructing ScriptCore.
// So a crash will appear on Win32 if you click the close button.
/**
 * @js NA
 * @lua NA
 */
class CC_DLL CCScriptEngineProtocol
{
public:
    virtual ~CCScriptEngineProtocol() {};
    
    /** Get script type */
    virtual ccScriptType getScriptType() { return kScriptTypeNone; };

    /** Remove script object. */
    virtual void removeScriptObjectByObject(CAObject* pObj) = 0;
    
    /** Remove script function handler, only CCLuaEngine class need to implement this function. */
    virtual void removeScriptHandler(int nHandler) {};
    
    /** Reallocate script function handler, only CCLuaEngine class need to implement this function. */
    virtual int reallocateScriptHandler(int nHandler) { return -1;}
    
    /**
     @brief Execute script code contained in the given string.
     @param codes holding the valid script code that should be executed.
     @return 0 if the string is executed correctly.
     @return other if the string is executed wrongly.
     */
    virtual int executeString(const char* codes) = 0;
    
    /**
     @brief Execute a script file.
     @param filename String object holding the filename of the script file that is to be executed
     */
    virtual int executeScriptFile(const char* filename) = 0;
    
    /**
     @brief Execute a scripted global function.
     @brief The function should not take any parameters and should return an integer.
     @param functionName String object holding the name of the function, in the global script environment, that is to be executed.
     @return The integer value returned from the script function.
     */
    virtual int executeGlobalFunction(const char* functionName) = 0;

    /**
     * When trigger a script event ,call this func,add params needed into ScriptEvent object.nativeObject is object triggering the event, can be nullptr in Lua.
     *
     *
     * @lua NA
     * @js NA
     */
    virtual int sendEvent(ScriptEvent* evt) = 0;
    
    
    /** called by CCAssert to allow scripting engine to handle failed assertions
     * @return true if the assert was handled by the script engine, false otherwise.
     */
    virtual bool handleAssert(const char *msg) = 0;
    
    
    /**
     * Useless for Lua.
     *
     * @lua NA
     * @js NA
     */
    virtual void setCalledFromScript(bool callFromScript) { CC_UNUSED_PARAM(callFromScript); };
    
    /**
     * Useless for Lua.
     *
     * @lua NA
     * @js NA
     */
    virtual bool isCalledFromScript() { return false; };
    
//    /**
//     @brief Execute a node event function
//     @param pNode which node produce this event
//     @param nAction kCCNodeOnEnter,kCCNodeOnExit,kCCMenuItemActivated,kCCNodeOnEnterTransitionDidFinish,kCCNodeOnExitTransitionDidStart
//     @return The integer value returned from the script function.
//     */
//    virtual int executeNodeEvent(CrossApp::CAViewController* pNode, int nAction) = 0;

    
    /**
     *
     */
    enum ConfigType
    {
        NONE,
        COCOSTUDIO,
    };
    
    virtual bool parseConfig(ConfigType type, const std::string& str) = 0;
};

/**
 CCScriptEngineManager is a singleton which holds an object instance of CCScriptEngineProtocl
 It helps CrossApp and the user code to find back LuaEngine object
 @since v0.99.5-x-0.8.5
 @js NA
 @lua NA
 */
class CC_DLL CCScriptEngineManager
{
public:
    ~CCScriptEngineManager(void);
    
    CCScriptEngineProtocol* getScriptEngine(void) {
        return m_pScriptEngine;
    }
    void setScriptEngine(CCScriptEngineProtocol *pScriptEngine);
    void removeScriptEngine(void);
    
    static CCScriptEngineManager* sharedManager(void);
    
    /**
     * Destroy the singleton about ScriptEngineManager.
     *
     * @lua NA
     * @js NA
     */
    static void destroyInstance();
    /**
     *
     *
     * @lua NA
     * @js NA
     */
//   static bool sendActionEventToJS(Action* actionObject, int eventType, void* param);//没有Action
    /**
     *
     *
     * @lua NA
     * @js NA
     */
    static bool sendNodeEventToJS(CAView* node, int action);
    /**
     *
     *
     * @lua NA
     * @js NA
     */
    static bool sendNodeEventToJSExtended(CAView* node, int action);
    /**
     * Call the Lua function when the event of node is triggered.
     *
     * @param node the nativeobject triggers the event.
     * @param action the specific type.
     *
     * @lua NA
     * @js NA
     */
//    static void sendNodeEventToLua(Node* node, int action); //lua占时不考虑
    
    CC_DEPRECATED_ATTRIBUTE static void purgeSharedManager(void);
    
private:
    CCScriptEngineManager(void)
    : m_pScriptEngine(NULL)
    {
    }
    
    CCScriptEngineProtocol *m_pScriptEngine;
};

// end of script_support group
/// @}

NS_CC_END

#endif // __SCRIPT_SUPPORT_H__
