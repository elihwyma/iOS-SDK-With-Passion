/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSSet, SBAppLayout, SBFFluidBehaviorSettings;

@interface SBIconViewVisibilitySwitcherModifierAction : SBSwitcherModifierAction

{
    _Bool _visible;
    SBAppLayout *_appLayout;
    SBFFluidBehaviorSettings *_animationSettings;
    NSSet *_excludedIconLocations;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) SBFFluidBehaviorSettings *animationSettings;
@property (nonatomic, readonly) NSSet *excludedIconLocations;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 visible:(_Bool)arg2 animationSettings:(id)arg3 excludedIconLocations:(id)arg4;

@end
