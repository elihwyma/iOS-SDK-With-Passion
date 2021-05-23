/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSString, UITraitCollection, _UICollectionCompositionalLayoutDynamicAnimator, _UICollectionCompositionalLayoutSolverOptions, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutDynamicsConfiguration, _UICollectionLayoutSectionGeometryTranslator, _UICollectionPreferredSizes, _UIDataSourceSnapshotter, _UIRTree;

@protocol NSCollectionLayoutContainer;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolver : NSObject <Swift>

{
    _Bool _estimatesSizes;
    _Bool _hasOrthogonalSrollingSections;
    _Bool _shouldPerformPhysicalRTLTransforms;
    _Bool _roundsToScreenScale;
    _Bool _layoutRTL;
    int _layoutAxis;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    _UIDataSourceSnapshotter *_dataSourceSnapshot;
    double _interSectionSpacing;
    NSIndexSet *_orthogonalScrollingSectionIndexes;
    CDUnknownBlockType _dynamicsConfigurationHandler;
    _UICollectionCompositionalLayoutSolverOptions *_options;
    Class _layoutAttributeClass;
    Class _invalidationContextClass;
    CDUnknownBlockType _invalidationHandler;
    double _memoizedScreenScale;
    CDUnknownBlockType _sectionProvider;
    NSIndexSet *_solutionBookmarkIndexesWithPinnedSupplementaryItems;
    _UICollectionCompositionalLayoutDynamicAnimator *_dynamicAnimator;
    _UICollectionLayoutDynamicsConfiguration *_dynamicsConfiguration;
    NSArray *_solutionBookmarks;
    _UIRTree *_sectionIndexer;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    NSMutableDictionary *_cachedItemAttributes;
    NSMutableDictionary *_cachedSupplementaryAttributes;
    NSMutableDictionary *_cachedDecorationAttributes;
    NSArray *_globalSupplementaryItems;
    _UICollectionLayoutAuxillaryItemSolver *_globalSupplementarySolver;
    _UICollectionPreferredSizes *_globalSupplementaryPreferredSizes;
    long long _numberOfSectionsWithTransformVisibleItemsHandler;
    struct CGSize _actualContentSize;
}

@property (retain, nonatomic) _UICollectionCompositionalLayoutSolverOptions *options;
@property (retain, nonatomic) id <NSCollectionLayoutContainer> container;
@property (nonatomic) int layoutAxis;
@property (retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshot;
@property (retain, nonatomic) Class layoutAttributeClass;
@property (retain, nonatomic) Class invalidationContextClass;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic) double memoizedScreenScale;
@property (nonatomic) _Bool roundsToScreenScale;
@property (copy, nonatomic) CDUnknownBlockType sectionProvider;
@property (nonatomic) _Bool layoutRTL;
@property (nonatomic) struct CGSize actualContentSize;
@property (nonatomic) _Bool estimatesSizes;
@property (retain, nonatomic) NSIndexSet *solutionBookmarkIndexesWithPinnedSupplementaryItems;
@property (retain, nonatomic) _UICollectionCompositionalLayoutDynamicAnimator *dynamicAnimator;
@property (retain, nonatomic) _UICollectionLayoutDynamicsConfiguration *dynamicsConfiguration;
@property (retain, nonatomic) NSArray *solutionBookmarks;
@property (retain, nonatomic) _UIRTree *sectionIndexer;
@property (retain, nonatomic) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;
@property (retain, nonatomic) NSMutableDictionary *cachedItemAttributes;
@property (retain, nonatomic) NSMutableDictionary *cachedSupplementaryAttributes;
@property (retain, nonatomic) NSMutableDictionary *cachedDecorationAttributes;
@property (retain, nonatomic) NSArray *globalSupplementaryItems;
@property (retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *globalSupplementarySolver;
@property (retain, nonatomic) _UICollectionPreferredSizes *globalSupplementaryPreferredSizes;
@property (nonatomic) long long numberOfSectionsWithTransformVisibleItemsHandler;
@property (nonatomic) _Bool shouldPerformPhysicalRTLTransforms;
@property (nonatomic) _Bool hasOrthogonalSrollingSections;
@property (retain, nonatomic) NSIndexSet *orthogonalScrollingSectionIndexes;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) double interSectionSpacing;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) _Bool hasPinnedSupplementaryItems;
@property (nonatomic, readonly) NSArray *layoutAttributesForPinnedSupplementaryItems;
@property (nonatomic, readonly) _Bool shouldTransformVisibleItemsDuringContentOffsetChanges;
@property (nonatomic, readonly) _Bool shouldUpdateVisibleBoundsForDynamicAnimator;
@property (copy, nonatomic) CDUnknownBlockType dynamicsConfigurationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGRect)bounds;
- (struct CGSize)auxillaryHostContentSize;
- (struct CGSize)auxillaryHostPinningContentSize;
- (id)auxillaryHostContainer;
- (id)auxillaryHostAuxillaryItems;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (int)auxillaryHostLayoutAxis;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (id)visualDescription;
- (id)resolveForUpdatedGlobalSupplementaries:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 withIndexPath:(id)arg2;
- (_Bool)updatePreferredSizeIfNeededForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)resolveForInvalidatedPreferredAttributes:(id)arg1;
- (void)prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (id)initWithContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 dataSourceSnapshot:(id)arg4 options:(id)arg5 sectionProvider:(CDUnknownBlockType)arg6;
- (id)resolveSolutionForUpdate:(id)arg1;
- (id)resolveForContainerChange:(id)arg1;
- (id)resolveForMarginsChange:(id)arg1;
- (_Bool)shouldInvalidateForNewTraitCollection:(id)arg1;
- (_Bool)updateVisibleBoundsForDynamicAnimator:(struct CGRect)arg1 previousVisibleBounds:(struct CGRect)arg2;
- (id)updatePinnedSectionSupplementaryItemsForVisibleBounds:(struct CGRect)arg1;
- (void)setOrthogonalOffset:(struct CGPoint)arg1 forSection:(long long)arg2;
- (struct CGPoint)orthogonalOffsetForSection:(long long)arg1;
- (long long)orthogonalScrollingBehaviorForSection:(long long)arg1;
- (double)orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (_Bool)shouldCenterOrthogonalScrollingPageForSection:(long long)arg1;
- (struct CGPoint)orthogonalContentOffsetForProposedContentOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (_Bool)orthogonalScrollingUsesCustomContentOffsetForSection:(long long)arg1;
- (double)orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (struct CGVector)scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (struct CGRect)layoutRectForSection:(long long)arg1;
- (struct CGSize)effectiveContentSizeForSection:(long long)arg1;
- (struct NSDirectionalEdgeInsets)contentInsetsForSection:(long long)arg1;
- (id)extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (_Bool)orthogonalScrollingSectionSupplementaryShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (struct CGRect)orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect)arg2;
- (_Bool)elementShouldAppearAbove:(id)arg1;
- (id)mutatedVisibleItemsForElementsForVisibleBounds:(struct CGRect)arg1;
- (void)_solve;
- (id)_cachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2;
- (void)_invalidateAttributes:(id)arg1;
- (struct CGPoint)_globalSupplementaryFrameOffset;
- (id)_createAndCacheLayoutAttributesForSupplementaryItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(struct CGRect)arg3 zIndex:(long long)arg4;
- (void)_layoutAttributesForElementsInRect:(struct CGRect)arg1 handler:(CDUnknownBlockType)arg2;
- (struct CGRect)_globalFrameForSolutionFrame:(struct CGRect)arg1 bookmark:(id)arg2;
- (id)_createAndCacheLayoutAttributesForItemAtIndexPath:(id)arg1 frame:(struct CGRect)arg2 zIndex:(long long)arg3;
- (id)_cachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2;
- (id)_createAndCacheLayoutAttributesForDecorationItemAtIndexPath:(id)arg1 elementKind:(id)arg2 frame:(struct CGRect)arg3 additionalContentInset:(struct NSDirectionalEdgeInsets)arg4 zIndex:(long long)arg5;
- (id)_attributesQueryRectsForQueryRect:(struct CGRect)arg1;
- (void)_computeDeletedItemsAffectingSupplementariesForUpdate:(id)arg1 resolveResult:(id)arg2;
- (id)_computeInitialSupplementaryKeysSectionDictForUpdate:(id)arg1;
- (id)_rebasedPreferredSizesWithDataSourceTranslator:(id)arg1;
- (id)_rebasedSectionLayoutsWithDataSourceTranslator:(id)arg1;
- (id)_queryClientForSectionDefintionForSectionIndex:(long long)arg1;
- (void)_solveWithSectionLayouts:(id)arg1 preferredSizesDict:(id)arg2 dataSourceSnapshot:(id)arg3 update:(id)arg4;
- (void)_diffNonItemSupplementariesForUpdate:(id)arg1 resolveResult:(id)arg2 initialSupplementaryKeysSectionDict:(id)arg3;
- (void)_configureLayoutForSections:(id)arg1;
- (_Bool)_canResolveWithoutQueryingSectionDefintionsForContainerChange;
- (id)_resolveOptionallyQueryingForSectionDefintions:(_Bool)arg1 retainPreferredSizing:(_Bool)arg2;
- (void)_recomputeSolutionBookmarksAndContentSize;
- (void)_updateBookmarkOffsetsForGlobalSupplementariesIfNeeded;
- (void)_invalidateAllAttributes;
- (id)_resolveOptionallyQueryingForSectionDefintions:(_Bool)arg1;
- (void)invalidateCachedItemsAttributes;
- (void)invalidateCachedSupplementaryAttributes;
- (void)invalidateCachedDecorationAttributes;
- (_Bool)orthogonalScrollingSectionDecorationShouldScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (id)_snapshotBookmarks:(id)arg1;
- (struct CGSize)_clampedSolutionSizeForSolution:(id)arg1 layoutAxis:(int)arg2 scrollsOrthogonally:(_Bool)arg3;
- (void)_updateSectionIndexer:(id)arg1 frame:(struct CGRect)arg2 solution:(id)arg3 section:(long long)arg4;
- (void)_restoreStateFromBookmarkSnapshots:(id)arg1 bookmarks:(id)arg2 update:(id)arg3;
- (struct CGSize)_adjustedContentSizeIncludingContainerInsetsForSize:(struct CGSize)arg1;
- (void)_updateGeometryTranslator;
- (_Bool)_sectionHasBackgroundDecorationView:(long long)arg1;
- (void)_enrichLayoutAttributes:(id)arg1 inSection:(id)arg2;
- (void)_setCachedSupplementaryAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3;
- (void)_setCachedDecorationAttributesForElementKind:(id)arg1 indexPath:(id)arg2 attributes:(id)arg3;
- (struct CGPoint)_attributesOffsetFromContainer;
- (struct CGRect)_attributesQueryRectForRect:(struct CGRect)arg1;
- (void)invalidateCachedItemsAttributesForItemsAtIndexPaths:(id)arg1;
- (void)invalidateCachedSupplementaryAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)invalidateCachedDecorationAttributesForElementKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)_registerDecorationItemsIfNeeded:(id)arg1;
- (struct CGPoint)_firstBookmarkOffset;
- (struct CGRect)_dynamicReferenceBounds;

@end
