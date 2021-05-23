/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@interface IMDCKCacheDeleteManager : NSObject

{
    _Bool _alreadyCapturedErrorWithAutoBugCapture;
    _Bool _allowsWritingToDisk;
    _Bool _deviceLowOnDiskSpace;
    _Bool _isUsingCentralizedModel;
    _Bool _isUpdatingAttachmentFileSizes;
}

@property (nonatomic) _Bool alreadyCapturedErrorWithAutoBugCapture;
@property (nonatomic) _Bool allowsWritingToDisk;
@property (nonatomic, getter=isDeviceLowOnDiskSpace) _Bool deviceLowOnDiskSpace;
@property (nonatomic) _Bool isUsingCentralizedModel;
@property _Bool isUpdatingAttachmentFileSizes;

+ (id)sharedInstance;

- (id)init;
- (long long)purgeAttachments:(long long)arg1;
- (_Bool)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(_Bool)arg2;
- (_Bool)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(_Bool)arg2;
- (_Bool)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1;
- (void)_cacheDeleteSetUp;
- (id)_ckUtilitiesSharedInstance;
- (void)__wrapperAroundCacheDeletePurgeNotificationCallback:(id)arg1;
- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)purgeableAttachmentSize;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (struct _IMDAttachmentRecordStruct *)_copyRecordRef:(id)arg1;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (id)_fileTransfersToDelete:(struct __CFArray *)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (id)_fileTransfersToValidate:(struct __CFArray *)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (_Bool)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (void)updateAttachmentFileSizesWithActivity:(id)arg1;
- (void)registerWithCacheDelete;
- (void)resetAttachmentWatermark;
- (_Bool)isUsingCentralizeCacheDelete;
- (void)metricAttachmentsToPurge:(long long)arg1;

@end
