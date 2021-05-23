/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@interface SBTransientOverlayWindow : SBWindow

+ (_Bool)_isSecure;
+ (_Bool)sb_autorotates;

- (_Bool)_canBecomeKeyWindow;

@end
