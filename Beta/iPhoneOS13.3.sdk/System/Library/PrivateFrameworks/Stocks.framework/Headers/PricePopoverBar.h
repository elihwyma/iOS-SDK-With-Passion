/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage, UIImageView, UILabel;

@interface PricePopoverBar : UIView

{
    UILabel *_priceLabel;
    UILabel *_percentChangeLabel;
    UIImage *_backgroundImage;
    UIImageView *_priceChangeSignView;
    UIImageView *_percentChangeSignView;
    UIColor *_imageMaskColor;
}

@property (retain, nonatomic) UIColor *imageMaskColor;

- (void)layoutSubviews;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)setPriceString:(id)arg1;
- (id)initWithBackgroundImage:(id)arg1;
- (void)setPercentChange:(id)arg1;
- (void)setChangeImage:(id)arg1;

@end
