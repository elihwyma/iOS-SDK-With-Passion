/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, UIApplication, UIEvent, UIMotionEvent, UIPhysicalKeyboardEvent, UIPressesEvent, UIRemoteControlEvent, UIWheelEvent;

__attribute__((visibility("hidden")))
@interface UIEventEnvironment : NSObject

{
    UIApplication *_application;
    NSMutableArray *_eventQueue;
    UIEvent *_event;
    UIMotionEvent *_motionEvent;
    UIRemoteControlEvent *_remoteControlEvent;
    NSMutableDictionary *_dragEventsByContextAndSessionIDPair;
    _Bool _isSystemApplication;
    double _commitTimeForTouchEvents;
    NSMutableSet *_windowsWithActiveTouchMaps;
    _Bool _hasSeenAnyPencilEvents;
    UIPressesEvent *_fallbackPressesEvent;
    UIPhysicalKeyboardEvent *_fallbackPhysicalKeyboardEvent;
    UIWheelEvent *_fallbackWheelEvent;
    NSMapTable *_eventRegistryByScene;
    NSHashTable *_invalidatedAndDisconnectedScenes;
    NSMapTable *_pressesMapByScene;
    NSMapTable *_currentNudgePressTypeByScene;
    NSMutableDictionary *_physicalButtonPressesMap;
    NSMapTable *_currentTouchByScene;
    long long _disableTouchCoalescingCount;
    NSMutableDictionary *_estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray *_estimatedTouchRecordsInIncomingOrder;
    unsigned int _genericGestureFocusWindowContextID;
    unsigned int _fallbackGenericGestureFocusWindowContextID;
}

@property (nonatomic) UIApplication *application;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (nonatomic, readonly) NSSet *windowsWithActiveTouchMaps;
@property (nonatomic, getter=_genericGestureFocusWindowID, setter=_setGenericGestureFocusWindowID:) unsigned int genericGestureFocusWindowContextID;
@property (nonatomic, getter=_fallbackGenericGestureFocusWindowID, setter=_setFallbackGenericGestureFocusWindowID:) unsigned int fallbackGenericGestureFocusWindowContextID;

+ (void)_setKeyboardWindowSceneConnected:(_Bool)arg1;
+ (_Bool)_isKeyboardWindowSceneConnected;

- (void)dealloc;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_touchesEventForWindow:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (id)_dragEvents;
- (id)_pressesEventForWindow:(id)arg1;
- (void)_registerEstimatedTouches:(id)arg1 event:(id)arg2 forTouchable:(id)arg3;
- (id)initWithApplication:(id)arg1;
- (id)_moveEventForWindow:(id)arg1;
- (id)_wheelEventForWindow:(id)arg1;
- (id)_gameControllerEventForWindow:(id)arg1;
- (id)_physicalKeyboardEventForWindow:(id)arg1;
- (id)_pencilEventForWindow:(id)arg1;
- (_Bool)_isTrackingAnyTouch;
- (void)_clearTouchesForView:(id)arg1 onWindow:(id)arg2;
- (id)_currentTouchForWindow:(id)arg1;
- (id)_pressForType:(long long)arg1 window:(id)arg2;
- (void)_setPress:(id)arg1 forType:(long long)arg2 window:(id)arg3;
- (_Bool)eventWantsLowLatency:(id)arg1;
- (id)_physicalKeyboardEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_hoverEventForWindow:(id)arg1;
- (void)_sendRemoteControlEvent:(long long)arg1;
- (void)_sendMotionCancelled:(long long)arg1;
- (void)_sendMotionBegan:(long long)arg1;
- (void)_sendMotionEnded:(long long)arg1;
- (void)_removeDragEvent:(id)arg1;
- (void)_setCurrentTouch:(id)arg1 forWindow:(id)arg2;
- (void)_setTouchMap:(struct __CFDictionary *)arg1 forWindow:(id)arg2;
- (id)UIKitEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (long long)_currentNudgePressTypeForWindow:(id)arg1;
- (void)_setCurrentNudgePressType:(long long)arg1 forWindow:(id)arg2;
- (_Bool)_isTouchCoalescingDisabled;
- (id)_estimatedTouchRecordForContextID:(id)arg1 estimationIndex:(id)arg2;
- (void)_removeEstimatedTouchRecord:(id)arg1;
- (void)_dispatchAndRemoveStaleEstimationUpdateRecordsWithEventTime:(double)arg1 upToRecord:(id)arg2;
- (void)sceneDidActivate:(id)arg1;
- (id)_dragEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_touchesEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_gameControllerEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_wheelEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_pressesEventForHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_findTouchesEventWindowSceneForKeyboardWindowSceneIfNeeded:(id)arg1;
- (void)_disableTouchCoalescingWithCount:(long long)arg1;
- (void)_enableTouchCoalescingWithCount:(long long)arg1;
- (id)_moveEventForHIDEvent:(struct __IOHIDEvent *)arg1;

@end
