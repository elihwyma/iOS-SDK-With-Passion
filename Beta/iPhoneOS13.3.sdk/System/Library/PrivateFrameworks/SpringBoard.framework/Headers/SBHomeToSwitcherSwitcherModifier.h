/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@protocol SBFluidSwitcherScrollProviding;

@interface SBHomeToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

{
    long long _direction;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
}

@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *multitaskingModifier;

- (id)transitionWillBegin;
- (id)appLayoutToScrollToDuringTransition;
- (id)transitionWillUpdate;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 multitaskingModifier:(id)arg3;
- (double)containerStatusBarAnimationDuration;
- (_Bool)isEffectivelyHome;

@end
