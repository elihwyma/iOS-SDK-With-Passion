/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

@class NSString, SBMainSwitcherViewController;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController

{
    _Bool _interruptible;
    SBMainSwitcherViewController *_switcherViewController;
    CDUnknownBlockType _animationBlock;
}

@property (weak, nonatomic) SBMainSwitcherViewController *switcherViewController;
@property (copy, nonatomic) CDUnknownBlockType animationBlock;
@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) _Bool _interruptible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isInterruptible;
- (void)_didComplete;
- (id)_previousLayoutState;
- (id)_layoutState;
- (id)animationSettings;
- (void)_startAnimation;
- (_Bool)isReasonableMomentToInterrupt;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)_updatePPTsForAnimationStart;
- (void)_addSignpostsForAnimationStart;
- (void)_addSignpostsForAnimationEnd;
- (void)_updatePPTsForAnimationEnd;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 switcherViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;
- (_Bool)shouldResignActiveForAnimation;

@end
