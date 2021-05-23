/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PFCoalescer, PLBackgroundJobCameraWatcher, PLBackgroundJobLibraryCoordinator, PLForegroundMonitor;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, PLBackgroundJobServiceDelegate;

@interface PLBackgroundJobService : NSObject

{
    NSObject<OS_xpc_object> *_xpcActivity;
    unsigned long long _state;
    PLBackgroundJobLibraryCoordinator *_libraryCoordinator;
    PFCoalescer *_registrationCoalescer;
    PLForegroundMonitor *_foregroundMonitor;
    PLBackgroundJobCameraWatcher *_cameraWatcher;
    double _registrationCoalescerPushBackTimeInterval;
    NSDictionary *_libraryInvalidationCompletionHandlerByLibraryURL;
    NSDictionary *_bundlesToProcessByPriority;
    struct os_unfair_lock_s _stateLock;
    struct os_unfair_lock_s _bundlesToProcessByPriorityLock;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_xpcActivityDeferTimer;
    _Bool _deferringService;
    _Bool _simulateXpcActivityDeferring;
    _Bool _cameraForeground;
    id <PLBackgroundJobServiceDelegate> _delegate;
}

@property (weak, nonatomic) id <PLBackgroundJobServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_criteriaForActivityPriority:(unsigned long long)arg1;
+ (id)_activityIdentifierForPriority:(unsigned long long)arg1;

- (id)init;
- (void)foregroundMonitor:(id)arg1 changedStateToForeground:(_Bool)arg2 forBundleIdentifier:(id)arg3;
- (void)cameraWatcherDidChangeState:(id)arg1;
- (void)libraryCoordinatorFinishedJobsOnSubmittedBundle:(id)arg1 priority:(unsigned long long)arg2;
- (void)libraryCoordinatorFinishedJobsOnAllSubmittedBundles;
- (id)initWithLibraryCoordinator:(id)arg1;
- (id)_getBundlePathsToProcess;
- (void)_simulateXPCShouldDefer;
- (void)_shutdown;
- (void)invalidateLibraryBundle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_getServiceState;
- (unsigned long long)_getServiceStateAlreadyLocked;
- (void)_setServiceState:(unsigned long long)arg1;
- (void)_setServiceStateAlreadyLocked:(unsigned long long)arg1;
- (void)_verifyStateTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)signalBackgroundProcessingNeededOnLibrary:(id)arg1;
- (void)registerActivityIfNecessaryOnBundle:(id)arg1;
- (void)_registerActivityWithoutCoalescingIfNecessaryOnBundle:(id)arg1;
- (_Bool)_serviceReadyForRegistration;
- (void)_registerActivityIfNecessaryOnBundles:(id)arg1;
- (void)_registerActivityWithPriority:(unsigned long long)arg1;
- (void)_unregisterActivityIfNeededShouldConsiderDeferring:(_Bool)arg1;
- (void)_startPollingForActivityStatus;
- (void)_stopRunningBackgroundJobsAndTearDownXPCDeferTimers;
- (void)_stopPollingForActivityStatus;
- (void)_startRunningBackgroundJobsWithPriority:(unsigned long long)arg1;
- (void)_stopRunningBackgroundJobs;
- (void)_updateCameraForegroundState:(_Bool)arg1;
- (id)_bundlesToProcessByPriorityAsPathStrings;
- (void)_persistBundleRecordsDictionaryToUserDefaults;
- (void)_loadBundleRecordsDictionaryFromUserDefaults;
- (void)_appendBundleRecordsToProcessingSet:(id)arg1 priority:(unsigned long long)arg2;
- (void)_removeBundleRecordFromProcessingSet:(id)arg1 priority:(unsigned long long)arg2;
- (void)_removeAllBundlesFromProcessingSet;
- (id)_getBundleRecordsFromProcessingSetForPriority:(unsigned long long)arg1;
- (id)_getBundleRecordsFromProcessingSetForAllPriorites;

@end
