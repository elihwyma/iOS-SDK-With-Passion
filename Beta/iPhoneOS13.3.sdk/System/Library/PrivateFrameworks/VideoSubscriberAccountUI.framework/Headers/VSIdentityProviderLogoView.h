/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderLogoView : UIView

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *logo;
@property (nonatomic, readonly) double marginLength;
@property (nonatomic, readonly) struct CGSize preferredImageSize;

- (id)initWithCoder:(id)arg1;
- (double)_height;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)_imageViewFrame;

@end
