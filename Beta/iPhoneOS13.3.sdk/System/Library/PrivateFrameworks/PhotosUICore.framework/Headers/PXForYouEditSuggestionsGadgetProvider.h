/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXForYouSuggestionsGadgetProvider.h>

@class NSString, PXAssetReference, PXForYouSuggestionAssetsDataSourceManager, PXGestureProvider, PXPhotoKitAdjustedUIMediaProvider;

@interface PXForYouEditSuggestionsGadgetProvider : PXForYouSuggestionsGadgetProvider

{
    PXPhotoKitAdjustedUIMediaProvider *_oneUpMediaProvider;
    PXForYouSuggestionAssetsDataSourceManager *_oneUpDataSourceManager;
    PXAssetReference *_oneUpInitialAssetReference;
    PXGestureProvider *_oneUpGestureProvider;
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
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationGestureProvider:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (_Bool)_prepareForOneUpPresentationForSuggestion:(id)arg1;
- (void)presentOneUpForSuggestion:(id)arg1;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (void)suggestionGadget:(id)arg1 didDismissPreviewController:(id)arg2 committing:(_Bool)arg3;
- (void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2;
- (void)configureGadget:(id)arg1;

@end
