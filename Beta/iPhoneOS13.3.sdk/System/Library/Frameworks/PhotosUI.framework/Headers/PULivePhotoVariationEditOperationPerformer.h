/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXAssetEditOperationPerformer.h>

@class NSString, PHAsset, PUPhotoEditResourceLoadResult, PUPhotoEditResourceLoader, PUPhotoKitPhotoEditMediaDestination;

__attribute__((visibility("hidden")))
@interface PULivePhotoVariationEditOperationPerformer : PXAssetEditOperationPerformer

{
    CDUnknownBlockType _completionHandler;
    _Bool _didSave;
    PUPhotoEditResourceLoader *_resourceLoader;
    PUPhotoEditResourceLoadResult *_loadResult;
    PUPhotoKitPhotoEditMediaDestination *_mediaDestination;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)performEditOperationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)photoEditResourceLoadRequest:(id)arg1 mediaLoadDidFailWithError:(id)arg2;
- (void)photoEditResourceLoadRequest:(id)arg1 didCompleteWithResult:(id)arg2;
- (void)_completeWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_calculateAnalysisResult;
- (void)_handleAnalysisCalculatorResponse:(id)arg1;
- (void)_handleAnalysisResult:(id)arg1;
- (void)_handleDidFinishSavingEditsForAsset:(id)arg1 error:(id)arg2;

@end
