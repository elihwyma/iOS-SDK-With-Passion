/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@interface HDHeartbeatSeriesQueryServer : HDQueryServer

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;

@end
