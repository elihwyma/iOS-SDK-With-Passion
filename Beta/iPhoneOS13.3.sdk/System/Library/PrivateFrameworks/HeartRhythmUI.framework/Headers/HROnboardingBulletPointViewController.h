/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HRStackedButtonView, NSArray, NSHashTable, NSLayoutConstraint, NSString, UILabel, UIStackView, UIView;

@interface HROnboardingBulletPointViewController : HROnboardingBaseViewController

{
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIStackView *_bulletPointsView;
    HRStackedButtonView *_stackedButtonView;
    UIView *_lastBulletPointView;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSHashTable *_bulletPointBodyLabels;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIStackView *bulletPointsView;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) UIView *lastBulletPointView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain, nonatomic) NSHashTable *bulletPointBodyLabels;
@property (nonatomic, readonly) NSString *titleString;
@property (nonatomic, readonly) NSString *bodyString;
@property (nonatomic, readonly) NSArray *bulletPoints;
@property (nonatomic, readonly) NSString *buttonTitleString;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setUpConstraints;
- (id)_bodyFont;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (void)updateUserInterfaceForStyle:(long long)arg1;
- (void)_setupBulletPointViews;
- (struct CGSize)_bulletImageSize;
- (id)_boldSubheadlineFont;
- (id)_subheadlineFont;
- (double)_cannotDoHeaderLastBaselineToCannotDoBodyFirstBaseline;

@end
