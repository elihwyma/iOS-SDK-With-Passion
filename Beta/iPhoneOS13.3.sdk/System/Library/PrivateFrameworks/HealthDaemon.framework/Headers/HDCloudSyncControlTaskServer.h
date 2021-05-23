/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class NSString;

@interface HDCloudSyncControlTaskServer : HDStandardTaskServer

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;

@end
