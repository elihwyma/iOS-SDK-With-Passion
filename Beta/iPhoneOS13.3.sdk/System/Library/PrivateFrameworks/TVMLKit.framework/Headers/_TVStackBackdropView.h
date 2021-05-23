/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView, UIVisualEffectView;

@interface _TVStackBackdropView : UIView

{
    UIImageView *_imageView;
    UIVisualEffectView *_visualEffectView;
    UIImage *_image;
    long long _blurEffectStyle;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long blurEffectStyle;

- (void)layoutSubviews;
- (id)initWithBlurEffectStyle:(long long)arg1;

@end
