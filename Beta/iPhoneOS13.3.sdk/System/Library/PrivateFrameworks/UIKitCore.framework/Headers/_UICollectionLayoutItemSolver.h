/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSCollectionLayoutItem, NSString, UITraitCollection, _UICollectionLayoutItemSolverState;

@protocol NSCollectionLayoutContainer, _UICollectionLayoutAuxillaryOffsets, _UICollectionLayoutSupplementaryEnrolling, _UICollectionPreferredSizes;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutItemSolver : NSObject <Swift>

{
    _Bool _layoutRTL;
    int _layoutAxis;
    NSCollectionLayoutItem *_item;
    id <NSCollectionLayoutContainer> _container;
    UITraitCollection *_traitCollection;
    _UICollectionLayoutItemSolverState *_solveResult;
    id <_UICollectionPreferredSizes> _preferredSizes;
    id <_UICollectionLayoutSupplementaryEnrolling> _supplementaryEnroller;
    long long _solutionRecursionDepth;
    long long _maxFrameCount;
}

@property (retain, nonatomic) _UICollectionLayoutItemSolverState *solveResult;
@property (retain, nonatomic) id <_UICollectionPreferredSizes> preferredSizes;
@property (retain, nonatomic) id <_UICollectionLayoutSupplementaryEnrolling> supplementaryEnroller;
@property (nonatomic, readonly) long long solutionRecursionDepth;
@property (nonatomic, readonly) long long maxFrameCount;
@property (nonatomic, readonly) int layoutAxis;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;
@property (nonatomic, readonly) id <NSCollectionLayoutContainer> container;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) _Bool layoutRTL;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) long long itemFrameCount;
@property (nonatomic, readonly) long long auxillaryFrameCount;
@property (nonatomic, readonly) struct CGRect layoutFrame;
@property (nonatomic, readonly) struct CGRect contentFrame;
@property (nonatomic, readonly) NSArray *itemFrames;
@property (nonatomic, readonly) NSArray *auxillaryFrames;
@property (nonatomic, readonly) id <_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3;
- (id)supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(int)arg5;
- (id)initWithItem:(id)arg1;
- (void)solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(_Bool)arg5;
- (struct CGSize)auxillaryHostContentSize;
- (struct CGSize)auxillaryHostPinningContentSize;
- (id)auxillaryHostContainer;
- (id)auxillaryHostAuxillaryItems;
- (_Bool)auxillaryHostShouldLayoutRTL;
- (int)auxillaryHostLayoutAxis;
- (long long)auxillaryHostAuxillaryKind;
- (id)auxillaryHostSupplementaryEnroller;
- (id)auxillaryHostPreferredSizes;
- (struct CGPoint)auxillaryHostAdditionalFrameOffset;
- (id)visualDescription;
- (void)_solve;
- (id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2 container:(id)arg3 layoutAxis:(int)arg4 traitCollection:(id)arg5 maxFrameCount:(long long)arg6 layoutRTL:(_Bool)arg7 preferredSizes:(id)arg8 solverResult:(id)arg9 solutionRecursionDepth:(long long)arg10;
- (id)availableLayoutSpaces;
- (void)solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(_Bool)arg5 preferredSizes:(id)arg6;
- (void)_solveForContainer:(id)arg1 layoutAxis:(int)arg2 traitCollection:(id)arg3 maxFrameCount:(long long)arg4 layoutRTL:(_Bool)arg5 preferredSizes:(id)arg6 solutionRecursionDepth:(long long)arg7;
- (id)queryFramesApplyingFrameOffset:(struct CGPoint)arg1;
- (id)_queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5;
- (id)_queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5;
- (id)_frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(struct CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(int)arg4;
- (id)_supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3;
- (id)_supplementaryFrameWithKind:(id)arg1 absoluteIndex:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3 interSolutionSpacing:(double)arg4 repeatAxis:(int)arg5;
- (double)_additionalDimensionForEdgeSpacingAlongAxis:(int)arg1 group:(id)arg2 trailingEdgeOnly:(_Bool)arg3;
- (void)_solveWithCustomGroupItemProvider;
- (void)_solveGroup;
- (void)_solveSingleItem;
- (struct CGSize)_effectiveContainerSizeForContainer:(id)arg1;
- (int)_layoutAxisForGroup:(id)arg1;
- (struct CGSize)_effectiveGroupSizeForGroup:(id)arg1 container:(id)arg2;
- (void)_warnIfClientSpecifiesFlexibleRootGroupEdgeSpacingAlongLayoutAxisAsNeededForGroup:(id)arg1 layoutAxis:(int)arg2;
- (void)_updateGroupByQueryingItemsIfNeeded:(id)arg1 container:(id)arg2;
- (id)initWithItem:(id)arg1 supplementaryEnroller:(id)arg2;
- (struct CGPoint)_outerContainerOffsetForGroup:(id)arg1 groupComputedSize:(struct CGSize)arg2 container:(id)arg3 outerLayoutAxis:(int)arg4;
- (id)_arrangeSolutionItems:(id)arg1 alongLayoutAxis:(int)arg2 forContainer:(id)arg3 additionalLayoutOffset:(struct CGPoint)arg4 interItemSpacing:(id)arg5;
- (void)_transformGroupArrangementItemsForRTL:(id)arg1;
- (unsigned long long)_directionalEdgeForLayoutAxis:(int)arg1 preEdge:(_Bool)arg2;
- (struct CGPoint)_layoutOffsetForContainer:(id)arg1;
- (void)_enumerateSolutionFramesForQueryRect:(struct CGRect)arg1 itemLimit:(long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (struct CGPoint)_frameOffsetForAdditionalFrameOffset:(struct CGPoint)arg1 repeatOffset:(long long)arg2 repeatAxis:(int)arg3 interSolutionSpacing:(double)arg4;
- (_Bool)canAccomodateItemWithSize:(struct CGSize)arg1;
- (struct CGSize)contentSizeForFrameCount:(long long)arg1 layoutAxis:(int)arg2;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2;
- (id)queryFramesWithItemLimit:(long long)arg1;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 itemLimit:(long long)arg5;
- (id)queryFramesWithQueryRect:(struct CGRect)arg1 additionalFrameOffset:(struct CGPoint)arg2 itemIndexOffset:(long long)arg3 itemLimit:(long long)arg4 supplementaryRepeatOffset:(long long)arg5;
- (id)frameForAbsoluteIndex:(long long)arg1 additionalFrameOffset:(struct CGPoint)arg2 interSolutionSpacing:(double)arg3 repeatAxis:(int)arg4;
- (struct CGRect)_adjustedFrameForFrame:(struct CGRect)arg1 offset:(struct CGPoint)arg2;
- (id)_normalizeVisualFormatParserItems:(id)arg1 layoutAxis:(int)arg2;

@end
