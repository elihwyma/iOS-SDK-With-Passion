/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIControl.h>

@class NSString, SBUILegibilityLabel, SBUILegibilityView, UIImage, UIImageView, UILabel, UIView, _SBFVibrantSettings, _UILegibilitySettings;

@interface SBUIVibrantButton : UIControl

{
    _SBFVibrantSettings *_vibrantSettings;
    _UILegibilitySettings *_legibilitySettings;
    UIImage *_glyphImage;
    NSString *_title;
    double _minimumTitleScaleFactor;
    long long _numberOfLines;
    long long _textAlignment;
    long long _lineBreakMode;
    UIView *_vibrantMaskView;
    UILabel *_vibrantMaskLabel;
    UIImageView *_vibrantMaskGlyphView;
    UIView *_vibrantGlyph;
    UIView *_vibrantGlyphBackgroundView;
    UIView *_vibrantGlyphTintView;
    UIView *_nonVibrantGlyph;
    SBUILegibilityView *_nonVibrantGlyphLegibilityView;
    SBUILegibilityLabel *_nonVibrantLegibilityLabel;
    _Bool _vibrancyAllowed;
    double _strength;
}

@property (nonatomic, getter=isVibrancyAllowed) _Bool vibrancyAllowed;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double minimumTitleScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

+ (id)_labelFont;

- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)_setUpForCurrentVibrancy;
- (_Bool)_shouldUseVibrancy;
- (struct CGSize)_sizeThatFitsWithVibrancy;
- (struct CGSize)_sizeThatFitsWithoutVibrancy;
- (void)_layoutVibrantSubviews;
- (void)_layoutNonVibrantSubviews;
- (void)_updateForState;
- (struct CGSize)_sizeThatFitsForLabelView:(id)arg1;
- (struct CGRect)_labelFrameForSize:(struct CGSize)arg1 baselineOffset:(double)arg2 inRect:(struct CGRect)arg3;
- (struct CGRect)_glyphFrameForSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;
- (double)_alphaForState;
- (id)_lazyGlyphLegibilityView;
- (void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2;

@end
