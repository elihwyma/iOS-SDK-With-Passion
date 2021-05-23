/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCurrentActivityCacheQueryServer.h>

@interface HDCurrentActivityCacheDemoQueryServer : HDCurrentActivityCacheQueryServer

- (void)_queue_start;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)_demoStatisticsForDataTypeIdentifier:(id)arg1 unit:(id)arg2;
- (id)_demoStatisticsForStandHours;
- (_Bool)shouldObserveActivityCache;

@end
