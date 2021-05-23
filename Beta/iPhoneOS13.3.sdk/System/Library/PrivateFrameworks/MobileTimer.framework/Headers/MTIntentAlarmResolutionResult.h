/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Intents/INObjectResolutionResult.h>

@interface MTIntentAlarmResolutionResult : INObjectResolutionResult

+ (id)successWithResolvedAlarm:(id)arg1;
+ (id)disambiguationWithAlarmsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithAlarmToConfirm:(id)arg1;

@end
