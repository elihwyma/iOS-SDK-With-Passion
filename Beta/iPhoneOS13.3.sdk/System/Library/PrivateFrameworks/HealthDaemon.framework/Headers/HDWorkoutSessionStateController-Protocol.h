/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@protocol HDWorkoutDataAccumulator;

@protocol HDWorkoutSessionStateController

@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;

- (unsigned short)finish;
- (unsigned short)resumeWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)pauseWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)endWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)generateError: /* Error: Ran out of types for this method. */;
- (unsigned short)generateMetadata: /* Error: Ran out of types for this method. */;
- (unsigned short)finishAggregationWithDate: /* Error: Ran out of types for this method. */;
- (unsigned short)generateEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)autoPauseWithDate: /* Error: Ran out of types for this method. */;
- (unsigned short)autoResumeWithDate: /* Error: Ran out of types for this method. */;
- (unsigned short)endHeartRateRecovery;
- (unsigned short)storeSessionControllerState:forRecoveryIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)startActivityWithDate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)stopActivityWithDate:error: /* Error: Ran out of types for this method. */;

@end
