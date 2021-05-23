/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKServerChangeToken, HDCloudSyncOperationConfiguration, HDCloudSyncStore, HDCloudSyncStoreRecord, HDCloudSyncZone, NSDate, NSFileHandle, NSMutableArray, NSProgress, NSString, NSUUID, _HDCloudSyncStorePersistableState;

@protocol OS_dispatch_queue;

@interface HDCloudSyncPullOperation : NSObject

{
    HDCloudSyncOperationConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_queue;
    HDCloudSyncStoreRecord *_storeRecord;
    HDCloudSyncZone *_pullZone;
    CKContainer *_container;
    HDCloudSyncStore *_syncStore;
    NSMutableArray *_fetchedChangeRecords;
    CKServerChangeToken *_initialServerChangeToken;
    CKServerChangeToken *_serverChangeToken;
    NSFileHandle *_fileHandle;
    NSProgress *_allAssetProgress;
    NSProgress *_perAssetRecordProgress;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    NSString *_cloudKitIdentifier;
    _Bool _hasAppliedChange;
    _Bool _queue_hasStarted;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

@property (copy, nonatomic, readonly) _HDCloudSyncStorePersistableState *persistedStoreState;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_assetFileHandleWithName:(id)arg1 error:(id *)arg2;

- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithConfiguration:(id)arg1 pullZone:(id)arg2;
- (void)_queue_startPullOperation;
- (void)_queue_recordChangeApplied;
- (long long)_queue_requiresSyncForSequence:(id)arg1 error:(id *)arg2;
- (id)_syncStoreWithError:(id *)arg1;
- (_Bool)_queue_resetPullState:(id)arg1 error:(id *)arg2;
- (_Bool)_queue_prepareForEpochChangeWithPersistedState:(id)arg1 error:(id *)arg2;
- (long long)_queue_requiresSyncWithError:(id *)arg1;
- (id)_queue_getFetchChangesOperation;
- (void)_queue_setupAndTriggerFetchChangesOperation:(id)arg1;
- (void)_fetchRecordZoneChangesCompletionForOperation:(id)arg1 error:(id)arg2;
- (void)_recordZoneFetchCompletionForOperation:(id)arg1 recordZoneID:(id)arg2 serverChangeToken:(id)arg3 recordZoneError:(id)arg4;
- (void)_recordChangedForOperation:(id)arg1 record:(id)arg2;
- (void)_queue_endFetchChangesOperation:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (id)_queue_requiredRecordsWithOrderedChangeRecords:(id)arg1 error:(id *)arg2;
- (void)_queue_updatePersistedServerChangeToken:(id)arg1;
- (void)_queue_fetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2;
- (void)_queue_helpFetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2 recordIndex:(long long)arg3;
- (void)_queue_fetchAssetForChangeRecord:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (_Bool)_isRelevantChangeRecord:(id)arg1;
- (_Bool)_isValidAnchorRangeMap:(id)arg1 lastAnchorMap:(id)arg2 error:(id *)arg3;
- (_Bool)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2;
- (void)_perRecordCompletionForOperation:(id)arg1 record:(id)arg2 recordID:(id)arg3 recordAssetContentInMemory:(_Bool)arg4 error:(id)arg5 errorCompletion:(CDUnknownBlockType)arg6;
- (void)_fetchRecordsCompletionForOperation:(id)arg1 recordsByRecordID:(id)arg2 operatioError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(_Bool)arg2 error:(id *)arg3;
- (long long)_queue_assetExtractionFailureCount;
- (void)_queue_setAssetExtractionFailureCount:(long long)arg1;
- (_Bool)_queue_persistFetchedArchiveAsset:(id)arg1 changeRecord:(id)arg2 error:(id *)arg3;
- (_Bool)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (id)_assetExtractionFailureCountKey;

@end
