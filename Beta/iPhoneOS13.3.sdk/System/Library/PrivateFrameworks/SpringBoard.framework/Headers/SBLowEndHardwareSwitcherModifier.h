/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier

{
    unsigned long long _options;
    _Bool _floatingAppVisibleOverSplitView;
    _Bool _floatingAppVisibleOverExclusiveForegroundApp;
}

- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (_Bool)wantsResignActiveAssertion;
- (long long)sceneDeactivationReason;
- (long long)keyboardSuppressionMode;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithSimplificationOptions:(unsigned long long)arg1;
- (_Bool)_shouldSimplifyForTodayViewOrSpotlight;
- (_Bool)_shouldSimplifyForOpenFolder;
- (_Bool)_shouldResignActiveAppsUnderFloatingApp;

@end
