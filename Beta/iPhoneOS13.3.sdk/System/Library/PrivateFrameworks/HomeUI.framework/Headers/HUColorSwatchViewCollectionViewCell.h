/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HUColorSwatchView;

@interface HUColorSwatchViewCollectionViewCell : UICollectionViewCell

{
    HUColorSwatchView *_swatchView;
}

@property (nonatomic, readonly) HUColorSwatchView *swatchView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
