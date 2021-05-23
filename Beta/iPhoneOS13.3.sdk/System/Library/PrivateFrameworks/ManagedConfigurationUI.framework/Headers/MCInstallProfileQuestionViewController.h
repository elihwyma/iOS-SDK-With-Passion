/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class MCUIFieldCollection, NSString, UIAlertView, UITextField;

@protocol MCProfileQuestionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCInstallProfileQuestionViewController : UITableViewController

{
    MCUIFieldCollection *_fieldCollection;
    NSString *_previousResponseValue;
    _Bool _waitingForPasscodePreflight;
    int _outDirection;
    UIAlertView *_activeAlert;
    _Bool _showingKeyboard;
    _Bool _isLastQuestion;
    id <MCProfileQuestionsControllerDelegate> _questionsDelegate;
    UITextField *_textField;
}

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id <MCProfileQuestionsControllerDelegate> questionsDelegate;
@property (nonatomic) int outDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (void)_setup;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)alertViewCancel:(id)arg1;
- (void)_showKeyboard:(_Bool)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)_updateNavigationBar;
- (void)_cancelButtonClicked;
- (void)_showProgressIndicator;
- (void)stopWaitingForMoreInput;
- (id)initWithUserInput:(id)arg1;
- (void)waitForMoreInput;
- (void)_cancelActiveAlert:(_Bool)arg1;
- (void)updateWithUserInput:(id)arg1;
- (void)_textFieldValueChanged:(id)arg1;
- (void)_questionFieldEmpty:(id)arg1;
- (void)_questionFieldNotEmpty:(id)arg1;
- (void)_showNavButtonsAnimated:(_Bool)arg1;
- (void)_hideKeyboard:(_Bool)arg1;
- (void)_configureQuestionField:(id)arg1;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_showErrorAlertWithError:(id)arg1;
- (void)_continueOrFinish;
- (void)_hideProgressIndicator;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_retryWithCurrentField;
- (void)_cancelInput;
- (void)_continueWithCurrentField;
- (void)_preflightCurrentPayload;
- (void)_processResponseAndContinue;
- (void)_nextButtonClicked;
- (void)_disableRightButton;
- (void)_retryPayload;
- (void)_skipPayload;
- (void)_cancelPayload;
- (void)_enableRightButton;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_finishInput;
- (id)initWithFieldCollection:(id)arg1;

@end
