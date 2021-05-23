/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString, PULivePhotoToolControllerSpec, PXAssetVariationRenderProvider, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface PULivePhotoEffectsToolController : PUPhotoEditToolController <Swift>

{
    PXAssetVariationRenderProvider *_renderProvider;
    NSArray *_collectionViewConstraints;
    id _editModelObserver;
    NSString *_analysisResultCacheKey;
    PULivePhotoToolControllerSpec *_spec;
    NSArray *__options;
    UICollectionView *__collectionView;
    UICollectionViewFlowLayout *__collectionViewLayout;
    NSDictionary *__analysisResult;
}

@property (nonatomic, readonly) PULivePhotoToolControllerSpec *spec;
@property (copy, nonatomic, setter=_setOptions:) NSArray *_options;
@property (retain, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView;
@property (retain, nonatomic, setter=_setCollectionViewLayout:) UICollectionViewFlowLayout *_collectionViewLayout;
@property (retain, nonatomic, setter=_setAnalysisResult:) NSDictionary *_analysisResult;
@property (copy, nonatomic) NSString *analysisResultCacheKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)localizedName;
- (void)setLayoutOrientation:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)updateViewConstraints;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (void)specDidChange;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (struct UIEdgeInsets)preferredPreviewViewInsets;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (id)toolControllerSpec;
- (struct CGRect)contentRectInCoordinateSpace:(id)arg1;
- (void)_updateCollectionView;
- (void)_updateCollectionViewInsets;
- (void)_updateOptions;
- (void)_updateVisibleCells;

@end
