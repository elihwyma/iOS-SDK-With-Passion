/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface _UISystemGestureGateGestureRecognizer : UIGestureRecognizer

{
    unsigned char _systemGestureGateType;
    unsigned int _systemGesturesRecognitionPossible:1;
    unsigned int _waitingForSystemGestureStateNotification:1;
    double _lastTouchTime;
    NSTimer *_delayTimeoutTimer;
}

+ (_Bool)_shouldDefaultToTouches;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)setDelaysTouchesBegan:(_Bool)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (void)_resetGestureRecognizer;
- (void)setDelaysTouchesEnded:(_Bool)arg1;
- (void)_systemGestureStateChanged:(id)arg1;
- (void)_notifyWindowNoLongerAwaitingSystemGestureNotification:(id)arg1;
- (id)_gateGestureTypeString;
- (void)_timeOut;
- (id)initWithWindow:(id)arg1 type:(unsigned char)arg2;

@end
