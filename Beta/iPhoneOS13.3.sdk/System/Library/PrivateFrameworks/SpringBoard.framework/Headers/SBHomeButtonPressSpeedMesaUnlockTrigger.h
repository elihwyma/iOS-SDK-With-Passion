/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class BSTimer;

@interface SBHomeButtonPressSpeedMesaUnlockTrigger : SBMesaUnlockTrigger

{
    BSTimer *_slowPressTimer;
    _Bool _bioUnlockOccurred;
    _Bool _buttonIsDown;
    _Bool _fingerIsOn;
    _Bool _timerFired;
    double _slowPressDuration;
}

@property (retain, nonatomic, getter=_slowPressTimer, setter=_setSlowPressTimer:) BSTimer *slowPressTimer;
@property (nonatomic) double slowPressDuration;

- (id)init;
- (id)description;
- (id)succinctDescriptionBuilder;
- (void)_startTimer;
- (void)_timerFired;
- (void)_cancelTimer;
- (void)screenOff;
- (_Bool)bioUnlock;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)fingerOff;
- (_Bool)_isTimerRunning;
- (_Bool)_isPrimed;
- (void)_evaluateUnlock;

@end
