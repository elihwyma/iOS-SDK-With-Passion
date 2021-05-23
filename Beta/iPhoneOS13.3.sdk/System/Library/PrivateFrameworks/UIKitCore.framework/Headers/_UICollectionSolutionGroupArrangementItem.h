/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCollectionLayoutItem, _UICollectionLayoutItemSolver;

__attribute__((visibility("hidden")))
@interface _UICollectionSolutionGroupArrangementItem : NSObject

{
    _UICollectionLayoutItemSolver *_solution;
    struct CGRect _layoutFrame;
}

@property (nonatomic) struct CGRect layoutFrame;
@property (nonatomic, readonly) _UICollectionLayoutItemSolver *solution;
@property (nonatomic, readonly) NSCollectionLayoutItem *item;

- (id)initWithSolution:(id)arg1;

@end
