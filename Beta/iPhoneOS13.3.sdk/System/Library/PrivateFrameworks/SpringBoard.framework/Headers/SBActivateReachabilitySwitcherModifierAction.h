/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@interface SBActivateReachabilitySwitcherModifierAction : SBSwitcherModifierAction

{
    struct SBReachabilityActivationContext _reachabilityActivationContext;
}

@property (nonatomic, readonly) struct SBReachabilityActivationContext reachabilityActivationContext;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithReachabilityContext:(struct SBReachabilityActivationContext)arg1;

@end
