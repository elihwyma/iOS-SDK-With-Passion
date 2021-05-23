/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class NSObject, SBAutoPiPWorkspaceTransaction, SBUIAnimationController;

@protocol OS_dispatch_group;

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction

{
    SBAutoPiPWorkspaceTransaction *_autoPiPTransaction;
    SBUIAnimationController *_animation;
    unsigned long long _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
    _Bool _preventWhitePointAdaptationStrengthUpdateOnComplete;
}

@property (nonatomic) _Bool preventWhitePointAdaptationStrengthUpdateOnComplete;

- (void)dealloc;
- (id)debugDescription;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (_Bool)_transitionWasCancelled;
- (void)_beginTransition;
- (id)_setupAnimation;
- (id)initWithTransitionRequest:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_clearAnimation;
- (_Bool)_shouldResignActiveForAnimation;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_cleanUpAfterAnimation;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_handleApplicationDidNotChange:(id)arg1;
- (_Bool)shouldPerformToAppStateCleanupOnCompletion;
- (_Bool)shouldAnimateOrientationChangeOnCompletion;
- (_Bool)_hasPreAnimationTasks;
- (void)_performPreAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_hasPostAnimationTasks;
- (void)_performPostAnimationTasksWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1;
- (void)_animationDidRevealApplication;

@end
