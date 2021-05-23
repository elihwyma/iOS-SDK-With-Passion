/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
    struct CGPoint _liftOffVelocity;
    struct CGPoint _liftOffTranslation;
}

- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (double)containerStatusBarAnimationDuration;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (struct _NSRange)fullSizeSnapshotsRange;
- (id)_appLayoutToScrollToDuringTransition;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOfVelocity:(struct CGPoint)arg5 liftOffTranslation:(struct CGPoint)arg6;

@end
