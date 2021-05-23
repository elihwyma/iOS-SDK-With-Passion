/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemonTransaction, HDDataCollectionAssertion, HDHealthStoreClient, HDProfile, HDQueryServerClientState, HKObjectType, HKQuantityType, HKQueryServerConfiguration, HKSampleType, NSArray, NSDictionary, NSSet, NSString, NSUUID, _HKFilter;

@protocol HDQueryServerDelegate, HKQueryClientInterface><NSXPCProxyCreating, OS_dispatch_queue;

@interface HDQueryServer : NSObject

{
    NSDictionary *_baseDataEntityEncodingOptions;
    HKQueryServerConfiguration *_configuration;
    CDUnknownBlockType _queryDidFinishHandler;
    NSArray *_dataObservationAssertions;
    HDDataCollectionAssertion *_dataCollectionAssertion;
    HDDaemonTransaction *_activationTransaction;
    HDQueryServerClientState *_clientState;
    _Atomic int _queryState;
    _Bool _shouldTakeObservationAssertions;
    _Bool _observingData;
    _Bool _isCollectingData;
    _Atomic _Bool _shouldFinish;
    _Atomic _Bool _shouldPause;
    NSObject<OS_dispatch_queue> *_unitTestQueryQueue;
    id <HDQueryServerDelegate> _delegate;
    NSUUID *_queryUUID;
    HDHealthStoreClient *_client;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queryQueue;
    double _collectionInterval;
    _HKFilter *_filter;
    HKObjectType *_objectType;
    long long _dataCount;
    CDUnknownBlockType _unitTest_queryServerSetShouldPauseHandler;
    CDUnknownBlockType _unitTest_queryServerWillChangeStateHandler;
}

@property (readonly) _Bool clientHasActiveWorkout;
@property (copy, nonatomic) HDQueryServerClientState *clientState;
@property (nonatomic) long long dataCount;
@property (nonatomic, readonly) double activationTime;
@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerSetShouldPauseHandler;
@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerWillChangeStateHandler;
@property (weak, nonatomic) id <HDQueryServerDelegate> delegate;
@property (copy, nonatomic, readonly) NSUUID *queryUUID;
@property (copy, nonatomic, readonly) HKQueryServerConfiguration *configuration;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queryQueue;
@property (readonly) long long queryState;
@property (nonatomic) double collectionInterval;
@property (nonatomic, readonly) _HKFilter *filter;
@property (nonatomic, readonly) id <HKQueryClientInterface><NSXPCProxyCreating> clientProxy;
@property (copy, nonatomic, readonly) HKObjectType *objectType;
@property (copy, nonatomic, readonly) NSSet *objectTypes;
@property (nonatomic, readonly) HKSampleType *sampleType;
@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (id)builtInQueryServerClasses;
+ (_Bool)supportsAnchorBasedAuthorization;
+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)exportedInterface;
- (id)taskUUID;
- (id)_predicateString;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)setShouldPause:(_Bool)arg1;
- (void)remote_startQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deactivateServer;
- (id)diagnosticDescription;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (_Bool)_shouldListenForUpdates;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (_Bool)_shouldStopProcessingQuery;
- (_Bool)_shouldSuspendQuery;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id *)arg2;
- (id)newDataEntityEnumerator;
- (CDUnknownBlockType)sampleAuthorizationFilter;
- (void)scheduleDatabaseAccessOnQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)setQueryDidFinishHandler:(CDUnknownBlockType)arg1;
- (_Bool)prepareToActivateServerWithError:(id *)arg1;
- (void)activateServerWithClientState:(id)arg1 error:(id)arg2;
- (id)createDatabaseTransactionContext;
- (void)clientStateWillChange:(id)arg1;
- (void)clientStateDidChange:(id)arg1;
- (double)_queue_logThresholdHardwareFactor;
- (void)onQueue:(CDUnknownBlockType)arg1;
- (double)_queue_queryLogThreshold;
- (void)_queue_didDeactivate;
- (_Bool)_shouldObserveOnPause;
- (_Bool)_shouldObserveDatabaseProtectedDataAvailability;
- (_Bool)validateConfiguration:(id *)arg1;
- (void)_queue_didChangeStateFromPreviousState:(long long)arg1 state:(long long)arg2;
- (id)filteredSamplesForClientWithSamples:(id)arg1;
- (id)sanitizedSampleForQueryClient:(id)arg1;
- (void)schedulePause;
- (void)_queue_startDataCollection;
- (void)_queue_stopDataCollection;
- (void)deactivateServerWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isQueryingForHealthRecordsTypes;
- (void)_queue_activateServerWithClientState:(id)arg1 error:(id)arg2;
- (void)_queue_setQueryState:(long long)arg1;
- (void)_queue_transitionToPaused;
- (void)_queue_startDataCollectionIfNecessary;
- (void)_queue_notifyIfQueryingForHealthRecords;
- (void)_scheduleStartQuery;
- (void)_queue_transitionToFinished;
- (void)_queue_closeActivationTransactionIfNecessary;
- (void)_queue_startQueryIfNecessary;
- (void)_queue_transitionToRunning;
- (id)_queue_collectionObserverState;
- (void)_queue_updateSampleTypeObservationAssertions;
- (_Bool)_shouldRegisterAsProtectedDataObserver;
- (void)_queue_logQueryWithDuration:(double)arg1;
- (void)_queue_transitionToSuspendedState:(long long)arg1;
- (void)_queue_endObservingDataTypes;
- (_Bool)_shouldObserveAllSampleTypes;
- (id)_queue_sampleTypesForObservation;
- (void)_queue_setSampleTypeObservationAssertions:(id)arg1;
- (void)_queue_beginObservingDataTypes;
- (id)_queryStateString;
- (id)_sampleTypeToObserveForUpdates;

@end
