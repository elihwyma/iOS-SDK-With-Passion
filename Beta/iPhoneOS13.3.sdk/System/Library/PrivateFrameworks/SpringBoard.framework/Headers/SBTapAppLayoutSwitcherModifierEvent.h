/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBTapAppLayoutSwitcherModifierEvent : SBSwitcherModifierEvent

{
    SBAppLayout *_appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1;

@end
