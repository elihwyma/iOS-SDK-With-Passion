/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKWiggleRotateAnimator : GKBubblePathAnimator

{
    _Bool _aggroBubbles;
}

@property (nonatomic) _Bool aggroBubbles;

- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (_Bool)rotatingRightWithTransitionContext:(id)arg1;
- (_Bool)updateInFlightAnimations:(id)arg1;
- (void)animateWithBounce:(id)arg1;
- (void)animateWithoutBounce:(id)arg1;

@end
