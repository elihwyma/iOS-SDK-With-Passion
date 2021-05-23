/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSArray, NSDictionary, NSSet, NSString;

@interface AAAccount : NSObject

{
    ACAccount *_account;
    NSString *_fmipToken;
    NSArray *_appleIDAliases;
    NSString *_protocolVersion;
}

@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *fmipToken;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *username;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) NSArray *appleIDAliases;
@property (nonatomic) _Bool primaryAccount;
@property (nonatomic, readonly) _Bool primaryEmailVerified;
@property (nonatomic, readonly) _Bool needsEmailConfiguration;
@property (nonatomic, readonly) _Bool needsRegistration;
@property (nonatomic, readonly) _Bool serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *serviceUnavailableInfo;
@property (nonatomic, readonly) NSString *protocolVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *provisionedDataclasses;
@property (nonatomic, readonly) NSSet *enabledDataclasses;
@property (copy, nonatomic) NSString *accountDescription;
@property (nonatomic, readonly) NSString *accountFooterText;
@property (nonatomic, readonly) NSDictionary *accountFooterButton;
@property (nonatomic, readonly) NSDictionary *accountFirstDisplayAlert;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (nonatomic, readonly) NSString *syncStoreIdentifier;
@property (nonatomic) _Bool needsToVerifyTerms;
@property (nonatomic, readonly) NSArray *supportedDataclasses;
@property (nonatomic, readonly) int accountServiceType;

+ (id)accountTypeString;

- (id)init;
- (id)account;
- (id)accountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (_Bool)isProvisionedForDataclass:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (id)_childAccounts;
- (id)initWithAccount:(id)arg1;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
- (id)_mailChildAccount;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (_Bool)useCellularForDataclass:(id)arg1;
- (void)setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;
- (int)mobileMeAccountStatus;
- (void)notifyUserOfQuotaDepletion;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (void)saveTokensInKeychain;
- (void)savePasswordInKeychain;
- (void)saveFMIPTokenInKeychain;
- (void)removeTokensFromKeychain;
- (void)removePasswordFromKeychain;
- (void)flushCachedTokens;
- (void)flushCachedPassword;
- (void)updateAccountPropertiesWithHandler:(CDUnknownBlockType)arg1;
- (void)setupChildMailAccountAndEnable:(_Bool)arg1 withEmail:(id)arg2;
- (void)signInWithHandler:(CDUnknownBlockType)arg1;
- (void)renewCredentialsForAppleIDWithHandler:(CDUnknownBlockType)arg1;

@end
