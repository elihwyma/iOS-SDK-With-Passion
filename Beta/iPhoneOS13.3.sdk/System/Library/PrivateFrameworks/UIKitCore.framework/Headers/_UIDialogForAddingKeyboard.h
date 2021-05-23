/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UINavigationController, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIDialogForAddingKeyboard : NSObject

{
    UIWindow *_presenterWindow;
    UINavigationController *_privacySheetController;
}

+ (void)presentDialogForAddingKeyboard;

- (void)dismiss;
- (void)presentDialogForAddingKeyboard;
- (void)presentPrivacySheet;

@end
