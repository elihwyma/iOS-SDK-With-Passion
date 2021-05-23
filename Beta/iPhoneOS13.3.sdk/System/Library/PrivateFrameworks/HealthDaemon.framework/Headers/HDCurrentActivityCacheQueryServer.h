/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDActivityCacheManager, HKActivityCache, NSCalendar, NSDateComponents, NSString;

@interface HDCurrentActivityCacheQueryServer : HDQueryServer

{
    NSDateComponents *_statisticsIntervalComponents;
    NSCalendar *_calendar;
    HKActivityCache *_lastActivityCache;
    HDActivityCacheManager *_activityCacheManager;
}

@property (weak, nonatomic) HDActivityCacheManager *activityCacheManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)queryClass;
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2;
- (_Bool)shouldObserveActivityCache;

@end
