/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSString, UICollectionView, UICollectionViewLayoutInvalidationContext, UIDynamicAnimator, _UICollectionViewCompositionLayout;

@interface UICollectionViewLayout : NSObject <Swift>

{
    UICollectionView *_collectionView;
    struct CGSize _collectionViewBoundsSize;
    NSMutableDictionary *_initialAnimationLayoutAttributesDict;
    NSMutableDictionary *_finalAnimationLayoutAttributesDict;
    NSMutableDictionary *_deletedSupplementaryIndexPathsDict;
    NSMutableDictionary *_insertedSupplementaryIndexPathsDict;
    NSMutableDictionary *_deletedDecorationIndexPathsDict;
    NSMutableDictionary *_insertedDecorationIndexPathsDict;
    NSMutableIndexSet *_deletedSectionsSet;
    NSMutableIndexSet *_insertedSectionsSet;
    NSMutableDictionary *_decorationViewClassDict;
    NSMutableDictionary *_decorationViewNibDict;
    NSMutableDictionary *_decorationViewExternalObjectsTables;
    UICollectionViewLayout *_transitioningFromLayout;
    UICollectionViewLayout *_transitioningToLayout;
    UIDynamicAnimator *_animator;
    UICollectionViewLayoutInvalidationContext *_invalidationContext;
    struct CGRect _frame;
    NSIndexSet *_sections;
    NSIndexSet *_items;
    NSArray *_elementKinds;
    struct _UICollectionViewCompositionLayout *_compositionLayout;
    UICollectionViewLayout *_siblingLayout;
    struct CGPoint _layoutOffset;
    unsigned long long _layoutOffsetEdges;
    struct {
        unsigned int inTransitionFromTransitionLayout:1;
        unsigned int inTransitionToTransitionLayout:1;
        unsigned int prepared:1;
        unsigned int wantsRightToLeftHorizontalMirroringIfNeeded:1;
    } _layoutFlags;
    long long _sublayoutType;
}

@property (nonatomic, getter=_frame, setter=_setFrame:) struct CGRect frame;
@property (copy, nonatomic, getter=_sections, setter=_setSections:) NSIndexSet *sections;
@property (copy, nonatomic, getter=_items, setter=_setItems:) NSIndexSet *items;
@property (copy, nonatomic, getter=_elementKinds, setter=_setElementKinds:) NSArray *elementKinds;
@property (nonatomic, getter=_compositionLayout, setter=_setCompositionLayout:) _UICollectionViewCompositionLayout *compositionLayout;
@property (nonatomic, getter=_siblingLayout, setter=_setSiblingLayout:) UICollectionViewLayout *siblingLayout;
@property (nonatomic, getter=_layoutOffset, setter=_setLayoutOffset:) struct CGPoint layoutOffset;
@property (nonatomic, getter=_layoutOffsetEdges, setter=_setLayoutOffsetEdges:) unsigned long long layoutOffsetEdges;
@property (nonatomic, getter=_sublayoutType, setter=_setSublayoutType:) long long sublayoutType;
@property (nonatomic, getter=_isPrepared, setter=_setPrepared:) _Bool prepared;
@property (nonatomic, readonly, getter=_focusFastScrollingIndexBarInsets) struct UIEdgeInsets focusFastScrollingIndexBarInsets;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGRect)bounds;
- (void)invalidateLayout;
- (struct CGRect)_bounds;
- (int)_layoutAxis;
- (_Bool)isEditing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (_Bool)_estimatesSizes;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)registerClass:(Class)arg1 forDecorationViewOfKind:(id)arg2;
- (void)_setWantsRightToLeftHorizontalMirroringIfNeeded:(_Bool)arg1;
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
- (struct CGRect)_dynamicReferenceBounds;
- (id)_dynamicAnimator;
- (_Bool)canBeEdited;
- (void)setEditing:(_Bool)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(struct CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(struct CGPoint)arg4;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (struct CGPoint)_contentOffsetFromProposedContentOffset:(struct CGPoint)arg1 forScrollingToItemAtIndexPath:(id)arg2 atScrollPosition:(unsigned long long)arg3;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (struct UIEdgeInsets)_preferredLayoutMargins;
- (_Bool)_needsRecomputeOfPreferredAttributesForVisibleEstimatedItemsDuringUpdate;
- (void)_invalidateLayoutUsingContext:(id)arg1;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)_decorationViewForLayoutAttributes:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_prepareToAnimateFromCollectionViewItems:(id)arg1 atContentOffset:(struct CGPoint)arg2 toItems:(id)arg3 atContentOffset:(struct CGPoint)arg4;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)_finalizeCollectionViewItemAnimations;
- (void)finalizeAnimatedBoundsChange;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (struct CGPoint)transitionContentOffsetForProposedContentOffset:(struct CGPoint)arg1 keyItemIndexPath:(id)arg2;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)_finalizeLayoutTransition;
- (void)_didFinishLayoutTransitionAnimations:(_Bool)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (struct CGPoint)_contentOffsetForScrollingToSection:(long long)arg1;
- (struct CGPoint)updatesContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (id)_reorderingTargetItemIndexPathForPosition:(struct CGPoint)arg1 withPreviousIndexPath:(id)arg2;
- (id)_invalidationContextForReorderingTargetPosition:(struct CGPoint)arg1 targetIndexPaths:(id)arg2 withPreviousPosition:(struct CGPoint)arg3 previousIndexPaths:(id)arg4;
- (id)_invalidationContextForEndingReorderingItemToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 reorderingCancelled:(_Bool)arg3;
- (long long)developmentLayoutDirection;
- (_Bool)_wantsRightToLeftHorizontalMirroringIfNeeded;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLayout:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toLayout:(id)arg2;
- (id)_layoutAttributesForReorderedItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint)arg2;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2;
- (void)finalizeLayoutTransition;
- (id)_indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (struct CGPoint)_offsetInTopParentLayout:(struct _UICollectionViewCompositionLayout **)arg1;
- (id)targetIndexPathForInteractivelyMovingItem:(id)arg1 withPosition:(struct CGPoint)arg2;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)arg1 previousIndexPaths:(id)arg2 movementCancelled:(_Bool)arg3;
- (id)_orthogonalScrollingTrace;
- (id)snapshottedLayoutAttributeForItemAtIndexPath:(id)arg1;
- (void)registerNib:(id)arg1 forDecorationViewOfKind:(id)arg2;
- (void)_setCollectionViewBoundsSize:(struct CGSize)arg1;
- (void)_setDynamicAnimator:(id)arg1;
- (void)_setExternalObjectTable:(id)arg1 forNibLoadingOfDecorationViewOfKind:(id)arg2;
- (struct CGSize)_fallbackItemSize;
- (id)_layoutAttributesForElementsInProjectedRect:(struct CGRect)arg1 withProjectionVector:(struct CGVector)arg2 projectionDistance:(double)arg3;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;

@end
