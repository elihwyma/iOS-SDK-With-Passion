/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPImageView

{
    LPImage *_image;
    LPImagePresentationProperties *_properties;
    LPImageViewStyle *_style;
    LPImageViewStyle *_originalStyle;
    long long _currentScalingMode;
    long long _platterReason;
    UIImageView *_imageView;
    UIView *_overlayView;
    UIView *_backgroundView;
}

- (id)init;
- (long long)_filter;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutComponentView;
- (id)initWithImage:(id)arg1 properties:(id)arg2 style:(id)arg3;
- (void)componentViewDidMoveToWindow;
- (_Bool)shouldApplyBackground;
- (void)installDarkeningView;
- (id)_createImageViewWithImage:(id)arg1;
- (void)_updateScalingMode;
- (void)setCornerRadius:(double)arg1 continuous:(_Bool)arg2;
- (void)updateShadowPath;
- (id)_createOverlayViewWithOpacity:(double)arg1;
- (struct CGSize)imageSizeThatFits:(struct CGSize)arg1 scalingMode:(long long)arg2;
- (long long)scalingModeForSize:(struct CGSize)arg1;
- (struct CGSize)imageSizeThatFits:(struct CGSize)arg1;
- (void)_setImageViewScalingMode:(long long)arg1;

@end
