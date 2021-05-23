/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class UIImageView;

@interface HUAlbumIconContentView : HUIconContentView

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setIconSize:(unsigned long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_updateIconImage;

@end
