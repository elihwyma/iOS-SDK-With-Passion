/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSecureWindow.h>

@interface SBCoverSheetWindow : SBSecureWindow

+ (_Bool)sb_autorotates;

- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canBecomeKeyWindow;

@end
