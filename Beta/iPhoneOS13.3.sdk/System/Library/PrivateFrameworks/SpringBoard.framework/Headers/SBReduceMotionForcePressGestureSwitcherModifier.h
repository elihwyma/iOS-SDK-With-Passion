/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@class SBAppLayout, SBForcePressGestureStateTrackingSwitcherModifier;

@interface SBReduceMotionForcePressGestureSwitcherModifier : SBGestureSwitcherModifier

{
    SBAppLayout *_selectedAppLayout;
    long long _startingEnvironmentMode;
    SBForcePressGestureStateTrackingSwitcherModifier *_stateTrackingModifier;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
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
- (long long)liveContentRasterizationStyle;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)wantsMinificationFilter;
- (void)didMoveToParentModifier:(id)arg1;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (double)_effectivePanProgress;
- (unsigned long long)_indexOfSelectedAppLayout;
- (double)initialPanThreshold;
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 effectiveStartingEnvironmentMode:(long long)arg3;

@end
