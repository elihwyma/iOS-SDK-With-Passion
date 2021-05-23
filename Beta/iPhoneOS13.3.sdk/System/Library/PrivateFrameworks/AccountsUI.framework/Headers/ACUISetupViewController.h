/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Preferences/PSSetupController.h>

@interface ACUISetupViewController : PSSetupController

{
    _Bool _didAttemptDataclassSetup;
    _Bool _shouldForceMailSetup;
}

+ (void)showDataclassConfigurationControllerForAccount:(id)arg1 name:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)showAlternateCreationControllerForAccountType:(id)arg1 username:(id)arg2 fromViewController:(id)arg3 specifier:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)_specifierForDataclassEditControllerClass:(Class)arg1 withName:(id)arg2 account:(id)arg3;

- (void)_dismissAndNotifyParent;
- (void)controller:(id)arg1 didFinishSettingUpAccount:(id)arg2;
- (void)finishedAccountSetup;

@end
