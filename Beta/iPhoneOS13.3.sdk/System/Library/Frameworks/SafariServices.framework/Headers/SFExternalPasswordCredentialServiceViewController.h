/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/SFPasswordServiceViewController.h>

@class NSString, _ASPasswordCredentialAuthenticationViewController, _SFAuthenticationContext;

__attribute__((visibility("hidden")))
@interface SFExternalPasswordCredentialServiceViewController : SFPasswordServiceViewController

{
    _SFAuthenticationContext *_authenticationContext;
    _ASPasswordCredentialAuthenticationViewController *_extensionController;
    long long _completionAction;
    CDUnknownBlockType _getCredentialCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_dismiss;
- (id)_authenticationContext;
- (void)autoFillWithCredentialIdentity:(id)arg1;
- (void)getCredentialForCredentialIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)passcodePromptForContext:(id)arg1;
- (_Bool)displayMessageAsTitleForContext:(id)arg1;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)contextRequiresSessionBasedAuthentication:(id)arg1;
- (_Bool)contextShouldAllowPasscodeFallback:(id)arg1;
- (_Bool)contextShouldAllowMultipleBiometricFailures:(id)arg1;
- (void)_finishRequestToAutoFillCredential:(id)arg1 extensionShowedUI:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_finishRequestToReturnCredential:(id)arg1 extensionShowedUI:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
