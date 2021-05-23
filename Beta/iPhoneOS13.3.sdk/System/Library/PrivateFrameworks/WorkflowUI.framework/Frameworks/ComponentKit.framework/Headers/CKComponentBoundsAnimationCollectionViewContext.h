/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, UICollectionView;

@interface CKComponentBoundsAnimationCollectionViewContext : NSObject

{
    UICollectionView *_collectionView;
    long long _numberOfSections;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _numberOfItemsInSection;
    NSDictionary *_indexPathsToSnapshotViews;
    NSDictionary *_supplementaryElementIndexPathsToSnapshotViews;
    NSDictionary *_decorationElementIndexPathsToSnapshotViews;
    NSDictionary *_indexPathsToOriginalLayoutAttributes;
    NSDictionary *_supplementaryElementIndexPathsToOriginalLayoutAttributes;
    NSDictionary *_decorationElementIndexPathsToOriginalLayoutAttributes;
}

- (id).cxx_construct;
- (id)initWithCollectionView:(id)arg1;
- (void)applyBoundsAnimationToCollectionView:(const struct CKComponentBoundsAnimation *)arg1;

@end
