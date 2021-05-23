/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSAuthenticationContext.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface SSMutableAuthenticationContext : SSAuthenticationContext

@property (nonatomic) _Bool allowsBioAuthentication;
@property (nonatomic) _Bool allowsBootstrapCellularData;
@property (copy, nonatomic) NSString *cancelButtonLabel;
@property (copy, nonatomic) NSString *clientIdentifierHeader;
@property (nonatomic, getter=isDemoAccount) _Bool demoAccount;
@property (nonatomic) _Bool displaysOnLockScreen;
@property (nonatomic) _Bool forceDaemonAuthentication;
@property (copy, nonatomic) NSString *logUUID;
@property (copy, nonatomic) NSString *okButtonLabel;
@property (nonatomic) _Bool persistsAcrossDeviceLock;
@property (copy, nonatomic) NSString *promptTitle;
@property (copy, nonatomic) NSString *reasonDescription;
@property (nonatomic) _Bool shouldIgnoreProtocol;
@property (nonatomic) _Bool shouldPersonalizeResponseActions;
@property (nonatomic) long long tokenType;
@property (copy, nonatomic) NSString *accountName;
@property long long accountScope;
@property (nonatomic, getter=isAccountNameEditable) _Bool accountNameEditable;
@property (nonatomic) _Bool allowsRetry;
@property (nonatomic) _Bool allowsSilentAuthentication;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) _Bool canCreateNewAccount;
@property (nonatomic) _Bool canSetActiveAccount;
@property (copy, nonatomic) NSString *initialPassword;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *passwordEquivalentToken;
@property (nonatomic) _Bool persistsPasswordFallback;
@property (copy, nonatomic) NSString *preferredITunesStoreClient;
@property (nonatomic) long long promptStyle;
@property (copy, nonatomic) NSDictionary *requestParameters;
@property (retain, nonatomic) NSNumber *requiredUniqueIdentifier;
@property (nonatomic) _Bool shouldCreateNewSession;
@property (nonatomic) _Bool shouldFollowAccountButtons;
@property (nonatomic) _Bool shouldSuppressDialogs;
@property (copy, nonatomic) NSDictionary *signupRequestParameters;
@property (copy, nonatomic) NSString *touchIDContinueToken;
@property (copy, nonatomic) NSArray *userAgentComponents;
@property (copy, nonatomic) NSDictionary *HTTPHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValuesWithAccount:(id)arg1;

@end
