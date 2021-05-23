/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@class SBAppLayout, SBDeckSwitcherModifier;

@interface SBDeckToFullScreenSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier

{
    SBAppLayout *_fullScreenAppLayout;
    SBDeckSwitcherModifier *_deckLayoutModifier;
}

- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (id)appLayoutToScrollToDuringTransition;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 multitaskingModifier:(id)arg4;

@end
