/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface MCDShadowImageView : UIView

{
    UIImageView *_imageView;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (long long)contentMode;
- (void)setupConstraints;
- (void)setupEffects;

@end
