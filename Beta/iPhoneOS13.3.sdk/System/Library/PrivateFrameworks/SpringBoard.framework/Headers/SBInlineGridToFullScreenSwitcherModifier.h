/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBSwitcherModifier;

@interface SBInlineGridToFullScreenSwitcherModifier : SBTransitionSwitcherModifier

{
    SBAppLayout *_fullScreenAppLayout;
    SBSwitcherModifier *_multitaskingModifier;
    struct UIRectCornerRadii _fullScreenCornerRadii;
    _Bool _dimInactiveCards;
}

@property (nonatomic, readonly) SBAppLayout *fullScreenAppLayout;
@property (nonatomic, readonly) SBSwitcherModifier *multitaskingModifier;

- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (double)dimmingAlpha;
- (id)transitionWillBegin;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (_Bool)_isIndexFullScreenAppLayout:(unsigned long long)arg1;
- (double)_unselectedCardScale;
- (id)appExposeAccessoryButtonsBundleIdentifier;
- (long long)appExposeAccessoryButtonsOverrideUserInterfaceStyle;
- (long long)plusButtonStyle;
- (double)darkeningAlphaForIndex:(unsigned long long)arg1;
- (double)backdropBlurProgress;
- (id)topMostAppLayouts;
- (id)initWithTransitionID:(id)arg1 fullScreenAppLayout:(id)arg2 multitaskingModifier:(id)arg3 fullscreenCornerRadii:(struct UIRectCornerRadii)arg4 dimInactiveCards:(_Bool)arg5;
- (double)plusButtonAlpha;
- (double)reopenClosedWindowsButtonAlpha;
- (double)reopenClosedWindowsButtonScale;
- (double)titleOpacityForIndex:(unsigned long long)arg1;
- (long long)liveContentRasterizationStyle;
- (_Bool)isContainerStatusBarVisible;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (id)appLayoutToScrollToBeforeTransitioning;

@end
