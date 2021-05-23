/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@interface HDCurrentActivitySummaryDemoQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (id)_activitySummary;

@end
