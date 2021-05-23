/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCFSTransferScheduler.h>

@class BRCDeadlineScheduler, BRCFairScheduler, NSDate, NSMutableDictionary, NSString, brc_task_tracker;

__attribute__((visibility("hidden")))
@interface BRCFSDownloader : BRCFSTransferScheduler

{
    brc_task_tracker *_tracker;
    BRCFairScheduler *_fairScheduler;
    unsigned long long _activeDownloadsSize;
    NSDate *_lastDownloadRefresh;
    double _activeDownloadSizeRefreshInterval;
    NSMutableDictionary *_willRetryOperationProgress;
    BRCDeadlineScheduler *_downloadsDeadlineScheduler;
}

@property (nonatomic, readonly) BRCDeadlineScheduler *downloadsDeadlineScheduler;
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
- (void)_close;
- (_Bool)isDownloadingItem:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;
- (void)deleteJobsMatching:(id)arg1;
- (unsigned long long)_bumpThrottleForDownload:(id)arg1 throttle:(id)arg2;
- (void)_reportDownloadErrorForDocument:(id)arg1 error:(id)arg2;
- (id)_sanitizeRecord:(id)arg1;
- (void)_cancelJobs:(id)arg1 state:(int)arg2;
- (void)_finishDownloadCleanup:(id)arg1;
- (_Bool)_hasLosersToDelete:(id)arg1 serverItem:(id)arg2;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2;
- (void)_createDownloadingJobForItem:(id)arg1 state:(int)arg2 kind:(int)arg3 etag:(id)arg4 userInitiated:(_Bool)arg5;
- (_Bool)shouldScheduleLosersEvictionForItem:(id)arg1;
- (void)cancelAndCleanupItemDownload:(id)arg1 kind:(int)arg2 etag:(id)arg3;
- (void)rescheduleJobsPendingWinnerForItem:(id)arg1;
- (void)scheduleLosersDownloadForItem:(id)arg1 serverItem:(id)arg2 purgeStaleEntries:(_Bool)arg3 applySchedulerState:(int *)arg4;
- (void)_finishedDownload:(id)arg1 syncContext:(id)arg2 operationID:(id)arg3 error:(id)arg4;
- (void)_willDownload:(id)arg1 operationID:(id)arg2;
- (unsigned long long)inFlightSize;
- (void)_postponeLoserForWinner:(long long)arg1 etag:(id)arg2;
- (void)_sendThumbnailsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)_sendContentsBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)_sendLosersBatch:(id)arg1 sizeHint:(long long)arg2 maxRecordsCount:(unsigned long long)arg3;
- (void)_transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4;
- (void)deleteDownloadingJobForItem:(id)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (id)_appLibraryForDownload:(id)arg1 kind:(int)arg2 operationID:(id)arg3;
- (void)rescheduleJobsPendingInitialSyncInZone:(id)arg1;
- (void)rescheduleJobsForPendingDiskSpaceWithAvailableSpace:(unsigned long long)arg1;
- (void)cancelAndCleanupItemDownloads:(id)arg1;
- (void)addAliasItem:(id)arg1 toDownloadingItem:(id)arg2;
- (void)updateContentDownloadForMetaOnlyChange:(id)arg1 fromEtag:(id)arg2 toEtag:(id)arg3;
- (unsigned long long)sizeOfActiveDownloads;
- (_Bool)hasAdditionsToApplyForItem:(id)arg1 serverItem:(id)arg2;
- (_Bool)makeContentLive:(id)arg1;
- (void)scheduleContentDownloadForItem:(id)arg1 serverItem:(id)arg2 userInitiated:(_Bool)arg3;
- (void)evictLosersOnItem:(id)arg1 atURL:(id)arg2 applySchedulerState:(int *)arg3;
- (_Bool)applyLosersToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int *)arg4 addedLosers:(id)arg5 removedLosers:(id)arg6;
- (_Bool)hasThumbnailToApplyForItem:(id)arg1;
- (void)scheduleThumbnailDownloadForItem:(id)arg1 serverItem:(id)arg2 applySchedulerState:(int *)arg3;
- (_Bool)applyThumbnailToItem:(id)arg1 serverItem:(id)arg2 atURL:(id)arg3 applySchedulerState:(int *)arg4;
- (void)transferStreamOfSyncContext:(id)arg1 didBecomeReadyWithMaxRecordsCount:(unsigned long long)arg2 sizeHint:(unsigned long long)arg3 priority:(long long)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
