/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewLayout.h>

@class NSArray, NSMutableDictionary, NSSet, UIColor, UIVisualEffect, _UICollectionCompositionalLayoutSolver, _UICollectionCompositionalLayoutSolverUpdate, _UICollectionViewListLayoutVisualProvider, _UICollectionViewListSeparatorDiff, _UICollectionViewListSnapshotter, _UIUpdateVisibleCellsContext;

@protocol UICollectionViewDataSource, UITableConstants, _UICollectionCompositionalLayoutSolverResolveResult, _UICollectionViewDelegateListLayout;

@interface _UICollectionViewListLayout : UICollectionViewLayout

{
    struct {
        unsigned int prepareSnapshotNeeded:1;
        unsigned int prepareSolverNeeded:1;
        unsigned int usesCustomSeparatorColor:1;
        unsigned int usesCustomSeparatorStyle:1;
    } _tableLayoutFlags;
    _UICollectionViewListLayoutVisualProvider *_visualProvider;
    NSSet *_floatingElementKinds;
    UIColor *_separatorColor;
    UIColor *_darkenedSeparatorColor;
    struct UIEdgeInsets _sectionContentInset;
    struct UIEdgeInsets _previousLayoutMargins;
    _UICollectionViewListSnapshotter *_dataSourceSnapshot;
    _UICollectionViewListSnapshotter *_previousDataSourceSnapshot;
    _UICollectionViewListSeparatorDiff *_currentUpdateDiff;
    _UICollectionCompositionalLayoutSolverUpdate *_currentUpdate;
    id <_UICollectionCompositionalLayoutSolverResolveResult> _currentResolveResult;
    _UIUpdateVisibleCellsContext *_updateVisibleCellsContext;
    _Bool _shouldDrawAdditionalSeparators;
    _Bool _cellLayoutMarginsFollowReadableWidth;
    _Bool _insetsContentViewsToSafeArea;
    _Bool _separatorInsetIsRelativeToCellEdges;
    _Bool _insetTopAndBottomSeparator;
    double _rowHeight;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    double _estimatedRowHeight;
    double _estimatedSectionHeaderHeight;
    double _estimatedSectionFooterHeight;
    id <UITableConstants> _constants;
    double _globalHeaderHeight;
    double _globalFooterHeight;
    long long _separatorStyle;
    UIVisualEffect *_separatorEffect;
    long long _appearanceStyle;
    double _estimatedGlobalHeaderHeight;
    double _estimatedGlobalFooterHeight;
    _UICollectionCompositionalLayoutSolver *_solver;
    NSMutableDictionary *_layoutSections;
    struct UIEdgeInsets _separatorInset;
}

@property (retain, nonatomic, getter=_constants) id <UITableConstants> constants;
@property (retain, nonatomic, getter=_solver, setter=_setSolver:) _UICollectionCompositionalLayoutSolver *solver;
@property (nonatomic, readonly, getter=_layoutSections) NSMutableDictionary *layoutSections;
@property (nonatomic, readonly, getter=_delegateActual) id <_UICollectionViewDelegateListLayout> delegateActual;
@property (nonatomic, readonly, getter=_delegateProxy) id <_UICollectionViewDelegateListLayout> delegateProxy;
@property (nonatomic, readonly, getter=_dataSourceActual) id <UICollectionViewDataSource> dataSourceActual;
@property (nonatomic, readonly, getter=_dataSourceProxy) id <UICollectionViewDataSource> dataSourceProxy;
@property (nonatomic, readonly, getter=_insetTopAndBottomSeparator) _Bool insetTopAndBottomSeparator;
@property (retain, nonatomic, getter=_floatingElementKinds, setter=_setFloatingElementKinds:) NSArray *floatingElementKinds;
@property (nonatomic, getter=_shouldDrawAdditionalSeparators, setter=_setShouldDrawAdditionalSeparators:) _Bool shouldDrawAdditionalSeparators;
@property (nonatomic) struct UIEdgeInsets separatorInset;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double globalHeaderHeight;
@property (nonatomic) double globalFooterHeight;
@property (nonatomic) long long separatorStyle;
@property (retain, nonatomic) UIColor *separatorColor;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;
@property (nonatomic, readonly) long long appearanceStyle;
@property (nonatomic) _Bool cellLayoutMarginsFollowReadableWidth;
@property (nonatomic) _Bool insetsContentViewsToSafeArea;
@property (nonatomic) _Bool separatorInsetIsRelativeToCellEdges;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (nonatomic) double estimatedGlobalHeaderHeight;
@property (nonatomic) double estimatedGlobalFooterHeight;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)init;
- (void)dealloc;
- (id)_scrollView;
- (_Bool)isEditing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)_shouldInvalidateLayoutForBoundsSizeChange:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (_Bool)_estimatesSizes;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets)arg1;
- (struct CGSize)collectionViewContentSize;
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
- (void)_traitCollectionDidChangeFromPreviousCollection:(id)arg1 newTraitCollection:(id)arg2;
- (id)_globalSupplementaryItems;
- (void)_updateConstants;
- (void)_constantsDidChange;
- (long long)_tableStyle;
- (_Bool)_sectionContentInsetFollowsLayoutMargins;
- (id)_accessoryBaseColor;
- (id)_multiselectCheckmarkColor;
- (_Bool)canBeEdited;
- (void)setEditing:(_Bool)arg1;
- (id)initWithAppearanceStyle:(long long)arg1;
- (_Bool)_separatorInsetIsRelativeToCellEdges;
- (_Bool)allowsMultipleSelection;
- (_Bool)allowsMultipleSelectionDuringEditing;
- (_Bool)_shouldDrawThickSeparators;
- (long long)_numberOfSections;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (void)_darkenedColorsChanged:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (_Bool)_shouldApplyReadableWidthInsets;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (struct CGPoint)_contentOffsetFromProposedContentOffset:(struct CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3;
- (struct UIEdgeInsets)_preferredLayoutMargins;
- (double)_separatorHeight;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_prepareSnapshot;
- (void)_prepareSolver;
- (void)_configureDefaultGradientMask;
- (id)_layoutContainer;
- (id)_layoutSectionAtIndex:(long long)arg1;
- (double)_sectionSpacingForAppearanceStyle;
- (struct UIEdgeInsets)_globalInsetsForAppearanceStyle;
- (id)_sectionConfigurationForSection:(long long)arg1;
- (void)_addPinningBehaviorToLayout:(id)arg1 forSection:(long long)arg2;
- (id)_preferredLayoutSectionForLayoutSection:(id)arg1 atIndex:(long long)arg2;
- (double)_effectiveEstimatedGlobalHeaderHeight;
- (double)_effectiveEstimatedGlobalFooterHeight;
- (void)_updateSolver;
- (void)_enrichCellLayoutAttributes:(id)arg1;
- (void)_enrichHeaderFooterLayoutAttributes:(id)arg1;
- (void)_separatorColorDidChange;
- (double)_defaultGlobalHeaderHeight;
- (double)_defaultGlobalFooterHeight;
- (id)_actualLayoutSectionAtIndex:(long long)arg1;

@end
