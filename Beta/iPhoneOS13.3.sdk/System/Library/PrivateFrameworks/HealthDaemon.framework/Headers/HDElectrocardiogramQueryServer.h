/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@interface HDElectrocardiogramQueryServer : HDQueryServer

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;

@end
