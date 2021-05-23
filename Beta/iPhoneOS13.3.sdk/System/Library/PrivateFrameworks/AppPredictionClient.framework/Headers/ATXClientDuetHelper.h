/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@interface ATXClientDuetHelper : NSObject

+ (id)sharedInstance;

- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 forSource:(long long)arg3;
- (id)getIntentEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3 forSource:(long long)arg4;
- (id)_getIntentEventForSource:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 bundleIdFilter:(id)arg5 limit:(unsigned long long)arg6;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)getActivityEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 bundleIdFilter:(id)arg3;
- (id)_queryDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;
- (void)_enumerateBatchesInDuetStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5 block:(CDUnknownBlockType)arg6;
- (id)_queryDuetStreamUnbatched:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 otherPredicates:(id)arg4 limit:(unsigned long long)arg5;

@end
