/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAlertSuppressor, HDAssertion, HDLocationManager, HDProfile, HDWatchAppStateMonitor, HDWorkoutLocationSmoother, HDWorkoutSessionServer, HKObserverSet, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface HDWorkoutManager : NSObject

{
    HDWorkoutSessionServer *_currentWorkout;
    HDAssertion *_currentWorkoutAssertion;
    HDWorkoutSessionServer *_nextWorkout;
    NSMutableDictionary *_sessionServers;
    NSMutableDictionary *_sessionCreationHandlers;
    NSHashTable *_observerTable;
    HKObserverSet *_sessionObservers;
    HDLocationManager *_locationManager;
    HDWatchAppStateMonitor *_appStateMonitor;
    _Bool _hasPerformedPostLaunchSessionRecovery;
    NSMutableArray *_postLaunchRecoveryBlocks;
    NSObject<OS_dispatch_queue> *_postLaunchRecoveryCallbackQueue;
    HKObserverSet *_currentWorkoutObservers;
    HDProfile *_profile;
    HDAlertSuppressor *_alertSuppressor;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutLocationSmoother *_locationSmoother;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDWorkoutLocationSmoother *locationSmoother;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) _Bool isInHeartRateRecovery;
@property (nonatomic, readonly) HDAlertSuppressor *alertSuppressor;
@property (nonatomic, readonly) HDLocationManager *locationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)sessionServerFromSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2;
- (void)generatePauseOrResumeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)finishAllWorkoutsForClient:(id)arg1 error:(id *)arg2;
- (void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 taskServer:(id)arg3 error:(id *)arg4;
- (void)_queue_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_sendStartWorkoutAppResponse:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endHeartRateRecovery;
- (id)currentWorkoutClient;
- (void)unregisterCurrentWorkoutObserver:(id)arg1;
- (void)registerCurrentWorkoutObserver:(id)arg1;
- (void)performWhenPostLaunchSessionRecoveryHasCompleted:(CDUnknownBlockType)arg1;
- (void)devicePowerMonitor:(id)arg1 primaryPowerSourceIsCharging:(_Bool)arg2;
- (void)_queue_beginTransitionToWorkoutSession:(id)arg1;
- (void)_queue_setCurrentWorkout:(id)arg1;
- (id)_queue_sessionServerForRecoveryForClient:(id)arg1;
- (void)_finishAllDetachedWorkoutBuilders;
- (id)_activeSessionIdentifiers;
- (unsigned long long)_queue_currentWorkoutActivityType;
- (long long)_queue_currentWorkoutLocationType;
- (void)_scheduleFinishAllDetachedWorkoutBuilders;
- (void)_recoverActiveWorkoutSessionServersIfNeeded;
- (void)_finishAllWorkoutsWithExclusionHandler:(CDUnknownBlockType)arg1;
- (void)_scheduleFinishForDetachedWorkoutBuilders;
- (void)_notifyForPostLaunchSessionRecovery;
- (void)_postWorkoutUpdatedNotification;
- (void)_recoverCurrentWorkoutSessionAfterLaunch;
- (void)_queue_logWorkoutStateToPowerLog;
- (void)_queue_updateFakingDataInSimulator;
- (void)_queue_sessionFinished:(id)arg1;
- (_Bool)hasAnyActiveWorkouts;
- (unsigned long long)currentWorkoutActivityType;
- (long long)currentWorkoutLocationType;
- (void)getCurrentWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;
- (void)pauseActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)addWorkoutEventObserver:(id)arg1;
- (void)removeWorkoutEventObserver:(id)arg1;
- (void)addWorkoutSessionObserver:(id)arg1 queue:(id)arg2;
- (void)removeWorkoutSessionObserver:(id)arg1;
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;
- (void)hk_fakeStopEventWithDate:(id)arg1;
- (void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unitTest_finishAllDetachedWorkoutBuilders;
- (id)unitTest_currentWorkoutSession;
- (id)_workoutSessionNotCurrentError:(id)arg1;
- (_Bool)isPowerSavingSupportedForCurrentActivity;

@end
