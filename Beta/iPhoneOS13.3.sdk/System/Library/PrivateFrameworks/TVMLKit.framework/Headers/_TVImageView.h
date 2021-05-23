/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIControl.h>

@class CAFilter, TVImageProxy, UIColor, UIImage, UIImageSymbolConfiguration, UIImageView;

@interface _TVImageView : UIControl

{
    _Bool _rendersImageAsTemplates;
    UIImage *_image;
    UIImageView *_imageView;
    UIColor *__focusedColor;
    long long _imageContentMode;
    UIImage *_flatImage;
    UIImage *_flatHighlightImage;
    _Bool _selected;
    double _cornerRadius;
    _Bool _continuousCorners;
    CAFilter *_highlightFilter;
    _Bool _imageContainsCornerRadius;
    _Bool _imageLoaded;
    _Bool __enableEdgeAntialiasingOnSelected;
    UIImage *_placeholderImage;
    TVImageProxy *_imageProxy;
    CDUnknownBlockType _completion;
    UIColor *__tintColor;
    UIColor *__darkTintColor;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (nonatomic, getter=isImageLoaded) _Bool imageLoaded;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (retain, nonatomic, setter=_setDarkTintColor:) UIColor *_darkTintColor;
@property (retain, nonatomic, setter=_setFocusedColor:) UIColor *_focusedColor;
@property (nonatomic, setter=_setEnableEdgeAntialiasingOnSelected:) _Bool _enableEdgeAntialiasingOnSelected;
@property (retain, nonatomic, setter=_setPreferredSymbolConfiguration:) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool imageContainsCornerRadius;
@property (retain, nonatomic) TVImageProxy *imageProxy;

- (void)dealloc;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (id)_imageView;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)_cornerRadius;
- (void)_updateImageView;
- (void)_updateTintColor;
- (void)_setCornerRadius:(double)arg1;
- (double)_continuousCornerRadius;
- (void)willMoveToWindow:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (long long)contentMode;
- (void)_setImage:(id)arg1;
- (void)_setContentRectInPixels:(struct CGRect)arg1 forContentSize:(struct CGSize)arg2;
- (void)_resetContentRect;
- (void)_updateCornerRadius;
- (void)_loadImage;
- (void)setImageProxy:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reloadImageForLayoutDirectionChange;

@end
