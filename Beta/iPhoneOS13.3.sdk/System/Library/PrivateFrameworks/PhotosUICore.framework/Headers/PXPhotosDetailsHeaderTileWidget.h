/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableSet, NSString, OKPresentationViewController, PHAssetCollection, PHFetchResult, PXBasicUIViewTileAnimator, PXImageRequester, PXMovieProvider, PXOneUpPresentation, PXPhotoKitUIMediaProvider, PXPhotosDataSource, PXPhotosDetailsContext, PXPhotosDetailsHeaderSpec, PXPhotosDetailsHeaderSpecManager, PXPhotosDetailsLoadCoordinationToken, PXReusableObjectPool, PXSectionedSelectionManager, PXSlideshowSession, PXTilingController, PXTitleSubtitleUILabelTile, PXUIPlayButtonTile, PXUISlideshowViewTile, PXUITapGestureRecognizer, PXWidgetSpec;

@protocol OS_dispatch_queue, PXAnonymousView, PXDisplayAsset, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXPhotosDetailsHeaderTileWidget : NSObject <Swift>

{
    NSObject<OS_dispatch_queue> *_internalWorkQueue;
    PXPhotosDetailsHeaderSpecManager *_specManager;
    PXTilingController *_tilingController;
    PXPhotoKitUIMediaProvider *_mediaProvider;
    PXReusableObjectPool *_tilePool;
    NSMutableSet *_tilesInUse;
    PXBasicUIViewTileAnimator *_tileAnimator;
    PXImageRequester *_primaryAssetImageRequester;
    struct CGRect _keyAssetCropRect;
    PXSlideshowSession *_slideshowSession;
    struct {
        _Bool keyAssets;
        _Bool assetCollection;
        _Bool curatedAssetCollection;
    } _needsUpdateFlags;
    _Bool _userInteractionEnabled;
    _Bool __basicContentLoaded;
    _Bool __canLoadContentData;
    _Bool __slideshowDidPrepare;
    _Bool __slideshowDidStart;
    _Bool __isSlideshowTileCheckedOut;
    _Bool __isPreventingSlideshowNextStep;
    _Bool __slideshowStartingDelayFinished;
    _Bool _hasLoadedContentData;
    PXPhotosDetailsContext *_context;
    id <PXWidgetDelegate> _widgetDelegate;
    PXWidgetSpec *_spec;
    PXPhotosDataSource *__photosDataSource;
    PXPhotosDetailsHeaderSpec *__headerSpec;
    PXMovieProvider *__movieProvider;
    OKPresentationViewController *__slideshowViewController;
    PXUISlideshowViewTile *__slideshowTile;
    PXUIPlayButtonTile *__playButtonTile;
    PXTitleSubtitleUILabelTile *__titleTile;
    PXPhotosDetailsLoadCoordinationToken *__loadCoordinationToken;
    PHFetchResult *__keyAssetsFetchResult;
    PHAssetCollection *__assetCollection;
    PHAssetCollection *__curatedAssetCollection;
    PHAssetCollection *__slideshowReferenceAssetCollection;
    long long __transitionAnimationsCount;
    PXUITapGestureRecognizer *__tapGestureRecognizer;
    struct CGSize __contentSize;
}

@property (retain, nonatomic, setter=_setPhotosDataSource:) PXPhotosDataSource *_photosDataSource;
@property (retain, nonatomic, setter=_setHeaderSpec:) PXPhotosDetailsHeaderSpec *_headerSpec;
@property (retain, nonatomic, setter=_setMovieProvider:) PXMovieProvider *_movieProvider;
@property (retain, nonatomic, setter=_setSlideshowViewController:) OKPresentationViewController *_slideshowViewController;
@property (retain, nonatomic, setter=_setSlideshowTile:) PXUISlideshowViewTile *_slideshowTile;
@property (retain, nonatomic, setter=_setPlayButtonTile:) PXUIPlayButtonTile *_playButtonTile;
@property (retain, nonatomic, setter=_setTitleTile:) PXTitleSubtitleUILabelTile *_titleTile;
@property (nonatomic, getter=_isBasicContentLoaded, setter=_setBasicContentLoaded:) _Bool _basicContentLoaded;
@property (nonatomic, setter=_setCanLoadContentData:) _Bool _canLoadContentData;
@property (nonatomic, setter=_setSlideshowDidPrepare:) _Bool _slideshowDidPrepare;
@property (nonatomic, setter=_setSlideshowDidStart:) _Bool _slideshowDidStart;
@property (nonatomic, setter=_setSlideshowTileCheckedOut:) _Bool _isSlideshowTileCheckedOut;
@property (nonatomic, setter=_setPreventSlideshowNextStep:) _Bool _isPreventingSlideshowNextStep;
@property (nonatomic, setter=_setSlideshowStartingDelayFinished:) _Bool _slideshowStartingDelayFinished;
@property (retain, nonatomic, setter=_setLoadCoordinationToken:) PXPhotosDetailsLoadCoordinationToken *_loadCoordinationToken;
@property (retain, nonatomic, setter=_setKeyAssetsFetchResult:) PHFetchResult *_keyAssetsFetchResult;
@property (retain, nonatomic, setter=_setAssetCollection:) PHAssetCollection *_assetCollection;
@property (retain, nonatomic, setter=_setCuratedAssetCollection:) PHAssetCollection *_curatedAssetCollection;
@property (retain, nonatomic, setter=_setSlideshowReferenceAssetCollection:) PHAssetCollection *_slideshowReferenceAssetCollection;
@property (nonatomic, setter=_setTransitionAnimationsCount:) long long _transitionAnimationsCount;
@property (nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData;
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) PXUITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, setter=_setContentSize:) struct CGSize _contentSize;
@property (nonatomic, readonly) id <PXDisplayAsset> presentedKeyAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;

+ (double)preferredHeaderContentHeightForWidth:(double)arg1 screen:(id)arg2;
+ (_Bool)canShowMiroMovieHeaderForDataSource:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_subtitle;
- (id)_title;
- (void)setContentSize:(struct CGSize)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (_Bool)_needsUpdate;
- (id)keyAsset;
- (id)_titleFontName;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (_Bool)_showPlaceholder;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)scrollViewControllerDidEndScrolling:(id)arg1;
- (id)_scrollViewController;
- (id)extendedTraitCollection;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForContext:(id)arg1;
- (void)preloadWithSourceRegionOfInterest:(id)arg1 forContext:(id)arg2;
- (id)zoomAnimationCoordinatorForContext:(id)arg1;
- (_Bool)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)loadContentData;
- (void)unloadContentData;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)tilingController:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2;
- (id)presentingViewControllerForMovieProvider:(id)arg1;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationWillBeginWithContext:(id)arg2;
- (void)zoomAnimationObserverCoordinator:(id)arg1 animationDidEndWithContext:(id)arg2;
- (id)slideshowViewTileHostViewController:(id)arg1;
- (void)slideshowSession:(id)arg1 didPrepareSlideshow:(id)arg2;
- (struct CGRect)photosDetailsHeaderTileLayout:(id)arg1 contentsRectForAspectRatio:(double)arg2;
- (id)photosDetailsHeaderTileLayoutFontName:(id)arg1;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)_loadBasicContent;
- (void)_updateLayoutStyle;
- (void)_invalidateKeyAssets;
- (void)_updateKeyAssetsIfNeeded;
- (void)_updateKeyAssetCropRect;
- (void)_invalidateAssetCollection;
- (void)_updateAssetCollectionIfNeeded;
- (void)_invalidateCuratedAssetCollection;
- (void)_updateCuratedAssetCollectionIfNeeded;
- (void)_updateBasicContent;
- (void)_updateMovieProvider;
- (void)_filterOutVideosFromAssetCollection:(id)arg1 filteredAssetCollection:(id *)arg2 assets:(id *)arg3;
- (void)_updateSlideshow;
- (void)_prepareSlideshowSessionWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (void)_didFinishPreparingSlideshowSession:(id)arg1;
- (void)_updateTitleTile;
- (id)viewToBeFocused;
- (void)_updateSlideshowTile;
- (void)_updateSlideshowPlayState;
- (void)_slideshowStartingDelayDidFinish;
- (_Bool)_isSlideShowReadyToStart;
- (void)_headerSpecDidChange;
- (id)_startMiroMovie;
- (struct CGRect)_contentRectInCoordinateSpace:(id)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)_contentRegionOfInterestForTileWithIdentifier:(struct PXTileIdentifier)arg1;
- (id)createHeaderSnapshotViewForMemoryCreationAnimation;
- (void *)_tileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (_Bool)_isPointWithinCurrentLayoutBounds:(struct CGPoint)arg1;
- (void)_updatePreventSlideshowNextStep;
- (void)playMiroMovieWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)ppt_navigateToMovieWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
