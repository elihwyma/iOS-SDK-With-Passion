/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUSectionedTilingLayout.h>

@class NSIndexPath, NSMutableDictionary;

@protocol PUScrubberTilingLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUScrubberTilingLayout : PUSectionedTilingLayout

{
    struct CGSize _slitSize;
    NSIndexPath *_currentItemIndexPath;
    double _loupeWidth;
    NSIndexPath *_loupeNeighborIndexPath;
    double _loupeTransitionProgress;
    double _expandedItemWidth;
    NSMutableDictionary *_layoutInfosByIndexPathByTileKind;
    struct {
        _Bool respondsToAspectRatioForItemAtIndexPath;
        _Bool respondsToExpandedWidthForItemAtIndexPath;
        _Bool respondsToShouldShowTimeIndicatorForExpandedItemAtIndexPath;
    } _delegateFlags;
    _Bool _onlyShowExpandedItem;
    _Bool _showPlayheadForExpandedItem;
    _Bool _snapToExpandedItem;
    id <PUScrubberTilingLayoutDelegate> _delegate;
    double _playheadVerticalOverhang;
    double _slitAspectRatio;
    double _maxAspectRatio;
    double _currentItemTransitionProgress;
    double _currentItemFocusProgress;
    NSIndexPath *_loupeIndexPath;
    NSIndexPath *_overrideLoupeIndexPath;
    double _loupeAmount;
    NSIndexPath *_expandedItemIndexPath;
    double _expandedItemPlayheadProgress;
    struct CGSize _interItemSpacing;
    struct UIEdgeInsets _contentPadding;
}

@property (weak, nonatomic) id <PUScrubberTilingLayoutDelegate> delegate;
@property (nonatomic) struct CGSize interItemSpacing;
@property (nonatomic) double playheadVerticalOverhang;
@property (nonatomic) struct UIEdgeInsets contentPadding;
@property (nonatomic) double slitAspectRatio;
@property (nonatomic) double maxAspectRatio;
@property (nonatomic, readonly) NSIndexPath *currentItemIndexPath;
@property (nonatomic, readonly) double currentItemTransitionProgress;
@property (nonatomic, readonly) double currentItemFocusProgress;
@property (nonatomic, readonly) NSIndexPath *loupeIndexPath;
@property (nonatomic, readonly) double loupeTransitionProgress;
@property (retain, nonatomic) NSIndexPath *overrideLoupeIndexPath;
@property (nonatomic) double loupeAmount;
@property (retain, nonatomic) NSIndexPath *expandedItemIndexPath;
@property (nonatomic) _Bool onlyShowExpandedItem;
@property (nonatomic) _Bool showPlayheadForExpandedItem;
@property (nonatomic) double expandedItemWidth;
@property (nonatomic) double expandedItemPlayheadProgress;
@property (nonatomic) _Bool snapToExpandedItem;
@property (nonatomic, readonly) struct CGPoint focusPoint;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (struct CGRect)contentBounds;
- (void)setVisibleRect:(struct CGRect)arg1;
- (id)layoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (id)preferredScrollInfo;
- (struct CGSize)estimatedSectionSize;
- (void)addLayoutInfosForTilesInRect:(struct CGRect)arg1 section:(long long)arg2 toSet:(id)arg3;
- (struct CGSize)sizeForSection:(long long)arg1 numberOfItems:(long long)arg2;
- (id)_createLayoutInfoForTileWithIndexPath:(id)arg1 kind:(id)arg2;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 scrollPosition:(long long)arg2;
- (id)_indexPathOfItemClosestToAbscissa:(double)arg1;
- (struct CGSize)_slitSize;
- (id)indexPathOfItemClosestToPoint:(struct CGPoint)arg1;
- (double)_focusAbscissa;
- (struct CGRect)_rectForItemAtIndexPath:(id)arg1 withLoupeTransform:(_Bool)arg2 withExpanded:(_Bool)arg3;
- (_Bool)_shouldShowTimeIndicatorForExpandedItemAtIndexPath:(id)arg1;
- (float)_aspectRatioForIndexPath:(id)arg1;
- (struct CGRect)visibleRectForScrollingToItemAtIndexPath:(id)arg1 transitionProgress:(double)arg2;
- (double)_loupeAmountFor:(id)arg1;
- (double)_transformedHorizontalOffsetForIndexPath:(id)arg1;
- (struct CGSize)_transformedSizeForIndexPath:(id)arg1;
- (long long)_indexOfItemClosestToAbscissa:(double)arg1 inSection:(long long)arg2;
- (double)_normalizedTransitionProgressFrom:(id)arg1 withAbscissa:(double)arg2 outNeighborIndexPath:(out id *)arg3;

@end
