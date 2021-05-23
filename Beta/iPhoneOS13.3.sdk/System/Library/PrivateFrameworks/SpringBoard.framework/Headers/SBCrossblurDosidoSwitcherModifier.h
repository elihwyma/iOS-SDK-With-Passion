/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBCrossblurDosidoSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    unsigned long long _direction;
}

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (long long)wallpaperStyle;
- (id)transitionWillBegin;
- (id)transitionWillUpdate;
- (id)opacitySettings;
- (id)layoutSettings;
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
- (id)topMostAppLayouts;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (id)transitionDidEnd;
- (_Bool)_isFromAppLayoutAtIndex:(unsigned long long)arg1;
- (_Bool)_isToAppLayoutAtIndex:(unsigned long long)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 direction:(unsigned long long)arg4;

@end
