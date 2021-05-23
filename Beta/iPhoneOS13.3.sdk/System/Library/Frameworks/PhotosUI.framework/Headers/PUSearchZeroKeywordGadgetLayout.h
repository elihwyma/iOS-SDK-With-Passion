/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface PUSearchZeroKeywordGadgetLayout : UICollectionViewFlowLayout

{
    double _columnWidth;
}

@property (nonatomic) double columnWidth;

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;

@end
