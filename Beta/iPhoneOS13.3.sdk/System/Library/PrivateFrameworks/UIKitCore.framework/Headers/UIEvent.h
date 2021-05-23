/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, UIEventEnvironment, UIScreen;

@interface UIEvent : NSObject

{
    struct __GSEvent *_gsEvent;
    struct __IOHIDEvent *_hidEvent;
    UIScreen *_cachedScreen;
    NSMutableSet *_eventObservers;
    double _timestamp;
    UIEventEnvironment *_eventEnvironment;
    double __initialTouchTimestamp;
}

@property (nonatomic, setter=_setTimestamp:) double timestamp;
@property (weak, nonatomic) UIEventEnvironment *eventEnvironment;
@property (nonatomic, readonly) double _initialTouchTimestamp;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long subtype;
@property (nonatomic, readonly) NSSet *allTouches;

- (void)dealloc;
- (id)_init;
- (id)_screen;
- (id)_windows;
- (unsigned long long)_focusHeading;
- (id)touchesForWindow:(id)arg1;
- (long long)_modifierFlags;
- (struct CGPoint)_digitizerLocation;
- (long long)_moveDirection;
- (id)touchesForGestureRecognizer:(id)arg1;
- (struct __IOHIDEvent *)_hidEvent;
- (unsigned long long)_clickCount;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (_Bool)_sendEventToGestureRecognizer:(id)arg1;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)arg1;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_triggeringPhysicalButton;
- (_Bool)_isKeyDown;
- (id)_unmodifiedInput;
- (id)touchesForView:(id)arg1;
- (id)coalescedTouchesForTouch:(id)arg1;
- (id)_modifiedInput;
- (struct __GSEvent *)_gsEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_setGSEvent:(struct __GSEvent *)arg1;
- (void)_sendEventToResponder:(id)arg1;
- (void)_cleanupAfterDispatch;
- (id)_eventObservers;
- (id)_initWithEvent:(struct __GSEvent *)arg1 touches:(id)arg2;
- (id)_touchesForGestureRecognizer:(id)arg1;
- (id)predictedTouchesForTouch:(id)arg1;
- (double)_wheelVelocity;
- (int)_shakeState;
- (id)_initWithEnvironment:(id)arg1;
- (_Bool)_isTouchRoutingPolicyBased;
- (_Bool)isKeyDown;
- (void)_addEventObserver:(id)arg1;
- (void)_removeEventObserver:(id)arg1;

@end
