/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToZoomDownSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_nonGestureInitiatedZoomModifier;
    long long _startingEnvironmentMode;
    struct CGPoint _liftOffVelocity;
}

- (id)handleEvent:(id)arg1;
- (long long)wallpaperStyle;
- (id)layoutSettings;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (struct _NSRange)fullSizeSnapshotsRange;
- (id)positionSettingsForIndex:(unsigned long long)arg1;
- (id)scaleSettingsForIndex:(unsigned long long)arg1;
- (id)_settingsByInterpolatingBetween:(id)arg1 and:(id)arg2 progress:(double)arg3;
- (double)_normalizedHomeScreenIconZoomPercentBetweenTopAndBottom;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2 nonGestureInitiatedZoomModifier:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4 liftOffVelocity:(struct CGPoint)arg5;

@end
