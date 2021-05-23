/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class SBSceneLayoutViewController, SBUIBlockAnimationController;

@interface SBSceneLayoutTransitionAnimationController : SBUIWorkspaceAnimationController

{
    SBSceneLayoutViewController *_layoutController;
    SBUIBlockAnimationController *_blockAnimation;
}

- (_Bool)_canBeInterrupted;
- (id)containerView;
- (id)animationSettings;
- (id)_getTransitionWindow;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (id)initWithTransitionContextProvider:(id)arg1 layoutController:(id)arg2 animationSettings:(id)arg3 stepped:(_Bool)arg4 animationBlock:(CDUnknownBlockType)arg5;

@end
