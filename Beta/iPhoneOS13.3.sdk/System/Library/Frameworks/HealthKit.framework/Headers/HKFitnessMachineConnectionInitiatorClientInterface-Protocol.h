/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKFitnessMachineConnectionInitiatorClientInterface <Swift>

- (unsigned short)clientRemote_updatedConnectionState:fitnessMachineSessionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_updatedFitnessMachine:fitnessMachineSessionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_updatedFitnessMachineState:fitnessMachineSessionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_workoutAppReady;
- (unsigned short)clientRemote_encounteredError: /* Error: Ran out of types for this method. */;

@end
