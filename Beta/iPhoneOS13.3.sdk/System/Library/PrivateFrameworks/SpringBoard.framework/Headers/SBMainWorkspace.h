/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspace.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSEventQueueLock, BSWatchdog, FBDisplayLayoutTransition, FBSceneManager, NSMutableDictionary, NSMutableSet, NSString, SBAppStatusBarSettingsAssertion, SBControlCenterModuleTransientOverlayViewController, SBHUDController, SBHomeGestureArbiter, SBHomeHardwareButtonLongPressDurationAssertion, SBIdleTimerCoordinatorHelper, SBInCallTransientOverlayManager, SBOrientationAggdLogger, SBPowerDownViewController, SBRingerControl, SBTransientOverlayPresentationManager, SBVolumeControl, SBWorkspaceKeyboardFocusController, SBWorkspaceTransaction;

@protocol SBIdleTimerCoordinating, SBIdleTimerProviding;

@interface SBMainWorkspace : SBWorkspace <Swift>

{
    _Bool _initialized;
    BSEventQueueLock *_suspensionLock;
    _Bool _medusaEnabled;
    SBOrientationAggdLogger *_orientationAggdLogger;
    FBDisplayLayoutTransition *_displayLayoutTransition;
    SBWorkspaceTransaction *_currentTransaction;
    BSEventQueueLock *_currentTransactionLock;
    BSWatchdog *_transactionWatchdog;
    NSMutableDictionary *_extensionHandlersByType;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    NSMutableSet *_activeSuspendedWorkspaceTransitions;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    SBPowerDownViewController *_powerDownViewController;
    SBHomeHardwareButtonLongPressDurationAssertion *_powerDownLongPressDurationAssertion;
    SBControlCenterModuleTransientOverlayViewController *_presentedControlCenterModuleTransientOverlayViewController;
    NSMutableSet *_ocelotRepairRequests;
    SBWorkspaceKeyboardFocusController *_keyboardFocusController;
    id <SBIdleTimerProviding> _activeIdleTimerProvider;
    SBHUDController *_HUDController;
    SBVolumeControl *_volumeControl;
    SBRingerControl *_ringerControl;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBInCallTransientOverlayManager *_inCallTransientOverlayManager;
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    FBSceneManager *_sceneManager;
}

@property (retain, nonatomic) SBWorkspaceTransaction *currentTransaction;
@property (nonatomic, readonly) FBSceneManager *sceneManager;
@property (retain, nonatomic, getter=_activeIdleTimerProvider, setter=_setActiveIdleTimerProvider:) id <SBIdleTimerProviding> activeIdleTimerProvider;
@property (nonatomic, readonly, getter=isMedusaEnabled) _Bool medusaEnabled;
@property (nonatomic, readonly) SBHUDController *HUDController;
@property (nonatomic, readonly) SBVolumeControl *volumeControl;
@property (nonatomic, readonly) SBRingerControl *ringerControl;
@property (nonatomic, readonly) SBHomeGestureArbiter *homeGestureArbiter;
@property (nonatomic, readonly) SBInCallTransientOverlayManager *inCallTransientOverlayManager;
@property (nonatomic, readonly) SBTransientOverlayPresentationManager *transientOverlayPresentationManager;
@property (nonatomic, readonly) SBWorkspaceKeyboardFocusController *keyboardFocusController;
@property (nonatomic, readonly, getter=isSpringBoardActive) _Bool springBoardActive;
@property (retain, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic, readonly, getter=isPowerDownTransientOverlayTopmost) _Bool powerDownTransientOverlayFrontmost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)debugDescription;
+ (id)sharedInstance;
+ (id)start;
+ (id)_instanceIfExists;
+ (id)_sharedInstanceWithNilCheckPolicy:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)_suspend;
- (void)_resume;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)transactionDidComplete:(id)arg1;
- (void)watchdogStarted:(id)arg1;
- (void)watchdogFired:(id)arg1;
- (void)powerMonitorSystemSleepRequestAborted:(id)arg1;
- (void)powerMonitorSystemWillSleep:(id)arg1;
- (void)powerMonitorSystemWillWakeFromSleep:(id)arg1;
- (void)powerMonitorSystemDidWakeFromSleep:(id)arg1;
- (void)systemServicePrepareForShutdown:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)systemServicePrepareForExit:(id)arg1 andRelaunch:(_Bool)arg2;
- (void)systemService:(id)arg1 handleOpenApplicationRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)systemService:(id)arg1 isPasscodeLockedOrBlockedWithResult:(CDUnknownBlockType)arg2;
- (void)systemService:(id)arg1 handleActions:(id)arg2 origin:(id)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)systemService:(id)arg1 canActivateApplication:(id)arg2 withResult:(CDUnknownBlockType)arg3;
- (id)systemServiceApplicationInfoProvider:(id)arg1;
- (void)processDidExit:(id)arg1;
- (void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2;
- (void)applicationProcessWillLaunch:(id)arg1;
- (void)applicationProcessDidLaunch:(id)arg1;
- (void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3;
- (void)applicationProcessDebuggingStateDidChange:(id)arg1;
- (void)processManager:(id)arg1 didAddProcess:(id)arg2;
- (void)processManager:(id)arg1 didRemoveProcess:(id)arg2;
- (void)_addStateCaptureHandlers;
- (_Bool)requestTransitionWithOptions:(unsigned long long)arg1 builder:(CDUnknownBlockType)arg2 validator:(CDUnknownBlockType)arg3;
- (void)presentModuleWithIdentifier:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)powerDownViewControllerDidDisappear:(id)arg1;
- (void)powerDownViewControllerRequestsDismissal:(id)arg1;
- (void)powerDownViewControllerRequestsPowerDown:(id)arg1;
- (_Bool)dismissTransientOverlayViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (id)createRequestWithOptions:(unsigned long long)arg1;
- (id)transactionForTransitionRequest:(id)arg1;
- (_Bool)presentTransientOverlayViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)requestTransitionWithBuilder:(CDUnknownBlockType)arg1;
- (id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)executeTransitionRequest:(id)arg1;
- (void)dismissPowerDownTransientOverlayWithCompletion:(CDUnknownBlockType)arg1;
- (void)backlightController:(id)arg1 didAnimateBacklightToFactor:(float)arg2 source:(long long)arg3;
- (id)_applicationForIdentifier:(id)arg1;
- (void)_destroyApplicationSceneEntity:(id)arg1;
- (void)_applicationEntityWasRemovedFromAppSwitcher:(id)arg1;
- (void)_removeApplicationEntities:(id)arg1 withDestroyalIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateFrontMostApplicationEventPort;
- (void)_registerHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (void)_unregisterHandler:(id)arg1 forExtensionPoint:(id)arg2;
- (id)initWithEventQueue:(id)arg1;
- (_Bool)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(CDUnknownBlockType)arg3;
- (_Bool)executeTransitionRequest:(id)arg1 withValidator:(CDUnknownBlockType)arg2;
- (void)_updateMedusaEnablementAndNotify:(_Bool)arg1;
- (void)_coversheetDidPresent;
- (void)_coversheetDidDismiss;
- (void)_initializeAndObserveDefaults;
- (id)_selectTransactionForTransientOverlayPresentationRequest:(id)arg1;
- (id)_selectTransactionForAppActivationRequest:(id)arg1;
- (_Bool)_preflightTransitionRequest:(id)arg1;
- (void)_determineSourceForTransitionRequest:(id)arg1;
- (id)_transactionForTransitionRequest:(id)arg1;
- (id)_generateIdleTimerBehaviorForReason:(id)arg1;
- (void)_dismissPresentedControlCenterModule:(CDUnknownBlockType)arg1;
- (void)_addRequestCompletionBlock:(CDUnknownBlockType)arg1 toTransaction:(id)arg2;
- (_Bool)canExecuteTransitionRequest:(id)arg1;
- (_Bool)_executeTransientOverlayTransitionRequest:(id)arg1;
- (_Bool)_executeApplicationTransitionRequest:(id)arg1;
- (void)_cleanupAppRepairRequest:(id)arg1;
- (_Bool)_setCurrentTransactionForRequest:(id)arg1 fallbackProvider:(CDUnknownBlockType)arg2;
- (void)_executeSuspendedTransactionForRequest:(id)arg1;
- (id)_selectTransactionForReturningToTheLockScreenWithRequest:(id)arg1 fromApp:(id)arg2;
- (id)_selectTransactionForAppActivationUnderMainScreenLockRequest:(id)arg1;
- (id)_selectTransactionForAppActivationUnderMainScreenLock:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (id)_selectTransactionForReturningToTheLockScreenFromApp:(id)arg1 animated:(_Bool)arg2 forceToBuddy:(_Bool)arg3 withResult:(CDUnknownBlockType)arg4;
- (void)_finishInitialization;
- (_Bool)_handleSetupExited:(id)arg1;
- (void)_proposeIdleTimerBehaviorForReason:(id)arg1;
- (id)_selectTransactionForAppEntityRemoved:(id)arg1;
- (void)_handleBuddyLaunchFinished;
- (_Bool)_applicationProcessExited:(id)arg1 withContext:(id)arg2;
- (id)_selectTransactionForAppRelaunch:(id)arg1;
- (void)_handleTrustedOpenRequestForApplication:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)_handleUntrustedOpenRequestForApplication:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (id)_validateRequestToOpenApplication:(id)arg1 options:(id)arg2 origin:(id)arg3 error:(out id *)arg4;
- (_Bool)_canImplicitlyUnlockAtLockScreenWhileAuthenticatedFromOrigin:(id)arg1 givenOrigin:(id)arg2 trustedRequest:(_Bool)arg3 outReason:(id *)arg4;
- (void)_handleOpenApplicationRequest:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (void)_attemptUnlockToApplication:(id)arg1 showPasscode:(_Bool)arg2 origin:(id)arg3 givenOrigin:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)_handlerForExtensionPoint:(id)arg1;
- (void)_applyCommonActivationSettings:(id)arg1 forRequestWithOptions:(id)arg2 clientProcess:(id)arg3;
- (void)_handleUserActionRequest:(id)arg1 options:(id)arg2 activationSettings:(id)arg3 origin:(id)arg4 withResult:(CDUnknownBlockType)arg5;
- (_Bool)_isApplicationRunningAsViewService:(id)arg1;
- (void)_noteDidWakeFromSleep;
- (void)transientOverlayPresentationManager:(id)arg1 didDismissViewController:(id)arg2 wasTopmostPresentation:(_Bool)arg3;
- (void)transientOverlayPresentationManager:(id)arg1 willPresentViewController:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 preferredWhitePointAdaptivityStyleDidChangeWithAnimationSettings:(id)arg2;
- (_Bool)transientOverlayPresentationManager:(id)arg1 shouldResignFirstResponderForKeyWindow:(id)arg2;
- (_Bool)transientOverlayPresentationManager:(id)arg1 shouldRestoreFirstResponderForKeyWindow:(id)arg2;
- (void)transientOverlayPresentationManagerRequestsAppIconForceTouchDismissal:(id)arg1 animated:(_Bool)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireWallpaperAnimationSuspensionAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireDisableAutoUnlockAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireProximitySensorEnabledAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 acquireInteractiveScreenshotGestureDisabledAssertionWithReason:(id)arg2;
- (id)bannerLongLookPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
- (id)transientOverlayPresentationManager:(id)arg1 acquireBannerLongLookWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
- (void)transientOverlayPresentationManagerRequestsBannerLongLookDismissal:(id)arg1 animated:(_Bool)arg2;
- (id)controlCenterPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
- (id)transientOverlayPresentationManager:(id)arg1 acquireControlCenterWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
- (void)transientOverlayPresentationManagerRequestsControlCenterDismissal:(id)arg1 animated:(_Bool)arg2;
- (id)siriPresentationObservationTokenForTransientOverlayPresentationManager:(id)arg1;
- (id)transientOverlayPresentationManager:(id)arg1 acquireSiriWindowLevelAssertionWithReason:(id)arg2 windowLevel:(double)arg3;
- (void)transientOverlayPresentationManagerRequestsSiriDismissal:(id)arg1 animated:(_Bool)arg2;
- (id)currentStatusBarSettingsForTransientOverlayPresentationManager:(id)arg1;
- (id)transientOverlayPresentationManager:(id)arg1 acquireHideAppStatusBarAssertionWithReason:(id)arg2 animated:(_Bool)arg3;
- (id)transientOverlayPresentationManager:(id)arg1 acquireDeviceOrientationUpdateDeferralAssertionWithReason:(id)arg2;
- (id)transientOverlayPresentationManager:(id)arg1 newSceneDeactivationAssertionWithReason:(long long)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 registerCoverSheetExternalBehaviorProvider:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 unregisterCoverSheetExternalBehaviorProvider:(id)arg2;
- (void)transientOverlayPresentationManager:(id)arg1 willChangeTopmostViewControllerInterfaceOrientationToOrientation:(long long)arg2;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayPresentationManager:(id)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayPresentationManager:(id)arg1;
- (_Bool)defaultShouldAutorotateForTransientOverlayPresentationManager:(id)arg1;
- (void)controlCenterModuleTransientOverlayViewControllerNeedsDismissal:(id)arg1;
- (void)presentPowerDownTransientOverlay;
- (void)_broadcastCurrentTransaction;
- (void)updateFrontMostApplicationEventPort;
- (_Bool)dismissAllTransientOverlayPresentationsAnimated:(_Bool)arg1;

@end
