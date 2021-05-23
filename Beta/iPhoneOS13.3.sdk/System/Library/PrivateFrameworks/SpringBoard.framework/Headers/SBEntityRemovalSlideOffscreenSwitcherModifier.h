/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class NSUUID, SBAppLayout, SBEntityRemovalDosidoSlideOutAnimationSettings, SBEntityRemovalToHomeSwitcherModifier, SBSwitcherModifier;

@interface SBEntityRemovalSlideOffscreenSwitcherModifier : SBTransitionSwitcherModifier

{
    _Bool _isSecondStage;
    NSUUID *_transitionID;
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    unsigned long long _direction;
    SBEntityRemovalToHomeSwitcherModifier *_toHomeRemovalModifier;
    SBEntityRemovalDosidoSlideOutAnimationSettings *_animationSettings;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (void)didMoveToParentModifier:(id)arg1;
- (id)handleTimerEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3 animationSettings:(id)arg4 multitaskingModifier:(id)arg5;

@end
