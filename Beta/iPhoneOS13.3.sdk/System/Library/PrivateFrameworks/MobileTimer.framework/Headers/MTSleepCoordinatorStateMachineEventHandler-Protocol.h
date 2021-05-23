/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@protocol MTSleepCoordinatorStateMachineEventHandler <Swift>

- (unsigned short)updateState;
- (unsigned short)userWentToBed;
- (unsigned short)userWokeUp;
- (unsigned short)userBedTimeReached: /* Error: Ran out of types for this method. */;
- (unsigned short)userWakeTimeReached: /* Error: Ran out of types for this method. */;
- (unsigned short)userWakeUpAlarmFired;
- (unsigned short)wakeUpAlarmTimedOut;

@end
