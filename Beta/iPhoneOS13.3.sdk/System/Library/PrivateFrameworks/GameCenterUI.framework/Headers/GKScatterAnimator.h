/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKScatterAnimator : GKBubblePathAnimator

{
    long long _focusBubbleType;
}

@property (nonatomic) long long focusBubbleType;

+ (double)preferredDuration;

- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (double)minimumDurationForViewAnimations;
- (id)scatterBubblesSortedLeftToRightInContext:(id)arg1;
- (id)scatterAnimationsForBubble:(id)arg1 sortedBubbles:(id)arg2 contractPoint:(id)arg3 context: /* Error: Ran out of types for this method. */;
- (_Bool)scatterBubble:(id)arg1 shouldMoveLeftAmongBubbles:(id)arg2 context:(id)arg3;
- (_Bool)scatterBubble:(id)arg1 shouldMoveUpAmongBubbles:(id)arg2;

@end
