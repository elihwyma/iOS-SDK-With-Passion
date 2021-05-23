/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBFluidSwitcherAnimationSettings, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherFloatingSwitcherModifier : SBTransitionSwitcherModifier

{
    SBSwitcherModifier *_multitaskingModifier;
    SBAppLayout *_selectedAppLayout;
    SBFluidSwitcherAnimationSettings *_animationSettings;
}

@property (retain, nonatomic) SBSwitcherModifier *multitaskingModifier;
@property (retain, nonatomic) SBAppLayout *selectedAppLayout;
@property (retain, nonatomic) SBFluidSwitcherAnimationSettings *animationSettings;

- (id)transitionWillBegin;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)wantsMinificationFilter;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3;

@end
