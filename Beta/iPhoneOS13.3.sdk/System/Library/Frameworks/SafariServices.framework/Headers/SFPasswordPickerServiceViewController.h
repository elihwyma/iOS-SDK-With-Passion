/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFPasswordServiceViewController.h>

@class NSArray, NSString, NSURL, SFPasswordPickerViewController, _ASIncomingCallObserver, _ASPasswordCredentialAuthenticationViewController, _SFAuthenticationContext;

__attribute__((visibility("hidden")))
@interface SFPasswordPickerServiceViewController : SFPasswordServiceViewController

{
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    SFPasswordPickerViewController *_passwordPickerViewController;
    _Bool _presentInPopover;
    _Bool _hasAuthenticationForOtherPasswords;
    NSURL *_webViewURL;
    _SFAuthenticationContext *_context;
    NSString *_remoteAppID;
    NSString *_remoteLocalizedAppName;
    NSString *_remoteUnlocalizedAppName;
    NSArray *_externallyVerifiedAssociatedDomains;
    double _authenticationGracePeriod;
    CDUnknownBlockType _presentCredentialsHandler;
    _ASIncomingCallObserver *_callObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)_context;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_dismiss;
- (void)setWebViewURL:(id)arg1;
- (void)setRemoteAppID:(id)arg1;
- (void)setRemoteLocalizedAppName:(id)arg1;
- (void)setRemoteUnlocalizedAppName:(id)arg1;
- (void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg1;
- (void)authenticateToPresentInPopover:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAuthenticationGracePeriod:(double)arg1;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)passcodePromptForContext:(id)arg1;
- (_Bool)displayMessageAsTitleForContext:(id)arg1;
- (void)_presentCredentialListForExtension:(id)arg1;
- (void)_authenticateAndSetPresentCredentialsHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendCredentialToClientAndDismiss:(id)arg1;
- (void)_authenticateToViewOtherPasswordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fillCredential:(id)arg1 needsAuthentication:(_Bool)arg2;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1;
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;

@end
