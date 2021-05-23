/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UINavigationController.h>

@class NSDictionary, NSString, UMUserPersona, UMUserPersonaContext;

@protocol AAUISignInControllerDelegate, AIDAServiceOwnerProtocol;

@interface AAUISignInController : UINavigationController

{
    NSDictionary *_authenticationResults;
    id <AIDAServiceOwnerProtocol> _serviceOwnersManager;
    long long _aidaOperationUIPermissions;
    UMUserPersona *_originalPersona;
    UMUserPersonaContext *_originalPersonaContext;
    long long _currentStyle;
    _Bool _canEditUsername;
    _Bool __shouldForceOperation;
    NSString *_username;
    NSString *_serviceType;
}

@property (retain, nonatomic, setter=_setAuthenticationResults:) NSDictionary *_authenticationResults;
@property (retain, nonatomic, setter=_setServiceOwnersManager:) id <AIDAServiceOwnerProtocol> _serviceOwnersManager;
@property (nonatomic, setter=_setShouldForceOperation:) _Bool _shouldForceOperation;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) _Bool canEditUsername;
@property (weak, nonatomic) id <AAUISignInControllerDelegate> delegate;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateStyleIfNeeded;
- (void)willAuthenticateWithContext:(id)arg1;
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2;
- (void)signInViewControllerDidCancel:(id)arg1;
- (id)_spinnerViewController;
- (id)_signInViewController;
- (void)_mainQueue_continueSignInWithAuthenticationResults:(id)arg1 parentViewController:(id)arg2;
- (void)_performAuthenticationForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_allowsAccountCreationForService:(id)arg1;
- (_Bool)_showsServiceIconsForService:(id)arg1;
- (id)_messageStringForService:(id)arg1;
- (_Bool)_isAuthenticatingPrimary:(id)arg1;
- (id)_spinnerMessageForService:(id)arg1;
- (void)_mainQueue_presentContinueUsingInViewController:(id)arg1 account:(id)arg2 serviceType:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_continueUsingControllerForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_delegate_signInControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_attemptSignInForService:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_attemptSignInForServices:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performSilentRenewalWithResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mainQueue_presentAlertForError:(id)arg1 inViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_delegate_signInControllerDidCancel;
- (void)prepareInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
