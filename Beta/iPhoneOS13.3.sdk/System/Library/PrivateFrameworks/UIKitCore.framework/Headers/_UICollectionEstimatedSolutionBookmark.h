/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UICollectionLayoutItemSolver;

@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionEstimatedSolutionBookmark : NSObject

{
    _UICollectionLayoutItemSolver *_solution;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryOffsets;
    struct _NSRange _itemRange;
    struct CGRect _solutionFrame;
}

@property (nonatomic, readonly) _UICollectionLayoutItemSolver *solution;
@property (nonatomic, readonly) struct CGRect solutionFrame;
@property (nonatomic, readonly) struct _NSRange itemRange;
@property (nonatomic, readonly) id <_UICollectionLayoutAuxillaryOffsets> supplementaryOffsets;

- (id)description;
- (id)initWithSolution:(id)arg1 frame:(struct CGRect)arg2 itemIndexOffset:(long long)arg3 supplementaryOffsets:(id)arg4 maxItemFrameCount:(long long)arg5;
- (id)_supplementaryOffsetsForItemRange:(struct _NSRange)arg1 solution:(id)arg2 supplementaryOffsets:(id)arg3;

@end
