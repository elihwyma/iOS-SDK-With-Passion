/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDTaskServer <Swift>

+ (unsigned short)taskIdentifier;
+ (unsigned short)requiredEntitlements;

- (unsigned short)taskUUID;
- (unsigned short)initWithUUID:configuration:client:delegate: /* Error: Ran out of types for this method. */;

+ (unsigned short)configurationClass;
+ (unsigned short)validateConfiguration:client:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)createTaskServerWithUUID:configuration:client:delegate:error: /* Error: Ran out of types for this method. */;

@end
