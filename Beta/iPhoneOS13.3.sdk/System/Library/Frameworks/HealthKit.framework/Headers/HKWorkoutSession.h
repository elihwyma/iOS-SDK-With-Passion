/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, HKLiveWorkoutBuilder, HKStateMachine, HKTaskServerProxyProvider, HKWorkoutConfiguration, HKWorkoutSessionTaskConfiguration, NSDate, NSString, NSUUID;

@protocol HKWorkoutSessionDelegate, OS_dispatch_queue;

@interface HKWorkoutSession : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id <HKWorkoutSessionDelegate> _delegate;
    long long _state;
    NSDate *_startDate;
    NSDate *_endDate;
    HKWorkoutSessionTaskConfiguration *_configuration;
    HKTaskServerProxyProvider *_proxyProvider;
    id <HKWorkoutSessionDelegate> _strongDelegate;
    HKLiveWorkoutBuilder *_associatedWorkoutBuilder;
    HKStateMachine *_targetStateMachine;
    HKHealthStore *_healthStore;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) _Bool isGymKitSession;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (readonly) unsigned long long activityType;
@property (readonly) long long locationType;
@property (copy, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (weak) id <HKWorkoutSessionDelegate> delegate;
@property (readonly) long long state;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)serverInterface;
+ (id)clientInterface;
+ (_Bool)_applicationHasRunningWorkout;
+ (id)targetWorkoutSessionStateMachineForSessionUUID:(id)arg1;
+ (void)_unitTest_clearAllRunningWorkouts;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pause;
- (void)resume;
- (id)exportedInterface;
- (void)end;
- (void)endWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepare;
- (void)connectionInvalidated;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)startActivity;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 didIgnoreEvent:(long long)arg2 state:(id)arg3;
- (void)_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setupWithHealthStore:(id)arg1;
- (void)startActivityWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pauseWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeWithCompletion:(CDUnknownBlockType)arg1;
- (id)_initWithHealthStore:(id)arg1 taskConfiguration:(id)arg2 error:(id *)arg3;
- (void)_setAssociatedWorkoutBuilder:(id)arg1;
- (void)client_didUpdateStartDate:(id)arg1 endDate:(id)arg2;
- (void)client_didChangeToState:(long long)arg1 date:(id)arg2;
- (void)client_didGenerateEvents:(id)arg1;
- (void)client_didFailWithError:(id)arg1;
- (void)client_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queue_shouldAttemptRecovery;
- (void)_queue_markRecoveryRequired;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopActivityWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)associatedWorkoutBuilderWithDevice:(id)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3;
- (void)startActivityWithDate:(id)arg1;
- (void)stopActivityWithDate:(id)arg1;
- (id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 error:(id *)arg3;
- (id)associatedWorkoutBuilder;
- (void)stopActivity;
- (void)_unitTest_discardAssociatedWorkoutBuilder;

@end
