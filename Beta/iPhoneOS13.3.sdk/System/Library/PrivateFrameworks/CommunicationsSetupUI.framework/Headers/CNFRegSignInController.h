/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class CNFRegLearnMoreButton, NSString, PSSpecifier;

@interface CNFRegSignInController : CNFRegFirstRunController

{
    PSSpecifier *_usernameSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createAccountButtonSpecifier;
    NSString *_pendingUsername;
    NSString *_pendingPassword;
    unsigned long long _signinFailureCount;
    CNFRegLearnMoreButton *_learnMoreButton;
    _Bool _hideLearnMoreButton;
    _Bool _useSystemAccount;
}

@property (copy, nonatomic) NSString *pendingUsername;
@property (copy, nonatomic) NSString *pendingPassword;
@property (nonatomic) unsigned long long signinFailureCount;
@property (nonatomic) _Bool hideLearnMoreButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)bundle;
- (void)handleURL:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)applicationDidResume;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)setSpecifier:(id)arg1;
- (void)_updateUI;
- (void)cancelButtonTapped;
- (void)_handleTimeout;
- (id)logName;
- (id)specifierList;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupEventHandlers;
- (void)signInWithUsername:(id)arg1 password:(id)arg2;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_launchForgotPasswordUrl;
- (void)_resetSigninFailureCount;
- (void)_incrementSigninFailureCount;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (id)validationString;
- (void)_updateControllerState;
- (void)_layoutLearnMoreButton;
- (void)learnMorePressed:(id)arg1;
- (void)_resignFirstResponders;
- (id)usernameTextField;
- (id)passwordTextField;
- (id)getUserNameForSpecifier:(id)arg1;
- (id)getPasswordForSpecifier:(id)arg1;
- (_Bool)passwordIsEmpty;
- (void)setSignInButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)usernameIsEmpty;
- (void)setPasswordText:(id)arg1;
- (void)__userTappedTextField;
- (void)setUsernameText:(id)arg1;
- (void)_startTimeout;
- (void)_loadRegionsIfNecessary;
- (void)setUsernameEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPasswordEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setCreateAccountButtonEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)signInTapped:(id)arg1;
- (void)_buildCreateAccountButtonSpecifierCache:(id)arg1;
- (void)_buildSignInGroupSpecifierCache:(id)arg1;
- (void)_buildCredentialSpecifierCache:(id)arg1;
- (void)_showSigninFailureAlert;
- (void)_showNewPasswordNeededSheetWithAppleID:(id)arg1;
- (void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2;
- (void)_finishSignInWithAccount:(id)arg1 animated:(_Bool)arg2;
- (void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)usernameFieldDidBeginEditing:(id)arg1;
- (void)passwordFieldDidBeginEditing:(id)arg1;
- (void)showCreateAccountController;
- (void)forgotIDButtonTapped;
- (void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1;
- (void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2;

@end
