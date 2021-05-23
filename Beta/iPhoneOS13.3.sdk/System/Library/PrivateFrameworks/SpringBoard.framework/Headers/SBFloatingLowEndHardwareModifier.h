/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBFloatingLowEndHardwareModifier : SBSwitcherModifier

{
    unsigned long long _options;
    _Bool _floatingSwitcherVisible;
    _Bool _floatingAppVisibleOverSplitView;
    _Bool _floatingAppVisibleOverExclusiveForegroundApp;
}

- (id)initWithOptions:(unsigned long long)arg1;
- (double)dimmingAlpha;
- (_Bool)dimmingViewBlocksTouches;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)handleTapOutsideToDismissEvent:(id)arg1;
- (_Bool)_shouldDimAndBlockTouchesToAppsUnderFloating;

@end
