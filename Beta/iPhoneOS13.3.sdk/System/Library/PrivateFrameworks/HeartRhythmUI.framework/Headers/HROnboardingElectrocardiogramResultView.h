/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UIView.h>

@class HKSeparatorLineView, HRVideoPlayerView, NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HROnboardingElectrocardiogramResultView : UIView

{
    _Bool _hideNumberedTitle;
    _Bool _alwaysExpanded;
    _Bool _shouldHideSeparatorLine;
    _Bool _expanded;
    NSString *_title;
    UILabel *_numberedTitleLabel;
    HRVideoPlayerView *_playerView;
    NSString *_localizationKey;
    NSString *_numberedTitle;
    NSString *_visibleBody;
    UILabel *_visibleBodyLabel;
    UIButton *_learnMoreButton;
    UIView *_expandedView;
    HKSeparatorLineView *_separatorLineView;
    NSLayoutConstraint *_playerViewTopConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (copy, nonatomic) NSString *localizationKey;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *numberedTitle;
@property (retain, nonatomic) HRVideoPlayerView *playerView;
@property (copy, nonatomic) NSString *visibleBody;
@property (retain, nonatomic) UILabel *numberedTitleLabel;
@property (retain, nonatomic) UILabel *visibleBodyLabel;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIView *expandedView;
@property (retain, nonatomic) HKSeparatorLineView *separatorLineView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraint;
@property (nonatomic, getter=isExpanded) _Bool expanded;
@property (nonatomic, getter=isHidingNumberedTitle) _Bool hideNumberedTitle;
@property (nonatomic, getter=isAlwaysExpanded) _Bool alwaysExpanded;
@property (nonatomic) _Bool shouldHideSeparatorLine;

+ (id)sinusRhythmResultView;
+ (id)atrialFibrillationResultView;
+ (id)highOrLowHeartRateResultView;
+ (id)inconclusiveResultViewWithDelegate:(id)arg1;

- (void)_setUpConstraints;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)_setUpUI;
- (id)initWithLocalizationKey:(id)arg1 video:(id)arg2 expandedView:(id)arg3;
- (void)_updateNumberedTitleViewState;
- (void)_updateExpandedViewState;
- (id)_numberedTitleFont;
- (id)_visibleBodyFont;
- (void)_setUpNumberedTitleLabelConstraints;
- (void)_setUpPlayerViewTopConstraint;
- (double)_visibleBodyFirstBaselineDistance;
- (double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
- (double)_learnMoreButtonLastBaselineToBottom;
- (double)_numberedTitleTopToFirstBaseline;
- (double)_numberedTitleLastBaseLineToVideoTop;
- (id)_visibleBodyFontTextStyle;

@end
