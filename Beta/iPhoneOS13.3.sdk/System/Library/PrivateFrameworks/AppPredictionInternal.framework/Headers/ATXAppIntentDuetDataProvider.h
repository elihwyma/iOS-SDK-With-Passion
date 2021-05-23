/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXDuetDataProvider.h>

@interface ATXAppIntentDuetDataProvider : ATXDuetDataProvider

+ (Class)supportedDuetEventClass;
+ (long long)supportedCoreDuetStream;

- (id)fetchEventsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 withPredicates:(id)arg3;

@end
