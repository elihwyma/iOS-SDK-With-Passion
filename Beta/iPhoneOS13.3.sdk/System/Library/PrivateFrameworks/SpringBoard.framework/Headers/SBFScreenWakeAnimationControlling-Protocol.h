/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBFScreenWakeAnimationControlling <Swift>

- (unsigned short)isWakeAnimationInProgress;
- (unsigned short)prepareToWakeForSource:timeAlpha:statusBarAlpha:target:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isSleepAnimationInProgress;
- (unsigned short)sleepForSource:target:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)interruptSleepAnimationIfNeeded;
- (unsigned short)isWakeAnimationInProgressForSource: /* Error: Ran out of types for this method. */;
- (unsigned short)setScreenWakeTemporarilyDisabled:forReason: /* Error: Ran out of types for this method. */;

@end
