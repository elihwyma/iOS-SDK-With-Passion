/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKViewController.h>

@class NSLayoutConstraint, UIScrollView, UIView;

@protocol HROnboardingPageViewControllerDelegate;

@interface HROnboardingBaseViewController : HKViewController

{
    _Bool _onboarding;
    UIView *_contentView;
    UIScrollView *_scrollView;
    long long _leftButtonType;
    long long _rightButtonType;
    id <HROnboardingPageViewControllerDelegate> _delegate;
    UIView *_footerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint;
@property (nonatomic, readonly, getter=isOnboarding) _Bool onboarding;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long leftButtonType;
@property (nonatomic) long long rightButtonType;
@property (retain, nonatomic) id <HROnboardingPageViewControllerDelegate> delegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)_cancelButton;
- (id)titleFont;
- (id)_closeButton;
- (void)setUpConstraints;
- (void)closeButtonTapped:(id)arg1;
- (id)_skipButton;
- (id)_titleFontTextStyle;
- (id)_buttonForButtonType:(long long)arg1;
- (void)setUpUI;
- (double)contentTop;
- (void)setFooterView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)removeFooterView;
- (double)_titleTopToFirstBaselineLeading;
- (id)initForOnboarding:(_Bool)arg1;
- (void)_setUpNavigationBar;
- (void)updateUserInterfaceForStyle:(long long)arg1;
- (void)_adjustScrollViewForFooterView;
- (id)_onboardingElectrocardiogramCancelButton;
- (id)_onboardingAtrialFibrillationDetectionCancelButton;
- (void)onboardingElectrocardiogramCancelButtonTapped:(id)arg1;
- (void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)arg1;
- (void)skipButtonTapped:(id)arg1;
- (void)presentAlertWithMessage:(id)arg1;
- (void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(CDUnknownBlockType)arg2;
- (double)titleTopToFirstBaseline;

@end
