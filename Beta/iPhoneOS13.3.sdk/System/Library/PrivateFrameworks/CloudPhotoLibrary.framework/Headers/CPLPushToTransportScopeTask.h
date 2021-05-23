/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@class CPLBatchExtractionStrategy, CPLChangeBatch, CPLDerivativesFilter, CPLEnginePushRepository, CPLEngineScheduler, CPLEngineScopeStorage, CPLEngineTransport, CPLExtractedBatch, NSArray, NSDate, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSObject, NSString;

@protocol CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportGroup, CPLEngineTransportUploadBatchTask, OS_dispatch_queue;

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask

{
    NSObject<OS_dispatch_queue> *_lock;
    CPLEngineScopeStorage *_scopes;
    CPLEngineTransport *_transport;
    CPLEnginePushRepository *_pushRepository;
    CPLEngineScheduler *_scheduler;
    CPLBatchExtractionStrategy *_currentStrategy;
    CPLExtractedBatch *_extractedBatch;
    CPLChangeBatch *_uploadBatch;
    CPLChangeBatch *_batchToCommit;
    NSError *_preparationError;
    CPLDerivativesFilter *_derivativesFilter;
    NSArray *_uploadResourceTasks;
    NSDictionary *_recordsWithGeneratedResources;
    NSMutableDictionary *_recordsWithSparseResources;
    NSMutableDictionary *_recordsWithForwardCompatibilityCheck;
    NSMutableDictionary *_recordsWithUntrustedCloudCache;
    NSMutableDictionary *_recordsWithResourcesToLookAhead;
    NSMutableDictionary *_recordsCopyingDerivativesFromSource;
    NSMutableDictionary *_recordsToCheckForExistence;
    NSMutableSet *_recordsNeedingToBeFullyFetched;
    NSMutableDictionary *_additionalTransportScopes;
    id <CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
    id <CPLEngineTransportUploadBatchTask> _uploadTask;
    unsigned long long _lastReportedProgress;
    unsigned long long _countOfPushedChanges;
    double _startOfIteration;
    double _startOfDerivativesGeneration;
    _Bool _generatingSomeDerivatives;
    _Bool _deferredCancel;
    _Bool _hasCachedShouldCheckResourcesAhead;
    _Bool _shouldCheckResourcesAhead;
    unsigned long long _estimatedSize;
    unsigned long long _estimatedCount;
    _Bool _shouldSetupEstimatedSize;
    id <CPLEngineTransportGroup> _transportGroup;
    long long _taskItem;
    _Bool _mightPushSomeResources;
    _Bool _hasPushedSomeChanges;
    _Bool _hasDroppedSomeResources;
    _Bool _shouldResetExceedingQuotaOnSuccess;
    _Bool _isUsingOverQuotaStrategy;
    _Bool _resetStrategy;
    double _latestApproximativeUploadRate;
    NSString *_currentTaskKey;
    NSDate *_taskStartDate;
    unsigned long long _recordCount;
    _Bool _didExtractOneBatch;
    _Bool _highPriority;
    NSString *_phaseDescription;
}

@property (nonatomic) _Bool highPriority;
@property (copy) NSString *phaseDescription;

- (void)cancel;
- (void)launch;
- (id)taskIdentifier;
- (void)cancel:(_Bool)arg1;
- (void)_doOneIteration;
- (void)_uploadBatch;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5;
- (void)_didStartTaskWithKey:(id)arg1 recordCount:(unsigned long long)arg2;
- (void)_didFinishTaskWithKey:(id)arg1 error:(_Bool)arg2 cancelled:(_Bool)arg3;
- (void)_popNextBatchAndContinue;
- (void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg1;
- (void)_requireExistenceCheckForRecords:(id)arg1;
- (_Bool)_prepareResourcesToUploadInBatch:(id)arg1 error:(id *)arg2;
- (_Bool)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id *)arg2;
- (_Bool)_discardUploadedExtractedBatchWithError:(id *)arg1;
- (_Bool)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id *)arg2;
- (void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(CDUnknownBlockType)arg3;
- (_Bool)_shouldCheckResourcesAheadForChange:(id)arg1;
- (void)_clearUploadBatch;
- (void)_detectUpdatesNeedingExistenceCheck:(id)arg1;
- (void)_checkForRecordExistence;
- (void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2;
- (void)_deleteGeneratedResourcesAfterError:(id)arg1;
- (void)_generateDerivativesForNextRecord:(id)arg1;
- (void)_generateNeededDerivatives;
- (void)_pushTaskDidFinishWithError:(id)arg1;

@end
