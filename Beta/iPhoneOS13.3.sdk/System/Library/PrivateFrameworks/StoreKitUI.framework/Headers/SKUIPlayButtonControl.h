/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIButtonViewElement, SKUIPlayButtonGradientView, SKUIPlayButtonShapeView, UIColor, UIImage, UIImageView, UIView, _UIBackdropView;

@interface SKUIPlayButtonControl : UIControl

{
    _UIBackdropView *_backdropView;
    UIColor *_backgroundColor;
    long long _backgroundType;
    SKUIPlayButtonShapeView *_borderLayer;
    UIView *_backgroundView;
    UIColor *_bufferProgressIndicatorColor;
    UIColor *_controlForeGroundColor;
    id _bufferProgressIndicatorCompositingFilter;
    UIImage *_customPlayImage;
    UIImage *_customToggleImage;
    _Bool _didInitialHighlightForTouch;
    SKUIPlayButtonGradientView *_gradientBackgroundView;
    NSArray *_gradientColors;
    long long _gradientType;
    UIImageView *_imageView;
    SKUIPlayButtonShapeView *_innerProgressLayer;
    _Bool _indeterminate;
    SKUIPlayButtonShapeView *_outerProgressLayer;
    float _progress;
    SKUIPlayButtonShapeView *_selectedLayer;
    _Bool _showingProgress;
    UIColor *_progressIndicatorColor;
    id _progressIndicatorCompositingFilter;
    UIColor *_selectionColor;
    id _selectionCompositingFilter;
    _Bool _usesBlurredBackground;
    _Bool _showingPlayIndicator;
    _Bool _showBorder;
    _Bool _showOuterBorder;
    _Bool _disabledButSelectable;
    NSString *_backdropGroupName;
    UIImage *_backgroundImageForBlurring;
    SKUIButtonViewElement *_element;
    struct UIEdgeInsets _bigHitInsets;
}

@property (weak, nonatomic) UIImage *backgroundImageForBlurring;
@property (nonatomic, getter=isDisabledButSelectable) _Bool disabledButSelectable;
@property (retain, nonatomic) SKUIButtonViewElement *element;
@property (nonatomic, readonly) long long backgroundType;
@property (nonatomic, readonly) UIColor *controlForeGroundColor;
@property (retain, nonatomic) UIImage *customPlayImage;
@property (retain, nonatomic) UIImage *customToggleImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) struct UIEdgeInsets bigHitInsets;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic, readonly, getter=isIndeterminate) _Bool indeterminate;
@property (nonatomic) float progress;
@property (copy, nonatomic) UIColor *progressIndicatorColor;
@property (nonatomic, readonly) _Bool showingPlayIndicator;
@property (nonatomic, readonly) _Bool showingProgress;
@property (nonatomic) _Bool showOuterBorder;

+ (id)blurColorForColor:(id)arg1;
+ (CDStruct_afa449f9)_calculateStatistics:(struct CGImage *)arg1 withSize:(struct CGSize)arg2;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;

- (void)setEnabled:(_Bool)arg1;
- (void)refresh;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_backgroundView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_imageView;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (void)setSelected:(_Bool)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)hitRect;
- (void)hideProgressAnimated:(_Bool)arg1;
- (id)defaultBackgroundColor;
- (id)_defaultBackgroundView;
- (void)_prepareForReuse;
- (id)_borderLayer;
- (void)setBackgroundType:(long long)arg1;
- (void)endIndeterminateAnimation;
- (void)showPlayIndicator:(_Bool)arg1;
- (void)beginIndeterminateAnimation;
- (void)setShowBorder:(_Bool)arg1;
- (struct CGSize)buttonSize;
- (void)_updateEnabledState;
- (void)_showPlayIndicator:(_Bool)arg1;
- (void)_toggleToPlayState;
- (id)outerBorderColor;
- (float)buttonCornerRadius;
- (void)_updateInnerProgressLayerStroke;
- (id)playImage;
- (id)_cancelImage;
- (void)setControlColor:(id)arg1;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (id)_selectedLayer;
- (_Bool)_renderAsEnabled;
- (id)_classicBackdropView;
- (void)_updateBackdropView;
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)updateOuterProgressLayerStroke;
- (void)_beginIndeterminateAnimation;
- (id)_outerProgressLayer;
- (id)_innerProgressLayer;
- (float)playButtonDefaultAlpha;
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (id)_gradientBackgroundView;
- (void)showPlayIndicator:(_Bool)arg1 force:(_Bool)arg2;
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (id)cancelImage;
- (void)_useBlurredBackground:(_Bool)arg1;
- (void)setControlForegroundColor:(id)arg1;
- (void)setSelectionColor:(id)arg1 withCompositingFilter:(id)arg2;
- (id)_playImage;
- (void)playIndicatorDidChange:(_Bool)arg1;
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (id)_simpleBackdrop;

@end
