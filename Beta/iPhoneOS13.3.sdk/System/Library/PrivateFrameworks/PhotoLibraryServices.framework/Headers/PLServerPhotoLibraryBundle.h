/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPhotoLibraryBundle.h>

@class NSOperationQueue, NSSet, NSString, NSURL, PLBackgroundJobService;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle

{
    Class _libraryServicesDelegateClass;
    PLBackgroundJobService *_backgroundJobService;
    NSOperationQueue *_presentedItemOperationQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSURL *presentedItemURL;
@property (retain, readonly) NSOperationQueue *presentedItemOperationQueue;
@property (copy, readonly) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

- (void)close;
- (void)savePresentedItemChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)presentedItemDidMoveToURL:(id)arg1;
- (void)relinquishPresentedItemToReader:(CDUnknownBlockType)arg1;
- (void)relinquishPresentedItemToWriter:(CDUnknownBlockType)arg1;
- (_Bool)shouldRelinquishToWriterOfSubitemAtURL:(id)arg1;
- (void)shutdownWithReason:(id)arg1;
- (id)newAssetsdClient;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (id)newBoundAssetsdServicesTable;
- (id)boundAssetsdServices;
- (_Bool)bindAssetsdService:(id)arg1 error:(id *)arg2;
- (void)unbindAssetsdService:(id)arg1;
- (id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2 backgroundJobService:(id)arg3 libraryServicesDelegateClass:(Class)arg4;
- (void)invalidateClientConnectionsWithReason:(id)arg1;
- (void)clearShutdownReason;

@end
