/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBDosidoSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
}

- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
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
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3;

@end
