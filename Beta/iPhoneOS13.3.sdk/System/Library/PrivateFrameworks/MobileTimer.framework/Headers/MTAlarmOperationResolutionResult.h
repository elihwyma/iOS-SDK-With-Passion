/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INEnumResolutionResult.h>

@interface MTAlarmOperationResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAlarmOperation:(long long)arg1;
+ (id)confirmationRequiredWithAlarmOperationToConfirm:(long long)arg1;

@end
