/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HKAnchoredObjectQuery, HKElectrocardiogram, HKElectrocardiogramCardView, HRStackedButtonView, NSLayoutConstraint, NSLayoutYAxisAnchor, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HROnboardingBaseViewController

{
    long long _state;
    HKAnchoredObjectQuery *_electrocardiogramQuery;
    HKElectrocardiogram *_electrocardiogram;
    UITapGestureRecognizer *_electrocardiogramCardTapGestureRecognizer;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_classificationLabel;
    HKElectrocardiogramCardView *_electrocardiogramCardView;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutYAxisAnchor *_viewBottomAnchor;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery;
@property (retain, nonatomic) HKElectrocardiogram *electrocardiogram;
@property (retain, nonatomic) UITapGestureRecognizer *electrocardiogramCardTapGestureRecognizer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (retain, nonatomic) UILabel *classificationLabel;
@property (retain, nonatomic) HKElectrocardiogramCardView *electrocardiogramCardView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSLayoutYAxisAnchor *viewBottomAnchor;

- (void)viewDidLoad;
- (void)_setUpConstraints;
- (id)_bodyFont;
- (void)_setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(_Bool)arg1;
- (id)_subheadlineFont;
- (void)_setUpElectrocardiogramQuery;
- (void)_stopElectrocardiogramQuery;
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange)arg2;
- (void)_recomputeState;
- (id)_classificationAttributedTextForElectrocardiogram:(id)arg1;
- (void)_electrocardiogramCardViewTapped:(id)arg1;
- (void)_setupBodyLabelForSetupCompleteState:(long long)arg1;
- (void)_resetUI;
- (double)_classificationTextDistance;
- (void)_updateUIForElectrocardiogram:(id)arg1;

@end
