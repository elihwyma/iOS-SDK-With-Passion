/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherModifierAction : SBSwitcherModifierAction

{
    _Bool _visible;
    SBAppLayout *_appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 visible:(_Bool)arg2;

@end
