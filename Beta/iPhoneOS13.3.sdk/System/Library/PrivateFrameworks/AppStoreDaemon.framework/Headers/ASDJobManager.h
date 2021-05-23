/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDBaseClient.h>

@class ASDJobManagerOptions, NSArray, NSHashTable, NSMutableSet, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDJobManager : ASDBaseClient

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSArray *_jobs;
    int _launchNotificationToken;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    ASDJobManagerOptions *_options;
    NSMutableSet *_removedJobs;
    _Bool _useLaunchServicesProgress;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (id)initWithOptions:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)applicationInstallsDidChange:(id)arg1;
- (void)_connectToDaemon;
- (void)didUpdateProgress:(id)arg1;
- (void)_setupConnection;
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)finishJobs:(id)arg1;
- (void)getJobsUsingBlock:(CDUnknownBlockType)arg1;
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_willFinishJobs:(id)arg1;
- (void)_finishJobsWithIDs:(id)arg1;
- (void)_getJobsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_getJobsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_sendJobsChanged:(id)arg1;
- (void)didCompleteJobs:(id)arg1 finalPhases:(id)arg2;
- (id)_mapAllJobsToIDs;
- (void)_sendJobsCompleted:(id)arg1;
- (void)_applyUpdates:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_sendProgressUpdated:(id)arg1;
- (void)_registerManagerWithOptions:(id)arg1;
- (_Bool)_shouldAutomaticallyReconnect;
- (void)_updateActiveIDs:(id)arg1;
- (void)didChangeJobs:(id)arg1;
- (void)didUpdateStates:(id)arg1;
- (void)_handleInvalidatedConnection:(id)arg1;
- (void)_handleInterruptedConnection:(id)arg1;
- (void)getJobsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)didCompleteJobs:(id)arg1;
- (void)_sendStatesUpdated:(id)arg1;

@end
