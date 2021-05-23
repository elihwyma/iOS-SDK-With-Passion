/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@interface SBGridToFullScreenSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (id)appLayoutToScrollToDuringTransition;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (double)_unselectedCardScale;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)backdropBlurProgress;
- (id)topMostAppLayouts;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (double)homeScreenScale;
- (double)homeScreenAlpha;

@end
