/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HRListItemLabel, HRStackedButtonView, HRTitledListItemLabel, NSLayoutConstraint, UILabel, UIView;

@interface HROnboardingAtrialFibrillationLimitationViewController : HROnboardingBaseViewController

{
    _Bool _stateAnimating;
    long long _state;
    double _initialContentOffset;
    UILabel *_titleLabel;
    UIView *_backgroundView1;
    UIView *_backgroundView2;
    UIView *_backgroundView3;
    UIView *_backgroundView4;
    HRTitledListItemLabel *_titledListItemLabel1;
    HRTitledListItemLabel *_titledListItemLabel2;
    HRTitledListItemLabel *_titledListItemLabel3;
    HRListItemLabel *_listItemLabel4;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (nonatomic) long long state;
@property (nonatomic) _Bool stateAnimating;
@property (nonatomic) double initialContentOffset;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundView1;
@property (retain, nonatomic) UIView *backgroundView2;
@property (retain, nonatomic) UIView *backgroundView3;
@property (retain, nonatomic) UIView *backgroundView4;
@property (retain, nonatomic) HRTitledListItemLabel *titledListItemLabel1;
@property (retain, nonatomic) HRTitledListItemLabel *titledListItemLabel2;
@property (retain, nonatomic) HRTitledListItemLabel *titledListItemLabel3;
@property (retain, nonatomic) HRListItemLabel *listItemLabel4;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

+ (id)_createBackgroundView;
+ (id)_createNumberedViewWithInteger:(unsigned long long)arg1;

- (void)viewDidLoad;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (id)initForOnboarding:(_Bool)arg1;
- (void)_updateUIWithState:(long long)arg1 animated:(_Bool)arg2;
- (void)_setUpStackedButtonView;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpTitleLabel;
- (void)_setUpInfoLabels;
- (void)_setUpTitleConstraints;
- (void)_setUpInfoLabelConstraints;
- (id)_bottomViewForState:(long long)arg1;
- (void)_updateContentViewBottomConstraintWithAnchor:(id)arg1 constant:(double)arg2;
- (void)_scrollBackgroundViewToVisible:(id)arg1;
- (struct CGSize)_listItemSize;

@end
