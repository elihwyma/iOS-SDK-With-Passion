/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSectionedTilingLayout.h>

@class NSIndexPath, NSMutableDictionary, PUParallaxComputer, UITraitCollection;

@protocol PUOneUpTilingLayoutDelegate;

@interface PUOneUpTilingLayout : PUSectionedTilingLayout

{
    struct CGSize _itemSize;
    NSIndexPath *_inFocusIndexPath;
    NSIndexPath *_neighborIndexPath;
    double _transitionProgress;
    struct {
        _Bool respondsToAspectRatioForItemAtIndexPath;
        _Bool respondsToShouldScaleToFitSafeInsetsForItemAtIndexPath;
        _Bool respondsToBadgeSizeForItemAtIndexPath;
        _Bool respondsToActionBadgeSizeForItemAtIndexPath;
        _Bool respondsToAssetExplorerReviewScreenBadgeSizeForItemAtIndexPath;
        _Bool respondsToShouldShowPlayButtonForItemAtIndexPath;
        _Bool respondsToShouldShowProgressIndicatorForItemAtIndexPath;
        _Bool respondsToShouldMoveProgressIndicatorForItemAtIndexPath;
        _Bool respondsToShouldShowBufferingIndicatorForItemAtIndexPath;
        _Bool respondsToLoadingIndicatorSizeForItemAtIndexPath;
        _Bool respondsToModelTileTransformForItemAtIndexPath;
        _Bool respondsToContentOffsetForItemAtIndexPath;
        _Bool respondsToShouldShowAccessoryForItemAtIndexPath;
        _Bool respondsToMinimumVisibleContentHeightForItemAtIndexPath;
        _Bool respondsToMinimumVisibleAccessoryHeightForItemAtIndexPath;
        _Bool respondsToShouldShowVideoPlaceholderForItemAtIndexPath;
        _Bool respondsToDisableInitialZoomToFillForItemAtIndexPath;
        _Bool respondsToShouldShowReviewScreenScrubberBar;
        _Bool respondsToAlphaForReviewScreenBarsInLayout;
    } _delegateFlags;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    _Bool _useBackgroundTile;
    _Bool _useBadgeTiles;
    _Bool _useAssetExplorerReviewScreenBadgeTiles;
    _Bool _useSelectionIndicatorTiles;
    _Bool _useImportStatusIndicatorTiles;
    _Bool _useReviewScreenBars;
    _Bool _useVerticalReviewScreenControlBarLayout;
    _Bool _canDisplayLoadingIndicators;
    _Bool _useUserTransformTiles;
    _Bool _shouldPinContentToTop;
    _Bool _shouldHideMainContent;
    id <PUOneUpTilingLayoutDelegate> _delegate;
    long long _windowInterfaceOrientation;
    long long _tileInitialContentMode;
    UITraitCollection *_traitCollection;
    PUParallaxComputer *_parallaxComputer;
    struct CGSize _interpageSpacing;
    struct CGSize _playButtonSize;
    struct CGSize _progressIndicatorSize;
    struct CGSize _assetExplorerReviewScreenProgressIndicatorSize;
    struct CGSize _bufferingIndicatorSize;
    struct CGSize _displaySizeForInsetMatching;
    struct UIEdgeInsets _contentGuideInsets;
    struct UIEdgeInsets _contentSafeInsets;
}

@property (weak, nonatomic) id <PUOneUpTilingLayoutDelegate> delegate;
@property (nonatomic) struct CGSize interpageSpacing;
@property (nonatomic, readonly) NSIndexPath *indexPathOfCurrentItem;
@property (nonatomic, readonly) double transitionProgress;
@property (nonatomic) struct UIEdgeInsets contentGuideInsets;
@property (nonatomic) struct UIEdgeInsets contentSafeInsets;
@property (nonatomic) _Bool useBackgroundTile;
@property (nonatomic) _Bool useBadgeTiles;
@property (nonatomic) _Bool useAssetExplorerReviewScreenBadgeTiles;
@property (nonatomic) _Bool useSelectionIndicatorTiles;
@property (nonatomic) _Bool useImportStatusIndicatorTiles;
@property (nonatomic) _Bool useReviewScreenBars;
@property (nonatomic) long long windowInterfaceOrientation;
@property (nonatomic) _Bool useVerticalReviewScreenControlBarLayout;
@property (nonatomic) struct CGSize playButtonSize;
@property (nonatomic) struct CGSize progressIndicatorSize;
@property (nonatomic) struct CGSize assetExplorerReviewScreenProgressIndicatorSize;
@property (nonatomic) struct CGSize bufferingIndicatorSize;
@property (nonatomic) _Bool canDisplayLoadingIndicators;
@property (nonatomic) _Bool useUserTransformTiles;
@property (nonatomic) long long tileInitialContentMode;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize displaySizeForInsetMatching;
@property (nonatomic) _Bool shouldPinContentToTop;
@property (retain, nonatomic) PUParallaxComputer *parallaxComputer;
@property (nonatomic) _Bool shouldHideMainContent;

+ (void)initialize;
+ (struct CGRect)untransformedRectForItemWithAspectRatio:(double)arg1 pageRect:(struct CGRect)arg2 safeInsets:(struct UIEdgeInsets)arg3;
+ (id)centerTileKinds;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (struct CGSize)_itemSize;
- (void)setVisibleRect:(struct CGRect)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)preferredScrollInfo;
- (struct CGSize)estimatedSectionSize;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (struct CGRect)visibleRectForItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (void)invalidateBadgeSizeForItemAtIndexPath:(id)arg1;
- (void)invalidateModelTileTransformForItemAtIndexPath:(id)arg1;
- (void)invalidateAccessoryForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)invalidateContentOffsetForItemAtIndexPath:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)_invalidateContentRelatedTilesWithIndexPath:(id)arg1 inContext:(id)arg2;
- (void)invalidateVideoPlaceholderForItemAtIndexPath:(id)arg1;
- (void)invalidateLoadingIndicatorForItemAtIndexPath:(id)arg1;
- (void)invalidateProgressIndicatorForItemAtIndexPath:(id)arg1;
- (double)_minimumBottomContentInsetsForItemAtIndexPath:(id)arg1;
- (struct CGPoint)_contentOffsetForItemAtIndexPath:(id)arg1;
- (_Bool)_accessoryViewVisibilityForItemAtIndexPath:(id)arg1;
- (_Bool)_isVideoPlacholderVisibleForItemAtIndexPath:(id)arg1;
- (struct CGRect)_pageRectForItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForTileWithSize:(struct CGSize)arg1 centeredOnItemAtIndexPath:(id)arg2;
- (struct CGRect)_untransformedRectForItemAtIndexPath:(id)arg1;
- (struct CGRect)_untransformedRectForItemAtIndexPath:(id)arg1 pageRect:(struct CGRect)arg2;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 options:(unsigned long long)arg2;
- (id)_displayTileTransformForItemAtIndexPath:(id)arg1 pageSize:(struct CGSize)arg2 secondaryDisplayTransform:(id)arg3 options:(unsigned long long)arg4;
- (void)_getLayoutRect:(out struct CGRect *)arg1 transform:(out struct CGAffineTransform *)arg2 parallaxOffset:(out struct CGPoint *)arg3 forContentOfItemAtIndexPath:(id)arg4 options:(unsigned long long)arg5;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighbor:(out id *)arg3;

@end
