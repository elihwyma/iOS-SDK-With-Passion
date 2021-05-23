/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSUUID, SBAppLayout, SBEntityRemovalToHomeSwitcherModifier, SBSwitcherModifier;

@interface SBEntityRemovalCrossblurSwitcherModifier : SBTransitionSwitcherModifier

{
    _Bool _animateOpacity;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)opacitySettings;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)transitionDidEnd;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 multitaskingModifier:(id)arg3;

@end
