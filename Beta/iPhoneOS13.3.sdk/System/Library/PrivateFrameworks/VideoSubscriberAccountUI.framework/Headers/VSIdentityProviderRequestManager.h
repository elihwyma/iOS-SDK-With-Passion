/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSOperationQueue, NSString, VSApplicationController, VSApplicationControllerRequestFactory, VSAuditToken, VSIdentityProvider, VSOptional, VSPreferences, VSViewModel;

@protocol OS_dispatch_source, VSIdentityProviderRequestManagerDelegate;

@interface VSIdentityProviderRequestManager : NSObject

{
    _Bool _canIssuePrivacyVouchers;
    _Bool _didCreateAccount;
    _Bool _allowsApplicationControllerTimer;
    VSIdentityProvider *_identityProvider;
    id <VSIdentityProviderRequestManagerDelegate> _delegate;
    VSAuditToken *_auditToken;
    VSViewModel *_viewModel;
    NSOperationQueue *_privateQueue;
    NSMutableArray *_requestContexts;
    VSApplicationController *_applicationController;
    VSOptional *_currentApplicationControllerRequest;
    VSOptional *_account;
    VSOptional *_storage;
    VSApplicationControllerRequestFactory *_requestFactory;
    VSPreferences *_preferences;
    NSObject<OS_dispatch_source> *_applicationControllerTimerSource;
    double _applicationControllerTimerLeeway;
    double _requestCompletionDelayAfterShowingUserInterface;
    double _applicationControllerTimerDelay;
}

@property (retain, nonatomic) VSViewModel *viewModel;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSMutableArray *requestContexts;
@property (retain, nonatomic) VSApplicationController *applicationController;
@property (retain, nonatomic) VSOptional *currentApplicationControllerRequest;
@property (retain, nonatomic) VSOptional *account;
@property (retain, nonatomic) VSOptional *storage;
@property (retain, nonatomic) VSApplicationControllerRequestFactory *requestFactory;
@property (nonatomic) _Bool didCreateAccount;
@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *applicationControllerTimerSource;
@property (nonatomic) _Bool allowsApplicationControllerTimer;
@property (nonatomic) double applicationControllerTimerLeeway;
@property (nonatomic) double requestCompletionDelayAfterShowingUserInterface;
@property (nonatomic) double applicationControllerTimerDelay;
@property (nonatomic, readonly) VSIdentityProvider *identityProvider;
@property (weak, nonatomic) id <VSIdentityProviderRequestManagerDelegate> delegate;
@property (copy, nonatomic) VSAuditToken *auditToken;
@property (nonatomic) _Bool canIssuePrivacyVouchers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueRequest:(id)arg1;
- (id)_currentRequest;
- (id)initWithIdentityProvider:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (_Bool)applicationController:(id)arg1 requestsAlert:(id)arg2;
- (void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
- (void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
- (void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
- (void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)applicationControllerDidStart:(id)arg1;
- (void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;
- (void)_stopApplicationController;
- (void)_processRequestContext:(id)arg1;
- (_Bool)_requestRequiresApplicationController:(id)arg1;
- (void)_startApplicationControllerTimer;
- (void)_completeCachedAccountMetadataRequest;
- (id)_currentRequestContext;
- (void)_stopApplicationControllerTimer;
- (void)_handleApplicationControllerError:(id)arg1 forRequest:(id)arg2;
- (void)_completeCurrentRequestWithError:(id)arg1;
- (_Bool)_handleAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_handleSilentAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (_Bool)_handleLogoutRequestDidComplete:(id)arg1;
- (_Bool)_handleSTBOptOutDidComplete:(id)arg1;
- (_Bool)_handleAccountMetadataRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_notifyDidAuthenticateAccount:(id)arg1;
- (void)_completeAuthenticationRequestWithApplicationControllerResponse:(id)arg1;
- (_Bool)_requestRequiresApplicationControllerIgnoringAuthentication:(id)arg1;
- (id)_applicationControllerRequestWithIdentityProviderRequest:(id)arg1;
- (void)_submitApplicationControllerRequest:(id)arg1;
- (_Bool)_canShowAuthenticationUI;
- (void)_showAuthenticationUI;
- (void)_completeDeletingAccountWithError:(id)arg1;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1;
- (void)_resetVerificationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)_requestCompletionDelay;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1 verificationData:(id)arg2;
- (id)_accountMetadataWithAuthenticationScheme:(id)arg1 responseStatusCode:(id)arg2 responseString:(id)arg3 accountMetadataRequest:(id)arg4 verificationData:(id)arg5;
- (void)_completeCurrentRequestWithResult:(id)arg1;
- (id)_supportedProviderAuthenticationToken;
- (void)_startDeletingAccount;
- (void)_updateAccountWithAccountAuthentication:(id)arg1;
- (id)_accountChannelsWithChannelIDs:(id)arg1;
- (void)_handleApplicationControllerRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_enqueueSubscriptionOperationIfRequiredForResponse:(id)arg1 asDependencyOf:(id)arg2;
- (id)_identityProviderAlertWithApplicationControllerAlert:(id)arg1;

@end
