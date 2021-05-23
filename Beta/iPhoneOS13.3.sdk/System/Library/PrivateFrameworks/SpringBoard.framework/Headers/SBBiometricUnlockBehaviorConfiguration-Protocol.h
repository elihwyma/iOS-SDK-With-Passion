/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@protocol SBBiometricUnlockBehaviorConfiguration <Swift>

@property (weak, nonatomic) id <SBBiometricUnlockBehaviorConfigurationDelegate> delegate;

- (unsigned short)newBehaviorForCurrentConfiguration;

@end
