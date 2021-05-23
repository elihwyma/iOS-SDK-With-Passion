/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer

{
    _Bool _timerOn;
    long long _delayIndex;
    unsigned long long _numberOfTouchesRequired;
    double _force;
    unsigned long long _changeCount;
}

@property (nonatomic) unsigned long long numberOfTouchesRequired;
@property (nonatomic, setter=_setButtonType:) long long _buttonType;
@property (nonatomic, readonly) double _force;
@property (nonatomic) unsigned long long changeCount;

+ (double)delayForRepeatNumber:(long long)arg1;

- (void)dealloc;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (_Bool)_shouldReceivePress:(id)arg1;
- (void)_clearTapTimer;
- (void)_beginPress;
- (void)_endPress;
- (void)_cancelPress;
- (void)_changePress;
- (void)_scheduleNextTimer;
- (void)_nextStep:(id)arg1;
- (void)_finishNextStep:(id)arg1;

@end
