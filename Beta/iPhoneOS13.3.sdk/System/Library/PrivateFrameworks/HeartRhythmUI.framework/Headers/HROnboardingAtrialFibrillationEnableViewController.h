/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HRStackedButtonView, NSLayoutConstraint, UILabel, UIView;

@interface HROnboardingAtrialFibrillationEnableViewController : HROnboardingBaseViewController

{
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UILabel *_footnoteLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *footnoteLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (id)_titleFont;
- (void)setUpConstraints;
- (id)_titleFontTextStyle;
- (id)_bodyFont;
- (id)createHeroView;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(_Bool)arg1;
- (id)_footnoteFont;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (double)_footnoteToButton;
- (id)_footnoteFontTextStyle;

@end
