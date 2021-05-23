/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBHomeGestureToHomeSwitcherModifier : SBTransitionSwitcherModifier

{
    _Bool _showingOrAnimatingCardsForFlyIn;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (long long)wallpaperStyle;
- (id)initWithTransitionID:(id)arg1 showingOrAnimatingCardsForFlyIn:(_Bool)arg2;
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
- (struct _NSRange)fullSizeSnapshotsRange;
- (_Bool)shouldWaitForLayoutAndStyleUpdatesForTransactionCompletion;

@end
