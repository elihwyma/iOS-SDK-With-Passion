/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@interface HKHorizontalFlowLayout : UICollectionViewFlowLayout

{
    _Bool _snapsToItemBoundaries;
    _Bool _snapsToItemCenters;
}

@property (nonatomic) _Bool snapsToItemBoundaries;
@property (nonatomic) _Bool snapsToItemCenters;
@property (nonatomic) double leadingInset;
@property (nonatomic) double trailingInset;

+ (double)snapToBoundariesDecelerationRate;

- (id)init;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end
