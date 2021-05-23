/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, VUIProductUberBackgroundViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundView : UIView

{
    VUIProductUberBackgroundViewLayout *_layout;
    _TVImageView *_imageView;
    CAGradientLayer *_maskGradientLayer;
    UIView *_blurEffectView;
    double _contentOffset;
}

@property (retain, nonatomic) CAGradientLayer *maskGradientLayer;
@property (retain, nonatomic) UIView *blurEffectView;
@property (nonatomic) double contentOffset;
@property (retain, nonatomic) VUIProductUberBackgroundViewLayout *layout;
@property (retain, nonatomic) _TVImageView *imageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageOffset:(double)arg1;
- (void)configureBlurWithInterfaceStyle:(long long)arg1;

@end
