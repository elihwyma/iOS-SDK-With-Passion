/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SBFluidSwitcherIconImageContainerView : UIView

{
    UIImageView *_imageView;
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)_configureIconImageView:(id)arg1;
- (void)_crossfadeToImage:(id)arg1;

@end
