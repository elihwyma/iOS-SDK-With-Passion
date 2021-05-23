/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageView.h>

@class SKUIHorizontalLockupView;

__attribute__((visibility("hidden")))
@interface SKUIBackgroundImageWrapperForHorizontalLockup : SKUIImageView

{
    SKUIHorizontalLockupView *_lockup;
    SKUIImageView *_imageView;
}

@property (weak, nonatomic) SKUIHorizontalLockupView *lockup;
@property (weak, nonatomic) SKUIImageView *imageView;

- (void)setImage:(id)arg1;
- (id)initWithImage:(id)arg1;

@end
