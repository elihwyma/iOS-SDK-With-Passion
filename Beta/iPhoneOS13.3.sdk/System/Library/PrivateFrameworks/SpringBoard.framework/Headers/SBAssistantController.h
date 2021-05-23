/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSEventQueue, FBDisplayLayoutElement, NSHashTable, NSMutableArray, NSSet, NSString, SBAssistantWindow, SBFAuthenticationAssertion, SBFluidDismissalState, SBHomeGestureParticipant, SBSystemAnimationSettings, SiriPresentationSpringBoardMainScreenViewController, UIApplicationSceneDeactivationAssertion;

@protocol BSInvalidatable, SBIdleTimer, SBIdleTimerCoordinating;

@interface SBAssistantController : NSObject <Swift>

{
    BSEventQueue *_operationQueue;
    NSString *_appDisplayIDBeingHosted;
    SBAssistantWindow *_assistantWindow;
    _Bool _unlockedDevice;
    _Bool _isHidingOtherWindows;
    SBFAuthenticationAssertion *_disableAssertion;
    NSHashTable *_observers;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SiriPresentationSpringBoardMainScreenViewController *_mainScreenSiriPresentation;
    SiriPresentationSpringBoardMainScreenViewController *_presentedMainScreenSiriPresentation;
    _Bool _visible;
    _Bool _dismissing;
    FBDisplayLayoutElement *_mainDisplayLayoutElement;
    SBFluidDismissalState *_fluidDismissalState;
    NSSet *_audioCategoriesDisablingVolumeHUD;
    id <BSInvalidatable> _hideApplicationModalAlertsAssertion;
    SBSystemAnimationSettings *_settings;
    id <SBIdleTimer> _idleTimer;
    NSMutableArray *_windowLevelAssertions;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    id <BSInvalidatable> _suspendWallpaperAnimationAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (retain, nonatomic) id <BSInvalidatable> suspendWallpaperAnimationAssertion;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (weak, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic, readonly) _Bool unlockedDevice;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;

+ (id)sharedInstance;
+ (_Bool)isVisible;
+ (id)sharedInstanceIfExists;
+ (void)bootstrapServices;
+ (_Bool)shouldBreadcrumbLaunchedApplicationWithBundleIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (id)window;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_setVisible:(_Bool)arg1;
- (void)handleSuccessfulAuthenticationRequest:(id)arg1;
- (void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2;
- (void)handleInvalidAuthenticationRequest:(id)arg1;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)requestPasscodeUnlockWithCompletion:(CDUnknownBlockType)arg1;
- (void)siriPresentation:(id)arg1 requestsPresentationWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)siriPresentation:(id)arg1 requestsDismissalWithOptions:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)siriPresentation:(id)arg1 isEnabledDidChange:(_Bool)arg2;
- (void)siriPresentation:(id)arg1 requestsPunchout:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)screenWakeRequested;
- (void)screenWakeIdleTimerResetRequested;
- (_Bool)siriPresentation:(id)arg1 requestsDeviceUnlockWithPassword:(id)arg2;
- (void)siriPresentation:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)dismissOverlayForDashBoardAnimated:(_Bool)arg1;
- (void)dismissAssistantViewIfNecessary;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)activationSettings;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldShowSystemVolumeHUDForCategory:(id)arg1;
- (id)_idleTimerBehavior;
- (void)_updateWindowLevel;
- (void)_prototypeSettingsChanged;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 factory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (double)_defaultAnimatedDismissDurationForMainScreen;
- (void)_dismissForMainScreenWithFactory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_activationSettingsWithPunchoutStyle:(long long)arg1;
- (void)_updateRootViewControllerOwnsHomeGesture;
- (void)_updateOrientationLock;
- (void)_toggleModalAlertHidingAssertion:(_Bool)arg1;
- (void)_bioAuthenticated:(id)arg1;
- (void)deviceUnlockRequestedWithPassword:(id)arg1;
- (void)_setUnlockedDevice:(_Bool)arg1;
- (void)_uiLocked:(id)arg1;
- (void)_deviceBlocked:(id)arg1;
- (void)_remoteLocked:(id)arg1;
- (void)_restoreOrientation;
- (void)_noteDeviceLockedOrBlocked;
- (void)_updateSceneClientSettings;
- (void)_createAssistantWindowIfNecessary;
- (void)_viewWillAppearOnMainScreen:(_Bool)arg1;
- (void)_setStatusBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_viewDidAppearOnMainScreen:(_Bool)arg1;
- (void)_viewWillDisappearOnMainScreen:(_Bool)arg1;
- (void)_viewDidDisappearOnMainScreen:(_Bool)arg1;
- (void)_presentForMainScreenAnimated:(_Bool)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)overrideInterfaceOrientation:(long long *)arg1;
- (id)mainScreenView;

@end
