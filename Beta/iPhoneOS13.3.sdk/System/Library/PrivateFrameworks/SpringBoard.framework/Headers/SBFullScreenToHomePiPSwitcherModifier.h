/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    struct CGPoint _finalCenter;
    double _finalScale;
    double _sourceAlpha;
    SBCoplanarSwitcherModifier *_coplanarModifier;
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
- (id)topMostAppLayouts;
- (void)didMoveToParentModifier:(id)arg1;
- (_Bool)_shouldApplyMorphToPipToIndex:(unsigned long long)arg1;
- (_Bool)_isIndexSelectedAppLayout:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2;

@end
