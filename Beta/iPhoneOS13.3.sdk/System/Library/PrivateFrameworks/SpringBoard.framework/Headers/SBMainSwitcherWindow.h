/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@interface SBMainSwitcherWindow : SBWindow

+ (_Bool)sb_autorotates;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canBecomeKeyWindow;
- (unsigned long long)_edgesForSystemGesturesTouchDelay;

@end
