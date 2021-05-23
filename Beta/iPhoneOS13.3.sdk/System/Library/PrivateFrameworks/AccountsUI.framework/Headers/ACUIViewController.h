/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Preferences/PSListController.h>

@class ACAccountStore, ACUIAccountOperationsHelper, NSString, UIBarButtonItem, UIProgressHUD;

@protocol ACUIViewControllerAccountChangeObserver;

@interface ACUIViewController : PSListController

{
    _Bool _addedToTaskList;
    _Bool _activityInProgress;
    CDUnknownBlockType _confirmationViewCompletion;
    UIProgressHUD *_hud;
    _Bool _validationInProgress;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    ACAccountStore *_accountStore;
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    id <ACUIViewControllerAccountChangeObserver> _accountChangeObserver;
}

@property (nonatomic) _Bool validationInProgress;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) ACUIAccountOperationsHelper *accountOperationsHelper;
@property (weak, nonatomic) id <ACUIViewControllerAccountChangeObserver> accountChangeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldPresentAsModalSheet;
+ (id)acuiAccountStore;

- (id)init;
- (void)dealloc;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (id)specifiers;
- (_Bool)shouldReloadSpecifiersOnResume;
- (void)doneButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)hideActivityInProgressUI;
- (_Bool)isPresentedAsModalSheet;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(_Bool)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5;
- (void)setTaskCompletionAssertionEnabled:(_Bool)arg1;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 forceAlert:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(_Bool)arg2;
- (id)_effectiveParentController;
- (void)reloadParentSpecifier;
- (void)reloadAllParentSpecifiersAnimated:(_Bool)arg1;
- (void)reloadAllParentSpecifiers;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(_Bool)arg4 context:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startValidationWithPrompt:(id)arg1;
- (void)updateValidationPrompt:(id)arg1;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(_Bool)arg2;
- (void)setCellsChecked:(_Bool)arg1;
- (void)removeParentSpecifier;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (_Bool)isShowingActivityInProgressUI;

@end
