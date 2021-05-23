/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeIconZoomSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    unsigned long long _direction;
    struct CGRect _homeScreenIconFrame;
    double _homeScreenIconCornerRadius;
    double _homeScreenIconScale;
    _Bool _homeScreenIconLocationIsFloatingDock;
    _Bool _itemContainerOverlapsDock;
    _Bool _wantsDockWindowLevelAssertion;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    _Bool _shouldAcceleratedHomeButtonPressBegin;
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
- (id)handleTimerEvent:(id)arg1;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (double)homeScreenAlpha;
- (_Bool)wantsDockBehaviorAssertion;
- (double)dockProgress;
- (_Bool)wantsDockWindowLevelAssertion;
- (unsigned long long)dockWindowLevelPriority;
- (double)dockWindowLevel;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)transitionDidEnd;
- (_Bool)_isEffectivelyHome;
- (_Bool)_isIndexZoomAppLayout:(unsigned long long)arg1;
- (double)_normalizedHomeScreenTargetZoomPercentBetweenCenterAndEdge;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 direction:(unsigned long long)arg3;

@end
