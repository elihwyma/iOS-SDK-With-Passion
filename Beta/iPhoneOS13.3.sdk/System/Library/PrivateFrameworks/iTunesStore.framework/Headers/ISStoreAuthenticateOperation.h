/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, SSAuthenticateResponse, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation

{
    SSMutableAuthenticationContext *_authenticationContext;
    SSAuthenticateResponse *_authenticateResponse;
    id _parentViewController;
}

@property (retain) id parentViewController;
@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly) SSAuthenticateResponse *authenticateResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_copyErrorForAuthenticateResponse:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (void)run;
- (id)initWithAuthenticationContext:(id)arg1;
- (id)uniqueKey;
- (id)authenticatedAccountDSID;
- (void)_handleAuthenticateResponse:(id)arg1;

@end
