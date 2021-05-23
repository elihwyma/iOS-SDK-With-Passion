/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTStateMachine.h>

@class MTBedtimeDNDStateMachineInitialState, MTBedtimeDNDStateMachineOffState, MTBedtimeDNDStateMachineWaitingState, NSString;

@interface MTBedtimeDNDStateMachine : MTStateMachine

{
    MTBedtimeDNDStateMachineInitialState *_initialState;
    MTBedtimeDNDStateMachineOffState *_offState;
    MTBedtimeDNDStateMachineWaitingState *_waitingState;
}

@property (nonatomic, readonly) MTBedtimeDNDStateMachineInitialState *initialState;
@property (nonatomic, readonly) MTBedtimeDNDStateMachineOffState *offState;
@property (nonatomic, readonly) MTBedtimeDNDStateMachineWaitingState *waitingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateState:(_Bool)arg1;
- (id)currentDate;
- (id)sleepAlarm;
- (void)userWokeUp;
- (id)keepOffUntilDate;
- (_Bool)stateMachine:(id)arg1 disengageBedtimeDNDUserRequested:(_Bool)arg2;
- (_Bool)inUserDefinedSleepWindow;
- (void)stateMachine:(id)arg1 keepBedtimeDNDOffUntilDate:(id)arg2;
- (id)initWithDelegate:(id)arg1 infoProvider:(id)arg2;
- (_Bool)isBedtimeDNDEnabled:(_Bool *)arg1;
- (void)bedtimeDNDEnabled:(_Bool)arg1 userRequested:(_Bool)arg2 date:(id)arg3;
- (_Bool)stateMachine:(id)arg1 engageBedtimeDNDUntilDate:(id)arg2 userEngaged:(_Bool)arg3;
- (void)stateMachineClearKeepBedtimeDNDOff:(id)arg1;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (id)onStateWithBedtimeDNDEndDate:(id)arg1;
- (id)userRequestedOffStateWithKeepOffUntilDate:(id)arg1;
- (id)stateMachineLog;

@end
