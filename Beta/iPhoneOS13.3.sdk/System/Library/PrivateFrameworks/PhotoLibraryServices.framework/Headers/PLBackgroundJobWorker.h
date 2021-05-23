/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, PLPhotoLibrary;

@protocol OS_dispatch_queue;

@interface PLBackgroundJobWorker : NSObject

{
    CDUnknownBlockType _workerCompleteCompletionHandler;
    CDUnknownBlockType _currentManagedObjectCompletionHandler;
    _Atomic long long _workerAtomicCounter;
    _Atomic long long _completionHandlerAtomicCounter;
    CDUnknownBlockType _workerForcefullyStopHandler;
    NSMutableArray *_pendingJobs;
    unsigned long long _totalJobsCount;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct os_unfair_lock_s _lock;
    _Bool _shouldStop;
    unsigned long long _workerPriority;
    NSString *_workerName;
    NSString *_workerDetailedName;
    PLPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long workerPriority;
@property (nonatomic, readonly) NSString *workerName;
@property (nonatomic, readonly) NSString *workerDetailedName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)workerWithLibrary:(id)arg1;

- (id)init;
- (_Bool)isInterruptible;
- (_Bool)hasPendingJobs;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (id)initWithPriority:(unsigned long long)arg1 photoLibrary:(id)arg2;
- (void)_processNextManagedObject;
- (void)_handleAllJobsComplete;
- (void)startWorkWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopAllWork;

@end
