/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@protocol AKAlertHandlerUIProvider;

@interface AKAlertHandler : NSObject

{
    id <AKAlertHandlerUIProvider> _uiProvider;
}

@property (weak, nonatomic) id <AKAlertHandlerUIProvider> uiProvider;

+ (id)sharedInstance;

- (void)showAlertForError:(id)arg1 withAuthKitAccount:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_showAlertForInvalidContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForMissingAppleAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForAccountNotSupportedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForUnverifiedEmailWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForInsufficientSecurityLevelWithBundleID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_showAlertForCannotFindServerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAlertForUnderageAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_showAlertForPasscodeSetupWithCompletion:(CDUnknownBlockType)arg1;
- (id)notificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4;
- (_Bool)showAlert:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 altAction:(CDUnknownBlockType)arg3;
- (void)_openSpyglass;
- (void)_openUpgradeAccountSecurityLevelWithBundleID:(id)arg1;
- (void)_openPasscodeSetup;
- (_Bool)showAlert:(id)arg1 primaryAction:(CDUnknownBlockType)arg2 altAction:(CDUnknownBlockType)arg3 cancelAction:(CDUnknownBlockType)arg4;
- (id)_URLWithString:(id)arg1 byAppendingParameters:(id)arg2;
- (void)showAlertForError:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
