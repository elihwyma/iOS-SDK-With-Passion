/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBHomeGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier

{
    SBSwitcherModifier *_multitaskingModifier;
}

- (long long)gestureType;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (struct CGRect)_frameWithScaleAppliedForIndex:(unsigned long long)arg1;
- (id)initWithMultitaskingModifier:(id)arg1;

@end
