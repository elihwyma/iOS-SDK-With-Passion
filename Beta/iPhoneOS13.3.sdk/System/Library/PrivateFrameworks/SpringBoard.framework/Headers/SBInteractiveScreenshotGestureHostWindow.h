/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBIgnoredForAutorotationSecureWindow.h>

@interface SBInteractiveScreenshotGestureHostWindow : SBIgnoredForAutorotationSecureWindow

+ (_Bool)sb_autorotates;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canBecomeKeyWindow;

@end
