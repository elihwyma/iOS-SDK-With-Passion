/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@interface HDDeviceQueryServer : HDQueryServer

+ (Class)queryClass;

- (void)_queue_start;
- (id)deviceQueryClientProxy;
- (void)_deliverErrorToClient:(id)arg1;

@end
