/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBFluidSwitcherRootSwitcherModifier.h>

@class SBAppLayout;

@interface SBFloatingFluidSwitcherRootSwitcherModifier : SBFluidSwitcherRootSwitcherModifier

{
    _Bool _floatingSwitcherVisible;
    SBAppLayout *_activeAppLayout;
    long long _interfaceOrientation;
    long long _floatingConfiguration;
    struct CGRect _containerViewBounds;
}

@property (retain, nonatomic) SBAppLayout *activeAppLayout;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long floatingConfiguration;
@property (nonatomic, getter=isFloatingSwitcherVisible) _Bool floatingSwitcherVisible;
@property (nonatomic) struct CGRect containerViewBounds;

- (id)init;
- (void)setDelegate:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (id)adjustedAppLayoutsForAppLayouts:(id)arg1;
- (id)transitionModifierForMainTransitionEvent:(id)arg1;
- (id)floorModifierForTransitionEvent:(id)arg1;
- (id)multitaskingModifierForEvent:(id)arg1;
- (id)newMultitaskingModifierFromMultitaskingModifier:(id)arg1;
- (Class)_defaultMultitaskingModifierClass;
- (id)gestureModifierForGestureEvent:(id)arg1;
- (id)appExposeModifierForAppExposeEvent:(id)arg1;
- (id)insertionModifierForInsertionEvent:(id)arg1;
- (id)tetheredRemovalModifierForTetheredRemovalEvent:(id)arg1;
- (id)tetheredInsertionModifierFortetheredInsertionEvent:(id)arg1;
- (id)lowEndHardwareModifier;
- (id)entityRemovalModifierForEvent:(id)arg1;

@end
