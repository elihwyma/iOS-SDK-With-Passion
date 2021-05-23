/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier;

@interface SBEntityRemovalToHomeSwitcherModifier : SBTransitionSwitcherModifier

{
    SBSwitcherModifier *_multitaskingModifier;
    double _homeAnimationDelay;
    _Bool _canAnimateHomeScreenStyle;
}

- (double)wallpaperScale;
- (double)dimmingAlpha;
- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (double)backdropBlurProgress;
- (_Bool)isContainerStatusBarVisible;
- (double)homeScreenScale;
- (id)initWithTransitionID:(id)arg1 homeAnimationDelay:(double)arg2 multitaskingModifier:(id)arg3;
- (id)handleTimerEvent:(id)arg1;
- (_Bool)shouldFireTransitionCompletionInDefaultRunLoopMode;
- (id)cornerRadiusSettingsForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (_Bool)wantsDockBehaviorAssertion;
- (long long)dockUpdateMode;
- (double)dockProgress;
- (_Bool)wantsDockWindowLevelAssertion;
- (_Bool)isContentStatusBarVisible;

@end
