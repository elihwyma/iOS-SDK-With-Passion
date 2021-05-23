/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKDevice, HKHealthStore, HKRetryableOperation, HKStateMachine, HKTaskServerProxyProvider, HKWorkoutBuilderConfiguration, HKWorkoutConfiguration, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HKWorkoutBuilder : NSObject

{
    HKWorkoutBuilderConfiguration *_builderConfiguration;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDictionary *_metadata;
    NSArray *_workoutEvents;
    double _accumulatedElapsedTime;
    double _lastResumeTimestamp;
    _Bool _currentlyRunning;
    long long _serverConstructionState;
    HKStateMachine *_constructionStateMachine;
    HKRetryableOperation *_retryableOperation;
    CDUnknownBlockType _beginCollectionCompletionHandler;
    CDUnknownBlockType _endCollectionCompletionHandler;
    CDUnknownBlockType _finishWorkoutCompletionHandler;
    CDUnknownBlockType _unitTest_serverStateChangedHandler;
    CDUnknownBlockType _unitTest_recoveryFinishedHandler;
    CDUnknownBlockType _unitTest_failureHandler;
    HKWorkoutConfiguration *_workoutConfiguration;
    NSMutableDictionary *_seriesBuilders;
    NSMutableDictionary *_statisticsByType;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    HKTaskServerProxyProvider *_proxyProvider;
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
}

@property (retain, nonatomic) NSMutableDictionary *seriesBuilders;
@property (retain, nonatomic) NSMutableDictionary *statisticsByType;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resourceQueue;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (copy, nonatomic, readonly) NSUUID *identifier;
@property (copy, nonatomic) HKWorkoutBuilderConfiguration *configuration;
@property (readonly) _Bool isCurrentlyRunning;
@property (copy, readonly) HKDevice *device;
@property (copy, readonly) NSDate *startDate;
@property (copy, readonly) NSDate *endDate;
@property (copy, readonly) HKWorkoutConfiguration *workoutConfiguration;
@property (copy, readonly) NSDictionary *metadata;
@property (copy, readonly) NSArray *workoutEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;
+ (id)_constructionStateMachineForBuilderConfiguration:(id)arg1 builderIdentifier:(id)arg2;
+ (double)_elapsedTimeAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;
+ (long long)_collectionStateAtDate:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 sortedEvents:(id)arg4;

- (id)init;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)_currentSnapshot;
- (void)connectionInterrupted;
- (id)remoteInterface;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (CDUnknownBlockType)_successCompletionBlockOnClientQueue:(CDUnknownBlockType)arg1;
- (void)_resourceQueue_beginCollectionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_addSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_addWorkoutEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_endCollectionWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resourceQueue_finishWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (id)_resourceQueue_seriesBuilderWithIdentifier:(id)arg1 type:(id)arg2;
- (id)_resourceQueue_startDateForSnapshot;
- (id)_resourceQueue_endDateForSnapshotWithStartDate:(id)arg1;
- (id)_resourceQueue_eventsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (unsigned long long)goalType;
- (id)goal;
- (void)_resourceQueue_updateDevice:(id)arg1;
- (void)_resourceQueue_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (void)_resourceQueue_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)_resourceQueue_freezeSeriesBuilders;
- (void)_pushCurrentTargetState;
- (void)_resourceQueue_updateElapsedTimeCache;
- (_Bool)_validateObjects:(id)arg1 forClass:(Class)arg2 error:(out id *)arg3;
- (void)_resourceQueue_markRecoveryRequired;
- (void)_resourceQueue_updateEvents:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)clientRemote_didUpdateEvents:(id)arg1;
- (void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg1 endDate:(id)arg2;
- (void)clientRemote_didRecoverSeriesBuilders:(id)arg1;
- (void)clientRemote_didFinishRecovery;
- (void)clientRemote_synchronizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)clientRemote_stateDidChange:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)clientRemote_finishedWorkout:(id)arg1;
- (void)clientRemote_didFailWithError:(id)arg1;
- (void)_restoreRecoveredSeriesBuildersWithCompletion:(CDUnknownBlockType)arg1;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 device:(id)arg3;
- (id)initWithHealthStore:(id)arg1 configuration:(id)arg2 goalType:(unsigned long long)arg3 goal:(id)arg4 device:(id)arg5;
- (void)beginCollectionWithStartDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_currentElapsedTime;
- (double)elapsedTimeAtDate:(id)arg1;
- (void)addSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addWorkoutEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endCollectionWithEndDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishWorkoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)discardWorkout;
- (id)statisticsForType:(id)arg1;
- (id)seriesBuilderForType:(id)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (void)_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)unitTest_setServerStateChangeHandler:(CDUnknownBlockType)arg1;
- (void)unitTest_setRecoveryFinishedHandler:(CDUnknownBlockType)arg1;
- (void)unitTest_setFailureHandler:(CDUnknownBlockType)arg1;

@end
