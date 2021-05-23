/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class UIImageView;

@interface HUImageIconContentView : HUIconContentView

{
    long long _iconContentMode;
    UIImageView *_imageView;
    long long _originalImageRenderingMode;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long originalImageRenderingMode;
@property (nonatomic) long long iconContentMode;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setIconSize:(unsigned long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)_updateIconImage;
- (id)imageForImageIconDescriptor:(id)arg1;

@end
