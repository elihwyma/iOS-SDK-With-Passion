/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIBlockAnimationController.h>

@class NSString;

@interface SBFluidSwitcherAnimationController : SBUIBlockAnimationController

{
    CDUnknownBlockType _animationCompletion;
    SBFluidSwitcherAnimationController *_tetheredAnimationController;
}

@property (copy, nonatomic) CDUnknownBlockType animationCompletion;
@property (weak, nonatomic) SBFluidSwitcherAnimationController *tetheredAnimationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (_Bool)isFluidSwitcherAnimationController;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 animationSettings:(id)arg2 animationBlock:(CDUnknownBlockType)arg3;

@end
