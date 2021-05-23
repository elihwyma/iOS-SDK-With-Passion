/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetProvider.h>

@class NSArray, NSString, PXAssetReference, PXAssetsDataSourceManager, PXUIMediaProvider;

@interface PXSampleSuggestionProvider : PXGadgetProvider

{
    PXUIMediaProvider *_mediaProvider;
    _Bool _includeHorizontal;
    NSArray *_suggestions;
    NSArray *_assets;
    PXAssetReference *_oneUpInitialAssetReference;
    PXAssetsDataSourceManager *_oneUpDataSourceManager;
}

@property (retain, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) PXAssetReference *oneUpInitialAssetReference;
@property (retain, nonatomic) PXAssetsDataSourceManager *oneUpDataSourceManager;
@property (nonatomic) _Bool includeHorizontal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)oneUpPresentationInitialAssetReference:(id)arg1;
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;
- (long long)oneUpPresentationActionContext:(id)arg1;
- (id)oneUpPresentationDataSourceManager:(id)arg1;
- (id)oneUpPresentationMediaProvider:(id)arg1;
- (long long)oneUpPresentationOrigin:(id)arg1;
- (id)suggestionGadgetPreviewController:(id)arg1;
- (void)suggestionGadget:(id)arg1 commitViewController:(id)arg2;
- (id)initWithHorizontalGadget:(_Bool)arg1;
- (id)_fetchSingleImage;
- (id)_fetchHistoricImage;
- (id)_fetchSingleLivePhotoAssetWithVariation:(unsigned short)arg1;
- (id)_fetchSingleAssetWithVariation:(unsigned short)arg1;
- (id)_fetchSinglePortraitImage;
- (id)_fetchSingleVideo;
- (id)_fetchSingleLoopingVideo;
- (id)_fetchSingleAnimatedImage;
- (id)_lastYearsDate;
- (id)_fetchOptionsForHistoricImage;
- (id)_fetchOptionsForPlaybackStyle:(long long)arg1;
- (void)_prepareForOneUpPresentationForGadget:(id)arg1;
- (void)suggestionGadgetsWantsOneUpPresentation:(id)arg1;
- (void)suggestionGadget:(id)arg1 willDismissPreviewController:(id)arg2;
- (id)_gadgetForAssetReference:(id)arg1;

@end
