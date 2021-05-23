/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutSolutionState, _UICollectionLayoutSupplementaryRegistrar;

@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionEstimatedSolver : NSObject <Swift>

{
    _Bool _layoutRTL;
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;
    int _layoutAxis;
    int _containerLayoutAxis;
    NSCollectionLayoutSection *_layoutSection;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    long long _frameCount;
    id <_UICollectionPreferredSizes> _preferredSizes;
    _UICollectionLayoutAuxillaryItemSolver *_sectionSupplementarySolution;
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;
    id <NSCollectionLayoutContainer> _memoizedSupplementaryHostContainer;
    _UICollectionLayoutSolutionState *_solutionState;
    struct CGPoint _orthogonalOffset;
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;
}

@property (nonatomic, readonly) id <_UICollectionPreferredSizes> preferredSizes;
@property (retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *sectionSupplementarySolution;
@property (retain, nonatomic) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) id <NSCollectionLayoutContainer> memoizedSupplementaryHostContainer;
@property (retain, nonatomic) _UICollectionLayoutSolutionState *solutionState;
@property (nonatomic) int containerLayoutAxis;
@property (nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSCollectionLayoutSection *layoutSection;
@property (nonatomic, readonly) id <NSCollectionLayoutContainer> container;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) _Bool layoutRTL;
@property (nonatomic, readonly) int layoutAxis;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) struct CGRect effectiveContentFrame;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint orthogonalOffset;

- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)_sectionContainer;
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (struct CGSize)auxillaryHostContentSize;
- (struct CGSize)auxillaryHostPinningContentSize;
- (id)auxillaryHostContainer;
- (id)auxillaryHostAuxillaryItems;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (int)auxillaryHostLayoutAxis;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5;
- (id)resolveWithParameters:(id)arg1 preferredSizes:(id)arg2;
- (void)updatePinnedSupplementaryItemsWithVisibleBounds:(struct CGRect)arg1;
- (id)queryFramesIntersectingRect:(struct CGRect)arg1;
- (id)frameForIndex:(long long)arg1;
- (id)sectionSupplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)sectionSupplementaryFrameForIndex:(long long)arg1;
- (long long)sectionSupplementaryKindIndexForEnrollmentIdentifier:(id)arg1;
- (id)allSupplementaryKeys;
- (id)supplementaryKeysAssociatedWithItemAtIndex:(long long)arg1;
- (id)visualDescription;
- (void)_setOrthogonalOffset:(struct CGPoint)arg1;
- (double)_dimensionForRootGroupAlongAxis:(int)arg1;
- (id)initWithLayoutSection:(id)arg1;
- (id)_solveWithParameters:(id)arg1;
- (void)_configureInitialOrthogonalPrefetchingUnitVector;
- (id)_indexesOfBookmarksAffectedByResolveItems:(id)arg1;
- (void)_updateSolutionAuxillaryRangeIndexerKindDict:(id)arg1 fromBookmark:(id)arg2;
- (struct CGRect)_adjustContentFrameForLastPartialSolutionIfNeededForContentFrame:(struct CGRect)arg1 bookmarks:(id)arg2;
- (struct CGRect)_rectWithContentInsetTrailingLayoutDimensionAddedToToRect:(struct CGRect)arg1 insets:(struct NSDirectionalEdgeInsets)arg2 layoutAxis:(int)arg3;

@end
