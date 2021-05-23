/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, NSSet, _UICollectionLayoutAuxillaryOffsets, _UIRTree;

@protocol _UICollectionLayoutAuxillaryHosting;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutAuxillaryItemSolver : NSObject

{
    long long _memoizedSupplementaryKind;
    NSArray *_memoizedAuxillaryItems;
    NSSet *_elementKinds;
    _Bool _hasEstimatedSizes;
    NSIndexSet *_pinnedSupplementaryIndexes;
    _UICollectionLayoutAuxillaryOffsets *_supplementariesThatCanAffectContentSize;
    id <_UICollectionLayoutAuxillaryHosting> _auxillaryHost;
    NSArray *_frames;
    NSDictionary *_enrolledSupplementaryFramesDict;
    NSDictionary *_supplementaryFramesKeyedByKindIndex;
    _UIRTree *_supplementaryItemGeometricIndexer;
    struct CGSize _contentSize;
    struct CGPoint _hostContentOffset;
    struct NSDirectionalEdgeInsets _hostContentSizeInsets;
}

@property (weak, nonatomic) id <_UICollectionLayoutAuxillaryHosting> auxillaryHost;
@property (retain, nonatomic) NSArray *frames;
@property (retain, nonatomic) NSDictionary *enrolledSupplementaryFramesDict;
@property (retain, nonatomic) NSDictionary *supplementaryFramesKeyedByKindIndex;
@property (retain, nonatomic) _UICollectionLayoutAuxillaryOffsets *supplementariesThatCanAffectContentSize;
@property (nonatomic, readonly) long long memoizedSupplementaryKind;
@property (nonatomic, readonly) NSArray *memoizedSupplementaryItems;
@property (nonatomic) _Bool hasEstimatedSizes;
@property (retain, nonatomic) _UIRTree *supplementaryItemGeometricIndexer;
@property (retain, nonatomic) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) struct NSDirectionalEdgeInsets hostContentSizeInsets;
@property (nonatomic, readonly) NSArray *supplementaryFrames;
@property (nonatomic, readonly) NSSet *elementKinds;
@property (nonatomic, readonly) _Bool contentSizeDiffersFromHostContentSize;
@property (nonatomic, readonly) struct CGPoint hostContentOffset;

- (void)resolve;
- (void)resolveSupplementaryItemsForVisibleBounds:(struct CGRect)arg1;
- (id)_queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2 additionalFrameOffset:(struct CGPoint)arg3;
- (id)supplementaryFrameWithKind:(id)arg1 index:(long long)arg2;
- (id)initWithAuxillaryHost:(id)arg1;
- (id)queryFramesIntersectingRect:(struct CGRect)arg1 frameOffset:(struct CGPoint)arg2;
- (id)visualDescription;
- (void)_solveForPinning:(_Bool)arg1 visibleRect:(struct CGRect)arg2;
- (struct CGRect)_frameForSupplementaryItem:(id)arg1 container:(id)arg2 contentSize:(struct CGSize)arg3 frameOffset:(struct CGPoint)arg4 applyPinning:(_Bool)arg5 visibleBounds:(struct CGRect)arg6 preferredSizes:(id)arg7 preferredIndex:(long long)arg8 layoutRTL:(_Bool)arg9;
- (struct CGSize)_computeContentSizeForEmptyHostContentSizeForContainer:(id)arg1 hostContentSize:(struct CGSize)arg2 layoutAxis:(int)arg3 supplementaryFrames:(id)arg4 preferredSizes:(id)arg5 layoutRTL:(_Bool)arg6 supplementaryKind:(long long)arg7;
- (id)_normalizedFramesAlongLayoutAxisForFrames:(id)arg1 layoutAxis:(int)arg2;
- (id)_rearrangedFramesForFrames:(id)arg1 container:(id)arg2 contentSize:(struct CGSize)arg3 applyPinning:(_Bool)arg4 frameOffset:(struct CGPoint)arg5 visibleBounds:(struct CGRect)arg6 preferredSizes:(id)arg7 layoutRTL:(_Bool)arg8 supplementaryKind:(long long)arg9;
- (void)_updateGeometricIndexer;
- (struct CGSize)_largestPossibleHostContentSizeForContainerSize:(struct CGSize)arg1 layoutAxis:(int)arg2;
- (struct CGSize)_requiredContentSizeForSupplementaryFrames:(id)arg1 forLayoutAxis:(int)arg2 containerSize:(struct CGSize)arg3;
- (id)_effectiveBoundarySupplementrayItem:(id)arg1 forLayoutAxis:(int)arg2;
- (id)supplementaryFramesWithOffset:(struct CGPoint)arg1;
- (id)_rearrangeSupplementaryItems:(id)arg1 byUpdatingPinning:(_Bool)arg2 forVisibleBounds:(struct CGRect)arg3 frameOffset:(struct CGPoint)arg4;
- (struct CGPoint)_offsetForContentSizeInsets:(struct NSDirectionalEdgeInsets)arg1;

@end
