/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationFloatingSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (id)transitionWillBegin;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (_Bool)wantsResignActiveAssertion;
- (long long)keyboardSuppressionMode;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
