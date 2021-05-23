/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INEnumResolutionResult.h>

@interface MTAlarmStateResolutionResult : INEnumResolutionResult

+ (id)successWithResolvedAlarmState:(long long)arg1;
+ (id)confirmationRequiredWithAlarmStateToConfirm:(long long)arg1;

@end
