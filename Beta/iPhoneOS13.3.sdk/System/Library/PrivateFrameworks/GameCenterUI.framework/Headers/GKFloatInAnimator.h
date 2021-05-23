/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBubblePathAnimator.h>

@interface GKFloatInAnimator : GKBubblePathAnimator

{
    _Bool _useWelcomeSpringValues;
    long long _focusBubbleType;
    double _delayIncrement;
    double _additionalDelay;
}

@property (nonatomic) double additionalDelay;
@property (nonatomic) long long focusBubbleType;
@property (nonatomic) double delayIncrement;
@property (nonatomic) _Bool useWelcomeSpringValues;

- (id)init;
- (void)animateTransition:(id)arg1;
- (long long)animatorType;
- (id)floatBubblesSortedLeftToRightInContext:(id)arg1;

@end
