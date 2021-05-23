/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <Foundation/NSObject.h>

@class ENCredentialStore, ENOAuthViewController, NSArray, NSMutableData, NSString, NSURLResponse, UINavigationController, UIViewController;

@protocol ENAuthenticatorDelegate;

__attribute__((visibility("hidden")))
@interface ENOAuthAuthenticator : NSObject

{
    _Bool _supportsLinkedAppNotebook;
    _Bool _useWebAuthenticationOnly;
    _Bool _preferRegistration;
    _Bool _inProgress;
    _Bool _isCancelled;
    _Bool _isMultitaskLoginDisabled;
    _Bool _isSwitchingInProgress;
    _Bool _isActiveBecauseOfCallback;
    _Bool _userSelectedLinkedAppNotebook;
    id <ENAuthenticatorDelegate> _delegate;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_host;
    UIViewController *_hostViewController;
    UINavigationController *_authenticationViewController;
    ENOAuthViewController *_oauthViewController;
    long long _state;
    NSArray *_profiles;
    NSString *_currentProfile;
    ENCredentialStore *_credentialStore;
    NSString *_tokenSecret;
    NSMutableData *_receivedData;
    NSURLResponse *_response;
}

@property (nonatomic) _Bool inProgress;
@property (nonatomic) _Bool isCancelled;
@property (retain, nonatomic) UIViewController *hostViewController;
@property (retain, nonatomic) UINavigationController *authenticationViewController;
@property (retain, nonatomic) ENOAuthViewController *oauthViewController;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSArray *profiles;
@property (copy, nonatomic) NSString *currentProfile;
@property (retain, nonatomic) ENCredentialStore *credentialStore;
@property (copy, nonatomic) NSString *tokenSecret;
@property (nonatomic) _Bool isMultitaskLoginDisabled;
@property (nonatomic) _Bool isSwitchingInProgress;
@property (nonatomic) _Bool isActiveBecauseOfCallback;
@property (nonatomic) _Bool userSelectedLinkedAppNotebook;
@property (retain, nonatomic) NSMutableData *receivedData;
@property (retain, nonatomic) NSURLResponse *response;
@property (weak, nonatomic) id <ENAuthenticatorDelegate> delegate;
@property (copy, nonatomic) NSString *consumerKey;
@property (copy, nonatomic) NSString *consumerSecret;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) _Bool supportsLinkedAppNotebook;
@property (nonatomic) _Bool useWebAuthenticationOnly;
@property (nonatomic) _Bool preferRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)deviceIdentifier;
+ (id)deviceDescription;
+ (id)queryStringFromParameters:(id)arg1;
+ (id)parametersFromQueryString:(id)arg1;
+ (id)scrubString:(id)arg1 usingRegex:(id)arg2 withMaxLength:(unsigned short)arg3;

- (id)init;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)callbackScheme;
- (void)handleDidBecomeActive;
- (_Bool)handleOpenURL:(id)arg1;
- (void)completeAuthenticationWithError:(id)arg1;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (void)oauthViewControllerDidCancel:(id)arg1;
- (void)oauthViewControllerDidSwitchProfile:(id)arg1;
- (void)oauthViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)oauthViewController:(id)arg1 receivedOAuthCallbackURL:(id)arg2;
- (void)emptyCookieJar;
- (void)authenticateWithViewController:(id)arg1;
- (void)startOauthAuthentication;
- (id)oauthCallback;
- (id)userAuthorizationURLStringWithParameters:(id)arg1;
- (void)openOAuthViewControllerWithURL:(id)arg1;
- (void)completeAuthenticationWithCredentials:(id)arg1 usesLinkedAppNotebook:(_Bool)arg2;
- (void)switchProfile;
- (void)updateCurrentBootstrapProfileWithName:(id)arg1;
- (void)verifyCFBundleURLSchemes;
- (void)enableIsActiveBecauseOfCallback;
- (void)disableIsActiveBecauseOfCallback;
- (_Bool)canHandleSwitchProfileURL:(id)arg1;
- (void)gotCallbackURL:(id)arg1;
- (void)getOAuthTokenForURL:(id)arg1;

@end
