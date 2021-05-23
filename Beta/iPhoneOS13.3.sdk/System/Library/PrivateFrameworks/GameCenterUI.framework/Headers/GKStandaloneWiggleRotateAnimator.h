/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKWiggleRotateAnimator.h>

@class GKBubbleFlowContainerView, _GKBubbleFlowPathTransitionInfo;

@interface GKStandaloneWiggleRotateAnimator : GKWiggleRotateAnimator

{
    GKBubbleFlowContainerView *_containerView;
    long long _rotationDirection;
    _GKBubbleFlowPathTransitionInfo *_transitionContext;
}

@property (retain, nonatomic) GKBubbleFlowContainerView *containerView;
@property (nonatomic) long long rotationDirection;
@property (retain, nonatomic) _GKBubbleFlowPathTransitionInfo *transitionContext;

- (void)dealloc;
- (void)animate;
- (id)transitionContextCreatingIfNeeded;
- (void)readStartingPositions;
- (void)readEndingPositions;
- (_Bool)rotatingRightWithTransitionContext:(id)arg1;
- (void)animateForBubbleContainer:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
