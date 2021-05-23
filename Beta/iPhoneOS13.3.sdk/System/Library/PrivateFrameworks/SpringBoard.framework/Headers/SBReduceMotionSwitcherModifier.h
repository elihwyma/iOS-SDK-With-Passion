/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBReduceMotionSwitcherModifier : SBSwitcherModifier

- (double)wallpaperScale;
- (double)homeScreenScale;
- (id)handleReduceMotionChangedEvent:(id)arg1;

@end
