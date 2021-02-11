/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLBackgroundJobLibraryCoordinator : NSObject <PLBackgroundJobWorkerCoordinatorDelegate> {
    PLPhotoLibraryBundlePriorityTuple * _currentPhotoLibraryBundle;
    <PLBackgroundJobLibraryCoordinatorDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _pendingPhotoLibraryBundles;
    PLBackgroundJobWorkerCoordinator * _workerCoordinator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PLBackgroundJobLibraryCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAllBundlesCompleted;
- (void)_handleBundleComplete:(id)arg1;
- (void)_submitNextQueuedBundle;
- (id)delegate;
- (bool)hasPendingJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2;
- (id)init;
- (id)initWithWorkerCoordinator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startBackgroundJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2;
- (void)stopBackgroundJobsOnAllBundles;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1;

@end