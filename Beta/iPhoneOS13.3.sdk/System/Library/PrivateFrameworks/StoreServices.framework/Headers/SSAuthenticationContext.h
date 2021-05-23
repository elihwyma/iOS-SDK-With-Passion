/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SSURLBagContext;

@interface SSAuthenticationContext : NSObject

{
    NSString *_accountName;
    _Bool _accountNameEditable;
    long long _accountScope;
    _Bool _allowsBioAuthentication;
    _Bool _allowsBootstrapCellularData;
    _Bool _allowsRetry;
    _Bool _allowsSilentAuthentication;
    NSString *_altDSID;
    NSString *_cancelButtonLabel;
    _Bool _canCreateNewAccount;
    _Bool _canSetActiveAccount;
    NSString *_clientIdentifierHeader;
    _Bool _displaysOnLockScreen;
    _Bool _forceDaemonAuthentication;
    NSDictionary *_httpHeaders;
    NSString *_logUUID;
    NSString *_password;
    NSString *_passwordEquivalentToken;
    NSString *_okButtonLabel;
    _Bool _persistsAcrossDeviceLock;
    _Bool _persistsPasswordFallback;
    NSString *_preferredITunesStoreClient;
    NSString *_promptTitle;
    long long _promptStyle;
    NSString *_reasonDescription;
    NSDictionary *_requestParameters;
    NSNumber *_requiredUniqueIdentifier;
    _Bool _shouldCreateNewSession;
    _Bool _shouldFollowAccountButtons;
    _Bool _shouldIgnoreProtocol;
    _Bool _shouldPersonalizeResponseActions;
    _Bool _shouldSuppressDialogs;
    NSDictionary *_signupRequestParameters;
    long long _tokenType;
    NSString *_touchIDContinueToken;
    NSArray *_userAgentComponents;
    _Bool _demoAccount;
}

@property (nonatomic, readonly) _Bool allowsBioAuthentication;
@property (nonatomic, readonly) _Bool allowsBootstrapCellularData;
@property (copy, nonatomic, readonly) NSString *cancelButtonLabel;
@property (copy, nonatomic, readonly) NSString *clientIdentifierHeader;
@property (nonatomic, readonly) _Bool displaysOnLockScreen;
@property (nonatomic, readonly, getter=isDemoAccount) _Bool demoAccount;
@property (copy, nonatomic, readonly) NSString *logUUID;
@property (copy, nonatomic, readonly) NSString *okButtonLabel;
@property (nonatomic, readonly) _Bool persistsAcrossDeviceLock;
@property (copy, nonatomic, readonly) NSString *promptTitle;
@property (copy, nonatomic, readonly) NSString *reasonDescription;
@property (nonatomic, readonly) _Bool shouldIgnoreProtocol;
@property (nonatomic, readonly) long long tokenType;
@property (nonatomic, readonly) SSURLBagContext *URLBagContext;
@property (nonatomic, readonly) _Bool forceDaemonAuthentication;
@property (nonatomic, readonly) _Bool shouldPersonalizeResponseActions;
@property (copy, nonatomic, readonly) NSString *accountName;
@property (readonly) long long accountScope;
@property (nonatomic, readonly, getter=isAccountNameEditable) _Bool accountNameEditable;
@property (nonatomic, readonly) _Bool allowsRetry;
@property (nonatomic, readonly) _Bool allowsSilentAuthentication;
@property (copy, nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) _Bool canCreateNewAccount;
@property (nonatomic, readonly) _Bool canSetActiveAccount;
@property (copy, nonatomic, readonly) NSDictionary *HTTPHeaders;
@property (copy, nonatomic, readonly) NSString *password;
@property (copy, nonatomic, readonly) NSString *passwordEquivalentToken;
@property (copy, nonatomic, readonly) NSString *initialPassword;
@property (nonatomic, readonly) _Bool persistsPasswordFallback;
@property (copy, nonatomic, readonly) NSString *preferredITunesStoreClient;
@property (nonatomic, readonly) long long promptStyle;
@property (copy, nonatomic, readonly) NSDictionary *requestParameters;
@property (retain, nonatomic, readonly) NSNumber *requiredUniqueIdentifier;
@property (nonatomic, readonly) _Bool shouldCreateNewSession;
@property (nonatomic, readonly) _Bool shouldFollowAccountButtons;
@property (nonatomic, readonly) _Bool shouldSuppressDialogs;
@property (copy, nonatomic, readonly) NSDictionary *signupRequestParameters;
@property (copy, nonatomic, readonly) NSString *touchIDContinueToken;
@property (copy, nonatomic, readonly) NSArray *userAgentComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextForSignIn;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)accountStoreOptions;
- (_Bool)_allowCreateAccount;
- (id)_initSSAuthenticationContext;
- (void)_copyIvarsToCopy:(id)arg1 withZone:(struct _NSZone *)arg2;

@end
