/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSCollectionLayoutSection, UICollectionViewCompositionalLayoutConfiguration, _UICollectionCompositionalLayoutSolver, _UICollectionCompositionalLayoutSolverUpdate, _UIDataSourceSnapshotter, _UIUpdateVisibleCellsContext;

@protocol _UICollectionCompositionalLayoutSolverResolveResult;

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout

{
    UICollectionViewCompositionalLayoutConfiguration *_configuration;
    _Bool _defersInitialSolveUntilPrepare;
    _Bool _shouldAdjustContentInsetModeForCollectionViewNeverMode;
    _Bool _isInUpdateVisibleCellsPass;
    _Bool _layoutRTL;
    _Bool _roundsToScreenScale;
    NSCollectionLayoutSection *_layoutSectionTemplate;
    CDUnknownBlockType _layoutSectionProvider;
    _UICollectionCompositionalLayoutSolver *_solver;
    _UIDataSourceSnapshotter *_dataSourceSnapshotter;
    unsigned long long _edgesForSafeAreaPropagation;
    _UIUpdateVisibleCellsContext *_updateVisibleCellsContext;
    _UICollectionCompositionalLayoutSolverUpdate *_currentUpdate;
    id <_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
    CDUnknownBlockType _dynamicsConfigurationHandler;
    struct CGSize _memoizedPreviousInvalidationCollectionViewBoundsSize;
    struct UIEdgeInsets _memoizedDynamicAnimatorWorldAdjustingInsets;
    struct UIEdgeInsets _memoizedPreviousLayoutMargins;
    struct CGRect _contentFrame;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSectionTemplate;
@property (copy, nonatomic) CDUnknownBlockType layoutSectionProvider;
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolver *solver;
@property (nonatomic) _Bool defersInitialSolveUntilPrepare;
@property (nonatomic) struct UIEdgeInsets memoizedDynamicAnimatorWorldAdjustingInsets;
@property (nonatomic) struct UIEdgeInsets memoizedPreviousLayoutMargins;
@property (nonatomic) struct CGSize memoizedPreviousInvalidationCollectionViewBoundsSize;
@property (retain, nonatomic) _UIDataSourceSnapshotter *dataSourceSnapshotter;
@property (nonatomic) struct CGRect contentFrame;
@property (nonatomic) _Bool shouldAdjustContentInsetModeForCollectionViewNeverMode;
@property (nonatomic) unsigned long long edgesForSafeAreaPropagation;
@property (nonatomic) _Bool isInUpdateVisibleCellsPass;
@property (retain, nonatomic) _UIUpdateVisibleCellsContext *updateVisibleCellsContext;
@property (retain, nonatomic) _UICollectionCompositionalLayoutSolverUpdate *currentUpdate;
@property (retain, nonatomic) id <_UICollectionCompositionalLayoutSolverResolveResult> currentResolveResult;
@property (nonatomic) _Bool layoutRTL;
@property (nonatomic) _Bool roundsToScreenScale;
@property (copy, nonatomic) CDUnknownBlockType dynamicsConfigurationHandler;
@property (copy, nonatomic) UICollectionViewCompositionalLayoutConfiguration *configuration;

- (id)boundarySupplementaryItems;
- (id)initWithLayoutSection:(id)arg1;
- (int)_layoutAxis;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)_fullResolve;
- (void)_computeAndUpdateAdjustedContentFrame;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)initWithSection:(id)arg1 sectionProvider:(CDUnknownBlockType)arg2 configuration:(id)arg3;
- (long long)scrollDirection;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(struct CGRect)arg1 preparingLayout:(_Bool)arg2;
- (_Bool)_shouldInvalidateLayoutForBoundsSizeChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(struct CGRect)arg1;
- (id)_boundsChangeResolve;
- (id)_marginsChangeResolve;
- (id)_updateResolve;
- (id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (_Bool)_estimatesSizes;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets)arg1;
- (id)_containerFromCollectionView;
- (id)_dataSourceSnapshotter;
- (_Bool)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(int)arg1 container:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (_Bool)_estimatesSupplementaryItems;
- (void)_willPerformUpdateVisibleCellsPass;
- (void)_didPerformUpdateVisibleCellsPass;
- (void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (_Bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2;
- (_Bool)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (_Bool)_preparedForBoundsChanges;
- (_Bool)_overridesSafeAreaPropagationToDescendants;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (_Bool)_disallowsFadeCellsForBoundsChange;
- (void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2;
- (_Bool)_hasOrthogonalScrollingSections;
- (id)_orthogonalScrollingSections;
- (void)_setOffset:(struct CGPoint)arg1 forOrthogonalScrollingSection:(long long)arg2;
- (struct CGPoint)_offsetForOrthogonalScrollingSection:(long long)arg1;
- (_Bool)_shouldConfigureForPagingForOrthogonalScrollingSection:(long long)arg1;
- (double)_orthogonalScrollingPagingDimensionForSection:(long long)arg1;
- (_Bool)_orthogonalScrollingShouldCenterCustomPagingSizeForSection:(long long)arg1;
- (struct CGPoint)_orthogonalScrollingTargetContentOffsetForOffset:(struct CGPoint)arg1 section:(long long)arg2;
- (_Bool)_orthogonalScrollingUsesTargetContentOffsetForSection:(long long)arg1;
- (int)_orthogonalScrollingAxis;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (struct CGVector)_scrollingUnitVectorForOrthogonalScrollingSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (struct CGRect)_orthogonalScrollingContentRectForSection:(long long)arg1;
- (struct NSDirectionalEdgeInsets)_orthogonalScrollingContentInsetsForSection:(long long)arg1;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect)arg1;
- (_Bool)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (_Bool)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (struct CGRect)_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect)arg2;
- (_Bool)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;

@end
