/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class SBFullScreenAppLayoutSwitcherModifier;

@interface SBAppUnderFloatingSwitcherSwitcherModifier : SBSwitcherModifier

{
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenAppLayoutModifier;
}

- (long long)liveContentRasterizationStyle;
- (_Bool)wantsMinificationFilter;
- (_Bool)isHomeGrabberVisible;
- (_Bool)wantsAsynchronousSurfaceRetentionAssertion;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (id)initWithActiveAppLayout:(id)arg1;

@end
