/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBSwitcherToFullScreenSwitcherModifier : SBTransitionSwitcherModifier

{
    _Bool _wantsMinificationFilter;
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _direction;
}

@property (nonatomic, readonly) SBAppLayout *fullScreenAppLayout;
@property (nonatomic, readonly) SBSwitcherModifier *multitaskingModifier;
@property (nonatomic) long long direction;

- (id)transitionWillBegin;
- (id)appLayoutToScrollToDuringTransition;
- (id)appLayoutToScrollToBeforeTransitioning;
- (_Bool)wantsMinificationFilter;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 multitaskingModifier:(id)arg4;
- (_Bool)isEffectivelyFullScreen;

@end
