/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLScopeFilter, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask

{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    _Bool _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    _Bool _didNotifySchedulerPullQueueIsFullOnce;
    _Bool _needsToNotifySchedulerPullQueueIsFull;
    CPLScopeFilter *_scopeFilter;
}

@property (retain, nonatomic) CPLScopeFilter *scopeFilter;

+ (_Bool)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(_Bool *)arg3 error:(id *)arg4;

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (_Bool)_checkContinueMinglingInTransaction:(id)arg1;
- (void)_taskDidFinishWithError:(id)arg1;
- (void)_processNextBatch;
- (void)_launch;
- (void)taskDidFinishWithError:(id)arg1;

@end
