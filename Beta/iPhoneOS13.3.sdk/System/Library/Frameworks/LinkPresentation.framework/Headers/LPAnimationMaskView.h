/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface LPAnimationMaskView : UIView

{
    UIImage *_image;
    long long _animationOrigin;
    UIView *_imageView;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long animationOrigin;
@property (retain, nonatomic, readonly) UIView *imageView;

- (id)init;
- (void)layoutSubviews;

@end
