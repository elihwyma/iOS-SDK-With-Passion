/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTStateMachine.h>

@class MTSleepCoordinatorStateMachineAsleepState, MTSleepCoordinatorStateMachineAwakeState, MTSleepCoordinatorStateMachineDisabledState, NSString;

@interface MTSleepCoordinatorStateMachine : MTStateMachine

{
    MTSleepCoordinatorStateMachineAsleepState *_asleepState;
    MTSleepCoordinatorStateMachineAwakeState *_awakeState;
    MTSleepCoordinatorStateMachineDisabledState *_disabledState;
}

@property (retain, nonatomic) MTSleepCoordinatorStateMachineAsleepState *asleepState;
@property (retain, nonatomic) MTSleepCoordinatorStateMachineAwakeState *awakeState;
@property (retain, nonatomic) MTSleepCoordinatorStateMachineDisabledState *disabledState;
@property (nonatomic, readonly) _Bool inUserDefinedSleepWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateState;
- (id)currentDate;
- (void)stateMachineUserWentToBed:(id)arg1;
- (id)sleepAlarm;
- (void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (unsigned long long)sleepTimeOutMinutes;
- (void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)userBedTimeReached:(id)arg1;
- (void)userWakeTimeReached:(id)arg1;
- (void)userWakeUpAlarmFired;
- (void)wakeUpAlarmTimedOut;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (id)stateMachineLog;
- (void)stateMachineUserWokeUp:(id)arg1;

@end
