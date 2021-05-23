/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/_UIRemoteViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMutableSet, NSNumber, NSString, _UILegibilitySettings;

@protocol SBIdleTimerCoordinating, SBRemoteTransientOverlayHostViewControllerDelegate;

@interface SBRemoteTransientOverlayHostViewController : _UIRemoteViewController <Swift>

{
    _Bool _allowsHomeButtonDismissal;
    double _customIdleExpirationTimeout;
    long long _dismissalAnimationStyle;
    NSMutableSet *_idleTimerDisabledReasons;
    NSNumber *_launchingInterfaceOrientationValue;
    unsigned long long _preferredHardwareButtonEvents;
    int _preferredStatusBarVisibility;
    NSNumber *_preferredStatusBarStyleValue;
    NSNumber *_preferredWhitePointAdaptivityStyleValue;
    long long _requestedBackgroundStyle;
    _Bool _prefersWallpaperTunnelActive;
    _Bool _shouldDisableIdleWarn;
    _Bool _shouldUseLockedIdleTimerDuration;
    long long _swipeDismissalStyle;
    NSNumber *_hasTranslucentContentValue;
    _Bool _activatingForSiri;
    _Bool _allowsStackingOverlayContentAbove;
    _Bool _contentOpaque;
    _Bool _shouldEnableFadeInAnimation;
    _Bool _shouldEnableFadeOutAnimation;
    _Bool _shouldDisableOrientationUpdates;
    _Bool _allowsCustomPresentationDismissalAnimations;
    _Bool _shouldIgnoreContentOverlayInsetUpdates;
    _Bool _shouldInvalidateWhenDeactivated;
    _Bool _isScreenshotMarkup;
    _Bool _switcherEligible;
    _Bool _shouldDisableBanners;
    _Bool _shouldDisableControlCenter;
    _Bool _shouldDisableReachability;
    _Bool _shouldDisableInteractiveScreenshotGesture;
    _Bool _shouldDisableSiri;
    _Bool _shouldPendAlertItems;
    int _preferredStatusBarStyleOverridesToCancel;
    id <SBRemoteTransientOverlayHostViewControllerDelegate> _delegate;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    long long _preferredLockedGestureDismissalStyle;
    long long _preferredUnlockedGestureDismissalStyle;
    long long _preferredBackgroundStyle;
    NSNumber *_preferredSceneDeactivationReasonValue;
}

@property (weak, nonatomic) id <SBRemoteTransientOverlayHostViewControllerDelegate> delegate;
@property (nonatomic, getter=isActivatingForSiri) _Bool activatingForSiri;
@property (nonatomic, readonly) _Bool allowsStackingOverlayContentAbove;
@property (nonatomic, readonly, getter=isContentOpaque) _Bool contentOpaque;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic) _Bool shouldEnableFadeInAnimation;
@property (nonatomic) _Bool shouldEnableFadeOutAnimation;
@property (nonatomic, readonly) long long preferredLockedGestureDismissalStyle;
@property (nonatomic, readonly) long long preferredUnlockedGestureDismissalStyle;
@property (nonatomic, readonly) long long preferredBackgroundStyle;
@property (copy, nonatomic, readonly) NSNumber *preferredSceneDeactivationReasonValue;
@property (nonatomic, readonly) int preferredStatusBarStyleOverridesToCancel;
@property (copy, nonatomic, readonly) _UILegibilitySettings *preferredStatusBarLegibilitySettings;
@property (nonatomic, readonly) _Bool shouldDisableOrientationUpdates;
@property (nonatomic) _Bool allowsCustomPresentationDismissalAnimations;
@property (nonatomic) _Bool shouldIgnoreContentOverlayInsetUpdates;
@property (nonatomic, readonly) _Bool shouldInvalidateWhenDeactivated;
@property (nonatomic) _Bool isScreenshotMarkup;
@property (nonatomic, getter=isSwitcherEligible) _Bool switcherEligible;
@property (nonatomic, readonly) _Bool shouldDisableBanners;
@property (nonatomic, readonly) _Bool shouldDisableControlCenter;
@property (nonatomic, readonly) _Bool shouldDisableReachability;
@property (nonatomic, readonly) _Bool shouldDisableInteractiveScreenshotGesture;
@property (nonatomic, readonly) _Bool shouldDisableSiri;
@property (nonatomic, readonly) _Bool shouldPendAlertItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)becomeFirstResponder;
- (void)dismiss;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (void)setWhitePointAdaptivityStyle:(long long)arg1;
- (void)deactivate;
- (void)_updateContentOverlayInsetsFromParentIfNecessary;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setShouldDismissOnUILock:(_Bool)arg1;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_participateInSystemAnimationFence:(id)arg1;
- (void)setAllowsBanners:(_Bool)arg1;
- (void)setAllowsAlertItems:(_Bool)arg1;
- (void)setAllowsControlCenter:(_Bool)arg1;
- (void)setAllowsSiri:(_Bool)arg1;
- (void)setDesiredHardwareButtonEvents:(unsigned long long)arg1;
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;
- (void)setWallpaperTunnelActive:(_Bool)arg1;
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setWallpaperStyle:(long long)arg1 withDuration:(double)arg2;
- (void)setAllowsAlertStacking:(_Bool)arg1;
- (void)setDismissalAnimationStyle:(long long)arg1;
- (void)setSwipeDismissalStyle:(long long)arg1;
- (void)setDesiredStatusBarStyleOverrides:(int)arg1;
- (void)setStyleOverridesToCancel:(int)arg1 animationSettings:(id)arg2;
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;
- (void)setDesiredAutoLockDuration:(double)arg1;
- (void)setDesiredIdleTimerSettings:(id)arg1;
- (void)setInteractiveScreenshotGestureDisabled:(_Bool)arg1;
- (void)setReachabilityDisabled:(_Bool)arg1;
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;
- (void)setShouldDisableFadeInAnimation:(_Bool)arg1;
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;
- (void)setLaunchingInterfaceOrientation:(long long)arg1;
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;
- (void)setSceneDeactivationReason:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleDoubleHeightStatusBarTap;
- (void)didInvalidateForRemoteAlert;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)preserveInputViewsAnimated:(_Bool)arg1;
- (void)restoreInputViewsAnimated:(_Bool)arg1;
- (void)handlePictureInPictureDidBegin;
- (void)dismissForTransientOverlayAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentForTransientOverlayAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_performButtonEvents:(unsigned long long)arg1;
- (void)_updatePreferredGestureDismissalStyles;
- (void)_updatePreferredBackgroundStyleWithAnimationSettings:(id)arg1;
- (void)_updateContentOpaqueProperty;

@end
