/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class FBDisplayLayoutTransition, NSString, SBUIAnimationController;

@interface SBTransientOverlayPresentWorkspaceTransaction : SBMainWorkspaceTransaction

{
    SBUIAnimationController *_animation;
    FBDisplayLayoutTransition *_layoutTransition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_willBegin;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (void)_didComplete;
- (id)initWithTransitionRequest:(id)arg1;
- (void)_performStandardPresentationAnimated:(_Bool)arg1;
- (void)_logForInterruptAttemptReason:(id)arg1;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (_Bool)canInterruptForTransitionRequest:(id)arg1;

@end
