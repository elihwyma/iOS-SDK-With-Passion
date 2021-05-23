/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLBackgroundJobWorker.h>

@class NSManagedObjectID, NSProgress, PAImageConversionServiceClient, PAVideoConversionServiceClient;

@interface PLBackgroundJobReframeWorker : PLBackgroundJobWorker

{
    NSProgress *_progressForCurrentAsset;
    NSManagedObjectID *_currentlyProcessingObjectID;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

+ (id)workerWithLibrary:(id)arg1;

- (void)dealloc;
- (_Bool)isInterruptible;
- (_Bool)hasPendingJobs;
- (id)managedObjectIDsNeedingProcessing;
- (void)performWorkOnManagedObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWorkingOnManagedObjectID:(id)arg1;
- (id)_predicateToFetchReframeNeededAssets;

@end
