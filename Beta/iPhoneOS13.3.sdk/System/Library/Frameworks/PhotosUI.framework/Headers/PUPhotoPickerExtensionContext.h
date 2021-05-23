/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoPickerAbstractExtensionContext.h>

@class NSObject, NSOperationQueue, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerExtensionContext : PUPhotoPickerAbstractExtensionContext

{
    NSObject<OS_dispatch_queue> *_multipleMediaIsolationQueue;
    NSOperationQueue *_multipleMediaConversionConcurrentQueue;
    NSString *_temporaryDirectoryInHost;
}

@property (copy, nonatomic) NSString *temporaryDirectoryInHost;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *multipleMediaIsolationQueue;
@property (nonatomic, readonly) NSOperationQueue *multipleMediaConversionConcurrentQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)configureImageManagerLimit;

- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)_host;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)cancelPhotoPicker;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didDisplayPhotoPickerPreview;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerRemoteServices;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePhotoPickerHostServices;
- (void)requestedViewControllerOptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_createPhotoPickerInfoDictionaryFromInfoDictionary:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_handleMutlipleMediaCompletion:(id)arg1;
- (void)_photoPickerInfoDictionaryFromUIImagePickerControllerInfoDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleLivePhotoImageUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveImageURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleLivePhotoVideoUrlFetch:(id)arg1 appendTo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveVideoURLForLivePhoto:(id)arg1 fileURL:(id)arg2 appendTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_createSandboxTokenForURL:(id)arg1;
- (id)_createSandboxTokenForPath:(id)arg1;

@end
