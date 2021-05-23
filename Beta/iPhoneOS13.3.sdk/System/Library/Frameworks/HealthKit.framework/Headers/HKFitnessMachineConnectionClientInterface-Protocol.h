/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKFitnessMachineConnectionClientInterface <Swift>

- (unsigned short)clientRemote_deliverFailedWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverDetectedNFC: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverMachineInformationUpdated: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverMachineChangedToState:fromState:fitnessMachineSessionUUID:date: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverConnectionChangedToState:fromState:fitnessMachineSessionUUID:error: /* Error: Ran out of types for this method. */;

@end
