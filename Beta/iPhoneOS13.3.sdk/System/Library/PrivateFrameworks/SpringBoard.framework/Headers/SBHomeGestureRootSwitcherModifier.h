/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@protocol SBFluidSwitcherModifierProviding;

@interface SBHomeGestureRootSwitcherModifier : SBGestureRootSwitcherModifier

{
    double _centerYOffsetWhenPresentedInMultitasking;
    id <SBFluidSwitcherModifierProviding> _modifierProvider;
}

- (long long)gestureType;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (id)initWithStartingEnvironmentMode:(long long)arg1 centerYOffsetWhenPresentedInMultitasking:(double)arg2 modifierProvider:(id)arg3;

@end
