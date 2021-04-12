//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineState.h>

#import <MobileTimer/MTSleepCoordinatorStateMachineEventHandler-Protocol.h>

@interface MTSleepCoordinatorStateMachineState : MTStateMachineState <MTSleepCoordinatorStateMachineEventHandler>
{
}

- (void)wakeUpAlarmTimedOut;
- (void)userWakeUpAlarmFired;
- (void)userWakeTimeReached:(id)arg1;
- (void)userBedTimeReached:(id)arg1;
- (void)userWentToBed;
- (void)userWokeUp;
- (id)determineNextStateForSleepAlarm:(id)arg1;
- (void)updateStateForSleepAlarm:(id)arg1;
- (void)updateState;

@end

