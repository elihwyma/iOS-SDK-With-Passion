/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PLDeferredPhotoFinalizer;

@interface PLBackgroundJobDeferredPhotoProcessingWorker : PLBackgroundJobWorker

{
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
}

+ (id)workerWithLibrary:(id)arg1;

- (_Bool)isInterruptible;
- (_Bool)hasPendingJobs;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_predicateToFetchDeferredAssets;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (id)deferredPhotoFinalizer;

@end
