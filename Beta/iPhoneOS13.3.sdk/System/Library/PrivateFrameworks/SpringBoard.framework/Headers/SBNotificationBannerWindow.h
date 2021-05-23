/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSecureMainScreenActiveInterfaceOrientationWindow.h>

@interface SBNotificationBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

{
    _Bool _isShowingLongLook;
}

@property (nonatomic) _Bool isShowingLongLook;

- (id)init;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)_canBecomeKeyWindow;

@end
