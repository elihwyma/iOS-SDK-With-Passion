/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLActiveDownloadQueue, CPLPlatformObject, NSDate, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage

{
    NSObject<OS_dispatch_queue> *_downloadLock;
    CPLActiveDownloadQueue *_highPriorityQueue;
    CPLActiveDownloadQueue *_thumbnailHighPriorityQueue;
    CPLActiveDownloadQueue *_lowPriorityQueue;
    unsigned long long _inflightTransferTasksCount;
    unsigned long long _transferTasksBurstCount;
    unsigned long long _lastTransferTasksBurstCount;
    NSDate *_lastTransferTaskBurstDate;
    _Bool _shouldRequestABackgroundDownloadSyncPhase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (_Bool)shouldRetryDownloadOnError:(id)arg1;

- (id)status;
- (unsigned long long)scopeType;
- (void)barrier;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (id)cloudResourceForLocalResource:(id *)arg1 shouldNotTrustCaches:(_Bool *)arg2 transportScope:(id *)arg3 error:(id *)arg4;
- (id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(_Bool)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(CDUnknownBlockType)arg5 progressHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)_failedTaskWithCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2 resource:(id)arg3 highPriority:(_Bool)arg4;
- (id)_resourceStorageCopyTaskForResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_realDownloadTaskForLocalResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_shouldTryLowPriorityDownloadWithError:(id *)arg1;
- (unsigned long long)_transportTaskCount;
- (_Bool)_canScheduleBackgroundDownloads;
- (_Bool)_launchTransportTaskForQueue:(id)arg1 highPriority:(_Bool)arg2;
- (void)_dispatchTransportTasksIfNecessary;
- (id)_activeQueueForTransferTask:(id)arg1;
- (void)_enqueueTransferTaskInActiveQueue:(id)arg1;
- (void)_dequeueTransferTaskInActiveQueue:(id)arg1;
- (void)_scheduleBackgroundDownloadsIfNecessary;
- (void)_requestBackgroundDownloads;
- (void)_unscheduleBackgroundDownloads;
- (_Bool)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(_Bool)arg2 error:(id *)arg3;
- (_Bool)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(_Bool)arg2 didDiscard:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id *)arg2;
- (_Bool)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id *)arg2;
- (id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)resetDequeuedBackgroundDownloadTasksWithError:(id *)arg1;
- (_Bool)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (id)enumeratorForDownloadedResources;
- (unsigned long long)countOfQueuedDownloadTasks;
- (_Bool)hasActiveOrQueuedBackgroundDownloadOperations;
- (id)_queuesStatus;

@end
