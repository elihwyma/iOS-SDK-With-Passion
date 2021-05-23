/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/MTBedtimeDNDStateMachineState.h>

@class NSDate;

@interface MTBedtimeDNDStateMachineOnState : MTBedtimeDNDStateMachineState

{
    NSDate *_bedtimeDNDEndDate;
}

@property (nonatomic, readonly) NSDate *bedtimeDNDEndDate;

- (void)didEnterWithPreviousState:(id)arg1;
- (_Bool)isEqualToState:(id)arg1;
- (id)initWithBedtimeDNDEndDate:(id)arg1 stateMachine:(id)arg2;

@end
