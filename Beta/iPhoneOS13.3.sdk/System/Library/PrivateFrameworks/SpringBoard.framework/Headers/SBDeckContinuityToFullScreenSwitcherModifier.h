/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBDeckContinuityToFullScreenSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_fullscreenModifier;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;
- (id)layoutSettingsForIndex:(unsigned long long)arg1;
- (_Bool)_isInsertingIndex:(unsigned long long)arg1;
- (struct CGRect)_initialFrameForContinuityAppLayout;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 deckModifier:(id)arg3 fullscreenModifier:(id)arg4;

@end
