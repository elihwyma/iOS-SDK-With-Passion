/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeCenterZoomDownSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    struct CGPoint _liftOffVelocity;
    double _offsetYPercentOfScreenHeight;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (id)opacitySettings;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (void)didMoveToParentModifier:(id)arg1;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 offsetYPercentOfScreenHeight:(double)arg3;
- (_Bool)_isIndexCenterZoomAppLayout:(unsigned long long)arg1;
- (double)_offsetYForCenterZoom;

@end
