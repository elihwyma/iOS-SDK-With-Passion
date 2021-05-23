/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

__attribute__((visibility("hidden")))
@interface PUAdjustmentsViewFlowLayout : UICollectionViewFlowLayout

- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)nearestIndexPathForVisibleItemAtPoint:(struct CGPoint)arg1;

@end
