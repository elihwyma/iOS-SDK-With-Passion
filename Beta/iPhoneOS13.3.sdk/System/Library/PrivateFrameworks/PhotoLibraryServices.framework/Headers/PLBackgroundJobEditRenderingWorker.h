/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobEditRenderingWorker : PLBackgroundJobWorker

{
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

+ (id)workerWithLibrary:(id)arg1;

- (void)dealloc;
- (_Bool)hasPendingJobs;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_predicateToFetchDeferredAdjustmentNeededAssets;

@end
