/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobResourceAvailabilityWorker : PLBackgroundJobWorker

{
    NSProgress *_progressForCurrentAsset;
    PAImageConversionServiceClient *_imageConversionClient;
    PAVideoConversionServiceClient *_videoConversionClient;
}

+ (id)workerWithLibrary:(id)arg1;

- (id)_predicateToFetchResourcesAwaitingProcessing;
- (id)imageConversionClient;
- (id)videoConversionClient;
- (_Bool)hasPendingJobs;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
