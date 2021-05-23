/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSSimpleAssertion, CCUIModularControlCenterOverlayViewController, CCUIStatusBarStyleSnapshot, FBDisplayLayoutElement, NSArray, NSHashTable, NSMutableArray, NSSet, NSString, PTSingleTestRecipe, SBAppStatusBarSettingsAssertion, SBAsynchronousRenderingAssertion, SBBarSwipeAffordanceViewController, SBControlCenterSystemAgent, SBControlCenterWindow, SBGrabberTongue, UIApplicationSceneDeactivationAssertion, UIColor, UIPanGestureRecognizer, _UILegibilitySettings;

@protocol BSInvalidatable, SBIdleTimerCoordinating, UICoordinateSpace;

@interface SBControlCenterController : NSObject <Swift>

{
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    SBControlCenterWindow *_window;
    CCUIModularControlCenterOverlayViewController *_viewController;
    SBBarSwipeAffordanceViewController *_homeAffordanceViewController;
    SBControlCenterSystemAgent *_systemAgent;
    BSSimpleAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBGrabberTongue *_grabberTongue;
    UIPanGestureRecognizer *_statusBarPullGestureRecognizer;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    FBDisplayLayoutElement *_displayLayoutElement;
    NSHashTable *_observers;
    NSMutableArray *_windowLevelAssertions;
    id <BSInvalidatable> _idleTimerDisableAssertion;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    PTSingleTestRecipe *_presentModuleTestRecipe;
    PTSingleTestRecipe *_userInterfaceStyleTestRecipe;
}

@property (retain, nonatomic) SBControlCenterWindow *window;
@property (retain, nonatomic) CCUIModularControlCenterOverlayViewController *viewController;
@property (retain, nonatomic) SBBarSwipeAffordanceViewController *homeAffordanceViewController;
@property (retain, nonatomic) SBControlCenterSystemAgent *systemAgent;
@property (retain, nonatomic) BSSimpleAssertion *hideStatusBarAssertion;
@property (retain, nonatomic) SBAppStatusBarSettingsAssertion *statusBarAssertion;
@property (retain, nonatomic) SBAsynchronousRenderingAssertion *asynchronousRenderingAssertion;
@property (retain, nonatomic) SBGrabberTongue *grabberTongue;
@property (retain, nonatomic) UIPanGestureRecognizer *statusBarPullGestureRecognizer;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *resignActiveAssertion;
@property (retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableArray *windowLevelAssertions;
@property (retain, nonatomic) id <BSInvalidatable> idleTimerDisableAssertion;
@property (retain, nonatomic) id <BSInvalidatable> deferOrientationUpdatesAssertion;
@property (nonatomic, readonly) PTSingleTestRecipe *presentModuleTestRecipe;
@property (nonatomic, readonly) PTSingleTestRecipe *userInterfaceStyleTestRecipe;
@property (nonatomic, readonly, getter=isPresented) _Bool presented;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (nonatomic, readonly) _Bool allowGestureForContentBelow;
@property (nonatomic, readonly) unsigned long long presentingEdge;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
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
@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;
@property (copy, nonatomic, readonly) NSString *appearanceIdentifier;
@property (nonatomic, readonly) long long backgroundStyle;
@property (copy, nonatomic, readonly) NSSet *components;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (copy, nonatomic, readonly) CCUIStatusBarStyleSnapshot *hostStatusBarStyle;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreatingIfNeeded:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_didPresent;
- (void)dismissAnimated:(_Bool)arg1;
- (void)_setStatusBarHidden:(_Bool)arg1;
- (void)_didDismiss;
- (void)presentAnimated:(_Bool)arg1;
- (void)presentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleMenuButtonTap;
- (void)_willPresent;
- (void)_willBeginTransition;
- (void)_didEndTransition;
- (void)dismissOverlayForDashBoardAnimated:(_Bool)arg1;
- (_Bool)allowShowTransition;
- (void)controlCenterViewController:(id)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (void)willOpenExpandedModuleForControlCenterViewController:(id)arg1;
- (void)didCloseExpandedModuleForControlCenterViewController:(id)arg1;
- (void)controlCenterViewController:(id)arg1 didChangePresentationState:(unsigned long long)arg2;
- (id)reachabilitySpringAnimationBehaviorForControlCenterViewController:(id)arg1;
- (void)controlCenterViewController:(id)arg1 significantPresentationProgressChange:(double)arg2;
- (void)controlCenterViewController:(id)arg1 wantsHostStatusBarHidden:(_Bool)arg2;
- (double)reachabilityOffsetForControlCenterViewController:(id)arg1;
- (double)_reachabilityOffset;
- (void)_screenDidDim;
- (void)handleReachabilityModeActivated;
- (void)handleReachabilityModeDeactivated;
- (void)handleReachabilityYOffsetDidChange;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)acquireWindowLevelAssertionWithPriority:(long long)arg1 windowLevel:(double)arg2 reason:(id)arg3;
- (id)_controlCenterWindow;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (id)hideAnimationSettingsForBarSwipeAffordanceView:(id)arg1;
- (id)unhideAnimationSettingsForBarSwipeAffordanceView:(id)arg1;
- (void)_uiRelockedNotification:(id)arg1;
- (void)_handleStatusBarPullDownGesture:(id)arg1;
- (void)_updateWindowLevel;
- (_Bool)isPresentedOrDismissing;
- (void)_disableReachability;
- (_Bool)_shouldAllowControlCenterGesture;
- (_Bool)_shouldShowGrabberOnFirstSwipe;
- (struct CGPoint)_locationOfTouchInActiveInterfaceOrientation:(id)arg1 gestureRecognizer:(id)arg2;
- (_Bool)_isLocationXWithinTrailingStatusBarRegion:(double)arg1;
- (_Bool)isDismissedOrDismissing;
- (void)_updateWindowOrientation;
- (void)_updateWindowVisibility;
- (struct CGPoint)_presentGestureLocationInView;
- (struct CGPoint)_presentGestureTranslationInView:(_Bool)arg1;
- (struct CGPoint)_presentGestureVelocityInView;
- (void)_willDismiss;
- (void)_enumerateObservers:(CDUnknownBlockType)arg1;
- (_Bool)allowShowTransitionSystemGesture;
- (double)_homeAffordanceAnimationDelay;
- (_Bool)_isStatusBarHiddenIgnoringControlCenter;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (_Bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongueHonorsAmbiguousActivationMargin:(id)arg1;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)grabberTongueDidDismiss:(id)arg1;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (void)_requirePresentGestureRecognizerToFailForGestureRecognizer:(id)arg1;
- (void)_requireGestureRecognizerToFailForPresentGestureRecognizer:(id)arg1;

@end
