/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@interface SBSwitcherToActiveFloatingSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier

- (id)appLayoutToScrollToDuringTransition;
- (id)layoutSettings;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)backdropBlurType;
- (id)appLayoutToScrollToBeforeTransitioning;
- (_Bool)wantsMinificationFilter;
- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (long long)transitionLiveContentRasterizationStyle;

@end
