/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UIView.h>

@class TFAppLockupView, TFBetaAppLaunchScreenViewSpecification, TFDeviceInstructionView, UIButton, UILabel, UIScrollView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface TFBetaAppLaunchScreenView : UIView

{
    TFAppLockupView *_lockupView;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_bodyTitleLabel;
    UILabel *_bodyTextLabel;
    TFDeviceInstructionView *_instructionView;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    UIVisualEffectView *_buttonBackgroundEffectView;
    UIView *_snapshot;
    TFBetaAppLaunchScreenViewSpecification *_specification;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *bodyTitleLabel;
@property (nonatomic, readonly) UILabel *bodyTextLabel;
@property (nonatomic, readonly) TFDeviceInstructionView *instructionView;
@property (nonatomic, readonly) UIButton *primaryButton;
@property (nonatomic, readonly) UIButton *secondaryButton;
@property (nonatomic, readonly) UIVisualEffectView *buttonBackgroundEffectView;
@property (retain, nonatomic) UIView *snapshot;
@property (retain, nonatomic) TFBetaAppLaunchScreenViewSpecification *specification;
@property (nonatomic, readonly) TFAppLockupView *lockupView;

- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setSubtitle:(id)arg1;
- (void)setLockup:(id)arg1;
- (void)_prepareForDisplayWithTraitCollection:(id)arg1;
- (void)_layoutButtonModuleWithLayoutMetrics:(id)arg1;
- (void)_layoutScrollViewWithLayoutMetrics:(id)arg1 accomodatingPinnedBottomView:(id)arg2;
- (void)snapshotCurrentView;
- (void)cleanupSnapshot;
- (void)prepareForState:(unsigned long long)arg1;
- (void)setBodyTitle:(id)arg1 bodyText:(id)arg2;
- (void)setDeviceImage:(id)arg1 withOrientation:(long long)arg2;
- (void)setDeviceImageVisibility:(_Bool)arg1;
- (void)setDeviceImageOrientation:(long long)arg1;
- (void)setPrimaryButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)setSecondaryButtonTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end
