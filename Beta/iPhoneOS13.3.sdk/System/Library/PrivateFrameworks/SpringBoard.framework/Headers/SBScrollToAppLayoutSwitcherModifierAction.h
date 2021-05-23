/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBScrollToAppLayoutSwitcherModifierAction : SBSwitcherModifierAction

{
    SBAppLayout *_appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1;

@end
