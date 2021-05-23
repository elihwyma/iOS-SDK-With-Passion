/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDFitnessMachineConnectionInitiatorProtocol <Swift>

- (unsigned short)registerConnectionInitiatorClient:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)permitConnectionForFitnessMachineSessionUUID:activityType:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)forbidConnectionForFitnessMachineSessionUUID:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateTapWithFitnessMachineType: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateAccept;

@end
