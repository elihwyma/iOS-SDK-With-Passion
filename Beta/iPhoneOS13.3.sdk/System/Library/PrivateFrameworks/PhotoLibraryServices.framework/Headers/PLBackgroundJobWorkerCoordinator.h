/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PLBackgroundJobWorkerPriorityTuple;

@protocol PLBackgroundJobWorkerCoordinatorDelegate;

@interface PLBackgroundJobWorkerCoordinator : NSObject

{
    NSArray *_workerClassesAsStrings;
    NSMutableArray *_pendingWorkers;
    PLBackgroundJobWorkerPriorityTuple *_currentWorker;
    struct os_unfair_lock_s _lock;
    id <PLBackgroundJobWorkerCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <PLBackgroundJobWorkerCoordinatorDelegate> delegate;

- (id)init;
- (id)initWithWorkerClassesAsStrings:(id)arg1;
- (id)_workersForBundle:(id)arg1;
- (_Bool)hasPendingJobsForBundle:(id)arg1 priority:(unsigned long long)arg2;
- (void)submitBundleForProcessing:(id)arg1 priority:(unsigned long long)arg2;
- (void)stopAllBackgorundJobs;
- (void)_processNextWorker;
- (void)_handleAllWorkersCompleted;

@end
