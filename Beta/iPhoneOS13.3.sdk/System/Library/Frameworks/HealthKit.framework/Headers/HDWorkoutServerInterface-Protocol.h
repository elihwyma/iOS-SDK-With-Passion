/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HDWorkoutServerInterface <Swift>

- (unsigned short)remote_finishAllWorkoutsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_generatePauseOrResumeRequestWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addSamples:toWorkout:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_replaceWorkout:withWorkout:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_startWatchAppWithWorkoutConfiguration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_recoverActiveWorkoutSessionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_registerConnectionInitiatorClient:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_permitConnectionForFitnessMachineSessionUUID:activityType:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_forbidConnectionForFitnessMachineSessionUUID:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_simulateTapWithFitnessMachineType: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_simulateAccept;
- (unsigned short)remote_simulateDisconnect;
- (unsigned short)remote_registerClient:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endFitnessMachineConnectionWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:withConnectionUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_markClientReadyWithConnectionUUID: /* Error: Ran out of types for this method. */;

@end
