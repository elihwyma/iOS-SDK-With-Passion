/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class CALayer, IKViewElement, UIColor, UILabel, _TVImageView, _TVVisualEffectView, _UIFloatingContentView;

@interface TVButtonLockup : UIView

{
    _UIFloatingContentView *_floatingView;
    _TVVisualEffectView *_backdropView;
    UIView *_overlayView;
    UILabel *_textView;
    UILabel *_textMask;
    CALayer *_imageMask;
    UIColor *__backgroundColor;
    UIColor *_highlightColor;
    _Bool _disabled;
    long long _backdropStyle;
    long long _vibrantLabelThemeOverride;
    _TVImageView *_imageView;
    UILabel *_titleView;
    IKViewElement *_viewElement;
}

@property (nonatomic, readonly) long long backdropStyle;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) long long vibrantLabelThemeOverride;
@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) UILabel *titleView;
@property (copy, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) IKViewElement *viewElement;

- (void)dealloc;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (long long)_focusedSound;
- (void)_selectButtonAction:(id)arg1;
- (void)_playButtonAction:(id)arg1;
- (void)_updateForAccessibilityChange;
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;
- (void)_updateImageMask;
- (id)initWithFrame:(struct CGRect)arg1 blurEffectStyle:(long long)arg2 groupName:(id)arg3;
- (void)setText:(id)arg1 minimumScale:(double)arg2 maxNumberOfLines:(unsigned long long)arg3;
- (void)_updateForFocusStateChange;
- (void)_updateTextForAccessibilityAndFocus;

@end
