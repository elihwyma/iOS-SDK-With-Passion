/*
 Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

#import <Foundation/NSObject.h>

@interface AWDMetricReporter : NSObject

+ (void)reportPiggyBackWithSuccess:(_Bool)arg1 error:(id)arg2;
+ (void)reportStateMachineCompletionShouldCompleteSignIn:(_Bool)arg1 cloudDataProtectionEnabled:(_Bool)arg2 error:(id)arg3;
+ (void)reportStateMachineLockAssertionWithError:(id)arg1;
+ (void)reportStateMachineEnableCDPResult:(id)arg1;
+ (void)reportStateMachineCircleJoinWithResult:(id)arg1 error:(id)arg2;
+ (void)reportStateMachineRepairHSA2AuthWithError:(id)arg1;
+ (void)reportStateMachineRepairCircleAuth;
+ (void)reportStateMachineRecoveryWithSecretType:(long long)arg1 userDidReset:(_Bool)arg2 error:(id)arg3;

@end
