/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBFLockScreenActionContext, SBFLockScreenWakeAnimator, UIVisualEffectView;

@protocol SBBiometricUnlockBehaviorDelegate, SBIdleTimerCoordinating;

@interface SBLockScreenViewControllerBase : UIViewController <Swift>

{
    SBFLockScreenActionContext *_customLockScreenActionContext;
    _Bool _authenticated;
    _Bool _expectsFaceContact;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    double _backlightLevel;
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
    UIVisualEffectView *_wakeEffectView;
    SBFLockScreenWakeAnimator *_lockScreenWakeAnimator;
}

@property (weak, nonatomic) UIVisualEffectView *wakeEffectView;
@property (nonatomic, readonly) SBFLockScreenWakeAnimator *lockScreenWakeAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;
@property (nonatomic, readonly) _Bool contentOccludesBackground;
@property (nonatomic) double backlightLevel;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
@property (nonatomic, readonly) _Bool expectsFaceContact;
@property (nonatomic, readonly) _Bool shouldShowLockStatusBarTime;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)jiggleLockIcon;
- (_Bool)isPasscodeLockVisible;
- (_Bool)isMakingEmergencyCall;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)noteDeviceBlockedStatusUpdated;
- (_Bool)isHostingAnApp;
- (id)hostedAppSceneHandle;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isUnlockDisabled;
- (void)setInScreenOffMode:(_Bool)arg1 forAutoUnlock:(_Bool)arg2 fromUnlockSource:(int)arg3;
- (_Bool)isMainPageVisible;
- (void)launchEmergencyDialer;
- (_Bool)canHostAnApp;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)isInScreenOffMode;
- (_Bool)suppressesBanners;
- (_Bool)suppressesControlCenter;
- (_Bool)suppressesScreenshots;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)willUIUnlockFromSource:(int)arg1;
- (void)prepareForUIUnlock;
- (void)prepareForUILock;
- (void)finishUIUnlockFromSource:(int)arg1;
- (_Bool)canBeDeactivatedForUIUnlockFromSource:(int)arg1;
- (void)setInScreenOffMode:(_Bool)arg1;
- (_Bool)shouldDisableALS;
- (void)noteResetRestoreStateUpdated;
- (_Bool)shouldUnlockUIOnKeyDownEvent;
- (id)createHomeButtonShowPasscodeRecognizerForHomeButtonPress;
- (id)createHomeButtonSuppressAfterUnlockRecognizerForUnlockSource:(int)arg1;
- (_Bool)shouldAutoUnlockForSource:(int)arg1;
- (void)updateStatusBarForLockScreenTeardown;
- (void)updateStatusBarForLockScreenComeback;
- (void)startLockScreenFadeInAnimationForSource:(int)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)enableLockScreenPluginWithContext:(id)arg1;
- (void)disableLockScreenPluginWithContext:(id)arg1;
- (void)launchEmergencyDialerAnimated:(_Bool)arg1;
- (void)exitEmergencyDialerAnimated:(_Bool)arg1;
- (void)launchInCallAlert;
- (void)emergencyDialerExitedWithError:(id)arg1;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;

@end
