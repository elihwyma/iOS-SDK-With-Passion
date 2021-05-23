/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, NSTimer, SBAppSwitcherSettings, SBFHomeGrabberSettings, SBFluidScrunchGestureRecognizer, SBFluidSwitcherGestureWorkspaceTransaction, SBFluidSwitcherPanGestureRecognizer, SBFluidSwitcherViewController, SBGrabberTongue, SBHomeGestureParticipant, SBHomeGestureSettings, SBHomeGrabberView, SBMainDisplaySceneLayoutDragAndDropInteractionManager, SBMainDisplaySceneLayoutViewController, SBPanSystemGestureRecognizer, SBReachabilitySettings, SBSwitcherForcePressSystemGestureRecognizer, UINotificationFeedbackGenerator, UIView;

@protocol SBFluidSwitcherGestureManagerDelegate;

@interface SBFluidSwitcherGestureManager : NSObject <Swift>

{
    _Bool _usesHomeAffordanceRulesForGrabberTongue;
    _Bool _interactivelyPresentingTongue;
    _Bool _playedEdgeProtectHaptic;
    _Bool _shouldRubberbandGrabberViewForReduceMotion;
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBFluidSwitcherViewController *_floatingSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    id <SBFluidSwitcherGestureManagerDelegate> _delegate;
    SBHomeGrabberView *_currentHomeGrabberView;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBHomeGestureSettings *_homeGestureSettings;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBReachabilitySettings *_reachabilitySettings;
    SBHomeGestureParticipant *_homeGestureParticipant;
    SBFluidSwitcherPanGestureRecognizer *_deckInSwitcherPanGestureRecognizer;
    SBGrabberTongue *_deckGrabberTongue;
    SBFluidSwitcherPanGestureRecognizer *_activateReachabilityGestureRecognizer;
    UINotificationFeedbackGenerator *_edgeProtectFeedbackGenerator;
    NSTimer *_delayedHomeGrabberUpdateTimer;
    UIView *_exclusionTrapezoidDebugView;
    SBSwitcherForcePressSystemGestureRecognizer *_deckSwitcherForcePressRecognizer;
    SBFluidScrunchGestureRecognizer *_fluidScrunchGestureRecognizer;
    SBGrabberTongue *_floatingAppGrabberTongue;
    SBFluidSwitcherPanGestureRecognizer *_swipeUpFloatingAppGestureRecognizer;
    SBFluidSwitcherPanGestureRecognizer *_moveFloatingApplicationGestureRecognizer;
    SBPanSystemGestureRecognizer *_pinFloatingApplicationGestureRecognizer;
    SBPanSystemGestureRecognizer *_unpinSplitViewApplicationGestureRecognizer;
    SBMainDisplaySceneLayoutDragAndDropInteractionManager *_dragAndDropInteractionManager;
    SBFluidSwitcherGestureWorkspaceTransaction *_activeGestureTransaction;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *mainSwitcherContentController;
@property (weak, nonatomic) SBFluidSwitcherViewController *floatingSwitcherContentController;
@property (weak, nonatomic) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (weak, nonatomic) id <SBFluidSwitcherGestureManagerDelegate> delegate;
@property (weak, nonatomic) SBHomeGrabberView *currentHomeGrabberView;
@property (retain, nonatomic) SBAppSwitcherSettings *appSwitcherSettings;
@property (retain, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBFHomeGrabberSettings *homeGrabberSettings;
@property (retain, nonatomic) SBReachabilitySettings *reachabilitySettings;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *deckInSwitcherPanGestureRecognizer;
@property (retain, nonatomic) SBGrabberTongue *deckGrabberTongue;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *activateReachabilityGestureRecognizer;
@property (nonatomic) _Bool usesHomeAffordanceRulesForGrabberTongue;
@property (nonatomic) _Bool interactivelyPresentingTongue;
@property (nonatomic) _Bool playedEdgeProtectHaptic;
@property (retain, nonatomic) UINotificationFeedbackGenerator *edgeProtectFeedbackGenerator;
@property (retain, nonatomic) NSTimer *delayedHomeGrabberUpdateTimer;
@property (retain, nonatomic) UIView *exclusionTrapezoidDebugView;
@property (nonatomic) _Bool shouldRubberbandGrabberViewForReduceMotion;
@property (retain, nonatomic) SBSwitcherForcePressSystemGestureRecognizer *deckSwitcherForcePressRecognizer;
@property (retain, nonatomic) SBFluidScrunchGestureRecognizer *fluidScrunchGestureRecognizer;
@property (retain, nonatomic) SBGrabberTongue *floatingAppGrabberTongue;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *swipeUpFloatingAppGestureRecognizer;
@property (retain, nonatomic) SBFluidSwitcherPanGestureRecognizer *moveFloatingApplicationGestureRecognizer;
@property (retain, nonatomic) SBPanSystemGestureRecognizer *pinFloatingApplicationGestureRecognizer;
@property (retain, nonatomic) SBPanSystemGestureRecognizer *unpinSplitViewApplicationGestureRecognizer;
@property (retain, nonatomic) SBMainDisplaySceneLayoutDragAndDropInteractionManager *dragAndDropInteractionManager;
@property (retain, nonatomic) SBFluidSwitcherGestureWorkspaceTransaction *activeGestureTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (id)_currentLayoutState;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didBeginGesture:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didUpdateGesture:(id)arg2;
- (void)fluidSwitcherGestureTransaction:(id)arg1 didEndGesture:(id)arg2;
- (void)completeGestureWithTransitionRequest:(id)arg1;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (_Bool)grabberTongueOrPullEnabled:(id)arg1;
- (_Bool)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2;
- (_Bool)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2;
- (void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueWillPresent:(id)arg1;
- (void)grabberTongueWillDismiss:(id)arg1;
- (void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3;
- (id)customGestureRecognizerForGrabberTongue:(id)arg1;
- (_Bool)shouldSuppressTongueViewForGrabberTongue:(id)arg1;
- (long long)_currentUnlockedEnvironmentMode;
- (id)initWithMainSwitcherContentController:(id)arg1 floatingSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 delegate:(id)arg4;
- (id)_currentFloatingAppLayout;
- (id)dragAndDropInteractionManager:(id)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(id)arg2;
- (id)dragAndDropInteractionManager:(id)arg1 displayItemForDraggingWindowWithGestureRecognizer:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didBeginGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didUpdateGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didEndGesture:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2;
- (void)dragAndDropInteractionManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2;
- (void)_updateDeckSwitcherForcePressGesturePresence;
- (void)_setUpGestureRecognizers;
- (void)_updateSwitcherBottomEdgeGesturePresence;
- (void)_updateDeckSwitcherInSwitcherAndReachabilityGesturePresence;
- (void)_configureScrunchGesture;
- (void)_configureFloatingApplicationGestureRecognizers;
- (void)_handleScrunchGesture:(id)arg1;
- (void)_handleFluidGesture:(id)arg1;
- (void)_handleWindowDragGestureRecognizer:(id)arg1;
- (void)_handleDeckSwitcherPanGesture:(id)arg1;
- (void)_updateReachabilityGestureSettings;
- (void)_handleDeckSwitcherForcePressGesture:(id)arg1;
- (void)_updateExclusionTrapezoidDebugView;
- (_Bool)_shouldSuppressEdgeProtectToAllowSwipesImmediatelyAfterTransition;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1;
- (void)_handleSwitcherPanGestureBegan:(id)arg1;
- (void)_handleSwitcherPanGestureChanged:(id)arg1;
- (void)_handleSwitcherPanGestureEnded:(id)arg1;
- (_Bool)_isTransactionRunningForGestureRecognizer:(id)arg1;
- (void)_handleSwitcherGestureBegan:(id)arg1;
- (void)_updateHomeGrabberWithAnimationMode:(long long)arg1;
- (id)_layoutElementViewControllerAtLocation:(struct CGPoint)arg1;
- (void)_hideGrabberAnimated:(_Bool)arg1;
- (void)_startFluidSwitcherTransactionForGestureRecognizer:(id)arg1;
- (id)_switcherViewControllerForGestureRecognizer:(id)arg1;
- (void)_configureTransitionRequest:(id)arg1 forGestureBegin:(id)arg2;
- (long long)_gestureTypeForGestureRecognizer:(id)arg1;
- (Class)_fluidSwitcherGestureTransactionClassForGestureType:(long long)arg1;
- (_Bool)_shouldReachabilityGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldDeckInSwitcherPanGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldFloatingApplicationSwipeUpGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldFloatingApplicationMoveGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldFloatingApplicationPinGesture:(id)arg1 receiveTouch:(id)arg2;
- (_Bool)_shouldSplitViewApplicationUnpinGesture:(id)arg1 receiveTouch:(id)arg2;
- (struct CGRect)_floatingApplicationBounds;
- (_Bool)_shouldBeginReachabilityGesture:(id)arg1;
- (_Bool)_shouldBeginBottomEdgePanGesture:(id)arg1;
- (_Bool)_shouldBeginDeckInSwitcherPanGesture:(id)arg1;
- (_Bool)_shouldBeginFluidScrunchGesture:(id)arg1;
- (_Bool)_shouldBeginDeckForcePressGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationSwipeUpGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationMoveGesture:(id)arg1;
- (_Bool)_shouldBeginFloatingApplicationPinGesture:(id)arg1;
- (_Bool)_shouldBeginSplitViewApplicationUnpinGesture:(id)arg1;
- (_Bool)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(unsigned long long)arg1;
- (_Bool)_shouldAllowFloatingApplicationGesture:(id)arg1 failureReason:(id *)arg2;
- (_Bool)_shouldSuppressEdgeProtect;
- (_Bool)_shouldBeginFloatingApplicationPresentGesture:(id)arg1;
- (_Bool)_shouldProtectEdgeLocation:(double)arg1;
- (id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
- (_Bool)_edgeLocationIsOutsideFloatingApplicationGrabberFreeRegion:(double)arg1;
- (void)_handleFloatingAppPresentGesture:(id)arg1;
- (_Bool)_isEdgeLocationInHomeAffordanceRegion:(double)arg1;

@end
