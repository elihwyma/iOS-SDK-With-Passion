/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIAlertController.h>

@interface UIAlertController (AppleAccountUI)

+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4 actionHandler:(CDUnknownBlockType)arg5;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 defaultButtonTitle:(id)arg4;

- (CDUnknownBlockType)_handlerWithSingleActionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_handlerWithMultiActionHandler:(CDUnknownBlockType)arg1;

@end
