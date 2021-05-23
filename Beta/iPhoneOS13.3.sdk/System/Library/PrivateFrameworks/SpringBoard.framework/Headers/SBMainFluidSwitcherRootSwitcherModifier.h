/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@interface SBMainFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (long long)_effectiveEnvironmentMode;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (id)entityRemovalModifierForMainTransitionEvent:(id)arg1;
- (Class)_defaultMultitaskingModifierClass;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)reduceMotionModifierForReduceMotionChangedEvent:(id)arg1;
- (id)appExposeModifierForAppExposeEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1;
- (id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;

@end
