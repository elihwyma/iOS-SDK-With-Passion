/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBLockScreenStatusBarTransitioning <Swift>

@property (nonatomic, readonly) _Bool shouldShowLockStatusBarTime;

- (unsigned short)updateStatusBarForLockScreenTeardown;
- (unsigned short)updateStatusBarForLockScreenComeback;

@end
