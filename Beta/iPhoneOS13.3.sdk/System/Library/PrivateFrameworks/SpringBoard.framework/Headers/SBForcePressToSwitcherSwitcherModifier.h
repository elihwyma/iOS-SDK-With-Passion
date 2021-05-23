/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBForcePressToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier *_multitaskingModifier;
}

- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (double)containerStatusBarAnimationDuration;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfSelectedAppLayout;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4;
- (id)_appLayoutToScrollToDuringTransition;

@end
