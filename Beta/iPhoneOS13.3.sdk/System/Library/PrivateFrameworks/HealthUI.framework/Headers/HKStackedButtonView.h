/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UIBlurEffect, UILabel;

@protocol HKStackedButtonViewDelegate;

@interface HKStackedButtonView : UIView

{
    _Bool _bottomAdjustsForHomeButtonlessScreen;
    _Bool _blurHidden;
    NSArray *_buttons;
    long long _lastButtonMode;
    NSArray *_titles;
    NSArray *_styles;
    NSArray *_buttonSpacingConstraints;
    long long _buttonMode;
    NSString *_footerText;
    NSString *_boldFooterText;
    long long _footerTextAlignment;
    UILabel *_footerTextLabel;
    UIBlurEffect *_backgroundBlurEffect;
    UIView *_backgroundBlurView;
    NSLayoutConstraint *_backgroundBlurViewLeadingConstraint;
    NSLayoutConstraint *_backgroundBlurViewTrailingConstraint;
    NSLayoutYAxisAnchor *_firstTopAnchor;
    double _firstTopConstant;
    NSLayoutConstraint *_bottomConstraint;
    id <HKStackedButtonViewDelegate> _delegate;
}

@property (copy, nonatomic) NSArray *titles;
@property (copy, nonatomic) NSArray *styles;
@property (copy, nonatomic) NSArray *buttonSpacingConstraints;
@property (nonatomic) long long buttonMode;
@property (copy, nonatomic) NSString *footerText;
@property (copy, nonatomic) NSString *boldFooterText;
@property (nonatomic) long long footerTextAlignment;
@property (retain, nonatomic) UILabel *footerTextLabel;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor;
@property (nonatomic) double firstTopConstant;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (weak, nonatomic) id <HKStackedButtonViewDelegate> delegate;
@property (nonatomic) long long lastButtonMode;
@property (nonatomic) _Bool bottomAdjustsForHomeButtonlessScreen;
@property (nonatomic, getter=isBlurHidden) _Bool blurHidden;

+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 footerTextAlignment:(long long)arg4 delegate:(id)arg5;
+ (double)_footerTextSpacingForValue:(double)arg1;
+ (double)_buttonSpacingForValue:(double)arg1;
+ (id)_footerFontTextStyle;
+ (id)_footerTextFont;
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 delegate:(id)arg4;
+ (id)_footerTextBoldFont;

- (void)traitCollectionDidChange:(id)arg1;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
- (void)_updateForCurrentSizeCategory;
- (id)_createButtons;
- (void)_setUpBlurEffect;
- (void)_setUpButtons;
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 footerText:(id)arg3 boldFooterText:(id)arg4 footerTextAlignment:(long long)arg5 delegate:(id)arg6;
- (void)_updateBottomConstraint;
- (void)_setUpFooterText;
- (void)_assignConstraintsForButtons;
- (void)_updateConstraintsForButtons;
- (void)_createViewBottomConstraint;
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (id)_attributedFooterText;

@end
