/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HRStackedButtonView, NSLayoutConstraint, NSString, UILabel, UIView;

@interface HROnboardingHeroExplanationViewController : HROnboardingBaseViewController

{
    long long _textAlignment;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (nonatomic, readonly) NSString *titleString;
@property (nonatomic, readonly) NSString *bodyString;
@property (nonatomic, readonly) NSString *buttonTitleString;
@property (nonatomic) long long textAlignment;

- (void)viewDidLoad;
- (id)_titleFont;
- (void)viewDidLayoutSubviews;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)createHeroView;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (double)_titleLastBaselineToBodyTop;
- (long long)stackedButtonViewLastButtonMode;
- (double)_titleTopToFirstBaselineLeading;
- (id)_bodyFontTextStyle;
- (double)_titleTopToFirstBaseline;

@end
