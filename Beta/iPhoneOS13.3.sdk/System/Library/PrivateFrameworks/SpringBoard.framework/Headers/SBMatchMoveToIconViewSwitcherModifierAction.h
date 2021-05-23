/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBMatchMoveToIconViewSwitcherModifierAction : SBSwitcherModifierAction

{
    _Bool _active;
    SBAppLayout *_appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly, getter=isActive) _Bool active;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 active:(_Bool)arg2;

@end
