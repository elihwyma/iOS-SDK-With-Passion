/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

@class HRStackedButtonView, HRVideoPlayerView, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramExplanationViewController : HROnboardingBaseViewController

{
    UILabel *_titleLabel;
    HRVideoPlayerView *_animatedWatchRhythmVideoView;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) HRStackedButtonView *stackedButtonView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setUpConstraints;
- (id)_bodyFont;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)_setUpButtonFooterView;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFontTextStyle;
- (id)initForOnboarding:(_Bool)arg1;
- (double)_titleBottomToVideoViewTop;
- (double)_videoViewBottomToBodyFirstBaseline;

@end
