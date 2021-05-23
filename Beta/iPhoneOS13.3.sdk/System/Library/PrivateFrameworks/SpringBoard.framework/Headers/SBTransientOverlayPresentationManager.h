/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMapTable, NSMutableArray, NSNumber, NSString, SBAlertItemsController, SBAppStatusBarSettingsAssertion, SBBannerController, SBHomeGestureArbiter, SBHomeGestureParticipant, SBIdleTimerCoordinatorHelper, SBInAppStatusBarHiddenAssertion, SBLockStateAggregator, SBReachabilityManager, SBTransientOverlayViewController, UIScreen, UIStatusBarStyleRequest, UIWindow;

@protocol BSInvalidatable, CSExternalBehaviorProviding, SBIdleTimerCoordinating, SBTransientOverlayPresentationManagerDelegate;

@interface SBTransientOverlayPresentationManager : NSObject <Swift>

{
    SBAlertItemsController *_alertItemsController;
    SBBannerController *_bannerController;
    id <BSInvalidatable> _bannerSuppressionAssertion;
    NSMutableArray *_contentStatusBarHiddenAssertions;
    id <CSExternalBehaviorProviding> _coverSheetExternalBehaviorProvider;
    id <BSInvalidatable> _deviceOrientationUpdateDeferralAssertion;
    NSMutableArray *_entities;
    NSMapTable *_entityToSceneDeactivationAssertion;
    SBHomeGestureArbiter *_homeGestureArbiter;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    UIWindow *_initialPresentationKeyWindow;
    id <BSInvalidatable> _interactiveScreenshotGestureDisabledAssertion;
    _Bool _isInitiatingEntityPresentation;
    _Bool _isPendingAlertItems;
    _Bool _isReachabilityTemporarilyDisabled;
    SBLockStateAggregator *_lockStateAggregator;
    SBReachabilityManager *_reachabilityManager;
    UIScreen *_screen;
    SBAppStatusBarSettingsAssertion *_globalStatusBarAssertion;
    SBInAppStatusBarHiddenAssertion *_appStatusBarAssertion;
    _Bool _prefersStatusBarActivityItemVisible;
    NSNumber *_preferredWhitePointAdaptivityStyleValue;
    long long _topmostViewControllerInterfaceOrientation;
    id <SBTransientOverlayPresentationManagerDelegate> _delegate;
}

@property (retain, nonatomic) SBBannerController *bannerController;
@property (weak, nonatomic) id <SBTransientOverlayPresentationManagerDelegate> delegate;
@property (nonatomic, readonly) _Bool hasIdleTimerBehaviors;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic, readonly) SBTransientOverlayViewController *topmostPresentedViewController;
@property (nonatomic, readonly) _Bool hasActivePresentation;
@property (nonatomic, readonly) long long presentedViewControllerCount;
@property (nonatomic, readonly) _Bool canHandleButtonEvents;
@property (copy, nonatomic, readonly) UIStatusBarStyleRequest *currentStatusBarStyleRequest;
@property (nonatomic, readonly) _Bool hasVisibleStatusBar;
@property (nonatomic, readonly) _Bool prefersStatusBarActivityItemVisible;
@property (nonatomic, readonly) NSNumber *preferredWhitePointAdaptivityStyleValue;
@property (nonatomic, readonly) long long topmostViewControllerInterfaceOrientation;
@property (nonatomic, readonly) double topmostWindowLevel;
@property (nonatomic, readonly) _Bool ownsHomeGesture;
@property (nonatomic, readonly) long long preferredGestureDismissalStyle;
@property (nonatomic, readonly) SBTransientOverlayViewController *viewControllerForGestureDismissal;
@property (nonatomic, readonly) _Bool shouldDisableControlCenter;
@property (nonatomic, readonly) _Bool shouldDisableCoverSheet;
@property (nonatomic, readonly) _Bool shouldDisableSiri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)handleDoubleHeightStatusBarTap;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (_Bool)isPresentingViewController:(id)arg1;
- (void)performPresentationRequest:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (_Bool)isTopmostPresentedViewController:(id)arg1;
- (id)initWithScreen:(id)arg1 alertItemsController:(id)arg2 lockStateAggregator:(id)arg3 homeGestureArbiter:(id)arg4 reachabilityManager:(id)arg5;
- (void)performDismissalRequest:(id)arg1;
- (void)setFluidDismissalState:(id)arg1 forViewController:(id)arg2;
- (_Bool)hasPresentationAboveWindowLevel:(double)arg1;
- (void)_invalidateAssertionsForEntity:(id)arg1;
- (id)_buttonEventHandlingViewController;
- (id)_topmostPresentedEntity;
- (void)_updateFeaturePolicies;
- (id)_statusBarEntity;
- (void)_updateContentStatusBarPresentation;
- (void)_dismissEntity:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_currentExternalStatusBarSettings;
- (void)_updateBackgroundWindowForEntity:(id)arg1;
- (double)_windowLevelForEntity:(id)arg1;
- (void)_updateHomeGestureStateAnimated:(_Bool)arg1;
- (void)_applyProximityDetectionModeForEntity:(id)arg1;
- (void)_applyWallpaperAnimationSuspensionAssertionForEntity:(id)arg1;
- (void)_updateDeactivationAssertions;
- (void)_updateStatusBarWithCurrentExternalStatusBarSettings:(id)arg1 animated:(_Bool)arg2;
- (void)_updatePreferredWhitePointAdaptivityStyle;
- (void)_getContentScale:(double *)arg1 translation:(struct CGPoint *)arg2 forEntity:(id)arg3;
- (int)_preferredStatusBarVisibilityForEntity:(id)arg1;
- (_Bool)_isPresentationStatusBarHiddenForVisibility:(int)arg1 currentExternalStatusBarSettings:(id)arg2;
- (double)_backgroundWindowLevelForEntity:(id)arg1;
- (id)_newSceneDeactivationAssertionWithReason:(long long)arg1;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
- (_Bool)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;
- (void)transientOverlayViewControllerDidEndRotation:(id)arg1;
- (id)newContentStatusBarHiddenAssertionWithReason:(id)arg1;

@end
