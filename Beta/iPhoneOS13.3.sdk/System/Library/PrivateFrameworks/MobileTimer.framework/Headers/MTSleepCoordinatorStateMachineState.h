/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTStateMachineState.h>

@class NSString;

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateState;
- (void)updateStateForSleepAlarm:(id)arg1;
- (id)determineNextStateForSleepAlarm:(id)arg1;
- (void)userWentToBed;
- (void)userWokeUp;
- (void)userBedTimeReached:(id)arg1;
- (void)userWakeTimeReached:(id)arg1;
- (void)userWakeUpAlarmFired;
- (void)wakeUpAlarmTimedOut;

@end
