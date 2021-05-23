/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLBackgroundDownloadsTask, CPLCleanupTask, CPLDerivativesFilter, CPLEngineForceSyncTask, CPLEngineLibrary, CPLMinglePulledChangesTask, CPLPlatformObject, CPLPullFromTransportTask, CPLPullScopesTask, CPLPushToTransportTask, CPLScopeUpdateTask, CPLSyncSession, CPLTransportUpdateTask, NSError, NSMutableArray, NSString;

@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;

@interface CPLEngineSyncManager : NSObject

{
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;
    CPLDerivativesFilter *_derivativesFilter;
    _Bool _setupIsDone;
    _Bool _shouldUpdateDisabledFeatures;
    _Bool _closed;
    id <CPLEngineTransportSetupTask> _setupTask;
    CDUnknownBlockType _closingCompletionHandler;
    CPLSyncSession *_session;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLCleanupTask *_cleanupTask;
    CPLTransportUpdateTask *_transportUpdateTask;
    CPLPullScopesTask *_pullScopesTask;
    CPLScopeUpdateTask *_scopeUpdateTask;
    CPLPushToTransportTask *_pushHighPriorityTask;
    CPLPushToTransportTask *_pushTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLBackgroundDownloadsTask *_backgroundDownloadsTask;
    CPLEngineForceSyncTask *_currentForceSyncTask;
    CPLEngineForceSyncTask *_pendingForceSyncTask;
    unsigned long long _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    _Bool _foreground;
    _Bool _boostPriority;
    _Bool _hasOverridenBudgets;
    _Bool _disabledSchedulerForForceSyncTask;
    _Bool _shouldTryToMingleImmediately;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    unsigned long long _state;
}

@property (nonatomic, setter=_setState:) unsigned long long state;
@property (nonatomic) _Bool shouldTryToMingleImmediately;
@property (weak, nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (nonatomic, readonly) NSError *lastError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)descriptionForState:(unsigned long long)arg1;
+ (id)platformImplementationProtocol;
+ (id)shortDescriptionForState:(unsigned long long)arg1;
+ (unsigned int)qualityOfServiceForSyncSessions;
+ (unsigned int)qualityOfServiceForForcedTasks;

- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)forceSyncTaskHasBeenCancelled:(id)arg1;
- (void)dispatchSyncBlock:(CDUnknownBlockType)arg1;
- (void)dispatchForcedTaskBlock:(CDUnknownBlockType)arg1;
- (void)_setErrorForSyncSession:(id)arg1;
- (void)_resetErrorForSyncSession;
- (void)_cancelAllTasksLocked;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(_Bool)arg1;
- (void)_moveAllTasksToBackgroundLocked;
- (id)_descriptionForCurrentState;
- (id)_shortDescriptionForCurrentState;
- (id)_descriptionForLaunchedTasks;
- (_Bool)_launchNecessaryTasksForCurrentStateLocked;
- (void)_notifyEndOfSyncSession;
- (void)_advanceToNextStateLocked;
- (void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1;
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 session:(id)arg2 cancelIfNecessary:(_Bool)arg3;
- (void)startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(_Bool)arg3;
- (void)cancelCurrentSyncSession;
- (void)resetTransportUserIdentifier;
- (void)discardTransportUserIdentifier;
- (void)requestDisabledFeaturesUpdate;
- (void)setSyncSessionShouldBeForeground:(_Bool)arg1;
- (void)_overrideBudgetsIfNeeded;
- (void)setBoostPriority:(_Bool)arg1;
- (_Bool)_prepareAndLaunchSyncTask:(id *)arg1;
- (void)_disabledSchedulerForForceSyncTaskIfNecessary;
- (void)_reenableSchedulerForForceSyncTaskIfNecessary;
- (_Bool)_checkForegroundAtLaunchForForceSyncTask;
- (void)launchForceSyncTaskWhenPossible:(id)arg1;
- (void)_launchForceSyncTaskIfNecessary;
- (id)_descriptionForSetupTasks;
- (_Bool)_launchSetupTask;
- (void)_cancelAllTasksForSetup;
- (_Bool)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(_Bool *)arg2;
- (id)_descriptionForCleanupTasks;
- (_Bool)_launchNecessaryTasksForCleanup;
- (void)_cancelAllTasksForCleanup;
- (float)_progressForCleanupTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishCleanupTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForPullScopesTasks;
- (_Bool)_launchNecessaryTasksForPullScopes;
- (void)_cancelAllTasksForPullScopes;
- (float)_progressForPullScopesTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishPullScopesTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForTransportUpdateTasks;
- (_Bool)_launchNecessaryTasksForTransportUpdate;
- (void)_cancelAllTasksForTransportUpdate;
- (float)_progressForTransportUpdateTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishTransportUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForScopeUpdateTasks;
- (_Bool)_launchNecessaryTasksForScopeUpdate;
- (void)_cancelAllTasksForScopeUpdate;
- (float)_progressForScopeUpdateTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishScopeUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForPushHighPriorityTasks;
- (_Bool)_launchNecessaryTasksForPushHighPriority;
- (void)_cancelAllTasksForPushHighPriority:(_Bool)arg1;
- (float)_progressForPushHighPriorityTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishPushHighPriorityTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForPushTasks;
- (_Bool)_launchNecessaryTasksForPush;
- (void)_cancelAllTasksForPush:(_Bool)arg1;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForPullTasks;
- (_Bool)_launchNecessaryTasksForPull;
- (void)_cancelAllTasksForPull;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (_Bool)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (id)_descriptionForBackgroundDownloadsTasks;
- (_Bool)_launchNecessaryTasksForBackgroundDownloads;
- (void)_cancelAllTasksForBackgroundDownloads;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (_Bool)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(_Bool *)arg3;
- (void)beginClientWork:(id)arg1;
- (void)endClientWork:(id)arg1;

@end
