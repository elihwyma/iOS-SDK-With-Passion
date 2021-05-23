/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class SBAppLayout;

@interface SBDosidoScaleAnimationSwitcherModifierAction : SBSwitcherModifierAction

{
    SBAppLayout *_appLayout;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;

- (long long)type;
- (id)initWithAppLayout:(id)arg1;

@end
