/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBIdleTimerCoordinating;

@protocol SBLockScreenIdleTimerControlling <Swift>

@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;

@end
