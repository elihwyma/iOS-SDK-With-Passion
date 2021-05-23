/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HKHeartRhythmAvailability, HRStackedButtonView, NSArray, NSLayoutConstraint, NSNumber, NSString, UIButton, UILabel, UIView;

@interface HROnboardingAtrialFibrillationIntroViewController : HROnboardingBaseViewController

{
    _Bool _learnMoreContentExpanded;
    HKHeartRhythmAvailability *_availability;
    NSNumber *_activeWatchNeedsLocationCheck;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UILabel *_footnoteLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
    UIButton *_learnMoreButton;
    UIView *_learnMoreContentView;
    NSArray *_learnMoreCollapsedConstraints;
    NSArray *_learnMoreExpandedConstraints;
}

@property (retain, nonatomic) HKHeartRhythmAvailability *availability;
@property (retain, nonatomic) NSNumber *activeWatchNeedsLocationCheck;
@property (retain, nonatomic) UIView *heroView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UILabel *footnoteLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (nonatomic) _Bool learnMoreContentExpanded;
@property (retain, nonatomic) UIView *learnMoreContentView;
@property (retain, nonatomic) NSArray *learnMoreCollapsedConstraints;
@property (retain, nonatomic) NSArray *learnMoreExpandedConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_titleFont;
- (id)titleString;
- (void)setUpConstraints;
- (id)bodyString;
- (id)_titleFontTextStyle;
- (void)learnMoreButtonTapped:(id)arg1;
- (id)_bodyFont;
- (id)buttonTitleString;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(_Bool)arg1;
- (id)_footnoteFont;
- (void)_setUpStackedButtonView;
- (void)_setStackedButtonViewAsFooterView;
- (id)_createHeroView;
- (_Bool)_activeWatchNeedsLocationCheck;
- (id)footnoteString;
- (void)_setUpLearnMoreViews;
- (double)_assetImageBottomToTitleFirstBaseline;
- (double)_titleLastBaselineToBodyFirstBaseline;
- (void)_setUpLearnMoreConstraints;
- (id)learnMoreString;
- (id)_createLearnMoreExpandedView;
- (double)_footnoteLeading;
- (double)_viewLastBaselineToContinueButton;
- (void)_updateViewsForContentExpansionState:(_Bool)arg1;
- (id)locationFeatureAlertAckButtonString;
- (id)featureDisabledBodyString;
- (id)locationNotFoundPromptBodyString;
- (id)watchOSVersionTooLowBodyString;
- (id)deviceNotSupportedBodyString;
- (id)locationFeatureIneligiblePromptBodyString;
- (id)_footnoteTextStyle;
- (void)_presentFeatureAlertWithMessage:(id)arg1;
- (double)_learnMoreContentViewLastBaselineToContinueButton;

@end
