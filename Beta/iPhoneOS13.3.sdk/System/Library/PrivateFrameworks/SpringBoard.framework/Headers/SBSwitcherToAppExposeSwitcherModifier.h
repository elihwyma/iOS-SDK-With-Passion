/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBSwitcherToAppExposeSwitcherModifier : SBTransitionSwitcherModifier

{
    unsigned long long _slideDirection;
    SBSwitcherModifier *_multitaskingModifier;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)layoutSettings;
- (id)initWithTransitionID:(id)arg1 slideDirection:(unsigned long long)arg2 multitaskingModifier:(id)arg3;
- (double)_offsetForPushingCardsOffscreenAtIndex:(unsigned long long)arg1;

@end
