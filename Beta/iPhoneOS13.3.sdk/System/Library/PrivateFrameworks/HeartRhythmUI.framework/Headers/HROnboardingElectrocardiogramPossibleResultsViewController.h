/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HKElectrocardiogram, HROnboardingElectrocardiogramResultView, HRStackedButtonView, NSLayoutAnchor, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HROnboardingBaseViewController

{
    HKElectrocardiogram *_electrocardiogram;
    UILabel *_titleLabel;
    HROnboardingElectrocardiogramResultView *_sinusRhythmResultReview;
    HROnboardingElectrocardiogramResultView *_atrialFibrillationResultView;
    HROnboardingElectrocardiogramResultView *_highOrLowHeartRateResultView;
    HROnboardingElectrocardiogramResultView *_inconclusiveResultView;
    HROnboardingElectrocardiogramResultView *_onlyResultView;
    HROnboardingElectrocardiogramResultView *_bottomResultView;
    UILabel *_disclaimerLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutAnchor *_viewTopAnchor;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_disclaimerLabelTopConstraint;
}

@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *inconclusiveResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *onlyResultView;
@property (retain, nonatomic) HROnboardingElectrocardiogramResultView *bottomResultView;
@property (retain, nonatomic) UILabel *disclaimerLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutAnchor *viewTopAnchor;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *disclaimerLabelTopConstraint;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)initWithSample:(id)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)initForOnboarding:(_Bool)arg1;
- (void)_setUpStackedButtonView;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpTitleConstraints;
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange)arg2;
- (void)_playResultViewVideos;
- (void)_pauseResultViewVideos;
- (void)_adjustStackedButtonViewLocationForViewContentHeight;
- (void)_setUpTitle;
- (void)_setUpOnlyResultView;
- (void)_setUpAllResultViews;
- (void)_setUpDisclaimerLabel;
- (void)_setUpOnlyResultViewConstraints;
- (void)_setUpAllResultViewConstraints;
- (void)_setUpBottomResultViewConstraint;
- (void)_adjustDisclaimerLabelConstraints;
- (id)_resultViewForSample:(id)arg1;

@end
