/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDefaultWorkoutSessionController;

@protocol HDWorkoutDataAccumulator, HDWorkoutSessionStateController;

@interface HDFirstPartyWorkoutSessionController : NSObject

{
    id <HDWorkoutSessionStateController> _sessionStateController;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    long long _currentState;
}

@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;

- (void)finish;
- (_Bool)resumeWithError:(id *)arg1;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)endWithError:(id *)arg1;
- (void)generateError:(id)arg1;
- (void)generateMetadata:(id)arg1;
- (void)finishAggregationWithDate:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)autoPauseWithDate:(id)arg1;
- (void)autoResumeWithDate:(id)arg1;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)hktest_setStateTransitionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endHeartRateRecovery;
- (_Bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)prepareWithError:(id *)arg1;
- (_Bool)startActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)stopActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)_isAutoPauseEnabled;

@end
