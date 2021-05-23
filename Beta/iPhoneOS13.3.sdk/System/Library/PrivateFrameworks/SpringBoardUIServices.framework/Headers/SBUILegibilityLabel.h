/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSString, UIColor, UIFont, UILabel, _UILegibilitySettings, _UILegibilityView;

@interface SBUILegibilityLabel : UIView

{
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    _Bool _isDirty;
    double _strength;
    long long _options;
    double _scale;
    NSString *_string;
    UIFont *_font;
    NSAttributedString *_attributedText;
    UIColor *_textColorOverride;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _isWaitingToMoveToWindow;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) float hyphenationFactor;
@property (nonatomic, readonly) struct UIEdgeInsets characterOverflowInsets;
@property (nonatomic, readonly) double firstBaselineOffsetFromBottom;
@property (nonatomic, readonly) double lastBaselineOffsetFromBottom;
@property (nonatomic, readonly) double baselineOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

- (id)initWithCoder:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToWindow;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5;
- (id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4;
- (id)initWithSettings:(id)arg1 strength:(double)arg2;
- (void)_markOurselfDirty;
- (void)_updateLegibilityView;
- (void)_updateLabelForLegibilitySettings;
- (_Bool)_needsColorImage;

@end
