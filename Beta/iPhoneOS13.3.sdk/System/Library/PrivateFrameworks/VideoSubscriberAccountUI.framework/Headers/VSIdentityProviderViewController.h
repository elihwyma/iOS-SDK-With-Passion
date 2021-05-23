/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class NSOperationQueue, NSString, UIBarButtonItem, VSAuditToken, VSIdentityProvider, VSIdentityProviderRequestManager, VSImageLoadOperation, VSViewModel;

@protocol VSIdentityProviderViewControllerDelegate;

@interface VSIdentityProviderViewController : UIViewController <Swift>

{
    _Bool _canIssuePrivacyVouchers;
    _Bool _cancellationAllowed;
    VSIdentityProvider *_identityProvider;
    id <VSIdentityProviderViewControllerDelegate> _delegate;
    VSAuditToken *_auditToken;
    NSOperationQueue *_privateQueue;
    VSImageLoadOperation *_logoLoadOperation;
    VSViewModel *_viewModel;
    VSIdentityProviderRequestManager *_requestManager;
    UIBarButtonItem *_signInButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    UIViewController *_currentlyPresentedIdentityProviderAlert;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) VSImageLoadOperation *logoLoadOperation;
@property (retain, nonatomic) VSViewModel *viewModel;
@property (retain, nonatomic) VSIdentityProviderRequestManager *requestManager;
@property (retain, nonatomic) UIBarButtonItem *signInButtonItem;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIViewController *currentlyPresentedIdentityProviderAlert;
@property (nonatomic, readonly) VSIdentityProvider *identityProvider;
@property (weak, nonatomic) id <VSIdentityProviderViewControllerDelegate> delegate;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) _Bool canIssuePrivacyVouchers;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueRequest:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)_dismiss;
- (void)_didCancel;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_showViewController:(id)arg1;
- (id)initWithIdentityProvider:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_hideNavigationBarButtons;
- (void)_showNavigationBarButtons;
- (void)_stopValidationAndShowButtons:(_Bool)arg1;
- (void)_signInButtonPressed:(id)arg1;
- (id)_logoLoadOperationForPreferredImageSize:(struct CGSize)arg1;
- (void)_startValidation;
- (void)_showValidationAlertForError:(id)arg1;
- (void)authenticationViewControllerDidCancel:(id)arg1;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (_Bool)identityProviderRequestManager:(id)arg1 requestsAlert:(id)arg2;
- (_Bool)currentAuthenticationViewControllerSupportsPreAuth;

@end
