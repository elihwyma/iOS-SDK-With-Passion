/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@class IMDCKAttachmentSyncCKOperationFactory, IMDRecordZoneManager, NSMutableArray, NSMutableDictionary, NSObject;

@protocol IMDCKSyncTokenStore, OS_dispatch_queue, OS_xpc_object;

@interface IMDCKAttachmentSyncController

{
    _Bool _assetDownloadInProgress;
    NSObject<OS_dispatch_queue> *_ckQueue;
    IMDRecordZoneManager *_recordZoneManager;
    IMDCKAttachmentSyncCKOperationFactory *_CKOperationFactory;
    id <IMDCKSyncTokenStore> _syncTokenStore;
    NSMutableDictionary *_completionBlocksForAssetFetchOperations;
    NSMutableDictionary *_recordIDToTransferMap;
    CDUnknownBlockType _perTransferProgress;
    NSMutableArray *_downloadAssetsForTransferGUIDs;
    unsigned long long _deviceConditionsToCheck;
    NSObject<OS_xpc_object> *_activity;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *ckQueue;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager;
@property (retain, nonatomic) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory;
@property (retain, nonatomic) id <IMDCKSyncTokenStore> syncTokenStore;
@property (retain, nonatomic) NSMutableDictionary *completionBlocksForAssetFetchOperations;
@property (retain, nonatomic) NSMutableDictionary *recordIDToTransferMap;
@property (copy, nonatomic) CDUnknownBlockType perTransferProgress;
@property (nonatomic) _Bool assetDownloadInProgress;
@property (retain, nonatomic) NSMutableArray *downloadAssetsForTransferGUIDs;
@property (nonatomic) unsigned long long deviceConditionsToCheck;
@property NSObject<OS_xpc_object> *activity;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_scheduleOperation:(id)arg1;
- (void)deleteAttachmentZone;
- (long long)syncControllerRecordType;
- (void)clearLocalSyncState:(unsigned long long)arg1;
- (void)_migrateSyncToken;
- (id)initWithSyncTokenStore:(id)arg1;
- (_Bool)_shouldMarkAttachmentsAsNeedingReupload;
- (long long)_numberOfMetadataBatchesOfAttachmentsToFetchInInitialSync;
- (id)latestSyncTokenForSyncType:(long long)arg1;
- (void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(_Bool)arg1 desiredKeys:(long long)arg2 syncType:(long long)arg3 currentBatchCount:(long long)arg4 maxBatchCount:(long long)arg5 syncToken:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (_Bool)_shouldMarkAllAttachmentsAsNeedingSync;
- (void)_hasMarkedAllAttachmentsAsNeedingSync;
- (void)setLatestSyncToken:(id)arg1 forSyncType:(long long)arg2;
- (void)_writeAttachmentsToCloudKit:(CDUnknownBlockType)arg1;
- (void)_markAllUnsuccessFullSyncAttachmentsAsNeedingSync;
- (long long)_numberOfBatchesOfAttachmentsToFetchInInitialSync;
- (id)_attachmentZoneID;
- (id)_attachmentZoneSalt;
- (void)_fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2 useNonHSA2ManateeDatabase:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(_Bool)arg2 useNonHSA2ManateeDatabase:(_Bool)arg3 perTransferProgress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchAttachmentDataForTransfers:(id)arg1 highQuality:(_Bool)arg2 perTransferProgress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)__shouldOptimizeAttachmentDefault;
- (_Bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(_Bool)arg1;
- (void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2 useNonHSA2ManateeDatabase:(_Bool)arg3 retryCount:(unsigned long long)arg4 numAttachmentsDownloaded:(unsigned long long)arg5 transfers:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)__databaseRequestForAttachmentsWithAssets;
- (id)fileTransferCenter;
- (_Bool)_attachmentDownloadCanStart:(_Bool)arg1 withActivity:(id)arg2;
- (void)_downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2 useNonHSA2ManateeDatabase:(_Bool)arg3 retryCount:(unsigned long long)arg4 numAttachmentsDownloaded:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2 useNonHSA2ManateeDatabase:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)purgedAttachmentsForChat:(id)arg1 services:(id)arg2 limit:(long long)arg3;
- (unsigned long long)_numberOfAttachmentsToDownload;
- (void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (_Bool)_deviceConditionsAllowsMessageSync;
- (id)_ckUtilitiesInstance;
- (id)_recordKeyManagerSharedInstance;
- (void)_markAttachmentWithROWIDAsSyncedWithCloudKit:(id)arg1;
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (unsigned long long)_numberOfAttachmentsToWriteUp;
- (id)_updateAttachmentGUIDIfNeededAndReturnTransfersToForceMarkAsSync:(id)arg1 transfersToSyncRowIDs:(id)arg2;
- (void)_writeCKRecordsToAttachmentZone:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_processAssetFetchPerRecordProgressBlock:(id)arg1 progress:(double)arg2;
- (void)_processAssetFetchPerRecordCompletionBlock:(id)arg1 recordID:(id)arg2 error:(id)arg3;
- (void)_processAssetFetchOperationCompletionBlock:(id)arg1 operationID:(id)arg2 error:(id)arg3;
- (_Bool)_fetchedAllChangesFromCloudKit;
- (void)_processRecordChanged:(id)arg1;
- (void)_processRecordDeletion:(id)arg1;
- (void)_processRecordZoneFetchCompletion:(id)arg1 zoneID:(id)arg2 clientChangeTokenData:(id)arg3 moreComing:(_Bool)arg4 shouldWriteBackChanges:(_Bool)arg5 desiredKeys:(long long)arg6 syncType:(long long)arg7 error:(id)arg8 currentBatchCount:(long long)arg9 maxBatchCount:(long long)arg10 completionBlock:(CDUnknownBlockType)arg11;
- (void)_processFetchRecordChangesCompleted:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_processModifyPerRecordCallBack:(id)arg1 error:(id)arg2;
- (void)_processModifyRecordCompletion:(id)arg1 deletedRecordIDs:(id)arg2 error:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_deleteStingRayToken;
- (void)_kickOffWriteOnCKQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)_kickOffAssetFetchForTransfersIfNeeded;
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_attachmentZoneCreated;
- (void)_updateTransferUsingCKRecord:(id)arg1 wasFetched:(_Bool)arg2;
- (void)_resetAttachmentSyncStateForRecord:(id)arg1 toState:(long long)arg2;
- (void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg1;
- (id)_operationErrorForModifyingRecordCompletion:(id)arg1;
- (id)_recordIDsToProcessWithError:(id)arg1 error:(id)arg2;
- (void)_removeTransferFromiCloudBackupWithGuid:(id)arg1;
- (id)_changeTokenKeyForSyncType:(long long)arg1;
- (void)deleteAttachmentSyncToken;
- (void)_needsToMarkAllAttachmentsAsNeedingSync;
- (void)_validateTransferFromCloudKit:(id)arg1 localTransfer:(id)arg2 validateCompletion:(CDUnknownBlockType)arg3;
- (void)_processAndValidateAttachmentRecordsEligibleForPurge:(id)arg1 recordIDsToTransfers:(id)arg2 capturedWithABC:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg1;
- (unsigned long long)_attachmentDeleteBatchSize;
- (id)_copyRecordIDsToDeleteWithLimit:(unsigned long long)arg1;
- (void)syncAttachmentDeletesToCloudKit:(CDUnknownBlockType)arg1;
- (void)_deleteAttachmentsWithRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncAttachmentsWithSyncType:(long long)arg1 deviceConditionsToCheck:(unsigned long long)arg2 activity:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)acceptFileTransfer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)downloadAttachmentAssetsWithActivity:(id)arg1 restoringAttachments:(_Bool)arg2;
- (unsigned long long)purgedAttachmentsCountForChat:(id)arg1 services:(id)arg2;
- (void)downloadAttachmentAssetsForChatIDs:(id)arg1 services:(id)arg2 style:(unsigned char)arg3 completion:(CDUnknownBlockType)arg4;
- (void)__databaseRequestResetAllAttachmentsInFaiedCloudDownloadState;
- (void)_processRecordZoneChangeTokenUpdated:(id)arg1 zoneID:(id)arg2 clienChangeToken:(id)arg3 syncType:(long long)arg4;
- (void)_fetchAndValidateFileTransfersFromCloudKit:(id)arg1 capturedWithABC:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
