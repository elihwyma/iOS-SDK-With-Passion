/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSCoverSheetViewController, NSString, SBDashBoardAnalyticsEmitter, SBDashBoardApplicationLauncher, SBDashBoardBiometricUnlockController, SBDashBoardEmergencyDialerController, SBDashBoardIdleTimerController, SBDashBoardOrientationController, SBDashBoardPluginController, SBDashBoardPolicyBasedBehaviorProvider, SBDashBoardSetupController, SBDashBoardSpotlightPresenter, SBFLockScreenActionContext, SBLockScreenActionManager, UIViewController;

@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorDelegate, SBButtonEventsHandler, SBFScreenWakeAnimationTarget, SBIdleTimerProviding, SBLockScreenApplicationLaunching, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenStatusBarTransitioning;

@interface SBDashBoardLockScreenEnvironment : NSObject <Swift>

{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardAnalyticsEmitter *_analyticsEmitter;
    SBDashBoardApplicationLauncher *_applicationLauncher;
    SBDashBoardBiometricUnlockController *_biometricUnlockController;
    SBLockScreenActionManager *_lockScreenActionManager;
    SBDashBoardEmergencyDialerController *_emergencyDialerController;
    SBDashBoardIdleTimerController *_idleTimerController;
    SBDashBoardOrientationController *_orientationController;
    SBDashBoardPluginController *_pluginController;
    SBDashBoardPolicyBasedBehaviorProvider *_policyBasedBehaviorProvider;
    SBDashBoardSetupController *_setupController;
    SBDashBoardSpotlightPresenter *_spotlightPresenter;
    _Bool _expectsFaceContact;
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
}

@property (nonatomic, readonly) CSCoverSheetViewController *coverSheetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;
@property (nonatomic) double backlightLevel;
@property (retain, nonatomic, getter=_customLockScreenActionContext) SBFLockScreenActionContext *customLockScreenActionContext;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, getter=isShowingMediaControls) _Bool showingMediaControls;
@property (nonatomic, readonly) _Bool expectsFaceContact;
@property (nonatomic, readonly) _Bool shouldShowLockStatusBarTime;
@property (nonatomic, readonly) UIViewController *rootViewController;
@property (nonatomic, readonly) id <SBAutoUnlockRule> autoUnlockRule;
@property (nonatomic, readonly) id <SBBiometricUnlockBehavior> biometricUnlockBehavior;
@property (nonatomic, readonly) id <SBButtonEventsHandler> buttonEventsHandler;
@property (nonatomic, readonly) id <SBApplicationHosting> applicationHoster;
@property (nonatomic, readonly) id <SBIdleTimerProviding> idleTimerProvider;
@property (nonatomic, readonly) id <SBFScreenWakeAnimationTarget> screenWakeAnimationTarget;
@property (nonatomic, readonly) id <SBLockScreenApplicationLaunching> applicationLauncher;
@property (nonatomic, readonly) id <SBLockScreenBacklightControlling> backlightController;
@property (nonatomic, readonly) id <SBLockScreenBehaviorSuppressing> behaviorSuppressor;
@property (nonatomic, readonly) id <SBLockScreenBlockedStateObserving> blockedStateObserver;
@property (nonatomic, readonly) id <SBLockScreenButtonObserving> buttonObserver;
@property (nonatomic, readonly) id <SBLockScreenCallHandling> callController;
@property (nonatomic, readonly) id <SBLockScreenContentStateProviding> contentStateProvider;
@property (nonatomic, readonly) id <SBLockScreenCustomActionStoring> customActionStore;
@property (nonatomic, readonly) id <SBLockScreenIdleTimerControlling> idleTimerController;
@property (nonatomic, readonly) id <SBLockScreenLockingAndUnlocking> lockController;
@property (nonatomic, readonly) id <SBLockScreenMediaControlsPresenting> mediaControlsPresenter;
@property (nonatomic, readonly) id <SBLockScreenPasscodeViewPresenting> passcodeViewPresenter;
@property (nonatomic, readonly) id <SBLockScreenPluginPresenting> pluginPresenter;
@property (nonatomic, readonly) id <SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider;
@property (nonatomic, readonly) id <SBLockScreenStatusBarTransitioning> statusBarTransitionController;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)jiggleLockIcon;
- (_Bool)isPasscodeLockVisible;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)noteDeviceBlockedStatusUpdated;
- (_Bool)isHostingAnApp;
- (id)hostedAppSceneHandle;
- (void)setPasscodeLockVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isUnlockDisabled;
- (void)setInScreenOffMode:(_Bool)arg1 forAutoUnlock:(_Bool)arg2 fromUnlockSource:(int)arg3;
- (_Bool)isMainPageVisible;
- (_Bool)canHostAnApp;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)isInScreenOffMode;
- (void)coverSheetViewController:(id)arg1 didChangeActiveBehavior:(id)arg2;
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
- (id)initWithCoverSheetViewController:(id)arg1;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;
- (void)_setExpectsFaceContact:(_Bool)arg1;

@end
