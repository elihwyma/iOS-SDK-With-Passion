/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBBlurItemContainerSwitcherModifierAction : SBSwitcherModifierAction

{
    _Bool _shouldBlur;
    SBAppLayout *_appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) _Bool shouldBlur;

- (id)description;
- (long long)type;
- (id)initWithAppLayout:(id)arg1 shouldBlur:(_Bool)arg2;

@end
