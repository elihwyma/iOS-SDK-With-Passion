/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSCollectionLayoutSection, _UICollectionPreferredSizes;

@protocol _UICollectionLayoutSectionSolver;

__attribute__((visibility("hidden")))
@interface _UICollectionSectionSolutionBookmark : NSObject

{
    id <_UICollectionLayoutSectionSolver> _solution;
    NSCollectionLayoutSection *_section;
    struct CGRect _globalFrame;
    struct CGSize _contentSize;
    _UICollectionPreferredSizes *_preferredSizes;
}

@property (nonatomic, readonly) id <_UICollectionLayoutSectionSolver> solution;
@property (nonatomic, readonly) struct CGRect globalFrame;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) struct CGRect orthogonalContentLayoutFrame;
@property (nonatomic, readonly) struct CGSize orthogonalContentSize;
@property (nonatomic, readonly) NSCollectionLayoutSection *section;
@property (nonatomic, readonly) _UICollectionPreferredSizes *preferredSizes;

- (id)description;
- (id)initWithSolution:(id)arg1 globalFrame:(struct CGRect)arg2 contentSize:(struct CGSize)arg3 section:(id)arg4 preferredSizes:(id)arg5;
- (id)copyWithGlobalFrame:(struct CGRect)arg1;
- (id)initWithSolution:(id)arg1 globalFrame:(struct CGRect)arg2 contentSize:(struct CGSize)arg3 section:(id)arg4;

@end
