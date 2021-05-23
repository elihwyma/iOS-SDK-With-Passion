/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <Foundation/NSObject.h>

@interface AAUIDeviceLocatorConfirmationUtilities : NSObject

+ (void)checkIfWatchHasAppleIDAccount:(CDUnknownBlockType)arg1;
+ (void)showDisableAlertForAccount:(id)arg1 presentingViewController:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_performFMIPAuthenticationForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 presentingViewController:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_handleFMIPAuthenticationResponse:(id)arg1 withError:(id)arg2 forAccount:(id)arg3 message:(id)arg4 confirmationButtonTitle:(id)arg5 presentingViewController:(id)arg6 completion:(CDUnknownBlockType)arg7;
+ (id)_titleForError:(id)arg1 account:(id)arg2;
+ (id)_messageForError:(id)arg1 account:(id)arg2;
+ (void)showEnableAlertWithCompletion:(CDUnknownBlockType)arg1;
+ (void)showDisableAlertForAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)showDisableAlertForAccount:(id)arg1 withMessage:(id)arg2 confirmationButtonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
