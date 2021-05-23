/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <UIKit/UIView.h>

@class AFUISiriCarPlayView, NSString, SiriUIAudioRoutePickerButton, SiriUIConfiguration, SiriUIContentButton, SiriUIHelpButton, SiriUIVisualEffectView, UIImageView, UILabel, _UIBackdropView;

@protocol AFUISiriViewDataSource, AFUISiriViewDelegate, SBUIPasscodeLockView, SiriUISiriStatusViewProtocol;

@interface AFUISiriView : UIView

{
    _UIBackdropView *_backdropView;
    _Bool _backdropViewVisible;
    AFUISiriCarPlayView *_carPlayView;
    struct UIEdgeInsets _suspendedSafeAreaInsets;
    _Bool _safeAreaInsetsSuspended;
    UIView *_dimmingAndLockContainer;
    UIView *_statusViewContainer;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIHelpButton *_helpButton;
    SiriUIContentButton *_reportBugButton;
    SiriUIConfiguration *_configuration;
    UIView<SBUIPasscodeLockView> *_lockView;
    unsigned long long _unlockAttemptCount;
    CDUnknownBlockType _unlockCompletion;
    _Bool _inShowUnlockViewAnimation;
    _Bool _inHideUnlockViewanimation;
    _Bool _remoteContentViewHidden;
    _Bool _lockViewHidden;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
    UILabel *_assistantVersionLabel;
    SiriUIVisualEffectView *_assistantVersionVisualEffectView;
    _Bool _disabled;
    _Bool _statusViewHidden;
    _Bool _keepStatusViewHidden;
    _Bool _flamesViewDeferred;
    _Bool _helpButtonDeferred;
    _Bool _inFluidDismissal;
    UIView *_remoteContentView;
    UIView *_foregroundView;
    UIView *_foregroundContainerView;
    id <AFUISiriViewDataSource> _dataSource;
    id <AFUISiriViewDelegate> _delegate;
    long long _siriSessionState;
    long long _mode;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
}

@property (nonatomic, readonly) UIView *foregroundView;
@property (nonatomic, readonly) UIView *foregroundContainerView;
@property (nonatomic, readonly) _UIBackdropView *backgroundBlurView;
@property (weak, nonatomic) id <AFUISiriViewDataSource> dataSource;
@property (weak, nonatomic) id <AFUISiriViewDelegate> delegate;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool statusViewHidden;
@property (nonatomic) _Bool keepStatusViewHidden;
@property (nonatomic) _Bool flamesViewDeferred;
@property (nonatomic) _Bool flamesViewPaused;
@property (nonatomic) _Bool helpButtonDeferred;
@property (nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode;
@property (nonatomic, getter=isInFluidDismissal) _Bool inFluidDismissal;
@property (nonatomic) long long siriSessionState;
@property (nonatomic) long long mode;
@property (nonatomic, readonly) double statusViewHeight;
@property (retain, nonatomic) UIView<SiriUISiriStatusViewProtocol> *siriStatusView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIView *remoteContentView;

+ (void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(CDUnknownBlockType)arg5;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)layoutSubviews;
- (void)reloadData;
- (void)safeAreaInsetsDidChange;
- (void)setBackdropVisible:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)fadeOutCurrentAura;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (struct UIEdgeInsets)safeAreaInsetsForSiriStatusView:(id)arg1;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)setupOrbIfNeeded;
- (void)_helpButtonTapped:(id)arg1;
- (void)_audioRouteButtonTapped:(id)arg1;
- (_Bool)_showsReportBugButton;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reportBugButtonTapped;
- (void)_reportBugButtonLongPressed;
- (void)setShowAudioRoutePicker:(_Bool)arg1;
- (void)setAudioRoutePickerBluetoothOn:(_Bool)arg1;
- (_Bool)_isCarPlayMode:(long long)arg1;
- (_Bool)_reducesMotionEffects;
- (void)_updateSiriStatusViewForMode:(long long)arg1;
- (void)_destroyAssistantVersionLabelIfNecessary;
- (_Bool)_isTextInputEnabled;
- (void)_updateControlsAppearance;
- (void)_configureEyesFreeLogo;
- (void)_configureHelpButton;
- (void)configureReportBugButtonToShowHoldToTalkState:(_Bool)arg1;
- (void)_createAssistantVersionLabelIfNecessary;
- (struct CGRect)_remoteContentViewFrame;
- (struct CGRect)_lockViewFrame;
- (struct CGRect)_statusViewContainerFrame;
- (double)_buttonInset;
- (void)_layoutReportBugButton;
- (void)_setSafeAreaInsetsSuspended:(_Bool)arg1;
- (void)_animateButtonsHidden:(_Bool)arg1;
- (void)_setupButtonsIfNecessary;
- (id)dimBackdropSettings;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(_Bool)arg2;
- (void)_configureReportBugButtonWithHoldToTalkState:(_Bool)arg1;
- (_Bool)_shouldIndicateHoldToTalkMode;
- (_Bool)_helpButtonIsVisible;
- (id)_lockViewLegibilityProvider;
- (void)_animateLockViewIsAnimatingIn:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_hideLockViewWithResult:(long long)arg1 hideCompletion:(CDUnknownBlockType)arg2;
- (void)_hideLockViewWithResult:(long long)arg1;
- (void)setCarDisplaySnippetMode:(long long)arg1;
- (void)setStatusViewUserInteractionEnabled:(_Bool)arg1;
- (void)teardownStatusView;
- (void)setBackdropShouldRasterize:(_Bool)arg1;
- (void)updateForPercentageRevealed:(double)arg1;
- (void)_preferencesDidChange:(id)arg1;
- (void)setBugReportingAvailable:(_Bool)arg1;
- (void)setHelpButtonEmphasized:(_Bool)arg1;
- (void)pulseHelpButton;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 subTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 unlockCompletionHandler:(CDUnknownBlockType)arg4;
- (void)cancelShowingPasscodeUnlock;

@end
