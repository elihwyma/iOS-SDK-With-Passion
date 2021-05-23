/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSIndexPath;

__attribute__((visibility("hidden")))
@interface SKUICarouselCollectionViewLayout : UICollectionViewFlowLayout

{
    NSIndexPath *_startScrollingIndexPath;
}

@property (retain, nonatomic) NSIndexPath *startScrollingIndexPath;

+ (Class)layoutAttributesClass;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (void)_panGestureRecognized:(id)arg1;
- (struct CGPoint)_collectionViewBoundsCenter;

@end
