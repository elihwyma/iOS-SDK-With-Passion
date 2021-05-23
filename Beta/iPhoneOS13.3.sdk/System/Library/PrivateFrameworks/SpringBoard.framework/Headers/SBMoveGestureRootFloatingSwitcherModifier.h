/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier

{
    long long _currentFloatingConfiguration;
    long long _interfaceOrientation;
}

@property (nonatomic) long long currentFloatingConfiguration;
@property (nonatomic) long long interfaceOrientation;

- (long long)gestureType;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (id)initWithInitialFloatingConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2;

@end
