/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class BSAnimationSettings;

@interface SBUIBlockAnimationController : SBUIWorkspaceAnimationController

{
    BSAnimationSettings *_animationSettings;
    CDUnknownBlockType _animationBlock;
}

- (void)_didComplete;
- (id)animationSettings;
- (void)_startAnimation;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(CDUnknownBlockType)arg3;
- (id)initWithWorkspaceTransitionRequest:(id)arg1;

@end
