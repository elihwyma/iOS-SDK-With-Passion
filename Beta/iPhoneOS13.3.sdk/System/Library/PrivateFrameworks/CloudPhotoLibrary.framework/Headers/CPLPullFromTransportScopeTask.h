/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class CPLEngineTransport, CPLFeatureVersionHistory, CPLLibraryInfo, CPLLibraryState, NSObject, NSString;

@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportGetCurrentSyncAnchorTask, CPLEngineTransportGroup, CPLEngineTransportQueryTask, OS_dispatch_queue;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask

{
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineTransport *_transport;
    id <CPLEngineTransportDownloadBatchTask> _downloadTask;
    id <CPLEngineTransportQueryTask> _queryTask;
    CPLLibraryInfo *_currentLibraryInfo;
    Class _currentQueryClass;
    _Bool _ignoreNewBatches;
    _Bool _useCourtesyMingling;
    unsigned long long _rewindFeatureVersion;
    struct NSData *_rewindSyncAnchor;
    CPLFeatureVersionHistory *_versionHistory;
    id <CPLEngineTransportGroup> _transportGroup;
    unsigned long long _totalAssetCountForScope;
    _Bool _hasCachedTotalAssetCountForScope;
    long long _taskItem;
    _Bool _hasFetchedInitialSyncAnchor;
    _Bool _shouldStoreInitialSyncAnchor;
    struct NSData *_initialSyncAnchor;
    CPLLibraryInfo *_initialLibraryInfo;
    CPLLibraryState *_initialLibraryState;
    id <CPLEngineTransportGetCurrentSyncAnchorTask> _fetchInitialSyncAnchorTask;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    _Bool _didNotifySchedulerPullQueueIsFullOnce;
    _Bool _needsToNotifySchedulerPullQueueIsFull;
    NSString *_phaseDescription;
}

@property (copy) NSString *phaseDescription;

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (_Bool)checkScopeIsValidInTransaction:(id)arg1;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_launch;
- (void)taskDidFinishWithError:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (unsigned long long)_totalAssetCountForScope;
- (void)_cancelAllTasks;
- (void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2;
- (void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(struct NSData *)arg2 inTransaction:(id)arg3;
- (void)_handleNewBatchFromChanges:(id)arg1 updatedLibraryInfo:(id)arg2 updatedLibraryState:(id)arg3 newSyncAnchor:(struct NSData *)arg4;
- (void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(struct NSData *)arg1;
- (void)_launchFetchChangesFromSyncAnchor:(struct NSData *)arg1;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3;
- (void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg1;
- (void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2;
- (void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2;
- (void)_launchNextQueryTask;
- (void)_launchPullTasksAndDisableQueries:(_Bool)arg1;
- (void)_fetchInitialSyncAnchor;
- (void)_checkServerFeatureVersionWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
