/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBInjectVelocitySwitcherModifierAction : SBSwitcherModifierAction

{
    SBAppLayout *_appLayout;
    struct CGPoint _velocity;
}

@property (nonatomic, readonly) struct CGPoint velocity;
@property (nonatomic, readonly) SBAppLayout *appLayout;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithVelocity:(struct CGPoint)arg1 appLayout:(id)arg2;

@end
