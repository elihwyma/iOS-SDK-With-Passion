/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface UISwappableImageView : UIImageView

{
    UIImage *_image;
    UIImage *_alternateImage;
    _Bool _showAlternate;
    _Bool _updateImage;
    _Bool _bezel;
    int _bezelStyle;
    long long _barButtonItemStyle;
}

- (void)setImage:(id)arg1;
- (void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2;
- (void)setBezelStyleForBarStyle:(long long)arg1 tintColor:(id)arg2 iconTintColor:(id)arg3 iconTintColorDidChange:(_Bool)arg4;
- (void)updateImageIfNeededWithTintColor:(id)arg1;
- (void)updateImageIfNeeded;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(long long)arg3 barButtonItemStyle:(long long)arg4 tintColor:(id)arg5 bezel:(_Bool)arg6;
- (void)showAlternateImage:(_Bool)arg1;

@end
