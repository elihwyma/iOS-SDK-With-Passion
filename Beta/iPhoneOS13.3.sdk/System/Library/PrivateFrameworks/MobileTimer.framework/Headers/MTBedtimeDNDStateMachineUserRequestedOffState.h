/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTBedtimeDNDStateMachineOffState.h>

@class NSDate;

@interface MTBedtimeDNDStateMachineUserRequestedOffState : MTBedtimeDNDStateMachineOffState

{
    NSDate *_keepOffUntilDate;
}

@property (retain, nonatomic) NSDate *keepOffUntilDate;

- (void)updateState:(_Bool)arg1;
- (void)didEnterWithPreviousState:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (id)initWithKeepOffUntilDate:(id)arg1 stateMachine:(id)arg2;

@end
