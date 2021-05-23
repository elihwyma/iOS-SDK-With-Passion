/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, _UIRTree;

@protocol _UICollectionLayoutAuxillaryOffsets;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutItemSolverState : NSObject

{
    NSArray *_itemFrames;
    NSArray *_auxillaryFrames;
    NSDictionary *_supplementaryDictByKindIndex;
    id <_UICollectionLayoutAuxillaryOffsets> _supplementaryFrameOffsets;
    _UIRTree *_geometricIndexer;
    NSArray *_solutionFrames;
    long long _itemFrameCount;
    long long _supplementaryFrameCount;
    NSArray *_availableLayoutSpaces;
    struct CGRect _solvedFittingFrame;
}

@property (nonatomic, readonly) NSArray *solutionFrames;
@property (nonatomic, readonly) _UIRTree *geometricIndexer;
@property (nonatomic, readonly) long long itemFrameCount;
@property (nonatomic, readonly) long long supplementaryFrameCount;
@property (nonatomic, readonly) NSArray *availableLayoutSpaces;
@property (nonatomic, readonly) struct CGRect solvedFittingFrame;
@property (nonatomic, readonly) NSArray *itemFrames;
@property (nonatomic, readonly) NSArray *auxillaryFrames;
@property (nonatomic, readonly) NSDictionary *supplementaryDictByKindIndex;
@property (nonatomic, readonly) id <_UICollectionLayoutAuxillaryOffsets> supplementaryFrameOffsets;

- (id)initWithSolutionFrames:(id)arg1 itemFrameCount:(long long)arg2 supplementaryFrameCount:(long long)arg3 availableLayoutSpaces:(id)arg4 solvedFittingFrame:(struct CGRect)arg5;
- (void)_generateGeometricIndexer;
- (void)_generateMemoizedSolutionFramesBasedData;

@end
