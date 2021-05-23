/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDCloudSyncFetchOperationResult, HDCloudSyncOperationConfiguration, HDCloudSyncStoreRecord, NSDate, NSMutableArray, NSProgress, NSString, NSUUID, _HDCloudSyncSessionContext;

@protocol OS_dispatch_queue;

@interface HDCloudSyncPushOperation : NSObject

{
    HDCloudSyncOperationConfiguration *_configuration;
    HDCloudSyncFetchOperationResult *_fetchOperationResult;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncQueue;
    _HDCloudSyncSessionContext *_syncSessionContext;
    HDCloudSyncStoreRecord *_storeRecordForPush;
    _Bool _isNewStoreRecord;
    NSMutableArray *_changeRecordsPendingPush;
    NSMutableArray *_recordsPendingDeletion;
    NSUUID *_operationIdentifier;
    NSDate *_startTime;
    NSString *_cloudKitIdentifier;
    _Bool _queue_hasStarted;
    long long _perSequenceChildProgressUnitCount;
    CDUnknownBlockType _completion;
    NSProgress *_progress;
}

@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (void)_finishWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)syncSessionWillBegin:(id)arg1;
- (void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)syncSession:(id)arg1 didFinishSuccessfully:(_Bool)arg2 error:(id)arg3;
- (_Bool)syncSession:(id)arg1 didEndTransactionWithError:(id *)arg2;
- (id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2;
- (id)_queue_getStoreRecordForPushZone:(id)arg1 isNewRecord:(_Bool *)arg2 error:(id *)arg3;
- (id)_queue_sequenceRecordsForPushWithStoreRecord:(id)arg1;
- (void)_setInitialForwardProgressDateIfNecessary;
- (void)_queue_performSyncForSequences:(id)arg1 excludingStoreZones:(id)arg2;
- (id)_queue_tombstoneSequenceRecordForPushWithStoreRecord:(id)arg1;
- (id)_queue_primarySequenceRecordForPushWithStoreRecord:(id)arg1;
- (id)_queue_pushStoreWithIdentifier:(id)arg1;
- (id)_queue_excludedStoresForZones:(id)arg1;
- (void)_queue_syncCompletedWithSuccess:(_Bool)arg1 error:(id)arg2 remainingSequences:(id)arg3 excludedStoreZones:(id)arg4;
- (id)_queue_estimateSyncEntityClassesWithChangesForSession:(id)arg1;
- (_Bool)_queue_finalizeNextChangeRecordForUploadToSession:(id)arg1 shouldFreeze:(_Bool)arg2 error:(id *)arg3;
- (void)_queue_uploadChangesForSyncSession:(id)arg1 isFinalUpload:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_finalizePushForSession:(id)arg1;
- (void)_queue_endSyncSessionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_queue_deactivatePendingOwnerStores;
- (void)_queue_pushRecords:(id)arg1 recordIDsToDelete:(id)arg2 zoneToCreate:(id)arg3 containerID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_queue_pushStoreIdentifier;
- (long long)_queue_protocolVersionForPush;
- (void)_recordForwardProgressDate;
- (long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 error:(id *)arg4;

@end
