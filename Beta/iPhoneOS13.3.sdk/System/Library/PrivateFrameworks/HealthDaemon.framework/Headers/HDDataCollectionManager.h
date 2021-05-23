/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAudioExposureEventObserver, HDBTLEHeartRateDataCollector, HDDatabaseCoalescedWritePool, HDDemoManager, HDPeriodicActivity, HDProfile, NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface HDDataCollectionManager : NSObject

{
    NSDate *_lastLaunchUpdate;
    NSMutableDictionary *_dataAggregatorsByType;
    HDPeriodicActivity *_periodicUpdateActivity;
    HDDatabaseCoalescedWritePool *_pendingSavePool;
    double unitTest_pendingSaveCoalescingInterval;
    _Bool unitTest_hasSetPendingSaveCoalescingInterval;
    int _privacyPreferencesNotificationToken;
    struct os_unfair_lock_s _collectorLock;
    NSMutableArray *_collectorLock_builtinCollectors;
    NSMutableDictionary *_collectorLock_dataCollectorsByType;
    struct os_unfair_lock_s _fakingLock;
    CDUnknownBlockType _unitTest_aggregatorConfigurationChangedHandler;
    NSSet *_collectibleTypes;
    HDAudioExposureEventObserver *_audioExposureEventObserver;
    HDProfile *_profile;
    NSMutableDictionary *_observersByType;
    HDBTLEHeartRateDataCollector *_blteHeartRateDataCollector;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_assertionQueue;
    HDDemoManager *_demoManager;
    NSObject<OS_dispatch_queue> *_dataCollectionQueue;
}

@property (retain, nonatomic) NSMutableDictionary *observersByType;
@property (retain, nonatomic) HDBTLEHeartRateDataCollector *blteHeartRateDataCollector;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionQueue;
@property (retain, nonatomic) HDDemoManager *demoManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dataCollectionQueue;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) _Bool hasAccessToFitnessData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)generateFakeDataForActivityType:(long long)arg1 minutes:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)diagnosticDescription;
- (void)daemonReady:(id)arg1;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)aggregatorForType:(id)arg1;
- (void)performSaveWithMaximumLatency:(double)arg1 block:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (double)defaultCollectionIntervalForType:(id)arg1;
- (id)btleHeartRateDataCollector;
- (void)stopDataCollectionForType:(id)arg1 observer:(id)arg2;
- (void)requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 freezeSeries:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)startDataCollectionForType:(id)arg1 observer:(id)arg2 collectionInterval:(double)arg3;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 collectionInterval:(double)arg4;
- (id)collectibleTypes;
- (void)startFakingDataWithActivityType:(long long)arg1 speed:(id)arg2;
- (void)stopFakingData;
- (void)addDataCollectionObserver:(id)arg1 type:(id)arg2 collectionInterval:(double)arg3 state:(id)arg4;
- (void)removeDataCollectionObserver:(id)arg1 type:(id)arg2;
- (void)removeDataCollectionObserver:(id)arg1;
- (_Bool)sensorDataArrayReceived:(id)arg1 deviceEntity:(id)arg2 error:(id *)arg3;
- (_Bool)_dataReceived:(id)arg1 provenance:(id)arg2 isDemoData:(_Bool)arg3 error:(id *)arg4;
- (id)_queue_aggregatorForType:(id)arg1;
- (_Bool)_typeIsCollectible:(id)arg1;
- (id)_newAggregatorForObjectType:(id)arg1;
- (void)_queue_adjustDataCollectionForType:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)_queue_observerMapForType:(id)arg1;
- (void)_requestAggregationThroughDate:(id)arg1 types:(id)arg2 mode:(long long)arg3 freezeSeries:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_requestAggregationThroughDate:(id)arg1 type:(id)arg2 mode:(long long)arg3 freezeSeries:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (CDStruct_b3408c18)_queue_defaultCollectionStateForType:(id)arg1;
- (CDStruct_b3408c18)_queue_collectionStateForType:(id)arg1;
- (void)_queue_updateLegacyDataCollector:(id)arg1 forChangeFromState:(CDStruct_b3408c18)arg2 toState:(CDStruct_b3408c18)arg3 type:(id)arg4;
- (id)_dataAggregatorConfigurationForCollectorState:(CDStruct_b3408c18)arg1;
- (void)_registerCollectors:(id)arg1;
- (void)_queue_createBuiltinCollectors;
- (void)_updateDataCollectorsWithPrivacySettings;
- (id)pluginDataCollectors;
- (void)_queue_addDataCollector:(id)arg1;
- (void)_queue_alertCollectorsOfTypesWithObservers;
- (id)_fakingLock_demoManagerCreatingIfNecessary;
- (void)_demoObjectsReceived:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unitTest_addCollectibleType:(id)arg1;
- (void)periodicUpdate;
- (void)_queue_setupUnprotectedDataDependantState;
- (id)_observersDescription;
- (id)_dataCollectorsDiagnosticDescription;
- (id)_dataAggregatorsDiagnosticDescription;
- (void)dataCollectionObserver:(id)arg1 didChangeState:(id)arg2;
- (void)requestAggregationForAllTypesThroughDate:(id)arg1 mode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sensorDataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)startFakingWithHKWorkoutActivityType:(unsigned long long)arg1;
- (id)takeCollectionAssertionWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observer:(id)arg3 observerState:(id)arg4 collectionInterval:(double)arg5;
- (void)addDataCollector:(id)arg1;
- (void)unitTest_setAggregator:(id)arg1 forType:(id)arg2;
- (id)unitTest_dataAggregatorConfigurationForType:(id)arg1;
- (void)unitTest_setAggregatorConfigurationChangeHandler:(CDUnknownBlockType)arg1;
- (void)unitTest_setPendingSaveCoalescingInterval:(double)arg1;

@end
