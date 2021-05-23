/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PLBackgroundJobWorkerCoordinator, PLPhotoLibraryBundlePriorityTuple;

@protocol PLBackgroundJobLibraryCoordinatorDelegate;

@interface PLBackgroundJobLibraryCoordinator : NSObject

{
    NSMutableArray *_pendingPhotoLibraryBundles;
    PLPhotoLibraryBundlePriorityTuple *_currentPhotoLibraryBundle;
    PLBackgroundJobWorkerCoordinator *_workerCoordinator;
    struct os_unfair_lock_s _lock;
    id <PLBackgroundJobLibraryCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <PLBackgroundJobLibraryCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)arg1;
- (id)initWithWorkerCoordinator:(id)arg1;
- (_Bool)hasPendingJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2;
- (void)startBackgroundJobsOnBundles:(id)arg1 priority:(unsigned long long)arg2;
- (void)_submitNextQueuedBundle;
- (void)_handleBundleComplete:(id)arg1;
- (void)_handleAllBundlesCompleted;
- (void)stopBackgroundJobsOnAllBundles;

@end
