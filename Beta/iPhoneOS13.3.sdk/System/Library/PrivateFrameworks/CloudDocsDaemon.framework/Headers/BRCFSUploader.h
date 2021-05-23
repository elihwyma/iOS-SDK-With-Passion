/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCFSTransferScheduler.h>

@class BRCDeadlineScheduler, BRCDeadlineSource, BRCFairScheduler, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, br_pacer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCFSUploader : BRCFSTransferScheduler

{
    NSMutableDictionary *_thumbnailsOperations;
    NSMutableSet *_boostedDocIDs;
    NSMutableDictionary *_stampForDocID;
    BRCFairScheduler *_fairScheduler;
    BRCDeadlineSource *_retryQueueSource;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    br_pacer *_quotaPacer;
    br_pacer *_globalQuotaStateUpdatePacer;
    _Bool _prepareReachedMax;
    _Bool _isDefaultOwnerOutOfQuota;
    BRCDeadlineScheduler *_uploadsDeadlineScheduler;
}

@property (nonatomic, readonly) BRCDeadlineScheduler *uploadsDeadlineScheduler;
@property (nonatomic, readonly) NSDictionary *thumbnailsOperationsByID;
@property (nonatomic) _Bool isDefaultOwnerOutOfQuota;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;

- (void)close;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (void)schedule;
- (_Bool)isUploadingItem:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (_Bool)canScheduleMoreJobs;
- (void)deleteJobsMatching:(id)arg1;
- (void)_cancelJobs:(id)arg1 state:(int)arg2;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)arg1;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)deleteUploadingJobForItem:(id)arg1;
- (id)quotaAvailableForOwner:(id)arg1;
- (void)cancelAndCleanupItemUpload:(id)arg1;
- (void)setState:(int)arg1 forItem:(id)arg2;
- (void)uploadItem:(id)arg1;
- (void)ownerDidReceiveOutOfQuotaError:(id)arg1;
- (void)scheduleQuotaFetchIfNeededForOwner:(id)arg1;
- (void)finishedSyncingUpItem:(id)arg1 withOutOfQuotaError:(id)arg2;
- (void)_scheduleQuotaFetchForDefaultOwner;
- (void)_globalQuotaStateUpdateForDefaultOwner;
- (void)_scheduleRetries;
- (void)setState:(int)arg1 forUploadJobID:(id)arg2 zone:(id)arg3;
- (void)scheduleQuotaStateUpdateForOwner:(id)arg1;
- (id)_thumbnailOperationForItemRowID:(id)arg1;
- (void)_cancelJobsMatching:(id)arg1;
- (id)_buildItemTooLargeErrorIfNeeded:(id)arg1 syncContext:(id)arg2;
- (_Bool)hasItemsOverQuotaForOwner:(id)arg1;
- (void)setIsDefaultOwnerOutOfQuota:(_Bool)arg1 forceSignalContainers:(_Bool)arg2;
- (void)_computeRecordForJobID:(id)arg1 item:(id)arg2 syncContext:(id)arg3;
- (unsigned long long)_thumbnailOperationsMax;
- (_Bool)_updatePackageRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (void)_reportUploadErrorForDocument:(id)arg1 error:(id)arg2;
- (void)_handleFileModifiedError:(id)arg1 forItem:(id)arg2;
- (id)_documentItemForJobID:(id)arg1 stageID:(id)arg2;
- (void)_updateRecord:(id)arg1 item:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5;
- (void)_updateJobID:(id)arg1 setStageID:(id)arg2 operationID:(id)arg3;
- (void)_updateRecord:(id)arg1 jobID:(id)arg2 syncContext:(id)arg3 thumbnailOperation:(id)arg4 stageID:(id)arg5;
- (void)_doneFetchingThumbnailForJobID:(id)arg1;
- (void)_startFetchThumbnail:(id)arg1 jobID:(id)arg2;
- (id)_duplicatePackage:(id)arg1 stageID:(id)arg2 stageName:(id)arg3 error:(id *)arg4;
- (_Bool)_finishPackageUploadWithRecord:(id)arg1 item:(id)arg2 stageID:(id)arg3 error:(id *)arg4;
- (id)_documentItemForJobID:(id)arg1 operationID:(id)arg2;
- (void)_finishedUploadingItem:(id)arg1 record:(id)arg2 jobID:(id)arg3 stageID:(id)arg4 syncContext:(id)arg5 error:(id)arg6;
- (unsigned long long)_minBatchSize;
- (void)_willAttemptJobID:(id)arg1 throttle:(id)arg2 operationID:(id)arg3;
- (void)_rescheduleJobsOutOfQuotaForDefaultOwnerWithAvailableSize:(long long)arg1;
- (void)_setQuotaAvailableForDefaultOwner:(unsigned long long)arg1;
- (id)descriptionForJobID:(id)arg1 context:(id)arg2;
- (void)deleteJobsForZone:(id)arg1;
- (void)addAliasItem:(id)arg1 toUploadingItem:(id)arg2;
- (void)setState:(int)arg1 forJobID:(id)arg2 zone:(id)arg3;
- (void)boostDocID:(id)arg1 item:(id)arg2;
- (void)removeBoostedDocID:(id)arg1;
- (_Bool)hasItemsOverQuotaInZone:(id)arg1;
- (void)forceScheduleQuotaFetchForOwner:(id)arg1;

@end
