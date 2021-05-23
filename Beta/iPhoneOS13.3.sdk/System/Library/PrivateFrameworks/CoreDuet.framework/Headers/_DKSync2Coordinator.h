/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncContextObject.h>

@class APSConnection, NSMutableArray, NSMutableSet, NSObject, NSString, NSUUID, _CDMutablePerfMetric, _CDPeriodicSchedulerJob, _DKDataProtectionStateMonitor, _DKKnowledgeStorage, _DKSync2State, _DKSyncToggle, _DKSyncType, _DKThrottledActivity;

@protocol NSObject, OS_xpc_object, _DKKeyValueStore, _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage;

@interface _DKSync2Coordinator : _DKSyncContextObject

{
    _DKThrottledActivity *_activityThrottler;
    id <NSObject> _observerToken;
    NSMutableSet *_busyTransactions;
    NSMutableArray *_insertedSyncedEvents;
    NSMutableArray *_deletedSyncedEvents;
    NSMutableSet *_activatedPeers;
    _DKDataProtectionStateMonitor *_dataProtectionMonitor;
    _Bool _hasRegisteredOptionalObservers;
    _Bool _isEnabled;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSync2State *_syncState;
    double _periodicJobInterval;
    _Bool _databaseObserversRegistered;
    _Bool _cloudDeviceCountChangedObserverRegistered;
    _Bool _cloudSyncAvailablityObserverRegistered;
    _Bool _rapportAvailablityObserverRegistered;
    _Bool _siriSyncEnabledObserverRegistered;
    _Bool _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    NSMutableSet *_streamNamesObservedForAdditions;
    NSMutableSet *_streamNamesObservedForDeletions;
    _CDMutablePerfMetric *_perfMetric;
    struct _CDPerfEvent _perfEvent;
    _DKSyncToggle *_syncEnabledToggler;
    _DKSyncToggle *_someTransportIsAvailableToggler;
    _DKSyncToggle *_cloudIsAvailableToggler;
    _DKSyncToggle *_rapportIsAvailableToggler;
    _CDPeriodicSchedulerJob *_periodicJob;
    _Bool _triggeredSyncActivityRegistered;
    NSObject<OS_xpc_object> *_triggeredSyncActivity;
    _Bool _isBusy;
    _Bool _hasSyncedUpHistoryToCloud;
    _DKKnowledgeStorage *_storage;
    id <_DKKeyValueStore> _keyValueStore;
    id <_DKSyncLocalKnowledgeStorage> _localStorage;
    id <_DKSyncRemoteKnowledgeStorage> _transportCloudDown;
    id <_DKSyncRemoteKnowledgeStorage> _transportCloudUp;
    id <_DKSyncRemoteKnowledgeStorage> _transportRapport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *deviceUUID;
@property (nonatomic, readonly) _DKSyncType *syncType;
@property _Bool isBusy;
@property (retain, nonatomic) id <_DKKeyValueStore> keyValueStore;
@property (nonatomic) _Bool hasSyncedUpHistoryToCloud;
@property (retain, nonatomic) id <_DKSyncLocalKnowledgeStorage> localStorage;
@property (retain, nonatomic) id <_DKSyncRemoteKnowledgeStorage> transportCloudDown;
@property (retain, nonatomic) id <_DKSyncRemoteKnowledgeStorage> transportCloudUp;
@property (retain, nonatomic) id <_DKSyncRemoteKnowledgeStorage> transportRapport;
@property (nonatomic, readonly) _DKKnowledgeStorage *storage;

+ (id)storage;
+ (id)keyValueStoreForDomain:(id)arg1;
+ (_Bool)isOnPower;
+ (void)_updateEventStatsWithSyncType:(id)arg1;
+ (void)_updateEventStatsWithSyncElapsedTimeStartDate:(id)arg1 endDate:(id)arg2;
+ (id)_syncTypeFromActivity:(id)arg1;
+ (_Bool)shouldDeferSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5;
+ (_Bool)canPerformSyncOperationWithClass:(Class)arg1 syncType:(id)arg2 history:(id)arg3 transport:(id)arg4 peer:(id)arg5 policy:(id)arg6;
+ (id)streamNamesToTombstone;

- (void)dealloc;
- (void)start;
- (_Bool)isSingleDevice;
- (id)policyForSyncTransportType:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)_syncEnabledToggle;
- (void)_syncDisabledToggle;
- (void)_someTransportIsAvailableToggle;
- (void)_noTransportIsAvailableToggle;
- (void)_cloudIsAvailableToggle;
- (void)_cloudIsUnavailableToggle;
- (void)_rapportIsAvailableToggle;
- (void)_rapportIsUnavailableToggle;
- (void)handleDataProtectionChangeFor:(id)arg1 willBeAvailable:(_Bool)arg2;
- (void)_reregisterPeriodicJob;
- (void)_performSyncTogglesChangedActions;
- (void)_registerSyncPolicyChangedObserver;
- (void)_registerRapportAvailablityObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_registerSiriSyncEnabledObserver;
- (void)_registerRapportLaunchOnDemandHandler;
- (void)_performEnableAndStart;
- (void)_deleteSiriEventsIfSiriCloudSyncHasBeenDisabled;
- (void)_unregisterRapportAvailablityObserver;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_unregisterSiriSyncEnabledObserver;
- (void)_registerPeriodicJob;
- (void)_registerDatabaseObservers;
- (void)_registerTriggeredSyncActivityWithIsStartup:(_Bool)arg1;
- (void)_unregisterPeriodicJob;
- (void)_unregisterDatabaseObservers;
- (void)_createPushConnection;
- (void)_registerCloudDeviceCountChangedObserver;
- (void)_possiblyPerformInitialSync;
- (void)_destroyPushConnection;
- (void)_unregisterCloudDeviceCountChangedObserver;
- (void)configureTracker;
- (void)setupStorage;
- (void)handleStatusChangeForPeer:(id)arg1 previousTransports:(long long)arg2;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1;
- (id)createBusyTransactionWithName:(const char *)arg1;
- (void)handleFetchedSourceDeviceID:(id)arg1 version:(id)arg2 fromPeer:(id)arg3 error:(id)arg4;
- (void)removeBusyTransaction:(id)arg1;
- (void)_performSyncWithForceSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performSyncWithSyncType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unregisterTriggeredSyncActivity;
- (void)__performSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateTriggeredSyncActivity;
- (void)__finishSyncWithTransaction:(id)arg1 startDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performInitialSync;
- (void)_finishActivityWithError:(id)arg1;
- (double)_intervalForJobGivenIsSingleDevice:(_Bool)arg1;
- (void)_registerPeriodicJobWithInterval:(double)arg1;
- (id)_executionCriteriaWithInterval:(double)arg1;
- (void)_performPeriodicJob;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)_deleteForeignSiriEvents;
- (void)_deleteSiriCloudEvents;
- (void)_deleteNextBatchOfOurSiriEventsFromCloudWithStartDate:(id)arg1;
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;
- (void)possiblyUpdateIsBusyProperty;
- (id)_updatedExecutionCriteriaFromType:(id)arg1;
- (void)_checkInTriggeredSyncActivity:(id)arg1 isStartup:(_Bool)arg2;
- (void)_runTriggeredSyncActivity:(id)arg1;
- (void)syncWithReply:(CDUnknownBlockType)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (id)initWithStorage:(id)arg1;
- (void)_siriSyncEnabledDidChange;
- (void)_unregisterSyncPolicyChangedObserver;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)_databaseDidDeleteFromStreamNameCounts:(id)arg1;
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertSyncedEvents:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteSyncedEvents:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (id)sortedEventsFromSyncWindows:(id)arg1 streamNames:(id)arg2 compatibility:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (id)deletedEventIDsSinceDate:(id)arg1 streamNames:(id)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;

@end
