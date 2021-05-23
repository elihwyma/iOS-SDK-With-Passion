/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBIgnoredForAutorotationSecureWindow.h>

@interface SBControlCenterWindow : SBIgnoredForAutorotationSecureWindow

- (id)window;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (_Bool)_canBecomeKeyWindow;

@end
