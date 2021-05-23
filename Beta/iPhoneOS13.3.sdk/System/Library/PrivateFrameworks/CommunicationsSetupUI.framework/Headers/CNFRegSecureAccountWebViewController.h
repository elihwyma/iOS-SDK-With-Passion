/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegAuthorizedAccountWebViewController.h>

@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController

{
    IMAccount *_account;
    _Bool _triedGettingNewCredentials;
    _Bool _gotNewCredential;
    unsigned long long _signinFailureCount;
}

@property (retain, nonatomic) IMAccount *account;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_handleTimeout;
- (void)_setupAccountHandlers;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (void)_showRequestPasswordAlert;
- (void)_showForgotPasswordAlert;
- (void)_showBadPasswordAlert;
- (void)_launchForgotPasswordUrl;
- (void)_resetSigninFailureCount;
- (void)_incrementSigninFailureCount;
- (void)_showRegistrationFailureWithError:(id)arg1;

@end
