/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, NSString, UIColor, UIFont, UILabel, UILayoutGuide, _UILegibilitySettings, _UILegibilityView;

@interface HULegibilityLabel : UIView

{
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    _Bool _isDirty;
    double _strength;
    long long _options;
    NSArray *_legibilityConstraints;
    UILayoutGuide *_firstBaselineLayoutGuide;
    UILayoutGuide *_lastBaselineLayoutGuide;
    NSString *_text;
    UIFont *_font;
    NSAttributedString *_attributedText;
    UIColor *_textColorOverride;
    _UILegibilitySettings *_legibilitySettings;
}

@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic, readonly) double firstBaselineOffsetFromBottom;
@property (nonatomic, readonly) double lastBaselineOffsetFromBottom;
@property (nonatomic, readonly) double baselineOffset;

- (id)initWithCoder:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)updateForChangedSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 strength:(double)arg2;
- (void)_markOurselfDirty;
- (void)_updateLegibilityView;
- (void)_updateLabelForLegibilitySettings;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 text:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (double)_layoutGuideOffsetFromBottom:(id)arg1;

@end
