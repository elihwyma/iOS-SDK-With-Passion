/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class HFPrimaryStateIconDescriptor, UIImageView;

@interface HUWaterDropletIconContentView : HUIconContentView

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, readonly) HFPrimaryStateIconDescriptor *iconDescriptor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;

@end
