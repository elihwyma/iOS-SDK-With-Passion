/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier

{
    long long _fromFloatingConfiguration;
    long long _toFloatingConfiguration;
}

- (id)transitionWillBegin;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (_Bool)wantsResignActiveAssertion;
- (long long)keyboardSuppressionMode;
- (id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3;

@end
