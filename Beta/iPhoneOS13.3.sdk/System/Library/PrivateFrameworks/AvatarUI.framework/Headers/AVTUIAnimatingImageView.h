/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface AVTUIAnimatingImageView : UIView

{
    UIImage *_image;
    UIImageView *_imageView;
    UIImageView *_fadeInImageView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UIImageView *fadeInImageView;
@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;

@end
