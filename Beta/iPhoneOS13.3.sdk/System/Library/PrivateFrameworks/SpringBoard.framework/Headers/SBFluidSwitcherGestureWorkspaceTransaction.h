/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>

@class NSString, NSTimer, NSUUID, SBAppLayout, SBAutoPiPWorkspaceTransaction, SBFluidSwitcherViewController, SBMainDisplayLayoutState, SBMainWorkspaceTransaction, SBSceneLayoutWorkspaceTransaction, SBTransientOverlayViewController, SBUISwitcherAnimationController, UIApplicationSceneDeactivationAssertion;

@protocol BSInvalidatable, SBFluidSwitcherGestureWorkspaceTransactionDelegate;

@interface SBFluidSwitcherGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction

{
    _Bool _calledBeginWithGesture;
    _Bool _hasActiveLayoutStateTransitionCoordinatorTransition;
    _Bool _hasCompletedFirstCACommitSinceTransactionBeganForPPT;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    long long _numberOfAppLayoutsTraveledWithArcSwipe;
    _Bool _shouldCancelGestureUponInterruption;
    _Bool _hasCompletedAtLeastOneGesture;
    SBFluidSwitcherViewController *_switcherViewController;
    id <SBFluidSwitcherGestureWorkspaceTransactionDelegate> _delegate;
    UIApplicationSceneDeactivationAssertion *_backgroundingScenesDeactivationAssertion;
    SBMainDisplayLayoutState *_originalLayoutState;
    SBMainDisplayLayoutState *_activeLayoutState;
    SBUISwitcherAnimationController *_animationController;
    SBMainWorkspaceTransaction *_finalRootTransaction;
    SBSceneLayoutWorkspaceTransaction *_sceneLayoutTransaction;
    CDUnknownBlockType _layoutCompletion;
    SBAutoPiPWorkspaceTransaction *_autoPiPWorkspaceTransaction;
    NSTimer *_activateScenesTimer;
    SBTransientOverlayViewController *_switcherTransitioningTransientOverlayViewController;
    NSUUID *_gestureID;
    SBAppLayout *_selectedAppLayout;
}

@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (weak, nonatomic) id <SBFluidSwitcherGestureWorkspaceTransactionDelegate> delegate;
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *backgroundingScenesDeactivationAssertion;
@property (retain, nonatomic) SBMainDisplayLayoutState *originalLayoutState;
@property (retain, nonatomic) SBMainDisplayLayoutState *activeLayoutState;
@property (retain, nonatomic) SBUISwitcherAnimationController *animationController;
@property (retain, nonatomic) SBMainWorkspaceTransaction *finalRootTransaction;
@property (retain, nonatomic) SBSceneLayoutWorkspaceTransaction *sceneLayoutTransaction;
@property (copy, nonatomic) CDUnknownBlockType layoutCompletion;
@property (retain, nonatomic) SBAutoPiPWorkspaceTransaction *autoPiPWorkspaceTransaction;
@property (retain, nonatomic) NSTimer *activateScenesTimer;
@property (retain, nonatomic) SBTransientOverlayViewController *switcherTransitioningTransientOverlayViewController;
@property (nonatomic, readonly) _Bool hasCompletedAtLeastOneGesture;
@property (nonatomic, readonly) NSUUID *gestureID;
@property (retain, nonatomic) SBAppLayout *selectedAppLayout;
@property (nonatomic) _Bool shouldCancelGestureUponInterruption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)transactionDidComplete:(id)arg1;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (long long)_gestureType;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;
- (id)_createWorkspaceTransientOverlayForAppLayout:(id)arg1;
- (void)_beginWithGesture:(id)arg1;
- (void)_updateWithGesture:(id)arg1;
- (void)_finishWithGesture:(id)arg1;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)systemGestureStateChanged:(id)arg1;
- (void)_failRunningLayoutStateTransition;
- (void)_updatePPTsForGestureTransactionBegan;
- (void)_switcherGestureDidUpdate:(id)arg1;
- (id)_transitionRequestForApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2;
- (id)_currentGestureEventForGesture:(id)arg1;
- (void)_updatePPTsForGestureEnded;
- (id)_copiedTransitionRequestFromTransitionRequest:(id)arg1;
- (void)_updatePPTsForAnimationEndedWithFinalLayoutState:(id)arg1;
- (void)_addChildWorkspaceTransaction:(id)arg1;
- (id)_transitionRequestForSwitcherTransitionRequest:(id)arg1 eventLabel:(id)arg2;
- (void)_addWaitForSceneLayoutTransitionTransaction:(id)arg1 forLeafAnimationControllers:(id)arg2;
- (void)_acquireBackgroundingScenesDeactivationAssertionForTransitionRequest:(id)arg1;
- (void)_runSceneLayoutTransactionForTransitionRequest:(id)arg1 updateScenes:(_Bool)arg2;
- (id)createSceneEntityForHandle:(id)arg1;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (id)initWithTransitionRequest:(id)arg1 fluidSwitcherViewController:(id)arg2 delegate:(id)arg3;
- (_Bool)shouldSuppressMedusaKeyboardDuringGesture;
- (void)completeGestureWithTransitionRequest:(id)arg1;

@end
