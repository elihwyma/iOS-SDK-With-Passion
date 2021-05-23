/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUIShapeView, UIColor, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingProgressView : UIView

{
    SKUIShapeView *_borderView;
    UIImageView *_imageView;
    double _progress;
    SKUIShapeView *_progressView;
    UILabel *_titleLabel;
}

@property (nonatomic) double progress;
@property (copy, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) struct CGSize preferredImageSize;

+ (struct CGSize)preferredImageSizeForViewSize:(struct CGSize)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (id)_borderColor;

@end
