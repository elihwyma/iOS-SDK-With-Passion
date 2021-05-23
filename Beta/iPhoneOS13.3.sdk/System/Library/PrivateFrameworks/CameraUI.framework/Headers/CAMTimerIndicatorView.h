/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMAnimationDelegate, UILabel;

@interface CAMTimerIndicatorView : UIView

{
    _Bool __performingStyleAnimation;
    long long _style;
    UIView *__dimmingView;
    UILabel *__countdownLabel;
    long long __startingTicks;
    long long __remainingTicks;
    long long __labelOrientation;
    CAMAnimationDelegate *__animationDelegate;
    long long __deferredLabelOrientation;
}

@property (nonatomic, readonly) UIView *_dimmingView;
@property (nonatomic, readonly) UILabel *_countdownLabel;
@property (nonatomic, readonly) long long _startingTicks;
@property (nonatomic, readonly) long long _remainingTicks;
@property (nonatomic, setter=_setLabelOrientation:) long long _labelOrientation;
@property (nonatomic, readonly) CAMAnimationDelegate *_animationDelegate;
@property (nonatomic, getter=_isPerformingStyleAnimation, setter=_setPerformingStyleAnimation:) _Bool _performingStyleAnimation;
@property (nonatomic, setter=_setDeferredOrientation:) long long _deferredLabelOrientation;
@property (nonatomic) long long style;

- (id)initWithCoder:(id)arg1;
- (void)decrement;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)layoutSubviews;
- (id)font;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)cam_rotateWithInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)stopCountdown;
- (void)resetWithNumberOfTicks:(long long)arg1;
- (void)startCountdownWithAnimationDelegate:(id)arg1;
- (id)_fontForStyle:(long long)arg1;
- (void)_updateCountdownLabelWithTicksRemaining;
- (void)_commonCAMTimerIndicatorViewInitialization;
- (void)_layoutCountdownLabelForStyle:(long long)arg1;
- (struct CGRect)_landscapeSwapBoundsCoordinates:(struct CGRect)arg1;
- (void)_layoutCountdownLabelForSmallStyle;
- (void)_layoutCountdownLabelForLargeStyle;
- (void)_updateFromChangeToStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)_transitionDimmingViewFromStyle:(long long)arg1;
- (void)_handleOrientationChange:(long long)arg1;
- (void)_addDecrementAnimationForTick:(long long)arg1;
- (void)_addDimmingAnimationForTick:(long long)arg1;
- (id)_decrementAnimationForTick:(long long)arg1;
- (id)_dimmingAnimationForTick:(long long)arg1;
- (id)_finalDimmingAnimation;

@end
