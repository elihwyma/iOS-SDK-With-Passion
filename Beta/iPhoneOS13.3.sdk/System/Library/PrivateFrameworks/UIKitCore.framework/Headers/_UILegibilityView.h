/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImage, UIImageView, _UILegibilitySettings;

@interface _UILegibilityView : UIView

{
    _Bool _hidesImage;
    _UILegibilitySettings *_settings;
    UIImage *_image;
    UIImage *_shadowImage;
    double _strength;
    UIImageView *_imageView;
    UIImageView *_shadowImageView;
    long long _options;
}

@property (retain, nonatomic) _UILegibilitySettings *settings;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *shadowImageView;
@property (nonatomic) long long options;
@property (nonatomic, readonly) long long style;
@property (nonatomic) double strength;
@property (nonatomic) _Bool hidesImage;
@property (nonatomic, readonly) _Bool usesColorFilters;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_updateFilters;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4;
- (void)setImage:(id)arg1 shadowImage:(id)arg2;
- (id)initWithStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(long long)arg5;
- (void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (id)drawingColor;
- (void)updateImage;
- (_Bool)usesSecondaryColor;
- (id)initWithStyle:(long long)arg1 image:(id)arg2;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 image:(id)arg3;
- (void)setStyle:(long long)arg1 image:(id)arg2 shadowImage:(id)arg3;
- (void)updateForChangedSettings:(id)arg1;

@end
