/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDStandardTaskServer.h>

@class HDWorkoutBuilderEntity, HKDataFlowLink, HKObserverSet, HKStateMachine, HKWorkoutBuilderConfiguration, NSArray, NSDate, NSDateInterval, NSError, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString, NSUUID;

@protocol HDWorkoutDataAccumulator, OS_dispatch_queue;

@interface HDWorkoutBuilderServer : HDStandardTaskServer

{
    struct os_unfair_lock_s _lock;
    _Atomic _Bool _invalidated;
    HDWorkoutBuilderEntity *_persistentEntity;
    NSError *_error;
    HKObserverSet *_dataAccumulatorObservers;
    HKObserverSet *_sampleObservers;
    NSSet *_quantityTypesIncludedWhilePaused;
    NSMutableDictionary *_statisticsCalculatorsByType;
    NSMutableDictionary *_sourceOrderProvidersByType;
    NSMutableDictionary *_statisticsDataSourcesByType;
    NSMutableSet *_quantityTypesRequiringCalculatorInvalidation;
    HKDataFlowLink *_workoutDataFlowLink;
    NSSet *_expectedDataSourceUUIDs;
    HKStateMachine *_stateMachine;
    long long _targetConstructionState;
    NSObject<OS_dispatch_queue> *_upstreamQueue;
    HKWorkoutBuilderConfiguration *_configuration;
    NSMutableDictionary *_metadata;
    NSArray *_workoutEvents;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDateInterval *_dataInterval;
}

@property (retain, nonatomic) HKWorkoutBuilderConfiguration *configuration;
@property (retain, nonatomic) NSMutableDictionary *metadata;
@property (retain, nonatomic) NSArray *workoutEvents;
@property (copy, nonatomic) NSDate *workoutStartDate;
@property (copy, nonatomic) NSDate *workoutEndDate;
@property (copy, nonatomic) NSDateInterval *dataInterval;
@property (readonly) _Bool invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (copy, readonly) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (nonatomic, readonly) id <HDWorkoutDataAccumulator> workoutDataAccumulator;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)recoveredWorkoutBuilderConfigurationForClient:(id)arg1 sessionIdentifier:(id)arg2 builderIdentifierOut:(id *)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;
+ (void)finishDetachedBuilderForEntity:(id)arg1 sessionEndDate:(id)arg2 profile:(id)arg3;
+ (id)dataDestinationStateMachineForTaskUUID:(id)arg1 configuration:(id)arg2;
+ (_Bool)finishAllWorkoutBuildersForClient:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)finishAllDetachedWorkoutBuildersExcludingSessions:(id)arg1 profile:(id)arg2 error:(id *)arg3;

- (id)startDate;
- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_setTargetConstructionState:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)remote_addSamples:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addWorkoutEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_addMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_updateDevice:(id)arg1;
- (void)remote_setStatisticsMergeStrategy:(unsigned long long)arg1 forType:(id)arg2;
- (void)remote_setStatisticsComputationMethod:(long long)arg1 forType:(id)arg2;
- (void)remote_addDataSourcesWithIdentifiers:(id)arg1;
- (void)remote_removeDataSourcesWithIdentifiers:(id)arg1;
- (void)remote_recoverWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setShouldCollectEvents:(_Bool)arg1;
- (void)connectionConfigured;
- (void)stateMachine:(id)arg1 didTransition:(id)arg2 fromState:(id)arg3 toState:(id)arg4 date:(id)arg5 error:(id)arg6;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (id)currentEvents;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)addSamples:(id)arg1 dataSource:(id)arg2;
- (void)addWorkoutEvents:(id)arg1 dataSource:(id)arg2;
- (void)addMetadata:(id)arg1 dataSource:(id)arg2;
- (id)currentMetadata;
- (_Bool)enumerateSamplesOfType:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addSampleObserver:(id)arg1;
- (void)didCreateTaskServer:(id)arg1;
- (void)didInvalidateTaskServer:(id)arg1;
- (void)addDataAccumulationObserver:(id)arg1;
- (void)removeDataAccumulationObserver:(id)arg1;
- (void)_loadOrCreatePersistentEntity;
- (_Bool)_lock_persistDataSourceRecoveryDataInTransaction:(id)arg1 error:(id *)arg2;
- (id)_lock_configurationForPersistenceWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)_lock_createPersistentEntityForConfiguration:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)_lock_recoverPersistedDataWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)_lock_loadOrCreatePersistentEntityInTransaction:(id)arg1 error:(id *)arg2;
- (void)_updateStatisticsPauseResumeMask;
- (void)_lock_failWithError:(id)arg1;
- (id)_lock_sourceOrderProviderForQuantityType:(id)arg1;
- (id)_lock_statisticsDataSourceForQuantityType:(id)arg1;
- (long long)_recoveredStateForStartDate:(id)arg1 endDate:(id)arg2;
- (void)_didUpdateStatistics:(id)arg1;
- (void)_didUpdateMetadata:(id)arg1;
- (void)_didUpdateEvents:(id)arg1;
- (void)_didChangeElapsedTimeBasis;
- (void)_lock_didUpdateStartDate;
- (void)_recoverAssociatedSeriesBuilders;
- (void)_didFinishRecovery;
- (id)_lock_associateSamples:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)_lock_updateStatisticsWithSamples:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (void)_attemptRequeryForInvalidatedStatisticsCalculators;
- (_Bool)_insertWorkoutEvents:(id)arg1 error:(id *)arg2;
- (_Bool)_addMetadata:(id)arg1 error:(id *)arg2;
- (id)currentStatisticsByQuantityType;
- (id)_finishWorkoutWithError:(id *)arg1;
- (_Bool)_discardWorkoutWithError:(id *)arg1;
- (void)_lock_pushCurrentConstructionState;
- (void)_notifySourcesOfTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (_Bool)_validateAuthorizationToSaveWorkoutWithError:(id *)arg1;
- (_Bool)_canAddDataWithError:(id *)arg1;
- (void)_saveSamples:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_lock_statisticsCalculatorForQuantityType:(id)arg1 mergeStrategy:(unsigned long long)arg2 computationMethod:(long long)arg3;
- (void)_updateCachedStateForAddedWorkoutEvents:(id)arg1;
- (id)_lock_statisticsCalculatorForQuantityType:(id)arg1;
- (id)_lock_maskedIntervalsForStatisticsOfType:(id)arg1;
- (void)_persistRecoveryData;
- (void)_setupDataSource:(id)arg1 identifier:(id)arg2;
- (void)_lock_addQuantityTypesIncludedWhilePausedFromSource:(id)arg1 transaction:(id)arg2;
- (void)removeSampleObserver:(id)arg1;

@end
