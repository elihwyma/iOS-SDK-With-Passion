/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier, SBForcePressGestureStateTrackingSwitcherModifier, SBSwitcherModifier, UIViewFloatAnimatableProperty;

@protocol SBFluidSwitcherScrollProviding;

@interface SBForcePressGestureSwitcherModifier : SBGestureSwitcherModifier

{
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_multitaskingModifier;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
    double _additionalScaleForBreathing;
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (double)wallpaperScale;
- (double)dimmingAlpha;
- (id)handleGestureEvent:(id)arg1;
- (long long)wallpaperStyle;
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
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)backdropBlurProgress;
- (long long)liveContentRasterizationStyle;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)wantsMinificationFilter;
- (double)homeScreenScale;
- (void)didMoveToParentModifier:(id)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (double)homeScreenAlpha;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (id)handleMainTransitionEvent:(id)arg1;
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2;
- (double)_scaleForCoplanarModifier;
- (double)_effectivePanProgress;
- (unsigned long long)_indexOfSelectedAppLayout;
- (_Bool)_forcePressGestureCanBreathe;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4;
- (double)initialPanThreshold;

@end
