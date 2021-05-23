/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, NSString, UITraitCollection, _UICollectionLayoutAuxillaryItemSolver, _UICollectionLayoutItemSolver, _UICollectionLayoutSectionGeometryTranslator, _UICollectionLayoutSupplementaryRegistrar;

@protocol NSCollectionLayoutContainer, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSectionListSolver : NSObject <Swift>

{
    struct vector<CGRect, std::__1::allocator<CGRect>> _itemFrames;
    _Bool _shouldAdjustContentSizeForPartialLastGroupSolution;
    _Bool _layoutRTL;
    int _layoutAxis;
    int _containerLayoutAxis;
    NSCollectionLayoutSection *_layoutSection;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    long long _frameCount;
    _UICollectionLayoutItemSolver *_solution;
    _UICollectionLayoutAuxillaryItemSolver *_sectionAuxillarySolution;
    _UICollectionLayoutSupplementaryRegistrar *_sectionSupplementaryRegistrar;
    _UICollectionLayoutSectionGeometryTranslator *_sectionGeometryTranslator;
    id <NSCollectionLayoutContainer> _memoizedAuxillaryHostContainer;
    id <_UICollectionPreferredSizes> _preferredSizes;
    struct CGPoint _orthogonalOffset;
    struct CGVector _orthogonalScrollingPrefetchingUnitVector;
}

@property (retain, nonatomic) NSCollectionLayoutSection *layoutSection;
@property (retain, nonatomic) id <NSCollectionLayoutContainer> container;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) _Bool layoutRTL;
@property (nonatomic) int layoutAxis;
@property (nonatomic) int containerLayoutAxis;
@property (nonatomic) long long frameCount;
@property (retain, nonatomic) _UICollectionLayoutItemSolver *solution;
@property (retain, nonatomic) _UICollectionLayoutAuxillaryItemSolver *sectionAuxillarySolution;
@property (retain, nonatomic) _UICollectionLayoutSupplementaryRegistrar *sectionSupplementaryRegistrar;
@property (retain, nonatomic) _UICollectionLayoutSectionGeometryTranslator *sectionGeometryTranslator;
@property (retain, nonatomic) id <NSCollectionLayoutContainer> memoizedAuxillaryHostContainer;
@property (retain, nonatomic) id <_UICollectionPreferredSizes> preferredSizes;
@property (nonatomic) struct CGVector orthogonalScrollingPrefetchingUnitVector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect effectiveContentFrame;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint orthogonalOffset;

- (id).cxx_construct;
- (void)solveForContainer:(id)arg1 traitCollection:(id)arg2 layoutAxis:(int)arg3 frameCount:(long long)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6;
- (id)_resolveWithParameters:(id)arg1;
- (id)_queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)_sectionContainer;
- (long long)_binarySearchInitialFrameIndexForStartIndex:(long long)arg1 endIndex:(long long)arg2 lowIndex:(long long)arg3 queryRect:(struct CGRect)arg4;
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

@end
