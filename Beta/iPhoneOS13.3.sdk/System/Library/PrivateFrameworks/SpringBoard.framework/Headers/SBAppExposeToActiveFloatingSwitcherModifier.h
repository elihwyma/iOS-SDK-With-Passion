/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSArray, SBAppLayout, SBSwitcherModifier, SBSwitcherToActiveFloatingSwitcherModifier;

@interface SBAppExposeToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier

{
    unsigned long long _direction;
    SBSwitcherModifier *_multitaskingModifier;
    SBAppLayout *_activeAppLayout;
    SBSwitcherToActiveFloatingSwitcherModifier *_switcherToActiveFloatingAppModifier;
    NSArray *_appLayoutsPriorToTransitionFromAppExpose;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleEvent:(id)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (double)_unselectedCardScale;
- (id)topMostAppLayouts;
- (id)handleMainTransitionEvent:(id)arg1;
- (_Bool)_isEffectivelyActiveFloatingApp;
- (id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 multitaskingModifier:(id)arg3 activeAppLayout:(id)arg4 switcherToActiveFloatingAppModifier:(id)arg5;

@end
