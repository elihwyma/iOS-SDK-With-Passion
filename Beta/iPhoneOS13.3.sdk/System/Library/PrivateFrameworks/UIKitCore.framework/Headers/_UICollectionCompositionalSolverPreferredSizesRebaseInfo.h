/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UICollectionPreferredSizes;

@protocol _UICollectionLayoutSectionSolver;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalSolverPreferredSizesRebaseInfo : NSObject

{
    id <_UICollectionLayoutSectionSolver> _solution;
    _UICollectionPreferredSizes *_preferredSizes;
}

@property (nonatomic, readonly) id <_UICollectionLayoutSectionSolver> solution;
@property (nonatomic, readonly) _UICollectionPreferredSizes *preferredSizes;

- (id)initWithSolution:(id)arg1 preferredSizes:(id)arg2;

@end
