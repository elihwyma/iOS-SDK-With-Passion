/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface UICollectionViewLayoutInvalidationContext : NSObject

{
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSArray *_updateItems;
    NSArray *_previousIndexPathsForReorderedItems;
    NSArray *_targetIndexPathsForReorderedItems;
    struct CGPoint _reorderingTarget;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    struct {
        unsigned int invalidateDataSource:1;
        unsigned int invalidateEverything:1;
    } _invalidationContextFlags;
    _Bool _retainExistingSizingInfoForEstimates;
    long long _intent;
}

@property (nonatomic, setter=_setInvalidateDataSourceCounts:) _Bool invalidateDataSourceCounts;
@property (nonatomic, setter=_setInvalidateEverything:) _Bool invalidateEverything;
@property (retain, nonatomic, getter=_updateItems, setter=_setUpdateItems:) NSArray *updateItems;
@property (copy, nonatomic, setter=_setPreviousIndexPathsForInteractivelyMovingItems:) NSArray *previousIndexPathsForInteractivelyMovingItems;
@property (copy, nonatomic, setter=_setTargetIndexPathsForInteractivelyMovingItems:) NSArray *targetIndexPathsForInteractivelyMovingItems;
@property (nonatomic, setter=_setInteractiveMovementTarget:) struct CGPoint interactiveMovementTarget;
@property (nonatomic, getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:) _Bool retainExistingSizingInfoForEstimates;
@property (nonatomic, getter=_intent, setter=_setIntent:) long long intent;
@property (nonatomic, readonly) NSArray *invalidatedItemIndexPaths;
@property (nonatomic, readonly) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (nonatomic, readonly) NSDictionary *invalidatedDecorationIndexPaths;
@property (nonatomic) struct CGPoint contentOffsetAdjustment;
@property (nonatomic) struct CGSize contentSizeAdjustment;

- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)_invalidatedSupplementaryViews;
- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;

@end
