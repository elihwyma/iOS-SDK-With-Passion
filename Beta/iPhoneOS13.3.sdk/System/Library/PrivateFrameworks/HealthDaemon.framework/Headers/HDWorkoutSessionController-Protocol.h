/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@protocol HDWorkoutSessionController

+ (unsigned short)recoveryIdentifier;
+ (unsigned short)willFinishSessionWithRecoveryData:profile: /* Error: Ran out of types for this method. */;

- (unsigned short)initWithProfile:sessionConfiguration:sessionStateController:recoveryState: /* Error: Ran out of types for this method. */;
- (unsigned short)workoutSessionServer:didChangeConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)workoutSessionServer:didTransitionFromState:toState:date: /* Error: Ran out of types for this method. */;
- (unsigned short)workoutSessionServer:accumulatorDidChange: /* Error: Ran out of types for this method. */;
- (unsigned short)hktest_setStateTransitionCompletionHandler: /* Error: Ran out of types for this method. */;

@end
