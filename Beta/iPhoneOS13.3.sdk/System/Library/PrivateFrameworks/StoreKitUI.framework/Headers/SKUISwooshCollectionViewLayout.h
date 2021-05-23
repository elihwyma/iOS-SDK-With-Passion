/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewFlowLayout.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout

{
    UIColor *_backgroundColor;
    _Bool _snapsToItemBoundaries;
    _Bool _snapsToItemCenters;
}

@property (copy, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool snapsToItemBoundaries;
@property (nonatomic) _Bool snapsToItemCenters;

+ (Class)layoutAttributesClass;
+ (float)snapToBoundariesDecelerationRate;

- (id)init;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;

@end
