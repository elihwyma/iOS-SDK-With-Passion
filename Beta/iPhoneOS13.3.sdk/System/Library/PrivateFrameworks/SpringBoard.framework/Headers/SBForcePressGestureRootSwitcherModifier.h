/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;

@protocol SBFluidSwitcherScrollProviding;

@interface SBForcePressGestureRootSwitcherModifier : SBGestureRootSwitcherModifier

{
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
}

- (long long)gestureType;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (id)initWithStartingEnvironmentMode:(long long)arg1 multitaskingModifier:(id)arg2;

@end
