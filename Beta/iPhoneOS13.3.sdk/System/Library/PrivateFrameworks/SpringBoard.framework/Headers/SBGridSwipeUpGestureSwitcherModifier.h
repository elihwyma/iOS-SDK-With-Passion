/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier

{
    struct CGPoint _translation;
}

- (id)handleGestureEvent:(id)arg1;
- (double)contentViewScale;
- (long long)wallpaperStyle;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isHomeScreenContentRequired;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (struct _NSRange)fullSizeSnapshotsRange;
- (void)didMoveToParentModifier:(id)arg1;
- (void)_applyPrototypeSettings;
- (long long)finalActionForGestureEvent:(id)arg1;

@end
