/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBFullScreenAppLayoutSwitcherModifier;

@interface SBFullScreenToHomeSlideOverSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    SBFullScreenAppLayoutSwitcherModifier *_fullScreenModifier;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (long long)wallpaperStyle;
- (id)transitionWillBegin;
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
- (double)homeScreenAlpha;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3;
- (_Bool)_isIndexSlideOverAppLayout:(unsigned long long)arg1;
- (_Bool)_shouldApplySlideOverLayoutToIndex:(unsigned long long)arg1;

@end
