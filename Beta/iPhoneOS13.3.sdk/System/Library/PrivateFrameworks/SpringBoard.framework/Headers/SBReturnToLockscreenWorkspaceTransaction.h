/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBActivateAppUnderLockScreenWorkspaceTransaction.h>

@class SBApplicationSceneEntity;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction

{
    SBApplicationSceneEntity *_fromAppSceneEntity;
    _Bool _workspaceAlreadyResumed;
    _Bool _animatedAppDeactivation;
}

- (id)debugDescription;
- (void)_didComplete;
- (id)_setupAnimation;
- (id)initWithTransitionRequest:(id)arg1 toLockScreenEnvironment:(id)arg2;
- (unsigned long long)_serialOverlayPreDismissalOptions;
- (void)_animationWillBegin:(_Bool)arg1;
- (void)_animationDidFinish;

@end
