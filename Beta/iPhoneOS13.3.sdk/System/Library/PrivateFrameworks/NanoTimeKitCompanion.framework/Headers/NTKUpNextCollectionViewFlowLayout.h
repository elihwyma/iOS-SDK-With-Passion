/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class CLKDevice, NSDictionary, NSIndexPath, NSSet, NTKUpNextCollectionViewFlowLayoutAttributes;

@interface NTKUpNextCollectionViewFlowLayout : UICollectionViewFlowLayout

{
    CLKDevice *_device;
    NSDictionary *_layoutInfo;
    NSDictionary *_headerLayoutInfo;
    NTKUpNextCollectionViewFlowLayoutAttributes *_decorationLayoutInfo;
    NSSet *_previousSectionsWithHeaders;
    NSSet *_sectionsWithHeaders;
    _Bool _needsHeaderUpdate;
    _Bool _needsInsetsUpdate;
    _Bool _useFixedLowTransitionLayout;
    _Bool _snappingEnabled;
    _Bool _showingAllAttributes;
    double _topItemsAlpha;
    double _headerAlpha;
    double _topItemsShift;
    double _statusBarDecorationHeight;
    NSIndexPath *_topElementIndexPath;
    NSIndexPath *_bottomElementIndexPath;
    double _topOffsetForSnapping;
    double _topOffsetForScrolling;
    double _lowTransitionScale;
    double _lowTransitionShift;
    double _highTransitionScale;
    double _highTransitionShift;
    double _maximumDarkeningAmount;
    double _highTransitionBottomOffset;
    NSIndexPath *_indexPathToSnapTo;
    double _snappingOffset;
    NSSet *_dwellIndexPathes;
}

@property (nonatomic) double topItemsAlpha;
@property (nonatomic) double headerAlpha;
@property (nonatomic) double topItemsShift;
@property (nonatomic) double statusBarDecorationHeight;
@property (retain, nonatomic) NSIndexPath *topElementIndexPath;
@property (retain, nonatomic) NSIndexPath *bottomElementIndexPath;
@property (nonatomic) double topOffsetForSnapping;
@property (nonatomic) double topOffsetForScrolling;
@property (nonatomic) double lowTransitionScale;
@property (nonatomic) double lowTransitionShift;
@property (nonatomic) double highTransitionScale;
@property (nonatomic) double highTransitionShift;
@property (nonatomic) _Bool useFixedLowTransitionLayout;
@property (nonatomic) double maximumDarkeningAmount;
@property (nonatomic) double highTransitionBottomOffset;
@property (nonatomic, getter=isSnappingEnabled) _Bool snappingEnabled;
@property (nonatomic, getter=isShowingAllAttributes) _Bool showingAllAttributes;
@property (retain, nonatomic) NSIndexPath *indexPathToSnapTo;
@property (nonatomic) double snappingOffset;
@property (nonatomic, readonly) NSSet *dwellIndexPathes;

+ (Class)layoutAttributesClass;

- (id)init;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (_Bool)_hasHeaderForSection:(long long)arg1;
- (id)flowLayoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_updateContentInsetsIfNeeded;
- (void)_updateSectionHeaderListIfNeeded;
- (void)_updateVisibilityForLayoutAttributes:(id)arg1 inBounds:(struct CGRect)arg2;

@end
