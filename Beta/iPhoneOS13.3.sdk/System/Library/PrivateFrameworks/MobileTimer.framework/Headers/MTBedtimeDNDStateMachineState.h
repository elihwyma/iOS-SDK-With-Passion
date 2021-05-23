/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTStateMachineState.h>

@class NSString;

@interface MTBedtimeDNDStateMachineState : MTStateMachineState

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateState:(_Bool)arg1;
- (void)userWokeUp;
- (void)updateModeKeepOffUntilDateIfNecessary;
- (void)bedtimeDNDEnabled:(_Bool)arg1 userRequested:(_Bool)arg2 date:(id)arg3;
- (id)determineNextState:(_Bool)arg1;
- (id)nextBedtimeDNDStartDateAfterDate:(id)arg1;
- (id)nextBedtimeDNDEndDate;
- (id)nextBedtimeDNDEndDateAfterDate:(id)arg1;
- (id)nextBedtimeDNDStartDate;

@end
