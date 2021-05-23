/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@interface PXPeopleCollectionViewLayout : UICollectionViewFlowLayout

{
    unsigned long long _firstVisibleCellIndex;
}

@property (nonatomic) unsigned long long firstVisibleCellIndex;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end
