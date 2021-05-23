/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/Swift-Protocol.h>

@protocol SearchUIKeyboardableNavigationProtocol <Swift>

- (unsigned short)canSetupKeyboardHandler;
- (unsigned short)setupKeyboardHandler;
- (unsigned short)navigateKeyboardRight;
- (unsigned short)returnKeyPressed;
- (unsigned short)navigateKeyboardLeft;
- (unsigned short)navigateKeyboardUp;
- (unsigned short)navigateKeyboardDown;
- (unsigned short)removeKeyboardHandler;

@end
