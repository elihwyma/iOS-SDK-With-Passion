/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDActivityCacheManager, HKHeartRateSummary, NSString;

@interface HDHeartRateSummaryQueryServer : HDQueryServer

{
    HKHeartRateSummary *_latestSummary;
    HDActivityCacheManager *_activityCacheManager;
}

@property (weak, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)queryClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;

- (void)_queue_start;
- (void)_queue_stop;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)heartRateSummaryQueryClientProxy;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (void)activityCacheManager:(id)arg1 changedHeartRateSummary:(id)arg2 isToday:(_Bool)arg3;

@end
