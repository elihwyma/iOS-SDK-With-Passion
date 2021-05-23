/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSCountedSet, NSSet, NSString, SBAppRepairTransaction, SBFloatingDockBehaviorAssertion, SBSceneLayoutWorkspaceTransaction, SBUIAnimationController, UIApplicationSceneDeactivationAssertion;

@interface SBToAppsWorkspaceTransaction : SBMainWorkspaceTransaction <Swift>

{
    CDUnknownBlockType _transitionCompletion;
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    CDUnknownBlockType _layoutTransitionContinuation;
    SBAppRepairTransaction *_appRepairTransaction;
    SBUIAnimationController *_animationController;
    NSCountedSet *_completionDelayRequesters;
    _Bool _underLockScreenInForeground;
    _Bool _gestureInitiated;
    unsigned long long _preactivationForegroundRunningApplicationCount;
    _Bool _toAndFromApplicationsDiffer;
    _Bool _retriedAfterVoluntaryExit;
    _Bool _applicationStateNeedsCapture;
    _Bool _dismissedOverlays;
    _Bool _shouldDismissOverlays;
    _Bool _touchCancellationDisabled;
    SBSceneLayoutWorkspaceTransaction *_layoutTransaction;
    SBFloatingDockBehaviorAssertion *_floatingDockBehaviorAssertion;
}

@property (retain, nonatomic) SBFloatingDockBehaviorAssertion *floatingDockBehaviorAssertion;
@property (nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBSceneLayoutWorkspaceTransaction *layoutTransaction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)canInterruptTransaction:(id)arg1 forTransitionRequest:(id)arg2;

- (void)dealloc;
- (void)_willBegin;
- (_Bool)_canBeInterrupted;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (id)_customizedDescriptionProperties;
- (void)_willFailWithReason:(id)arg1;
- (void)_didComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (void)_didInterruptWithReason:(id)arg1;
- (double)watchdogTimeout;
- (_Bool)shouldWatchdog:(id *)arg1;
- (id)_transitionContext;
- (id)animationController;
- (_Bool)_beginAnimation;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (_Bool)_transitionWasCancelled;
- (void)_beginAnimationIfNecessary;
- (void)_beginTransition;
- (void)_endTransition;
- (id)_setupAnimation;
- (id)initWithTransitionRequest:(id)arg1;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationControllerDidRevealApplication:(id)arg1;
- (void)_setShouldDismissOverlays:(_Bool)arg1;
- (id)createSceneEntityForHandle:(id)arg1;
- (void)transactionWillBeginLayoutTransition:(id)arg1;
- (void)transaction:(id)arg1 performTransitionWithCompletion:(CDUnknownBlockType)arg2;
- (void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(CDUnknownBlockType)arg2;
- (void)activateApplications;
- (void)_relinquishResignActiveAssertion;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_delayTransitionCompletionForRequester:(id)arg1;
- (void)_stopDelayingTransitionCompletionForRequester:(id)arg1;
- (void)_clearAnimation;
- (_Bool)_shouldResignActiveForAnimation;
- (_Bool)isGoingToMainSwitcher;
- (id)_scenesToBackground;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_animationDidFinish;
- (_Bool)isGoingToLauncher;
- (_Bool)toAndFromAppsDiffer;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (void)performToAppStateCleanup;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)_hasPreAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPostAnimationTasks;
- (void)_performPostAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_animationDidRevealApplication;
- (_Bool)shouldPlaceOutgoingScenesUnderLockOnCompletion;
- (void)_captureApplicationState;
- (void)_fireAndClearResultBlockIfNecessaryForFailure:(_Bool)arg1;
- (_Bool)shouldRestoreSpringBoardContentOnCleanup;
- (_Bool)isGoingToCoverSheet;
- (void)_completeCurrentTransition;
- (void)_checkForAnimationCompletion;
- (void)_noteAnimationFinished;
- (void)_acquireResignActiveAssertion;
- (void)_synchronizeWithSceneUpdates;
- (void)_configureAnimation;
- (_Bool)isFromMainSwitcher;
- (_Bool)_shouldDismissOverlays;

@end
