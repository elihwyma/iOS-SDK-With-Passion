/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBAppExposeToUnfilteredFullScreenSwitcherModifier : SBTransitionSwitcherModifier

{
    SBSwitcherModifier *_switcherToFullScreenModifier;
    SBAppLayout *_activeAppLayout;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)handleEvent:(id)arg1;
- (id)opacitySettings;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (id)topMostAppLayouts;
- (id)initWithTransitionID:(id)arg1 switcherToFullScreenModifier:(id)arg2 activeAppLayout:(id)arg3;

@end
