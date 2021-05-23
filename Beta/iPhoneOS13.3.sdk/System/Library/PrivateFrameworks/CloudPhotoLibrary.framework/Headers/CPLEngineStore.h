/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLChangeBatch, CPLEngineChangePipe, CPLEngineClientCache, CPLEngineCloudCache, CPLEngineDerivativesCache, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineOutgoingResources, CPLEnginePushRepository, CPLEngineQuarantinedRecords, CPLEngineRemappedDeletes, CPLEngineResourceDownloadQueue, CPLEngineResourceStorage, CPLEngineScopeCleanupTasks, CPLEngineScopeStorage, CPLEngineStatusCenter, CPLEngineTransientRepository, CPLPlatformObject, CPLResetTracker, NSArray, NSDate, NSHashTable, NSMutableArray, NSSet, NSString, NSURL;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLEngineStore : NSObject

{
    NSHashTable *_storages;
    NSObject<OS_dispatch_queue> *_batchedTransactionsQueue;
    NSMutableArray *_batchedTransactions;
    _Bool _batchedTransactionDequeueIsScheduled;
    _Bool _dontDelayChangeSessionUpdate;
    NSURL *_resetEventsURL;
    NSMutableArray *_resetEvents;
    CPLResetTracker *_pendingTracker;
    CPLChangeBatch *_unacknowledgedBatch;
    _Bool _discardUnacknowledgedBatchOnTransactionFail;
    NSSet *_lastInvalidRecordScopedIdentifiers;
    NSDate *_lastInvalidRecordsDate;
    NSObject<OS_dispatch_source> *_pendingUpdateTimer;
    NSObject<OS_dispatch_queue> *_pendingUpdateQueue;
    double _pendingUpdateInterval;
    _Bool _unschedulePendingUpdateApplyOnWriteSuccess;
    _Bool _schedulePendingUpdateApplyOnWriteSuccess;
    _Bool _scheduleSetupOnWriteSuccess;
    _Bool _scheduleDisabledFeatureUpdateOnWriteSuccess;
    _Bool _schedulePullFromClient;
    NSObject<OS_dispatch_queue> *_shouldSyncScopeListQueue;
    _Bool _shouldEnableScopeListSyncOnWriteSuccess;
    NSArray *_disabledFeatures;
    _Bool _hasUpdatedDisabledFeatures;
    _Bool _isUpdatingDisabledFeatures;
    _Bool _shouldTriggerCompleteResetSyncAfterDisabledFeaturesUpdate;
    _Bool _shouldTriggerResetSyncAfterDisabledFeaturesUpdate;
    _Bool _shouldSyncScopeList;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScopeStorage *_scopes;
    CPLEngineScopeCleanupTasks *_cleanupTasks;
    CPLEngineChangePipe *_pullQueue;
    CPLEngineIDMapping *_idMapping;
    CPLEngineClientCache *_clientCache;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineResourceStorage *_resourceStorage;
    CPLEngineResourceDownloadQueue *_downloadQueue;
    CPLEngineOutgoingResources *_outgoingResources;
    CPLEngineRemappedDeletes *_remappedDeletes;
    CPLEngineQuarantinedRecords *_quarantinedRecords;
    CPLEngineStatusCenter *_statusCenter;
    CPLEngineDerivativesCache *_derivativesCache;
    unsigned long long _state;
}

@property (nonatomic, readonly) _Bool hasPendingResetSync;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NSArray *storages;
@property (weak, nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) _Bool shouldSyncScopeList;
@property (nonatomic, readonly) CPLEnginePushRepository *pushRepository;
@property (nonatomic, readonly) _Bool pushRepositoryIsFull;
@property (nonatomic, readonly) CPLEngineScopeStorage *scopes;
@property (nonatomic, readonly) CPLEngineScopeCleanupTasks *cleanupTasks;
@property (nonatomic, readonly) CPLEngineChangePipe *pullQueue;
@property (nonatomic, readonly) CPLEngineIDMapping *idMapping;
@property (nonatomic, readonly) CPLEngineClientCache *clientCache;
@property (nonatomic, readonly) CPLEngineCloudCache *cloudCache;
@property (nonatomic, readonly) CPLEngineTransientRepository *transientPullRepository;
@property (nonatomic, readonly) CPLEngineResourceStorage *resourceStorage;
@property (nonatomic, readonly) CPLEngineResourceDownloadQueue *downloadQueue;
@property (nonatomic, readonly) CPLEngineOutgoingResources *outgoingResources;
@property (nonatomic, readonly) CPLEngineRemappedDeletes *remappedDeletes;
@property (nonatomic, readonly) CPLEngineQuarantinedRecords *quarantinedRecords;
@property (nonatomic, readonly) CPLEngineStatusCenter *statusCenter;
@property (readonly) NSDate *libraryCreationDate;
@property (nonatomic, readonly) id corruptionInfo;
@property (nonatomic, readonly) CPLEngineDerivativesCache *derivativesCache;
@property (nonatomic, readonly) _Bool shouldGenerateDerivatives;
@property (nonatomic, readonly) NSArray *disabledFeatures;
@property (nonatomic, readonly) _Bool shouldUpdateDisabledFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;
+ (id)storageNames;
+ (id)stateDescriptionForState:(unsigned long long)arg1;

- (void)dealloc;
- (id)userIdentifier;
- (void)performBarrier;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_canWrite;
- (id)componentName;
- (id)_currentTransaction;
- (id)libraryVersion;
- (id)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)libraryOptions;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)registerStorage:(id)arg1;
- (void)_loadResetEvents;
- (void)_storeResetEvent:(id)arg1 scopeIdentifier:(id)arg2 date:(id)arg3 pending:(_Bool)arg4 cause:(id)arg5;
- (void)_storeResetEvent:(id)arg1 scopeIdentifier:(id)arg2 date:(id)arg3 cause:(id)arg4;
- (void)noteResetSyncFinished;
- (id)_resetEventsDescriptions;
- (id)_resetEventsJSON;
- (_Bool)_resetGlobalStateWithError:(id *)arg1;
- (_Bool)_resetLocalSyncStateWithCause:(id)arg1 scope:(id)arg2 date:(id)arg3 error:(id *)arg4;
- (_Bool)_resetCompleteSyncStateWithCause:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (_Bool)_resetCompleteSyncStateIncludingIDMappingWithCause:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (_Bool)_resetSyncAnchorWithCause:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (_Bool)resetLocalSyncStateWithCause:(id)arg1 error:(id *)arg2;
- (_Bool)resetLocalSyncStateWithCause:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (_Bool)resetCompleteSyncStateWithCause:(id)arg1 error:(id *)arg2;
- (_Bool)resetCompleteSyncStateIncludingIDMappingWithCause:(id)arg1 error:(id *)arg2;
- (_Bool)resetSyncAnchorWithCause:(id)arg1 error:(id *)arg2;
- (void)noteOtherResetEvent:(id)arg1 cause:(id)arg2;
- (void)noteInvalidRecordScopedIdentifiersInPushSession:(id)arg1;
- (void)_performTransaction:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_commitWriteTransaction:(id)arg1 commitError:(id)arg2;
- (id)performWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_scheduleBatchedTransactionsLocked;
- (void)_reallyPerformBatchedTransactionsLocked;
- (void)performBatchedWriteTransactionWithBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBatchedWriteTransactionBarrier;
- (_Bool)storeLibraryVersion:(id)arg1 withError:(id *)arg2;
- (_Bool)updateLibraryOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_shouldSyncScopeListWithOptions:(unsigned long long)arg1;
- (void)_updateShouldSyncScopeList:(_Bool)arg1;
- (id)createNewLibraryVersion;
- (_Bool)storeUserIdentifier:(id)arg1 error:(id *)arg2;
- (id)lastQuarantineCountReportDate;
- (_Bool)storeLastQuarantineCountReportDate:(id)arg1 error:(id *)arg2;
- (id)clientCacheIdentifier;
- (_Bool)storeClientIsInSyncWithClientCacheWithError:(id *)arg1;
- (_Bool)isClientInSyncWithClientCache;
- (_Bool)_applyPendingUpdate:(id)arg1 error:(id *)arg2;
- (void)_reallySchedulePendingUpdateApply;
- (void)_reallyUnschedulePendingUpdateApply;
- (void)_schedulePendingUpdateApply;
- (void)_unschedulePendingUpdateApply;
- (_Bool)storeChangeSessionUpdate:(id)arg1 error:(id *)arg2;
- (_Bool)beginChangeSession:(id)arg1 withLibraryVersion:(id)arg2 resetTracker:(id)arg3 error:(id *)arg4;
- (_Bool)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg1 error:(id *)arg2;
- (_Bool)forceApplyPendingChangeSessionUpdateWithError:(id *)arg1;
- (_Bool)hasPendingChangeSessionUpdate;
- (_Bool)checkExpectedLibraryVersion:(id)arg1 error:(id *)arg2;
- (void)keepUnacknowledgedBatch:(id)arg1;
- (void)dropUnacknowledgedBatch;
- (id)unacknowledgedChangeWithLocalScopedIdentifier:(id)arg1;
- (id)_storedDisabledFeatures;
- (_Bool)updateDisabledFeatures:(id)arg1 didReset:(_Bool *)arg2 error:(id *)arg3;
- (_Bool)isFeatureDisabled:(id)arg1;
- (_Bool)setShouldUpdateDisabledFeaturesWithError:(id *)arg1;
- (id)localResourceForCloudResource:(id)arg1 recordClass:(Class *)arg2;
- (id)derivativesFilter;
- (_Bool)storeDerivativesFilter:(id)arg1 error:(id *)arg2;
- (void)wipeStoreAtNextOpeningWithReason:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_setTransactionOnCurrentThread:(id)arg1;
- (void)_removeTransactionOnCurrentThread:(id)arg1;
- (_Bool)_canRead;
- (void)assertCanWrite;
- (void)assertCanRead;

@end
