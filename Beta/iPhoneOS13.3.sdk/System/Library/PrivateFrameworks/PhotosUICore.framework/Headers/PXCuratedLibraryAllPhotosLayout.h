/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGSplitLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSDateInterval, NSMutableSet, NSString, PXAssetReference, PXAssetsDataSource, PXAssetsDataSourceManager, PXCuratedLibraryAssetDecorationSource, PXCuratedLibraryInlineHeadersDataSourceManager, PXCuratedLibraryInlineHeadersLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGAnchor, PXGItemsLayout, PXGOneColumnLayout, PXGPinchEffect, PXGZoomLayout, PXNumberAnimator, PXPhotoKitUIMediaProvider, PXPointAnimator;

@protocol PXCuratedLibraryAllPhotosBodyLayout, PXDisplayAssetFetchResult;

@interface PXCuratedLibraryAllPhotosLayout : PXGSplitLayout <Swift>

{
    CDStruct_d97c9657 _preUpdateFlags;
    CDStruct_d97c9657 _postUpdateFlags;
    PXGZoomLayout *_zoomLayout;
    PXGPinchEffect *_pinchEffect;
    unsigned int _pinchEffectCaptureSpriteIndex;
    struct _PXGSpriteIndexRange _lightBackgroundSpriteIndexRange;
    unsigned int _backgroundMediaVersion;
    PXCuratedLibraryInlineHeadersDataSourceManager *_inlineHeadersDataSourceManager;
    PXCuratedLibraryInlineHeadersLayout *_inlineHeadersLayout;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXAssetsDataSource *_currentDataSource;
    PXCuratedLibraryAssetDecorationSource *_assetDecorationSource;
    PXPhotoKitUIMediaProvider *_preheatMediaProvider;
    struct _NSRange _preheatedThumbsForItemsByColumnIndex[10];
    _Bool _isPreheatingByColumnIndex[10];
    _Bool _isPerformingUpdate;
    struct _NSRange _prefetchedForLoadedItems;
    struct _NSRange _cachedClampedItemRange;
    id <PXDisplayAssetFetchResult> _cachedClampedFetchResult;
    NSArray *_layers;
    NSArray *_itemLayouts;
    PXGItemsLayout<PXCuratedLibraryAllPhotosBodyLayout> *_itemLayoutByHeaderLevel[2];
    struct PXGItemsLayout *_decadesItemLayout;
    NSMutableSet *_itemLayoutsAllowedToLoad;
    NSDateInterval *_lastReturnedDateInterval;
    unsigned long long _lastReturnedDateIntervalDataSourceIdentifier;
    NSArray *_lastReturnedLocationNames;
    unsigned long long _lastReturnedLocationNamesDataSourceIdentifier;
    _Bool _scrolledWhileAnimatingZoom;
    _Bool _performedInitialVisualShift;
    long long _visuallyStableAnchorItem;
    long long _visuallyStableAnchorItemDesiredColumn;
    _Bool _visuallyStableAnchorAllowedCloseToTop;
    unsigned long long _dataSourceIdentifierOfCachedRangeForSelectedItems;
    struct _NSRange _cachedRangeForSelectedItems;
    _Bool _didChangeFiltering;
    _Bool _shouldAnimateTowardsAnchor;
    _Bool _wasTracking;
    PXCuratedLibraryLayoutSpec *_spec;
    PXAssetReference *__anchorAssetReference;
    PXCuratedLibraryViewModel *_viewModel;
    PXAssetsDataSource *_presentedDataSource;
    PXGAnchor *_anchor;
    PXPointAnimator *_anchorViewportScaleCenterAnimator;
    PXNumberAnimator *_anchorViewportScaleCenterVelocityTracker;
    struct PXGItemsLayout *_didAnimateTowardsAnchorInItemsLayout;
    PXGOneColumnLayout *_oneColLayout;
    struct CGPoint _anchorTargetViewportCenter;
    struct CGPoint _normalizedScaleCenterInAnchorSprite;
    struct UIEdgeInsets _overlayInsets;
    struct UIEdgeInsets _effectiveOverlayInsets;
}

@property (nonatomic, readonly) PXGAnchor *anchor;
@property (nonatomic, readonly) PXPointAnimator *anchorViewportScaleCenterAnimator;
@property (nonatomic, readonly) struct CGPoint anchorTargetViewportCenter;
@property (retain, nonatomic) PXAssetReference *anchorAssetReference;
@property (nonatomic, readonly) struct CGPoint normalizedScaleCenterInAnchorSprite;
@property (nonatomic, readonly) PXNumberAnimator *anchorViewportScaleCenterVelocityTracker;
@property (nonatomic, readonly) _Bool shouldAnimateTowardsAnchor;
@property (nonatomic, readonly) _Bool wasTracking;
@property (nonatomic, readonly) PXGItemsLayout<PXCuratedLibraryAllPhotosBodyLayout> *didAnimateTowardsAnchorInItemsLayout;
@property (nonatomic, readonly) PXGItemsLayout<PXCuratedLibraryAllPhotosBodyLayout> *primaryItemsLayout;
@property (nonatomic, readonly) PXGOneColumnLayout *oneColLayout;
@property (nonatomic) struct UIEdgeInsets effectiveOverlayInsets;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic, readonly) PXAssetsDataSource *presentedDataSource;
@property (nonatomic) struct UIEdgeInsets overlayInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXCuratedLibraryLayoutSpec *spec;

- (id)init;
- (void)update;
- (_Bool)isAnimating;
- (void)_updateLayers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)visibleRectDidChange;
- (void)screenScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2;
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
- (struct CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 *)arg2 forItemsInRange:(struct _NSRange)arg3;
- (void)containingScrollViewDidScroll:(struct CGPoint)arg1;
- (unsigned long long)zoomBehavior;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(struct PXGItemsLayout *)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(struct PXGItemsLayout *)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (void)_updateDecorationSource;
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
- (void)_updateDataSource;
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (id)presentedItemsGeometryForDataSource:(id)arg1;
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (struct CGRect)frameForItemAtIndexPath:(struct PXSimpleIndexPath)arg1 level:(unsigned long long)arg2;
- (CDStruct_3fe57b01)spriteTransformForLevel:(unsigned long long)arg1;
- (struct CGRect)boundsForLevel:(unsigned long long)arg1;
- (id)initWithViewModel:(id)arg1 spec:(id)arg2;
- (struct CGSize)_scaleForLayout:(struct PXGItemsLayout *)arg1;
- (struct PXGItemsLayout *)_createLayoutWithNumberOfColumns:(long long)arg1;
- (void)_configureLayout:(struct PXGItemsLayout *)arg1;
- (_Bool)_layoutIsAspectFit:(struct PXGItemsLayout *)arg1;
- (_Bool)_layoutHasIndividualItems:(struct PXGItemsLayout *)arg1;
- (double)_interItemSpacingForLayout:(struct PXGItemsLayout *)arg1;
- (double)_itemCaptionSpacingForLayout:(struct PXGItemsLayout *)arg1;
- (_Bool)_wantsDecorationForNumberOfColumns:(long long)arg1;
- (void)invalidateItemsLayout;
- (void)_updateEffectiveOverlayInsets;
- (void)_updateZoom;
- (void)_updateVisualShifting;
- (void)_updateZoomTransforms;
- (void)_updateBackgroundSprites;
- (void)_updatePinchEffect;
- (void)_updatePrefetching;
- (void)_updateViewModelIsAnimating;
- (long long)_estimatedItemsPerScreenForLayout:(struct PXGItemsLayout *)arg1;
- (void)_performVisualShiftWithLayout:(struct PXGItemsLayout *)arg1 movingItem:(long long)arg2 toColumn:(long long)arg3;
- (void)_performAnchorAlignmentVisualShiftWithBaseLayout:(struct PXGItemsLayout *)arg1;
- (CDStruct_3fe57b01)_spriteTransformForLayout:(id)arg1;
- (id)_displayAssetForItem:(long long)arg1;
- (struct _NSRange)_rangeOfItemsForContentInRect:(struct CGRect)arg1;
- (_Bool)_layoutWantsSingleDateTitle;
- (unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
