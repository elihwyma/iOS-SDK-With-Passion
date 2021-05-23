/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, _UIFlowLayoutInfo, _UIUpdateVisibleCellsContext;

@interface UICollectionViewFlowLayout : UICollectionViewLayout

{
    struct {
        unsigned int delegateSizeForItem:1;
        unsigned int delegateReferenceSizeForHeader:1;
        unsigned int delegateReferenceSizeForFooter:1;
        unsigned int delegateInsetForSection:1;
        unsigned int delegateInteritemSpacingForSection:1;
        unsigned int delegateLineSpacingForSection:1;
        unsigned int delegateAlignmentOptions:1;
        unsigned int layoutDataIsValid:1;
        unsigned int delegateInfoIsValid:1;
        unsigned int roundsToScreenScale:1;
        unsigned int delegateSizesForSection:1;
        unsigned int sectionHeadersFloat:1;
        unsigned int sectionFootersFloat:1;
        unsigned int headerFollowsSectionMargins:1;
        unsigned int footerFollowsSectionMargins:1;
        unsigned int fetchingItemsInfoForRect:1;
        unsigned int isInUpdateVisibleCellsPass:1;
    } _gridLayoutFlags;
    double _interitemSpacing;
    double _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _estimatedItemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct UIEdgeInsets _sectionInset;
    _UIFlowLayoutInfo *_data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    NSMutableArray *_indexPathsToValidate;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedItemFrames;
    _UIUpdateVisibleCellsContext *_updateVisibleCellsContext;
    long long _sectionInsetReference;
}

@property (nonatomic, readonly, getter=_estimatesSizes) _Bool estimatesSizes;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct CGSize estimatedItemSize;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) struct CGSize headerReferenceSize;
@property (nonatomic) struct CGSize footerReferenceSize;
@property (nonatomic) struct UIEdgeInsets sectionInset;
@property (nonatomic) long long sectionInsetReference;
@property (nonatomic) _Bool sectionHeadersPinToVisibleBounds;
@property (nonatomic) _Bool sectionFootersPinToVisibleBounds;

+ (Class)invalidationContextClass;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)_layoutAxis;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (void)_willPerformUpdateVisibleCellsPass;
- (void)_didPerformUpdateVisibleCellsPass;
- (_Bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (_Bool)_roundsToScreenScale;
- (void)_setCollectionView:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (struct CGPoint)_contentOffsetForScrollingToSection:(long long)arg1;
- (struct UIEdgeInsets)_focusFastScrollingIndexBarInsets;
- (long long)developmentLayoutDirection;
- (void)_resetCachedItems;
- (void)_getSizingInfosWithExistingSizingDictionary:(id)arg1;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg1 allowsPartialUpdate:(_Bool)arg2;
- (void)_fetchItemsInfoForRect:(struct CGRect)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)_existingLayoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGRect)_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (id)_fetchAndCacheNewLayoutAttributesForCellWithIndexPath:(id)arg1 frame:(struct CGRect)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (_Bool)_boundsAndInsetsAreValidForReferenceDimension;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (void)_updateCollectionViewScrollableAxis;
- (double)_dimensionFromCollectionView;
- (struct CGSize)_effectiveEstimatedItemSize;
- (struct UIEdgeInsets)_adjustedSectionInsetForSectionInset:(struct UIEdgeInsets)arg1 forAxis:(int)arg2;
- (void)_updateDelegateFlags;
- (_Bool)_headerFollowsSectionMargins;
- (_Bool)_footerFollowsSectionMargins;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (void)_calculateAttributesForRect:(struct CGRect)arg1;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (struct CGSize)synchronizeLayout;
- (void)_invalidateButKeepDelegateInfo;
- (void)_invalidateButKeepAllInfo;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (id)_rowAlignmentOptions;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (void)_setRoundsToScreenScale:(_Bool)arg1;
- (void)_setHeaderFollowsSectionMargins:(_Bool)arg1;
- (void)_setFooterFollowsSectionMargins:(_Bool)arg1;

@end
