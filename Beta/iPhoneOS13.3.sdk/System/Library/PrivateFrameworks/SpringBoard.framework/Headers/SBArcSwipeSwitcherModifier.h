/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBArcSwipeSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_toAppLayout;
    SBAppLayout *_fromAppLayout;
}

- (long long)wallpaperStyle;
- (id)transitionWillBegin;
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
- (struct _NSRange)fullSizeSnapshotsRange;
- (long long)liveContentRasterizationStyle;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (_Bool)wantsResignActiveAssertion;
- (long long)keyboardSuppressionMode;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
