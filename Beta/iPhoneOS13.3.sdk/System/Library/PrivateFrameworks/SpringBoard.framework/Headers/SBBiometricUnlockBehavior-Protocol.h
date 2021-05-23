/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBBiometricUnlockBehaviorDelegate;

@protocol SBBiometricUnlockBehavior <Swift>

@property (weak, nonatomic) id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (unsigned short)handleBiometricEvent: /* Error: Ran out of types for this method. */;

@end
