/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIEvent.h>

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIEvent

{
    NSMutableSet *_allTouchesMutable;
    NSSet *_allTouchesImmutableCached;
    struct __CFDictionary *_keyedTouches;
    struct __CFDictionary *_keyedTouchesByWindow;
    struct __CFDictionary *_gestureRecognizersByWindow;
    NSMapTable *_latentSystemGestureWindows;
    struct __CFDictionary *_coalescedTouches;
    struct __CFDictionary *_finalTouches;
    _Bool _isCallingEventObservers;
    NSMutableSet *_exclusiveTouchWindows;
    long long _singleAllowableExternalTouchPathIndex;
}

@property (nonatomic, readonly) double _initialTouchTimestamp;
@property (nonatomic) long long singleAllowableExternalTouchPathIndex;

- (void)dealloc;
- (id)description;
- (long long)type;
- (id)_init;
- (id)_windows;
- (id)_firstTouchForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)_modifierFlags;
- (struct CGPoint)_digitizerLocation;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)allTouches;
- (id)_cloneEvent;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (id)_viewsForWindow:(id)arg1;
- (id)_touchesForView:(id)arg1 withPhase:(long long)arg2;
- (id)_exclusiveTouchWindows;
- (void)_addGestureRecognizersForView:(id)arg1 toTouch:(id)arg2;
- (void)_addTouch:(id)arg1 forDelayedDelivery:(_Bool)arg2;
- (id)_touchesForKey:(id)arg1;
- (void)_invalidateGestureRecognizerForWindowCache;
- (void)_removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (id)_touchesForGesture:(id)arg1 withPhase:(long long)arg2;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)arg1 deliveredToEventWindow:(id)arg2;
- (id)touchesForView:(id)arg1;
- (id)coalescedTouchesForTouch:(id)arg1;
- (void)_clearViewForTouch:(id)arg1;
- (void)_removeTouch:(id)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_touchesForWindow:(id)arg1;
- (void)_collectGestureRecognizersForView:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_removeTouchesForKey:(id)arg1;
- (void)_removeTouchesForWindow:(id)arg1;
- (void)_touchesForGesture:(id)arg1 withPhase:(long long)arg2 intoSet:(id)arg3;
- (struct __CFDictionary *)_coalescedTouchesForHidEvent:(struct __IOHIDEvent *)arg1;
- (id)_rawCoalescedTouchesForTouch:(id)arg1;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)_allTouches;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (_Bool)_anyInterestedGestureRecognizersForTouchInView:(id)arg1;
- (void)_clearTouches;
- (void)_moveTouchesFromView:(id)arg1 toView:(id)arg2;
- (double)_initialTouchTimestampForWindow:(id)arg1;
- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)arg1;
- (void)_addCoalescedTouch:(id)arg1 forIndex:(long long)arg2 hidEvent:(struct __IOHIDEvent *)arg3;
- (void)_moveCoalescedTouchesFromHidEvent:(struct __IOHIDEvent *)arg1 toHidEvent:(struct __IOHIDEvent *)arg2;
- (id)_lastPendingCoalescedTouchForIndex:(long long)arg1 hidEvent:(struct __IOHIDEvent *)arg2;
- (id)predictedTouchesForTouch:(id)arg1;

@end
