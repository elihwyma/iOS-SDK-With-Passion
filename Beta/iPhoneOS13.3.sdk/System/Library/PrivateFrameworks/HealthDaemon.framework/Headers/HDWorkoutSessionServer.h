/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, HDHealthStoreClient, HDProfile, HDWorkoutManager, HDWorkoutSessionEntity, HDWorkoutSessionTaskServer, HKDataFlowLink, HKObserverSet, HKSource, HKStateMachine, HKWorkoutConfiguration, NSDate, NSString, NSUUID, _HKCurrentWorkoutSnapshot, _HKExpiringCompletionTimer;

@protocol HDWorkoutDataAccumulator, HDWorkoutSessionController, OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutSessionServer : NSObject

{
    HDProfile *_profile;
    HDWorkoutManager *_workoutManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKObserverSet *_observers;
    id <HDWorkoutSessionController> _sessionController;
    _HKExpiringCompletionTimer *_invalidationTimer;
    BKSProcessAssertion *_invalidationAssertion;
    HDWorkoutSessionEntity *_persistentEntity;
    double _stopEventGenerationWaitInterval;
    HKStateMachine *_stateMachine;
    HKStateMachine *_targetStateMachine;
    _Bool _hasFailed;
    _HKCurrentWorkoutSnapshot *_currentWorkoutSnapshot;
    NSObject<OS_dispatch_source> *_latestActivityUpdateTimer;
    NSUUID *_identifier;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSString *_applicationIdentifier;
    HDWorkoutSessionTaskServer *_taskServer;
    HDHealthStoreClient *_client;
    NSString *_clientProcessBundleIdentifier;
    HKSource *_clientSource;
    NSDate *_startDate;
    NSDate *_stopDate;
}

@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) _Bool isActive;
@property (weak, nonatomic) HDWorkoutSessionTaskServer *taskServer;
@property (retain, nonatomic) HDHealthStoreClient *client;
@property (copy, nonatomic, readonly) NSString *clientProcessBundleIdentifier;
@property (copy, nonatomic, readonly) HKSource *clientSource;
@property (nonatomic, readonly) long long state;
@property (copy, nonatomic, readonly) NSDate *startDate;
@property (copy, nonatomic, readonly) NSDate *stopDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;

+ (id)recoveredSessionServerWithProfile:(id)arg1 sessionUUID:(id)arg2 workoutManager:(id)arg3 error:(id *)arg4;
+ (_Bool)finishAllWorkoutSessionsForClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)postRestartRecoveredSessionServerWithProfile:(id)arg1 workoutManager:(id)arg2 error:(id *)arg3;
+ (_Bool)finishAllWorkoutsExcludingSessions:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_finishSessionControllerForSessionEntity:(id)arg1 profile:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (Class)_sessionControllerClassFromWorkoutConfiguration:(id)arg1 clientApplicationIdentifier:(id)arg2;
+ (id)workoutSessionServerStateMachineForConfiguration:(id)arg1 sessionUUID:(id)arg2;
+ (id)clientTargetStateMachineForConfiguration:(id)arg1 sessionUUID:(id)arg2;
+ (void)unitTest_setDefaultStopEventGenerationWaitInterval:(double)arg1;

- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)finish;
- (_Bool)resumeWithError:(id *)arg1;
- (void)stateMachine:(id)arg1 persistTransition:(id)arg2;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 willEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (_Bool)pauseWithError:(id *)arg1;
- (_Bool)endWithError:(id *)arg1;
- (void)generateError:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)workoutDataDestination:(id)arg1 requestsDataFrom:(id)arg2 to:(id)arg3;
- (void)workoutDataDestination:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)workoutDataDestination:(id)arg1 requestsFinalDataFrom:(id)arg2 to:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAssociatedWorkoutBuilderEntity:(id)arg1;
- (void)setWorkoutDataAccumulator:(id)arg1;
- (_Bool)setTargetState:(long long)arg1 date:(id)arg2 error:(id *)arg3;
- (void)generateMetadata:(id)arg1;
- (void)finishAggregationWithDate:(id)arg1;
- (void)generateEvent:(id)arg1;
- (void)autoPauseWithDate:(id)arg1;
- (void)autoResumeWithDate:(id)arg1;
- (void)endHeartRateRecovery;
- (id)currentWorkoutSnapshot;
- (_Bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)prepareWithError:(id *)arg1;
- (_Bool)startActivityWithDate:(id)arg1 error:(id *)arg2;
- (_Bool)stopActivityWithDate:(id)arg1 error:(id *)arg2;
- (void)_loadOrCreatePersistentEntity;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 sessionUUID:(id)arg3 workoutManager:(id)arg4;
- (void)didBecomeCurrent;
- (void)didResignCurrentWithError:(id)arg1;
- (id)taskServerConfigurationForRecoveryWithError:(id *)arg1;
- (id)_detailedDescriptionString;
- (void)_queue_startInvalidationTimer;
- (id)_detailedDescriptionComponents;
- (void)_queue_cacheClientIdentifiers;
- (void)_queue_stopInvalidationTimer;
- (void)_queue_setupSessionController;
- (void)_queue_startLatestActivityUpdateTimer;
- (_Bool)_recoverPersistedState;
- (void)_queue_setTargetState:(long long)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_persistenceQueue_resendWorkoutEventsToDataDestination:(id)arg1 error:(id *)arg2;
- (void)_queue_deleteSessionAndFinishAssociatedBuilderAtDate:(id)arg1;
- (void)_queue_evaluateRequestedTargetStateAtDate:(id)arg1;
- (void)_queue_generateEventWithType:(long long)arg1 date:(id)arg2;
- (void)_queue_generateError:(id)arg1;
- (void)_queue_generateEvent:(id)arg1;
- (void)_queue_generateMetadata:(id)arg1;
- (_Bool)_persistenceQueue_storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;
- (void)_queue_stopLatestActivityUpdateTimer;
- (void)_queue_processStopEvent:(id)arg1;
- (void)_queue_invalidationTimerDidFire;
- (id)_queue_currentWorkoutSessionConfiguration;
- (id)_retrieveSessionControllerStateForRecoveryIdentifier:(id)arg1 error:(id *)arg2;
- (void)_queue_latestActivityUpdateTimerDidFire;
- (_Bool)_enqueueEvent:(long long)arg1 stateMachine:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (void)unitTest_setSessionController:(id)arg1;
- (void)unitTest_setStopEventGenerationWaitInterval:(double)arg1;
- (void)unitTest_generateStopEvent;
- (_Bool)unitTest_updateLatestActivityDate:(id)arg1;

@end
