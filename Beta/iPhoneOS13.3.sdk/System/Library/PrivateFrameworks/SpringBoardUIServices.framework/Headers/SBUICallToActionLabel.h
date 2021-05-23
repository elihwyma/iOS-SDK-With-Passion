/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class CAGradientLayer, NSMutableArray, NSString, NSTimer, SBUILegibilityLabel, _UILegibilitySettings;

@interface SBUICallToActionLabel : UIView

{
    _Bool _disablesGradientFadeInAnimation;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_text;
    SBUILegibilityLabel *_label;
    CAGradientLayer *_gradientLayer;
    unsigned long long _state;
    NSTimer *_animationTimer;
    NSMutableArray *_animationCompletionBlocks;
}

@property (retain, nonatomic) SBUILegibilityLabel *label;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (retain, nonatomic) NSMutableArray *animationCompletionBlocks;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)baselineOffset;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)didMoveToSuperview;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)fadeOut;
- (void)fadeIn;
- (void)_createLabel;
- (void)_createGradientLayer;
- (void)_preferredTextSizeChanged:(id)arg1;
- (void)cancelFadeInTimerIfNecessary;
- (void)fadeInImmediately:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runFadeAnimationForFadingOut:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addAnimationCompletionBlockIfNecessary:(CDUnknownBlockType)arg1;
- (void)_runGradientAnimation:(_Bool)arg1;
- (void)fadeOutWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidateGradientAnimationTimer;
- (void)_resetGradientAndLabelBefore:(_Bool)arg1;
- (void)_executePostAnimationCompletionBlocks;
- (void)setText:(id)arg1 forLanguage:(id)arg2 animated:(_Bool)arg3;
- (void)_updateLabelTextWithLanguage:(id)arg1;
- (void)fadeInImmediately:(_Bool)arg1;
- (id)_callToActionFont;
- (id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned int)arg2 withMaximumFontSizeCategory:(id)arg3;
- (void)_actuallyRunGradientAnimation;
- (void)_timerTriggered;

@end
