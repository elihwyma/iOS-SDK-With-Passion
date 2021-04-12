//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBHomeGestureToSwitcherSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;
    SBSwitcherModifier *_multitaskingModifier;
    long long _startingEnvironmentMode;
    CGPoint _liftOffVelocity;
    CGPoint _liftOffTranslation;
}

// - (void).cxx_destruct;
- (id)_appLayoutToScrollToDuringTransition;
- (id)layoutSettings;
- (NSRange)fullSizeSnapshotsRange;
- (NSUInteger)numberOfAppLayoutsToCacheSnapshots;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (BOOL)isSwitcherWindowVisible;
- (BOOL)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (BOOL)isWallpaperRequiredForSwitcher;
- (double)containerStatusBarAnimationDuration;
- (long long)backdropBlurType;
- (UIRectCornerRadii)cardCornerRadiiForIndex:(NSUInteger)arg1;
- (BOOL)isIndexVisible:(NSUInteger)arg1;
- (id)transitionWillBegin;
- (id)initWithTransitionID:(id)arg1 multitaskingModifier:(id)arg2 selectedAppLayout:(id)arg3 startingEnvironmentMode:(long long)arg4 liftOfVelocity:(CGPoint)arg5 liftOffTranslation:(CGPoint)arg6;

@end

