/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@protocol SBFluidSwitcherScrollProviding;

@interface SBForcePressToHomeSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    double _initalPanThreshold;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
}

- (long long)wallpaperStyle;
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
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 initialPanThreshold:(double)arg4 multitaskingModifier:(id)arg5;

@end
