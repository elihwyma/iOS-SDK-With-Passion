/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXAssetReference, PXAssetsDataSourceManager, PXPhotoKitUIMediaProvider;

@interface PXForYouRecentInterestSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider <Swift>

{
    PXPhotoKitUIMediaProvider *_oneUpMediaProvider;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 currentImageForAssetReference:(id)arg2;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (id)oneUpPresentationActionManagerForPreviewing:(id)arg1;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_prepareForOneUpPresentationForSuggestion:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(_Bool)arg3;

@end
