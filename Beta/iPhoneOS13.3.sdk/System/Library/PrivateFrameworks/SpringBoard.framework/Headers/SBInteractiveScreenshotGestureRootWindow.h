/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/_UIRootWindow.h>

@interface SBInteractiveScreenshotGestureRootWindow : _UIRootWindow

+ (_Bool)_isSecure;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_appearsInLoupe;
- (_Bool)_shouldPrepareScreenForWindow;
- (_Bool)_canBecomeKeyWindow;

@end
