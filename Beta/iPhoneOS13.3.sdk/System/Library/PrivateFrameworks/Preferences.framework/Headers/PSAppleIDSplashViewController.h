/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class AKAppleIDAuthenticationController, NSString, NSTimer, PSSpecifier, RemoteUIController, UIActivityIndicatorView, UIBarButtonItem;

@interface PSAppleIDSplashViewController

{
    AKAppleIDAuthenticationController *_authController;
    CDUnknownBlockType _passwordHandler;
    UIActivityIndicatorView *_spinner;
    UIBarButtonItem *_spinnerBarItem;
    UIBarButtonItem *_nextButtonBarItem;
    UIBarButtonItem *_cancelButtonBarItem;
    PSSpecifier *_createNewAccountButtonSpecifier;
    PSSpecifier *_createNewAccountGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_userSpecifier;
    NSString *_username;
    NSString *_password;
    id _textFieldTextDidChangeObserver;
    _Bool _isPasswordDirty;
    _Bool _shouldHideBackButton;
    void *_powerAssertion;
    NSTimer *_idleJiggleTimer;
    RemoteUIController *_remoteUIController;
    CDUnknownBlockType _remoteUICompletion;
    _Bool _isPresentedModally;
    _Bool _shouldShowCreateAppleIDButton;
}

@property (nonatomic, setter=setPresentedModally:) _Bool isPresentedModally;
@property (nonatomic, readonly) AKAppleIDAuthenticationController *authenticationController;
@property (nonatomic) _Bool shouldShowCreateAppleIDButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)title;
- (id)serviceName;
- (void)setUsername:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)specifiers;
- (void)returnPressedAtEnd;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifierForLoginUserForm;
- (id)_specifierForLoginPasswordForm;
- (id)_specifiersForSignInButton;
- (id)_specifiersForCreateNewAccount;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (id)_usernameForSpecifier:(id)arg1;
- (id)_silhouetteMonogram;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_signInButtonWasTapped:(id)arg1;
- (_Bool)_runningInMail;
- (void)_presentAppleIDPrivacyInformationPane;
- (void)_createNewAppleIDButtonWasTapped:(id)arg1;
- (void)_iForgotButtonWasTapped:(id)arg1;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)_updateSignInButton;
- (_Bool)_shouldAnchorCreateAccountButton;
- (double)_heightForCreateNewAccountSpecifierWithWidth:(double)arg1;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (void)_cancelPasswordDelegateIfNecessary;
- (void)_reloadPasswordSpecifier;
- (void)willBeginAuthWithContext:(id)arg1;
- (void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)showBusyUI;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)hideBusyUI;
- (void)_signInWithUsername:(id)arg1 password:(id)arg2;
- (void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_openWebBasedCredentialRecoveryFlow;
- (void)createNewAppleIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_setInteractionEnabled:(_Bool)arg1;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (id)serviceDescription;
- (id)serviceIcon;
- (void)setUsernameEnabled:(_Bool)arg1;
- (void)_presentInvalidUsernameAlert;
- (_Bool)_shouldShowCancelDone;

@end
