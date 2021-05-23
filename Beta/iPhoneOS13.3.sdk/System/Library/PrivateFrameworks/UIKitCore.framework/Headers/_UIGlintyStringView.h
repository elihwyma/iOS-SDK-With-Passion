/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSMutableSet, NSString, UIColor, UIFont, UIImage, UILabel, _UILegibilitySettings, _UIVibrantSettings;

@protocol _UIGlintyStringViewDelegate;

@interface _UIGlintyStringView : UIView

{
    _Bool _animationRepeats;
    _Bool _adjustsFontSizeToFitWidth;
    _Bool _hasCustomBackgroundColor;
    _Bool _highlight;
    _Bool _allowsLuminanceAdjustments;
    _Bool _usesBackgroundDimming;
    _Bool _needsTextUpdate;
    _Bool _animating;
    _Bool _fading;
    _Bool _showing;
    int _textIndex;
    id <_UIGlintyStringViewDelegate> _delegate;
    NSString *_text;
    UIFont *_font;
    NSString *_textLanguage;
    _UILegibilitySettings *_legibilitySettings;
    _UIVibrantSettings *_vibrantSettings;
    UIView *_backgroundView;
    UIColor *_backgroundColor;
    UIColor *_chevronBackgroundColor;
    long long _chevronStyle;
    double _horizontalPadding;
    UILabel *_label;
    UIView *_spotlightView;
    UIImage *_chevron;
    UIView *_highlightView;
    UIView *_effectView;
    UIView *_blurView;
    UIView *_shimmerImageView;
    UIView *_reflectionImageView;
    double _blurAlpha;
    NSMutableSet *_blurHiddenRequesters;
    struct CGSize _labelSize;
    struct CGRect _chevronFrame;
}

@property (nonatomic) _Bool needsTextUpdate;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize labelSize;
@property (retain, nonatomic) UIView *spotlightView;
@property (nonatomic) int textIndex;
@property (retain, nonatomic) UIImage *chevron;
@property (nonatomic) struct CGRect chevronFrame;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) _Bool animating;
@property (nonatomic) _Bool fading;
@property (nonatomic) _Bool showing;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *blurView;
@property (retain, nonatomic) UIView *shimmerImageView;
@property (retain, nonatomic) UIView *reflectionImageView;
@property (nonatomic) double blurAlpha;
@property (retain, nonatomic) NSMutableSet *blurHiddenRequesters;
@property (nonatomic) id <_UIGlintyStringViewDelegate> delegate;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (copy, nonatomic) NSString *textLanguage;
@property (nonatomic, readonly) struct CGRect labelFrame;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) _UIVibrantSettings *vibrantSettings;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *chevronBackgroundColor;
@property (nonatomic) _Bool animationRepeats;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) _Bool hasCustomBackgroundColor;
@property (nonatomic) long long chevronStyle;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) _Bool highlight;
@property (nonatomic) _Bool allowsLuminanceAdjustments;
@property (nonatomic) _Bool usesBackgroundDimming;

- (void)dealloc;
- (double)baselineOffsetFromBottom;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)show;
- (_Bool)isAnimating;
- (void)didMoveToWindow;
- (void)startAnimating;
- (void)_updateHighlight;
- (double)baselineOffsetFromBottomWithSize:(struct CGSize)arg1;
- (id)initWithText:(id)arg1 andFont:(id)arg2;
- (void)updateText;
- (void)fadeInWithDuration:(double)arg1;
- (void)fadeOutWithDuration:(double)arg1;
- (void)hide;
- (void)stopAnimating;
- (id)_highlightColor;
- (void)updateBlurForHiddenRequesters;
- (void)addGlintyAnimations;
- (void)removeGlintyAnimations;
- (void)hideEffects;
- (void)hideBlur;
- (void)showEffects;
- (void)showBlur;
- (id)_chevronImageForStyle:(long long)arg1;
- (void)updateTextWithBounds:(struct CGRect)arg1;
- (double)_chevronWidthWithPadding;
- (double)_chevronWidthWithPaddingCompression:(double)arg1;
- (double)_chevronHeightWithMaxOffset;
- (void)_updateLabelWithFrame:(struct CGRect)arg1;
- (double)_chevronVerticalOffset;
- (id)shapeViewForCharactersInString:(id)arg1 withFont:(id)arg2 centeredInFrame:(struct CGRect)arg3;
- (void)addShimmerAnimationToLayer:(id)arg1;
- (void)addReflectionAnimationToLayer:(id)arg1;
- (id)_highlightCompositingFilter;
- (struct CGSize)_labelSizeThatFits:(struct CGSize)arg1;
- (double)_chevronPadding;
- (void)setBlurHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)fadeOut;
- (void)fadeIn;

@end
