/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLEngineLibrary, CPLPlatformObject, CPLSyncSession, NSCountedSet, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface CPLEngineScheduler : NSObject

{
    unsigned long long _requiredFirstState;
    unsigned long long _lastRequestGeneration;
    unsigned long long _currentRequestGeneration;
    CPLSyncSession *_nextSession;
    double _intervalForRetry;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentSyncState;
    _Bool _needsToUpdateScopeList;
    _Bool _shouldNoteServerHasChanges;
    CPLSyncSession *_currentSession;
    _Bool _opened;
    NSDate *_unavailabilityLimitDate;
    unsigned long long _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSCountedSet *_blockingElements;
    NSMutableDictionary *_blockedElements;
    NSMutableSet *_blockWaiters;
    NSCountedSet *_unblockOnceElements;
    NSObject<OS_dispatch_queue> *_blockingLock;
    unsigned long long _significantWorkCalls;
    unsigned long long _disablingMinglingCount;
    NSDate *_lastSyncSessionDateCausedByForeground;
    NSDate *_deferDate;
    _Bool _protectAgainstFastRelaunch;
    _Bool _didWriteFirstSyncMarker;
    _Bool _delayedFirstSyncBecauseOfRapidLaunch;
    _Bool _isOverridingForeground;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    CDUnknownBlockType _requiredStateObserverBlock;
    CDUnknownBlockType _shouldBackOffOnErrorBlock;
}

@property (weak, nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (copy, nonatomic) CDUnknownBlockType requiredStateObserverBlock;
@property (copy, nonatomic) CDUnknownBlockType shouldBackOffOnErrorBlock;
@property (nonatomic, readonly) unsigned long long requiredState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)platformImplementationProtocol;
+ (id)validElements;

- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientIsEndingSignificantWork;
- (void)noteClientIsBeginningSignificantWork;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableMingling;
- (void)enableMingling;
- (void)blockEngineElement:(id)arg1;
- (void)unblockEngineElement:(id)arg1;
- (void)unblockEngineElementOnce:(id)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithEngineLibrary:(id)arg1;
- (void)_updateOverridingForeground;
- (void)_setRequiredFirstState:(unsigned long long)arg1;
- (_Bool)_syncSessionIsPossible;
- (void)_startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(_Bool)arg3;
- (void)_reallyStartSyncSession:(id)arg1;
- (void)_startRequiredSyncSession:(id)arg1;
- (void)_scheduleNextSyncSession;
- (void)_reallyUnscheduleSession;
- (void)_unscheduleNextSyncSession;
- (void)_noteSyncSessionNeededFromState:(unsigned long long)arg1;
- (void)_backOff;
- (void)startRequiredSyncSessionNow:(id)arg1;
- (void)forceStartSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2;
- (void)kickOffSyncSession;
- (void)noteStoreNeedsSetup;
- (void)noteStoreNeedsToUpdateDisabledFeatures;
- (void)noteStoreNeedsCleanup;
- (void)noteTransportNeedsUpdate;
- (void)noteScopeListNeedsUpdate;
- (void)noteScopeNeedsUpdate;
- (void)_disableFastRelaunchProtection;
- (void)noteScopeNeedsToPushHighPriorityToTransport;
- (void)noteScopeNeedsToPushToTransport;
- (void)noteScopeNeedsToPullFromTransport;
- (void)noteClientNeedsToPull;
- (void)noteClientIsInSyncWithClientCache;
- (void)noteClientIsNotInSyncWithClientCache;
- (void)_reallyNoteServerHasChangesLocked;
- (void)noteServerHasChanges;
- (void)noteResourceDownloadQueueIsFull;
- (_Bool)isClientInForeground;
- (void)_disableSynchronizationWithReasonLocked:(id)arg1;
- (void)_enableSynchronizationWithReasonLocked:(id)arg1;
- (void)willRunEngineElement:(id)arg1;
- (void)waitForEngineElementToBeBlocked:(id)arg1;
- (_Bool)isMinglingEnabled;
- (_Bool)isSynchronizationDisabledWithReasonError:(id *)arg1;
- (void)_disableRetryAfterLocked;
- (void)_noteServerIsUnavailableWithErrorLocked:(id)arg1;
- (void)noteServerIsUnavailableWithError:(id)arg1;
- (void)noteNetworkStateDidChange;
- (void)noteSyncSession:(id)arg1 stateWillBeAttempted:(unsigned long long)arg2;
- (void)noteSyncSessionSucceeded:(id)arg1;
- (void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleResetGlobalAnchorWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)noteSyncSession:(id)arg1 failedDuringPhase:(unsigned long long)arg2 withError:(id)arg3;
- (void)resetBackoffInterval;
- (id)_pathToFirstSynchronizationMarker;
- (void)_writeFirstSynchronizationMarker;
- (id)_minimalDateForFirstSync;
- (void)_resetFirstSynchronizationMarker;

@end
