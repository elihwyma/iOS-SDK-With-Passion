/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDropApplicationSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (long long)liveContentRasterizationStyle;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (long long)layoutUpdateMode;
- (_Bool)wantsResignActiveAssertion;
- (long long)keyboardSuppressionMode;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
