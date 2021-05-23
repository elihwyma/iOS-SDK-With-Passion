/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class ACAccount, ECAccount, ECAuthenticationScheme, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MFAccount : NSObject <Swift>

{
    ACAccount *_persistentAccount;
    struct os_unfair_lock_s _persistentAccountLock;
    NSMutableDictionary *_unsavedAccountProperties;
    NSArray *emailAddressStrings;
    ECAccount *_baseAccount;
    NSString *_sourceApplicationBundleIdentifier;
}

@property (readonly) ACAccount *accountForRenewingCredentials;
@property (readonly) ACAccount *persistentAccount;
@property (readonly) ACAccount *parentAccount;
@property (readonly) NSString *parentAccountIdentifier;
@property (nonatomic, readonly) ECAccount *baseAccount;
@property (nonatomic, readonly, getter=isManaged) _Bool managed;
@property (readonly) NSDictionary *properties;
@property (readonly) NSString *uniqueID;
@property (copy, readonly) NSString *identifier;
@property (readonly) NSString *syncStoreIdentifier;
@property (readonly) NSString *managedTag;
@property (readonly) NSString *type;
@property (retain) NSString *username;
@property (copy, nonatomic) NSString *hostname;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic, readonly) NSString *oauth2Token;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) ECAuthenticationScheme *preferredAuthScheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *emailAddressStrings;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic, readonly) ACAccount *systemAccount;
@property (copy, nonatomic, readonly) NSString *statisticsKind;
@property (nonatomic, readonly) _Bool primaryiCloudAccount;
@property (copy, nonatomic, readonly) NSString *ef_publicDescription;

+ (id)hostname;
+ (id)supportedDataclasses;
+ (id)accountTypeString;
+ (id)accountTypeIdentifier;
+ (_Bool)shouldHealAccounts;
+ (id)accountWithProperties:(id)arg1;
+ (id)_accountClass;
+ (id)_newPersistentAccount;
+ (id)releaseAllConnectionsScheduler;
+ (id)_basicPropertyForKey:(id)arg1 persistentAccount:(id)arg2;
+ (_Bool)_setBasicProperty:(id)arg1 forKey:(id)arg2 persistentAccount:(id)arg3;
+ (id)displayedAccountTypeString;
+ (id)excludedAccountPropertyKeys;
+ (_Bool)usesSSL;
+ (unsigned int)defaultSecurePortNumber;
+ (unsigned int)defaultPortNumber;
+ (id)predefinedValueForKey:(id)arg1;
+ (void)setShouldHealAccounts:(_Bool)arg1;
+ (id)newAccountWithDictionary:(id)arg1;
+ (id)authSchemesForAccountClass;
+ (id)accountWithPersistentAccount:(id)arg1;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (_Bool)isPredefinedAccountType;
+ (id)propertiesWhichRequireValidation;
+ (id)displayedShortAccountTypeString;
+ (void *)legacyKeychainProtocol;
+ (id)accountPropertiesValueForKey:(id)arg1 value:(id)arg2;
+ (_Bool)isCommonPortNumber:(unsigned int)arg1;
+ (_Bool)isSSLEditable;
+ (id)saslProfileName;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isActive;
- (void)setActive:(_Bool)arg1;
- (id)serviceName;
- (id)initWithProperties:(id)arg1;
- (id)_password;
- (id)accountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)enabledDataclasses;
- (id)clientCertificates;
- (void)setClientCertificates:(id)arg1;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (id)_credential;
- (_Bool)requiresAuthentication;
- (id)initWithPersistentAccount:(id)arg1;
- (void)_setAccountProperties:(id)arg1;
- (void)setPersistentAccount:(id)arg1;
- (void)releaseAllConnections;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (id)_objectForAccountInfoKey:(id)arg1;
- (id)_privacySafeDescription;
- (void)accountInfoDidChange;
- (void)setOAuth2Token:(id)arg1 refreshToken:(id)arg2;
- (void)_queueAccountInfoDidChange;
- (void)removeAccountPropertyForKey:(id)arg1;
- (_Bool)usesSSL;
- (_Bool)_boolForAccountInfoKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_credentialCreateIfNecessary:(_Bool)arg1 error:(id *)arg2;
- (id)_passwordWithError:(id *)arg1;
- (_Bool)_renewCredentialsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)authenticatedConnection;
- (unsigned int)defaultSecurePortNumber;
- (unsigned int)defaultPortNumber;
- (unsigned int)portNumber;
- (_Bool)_shouldTryDirectSSLConnectionOnPort:(unsigned int)arg1;
- (Class)connectionClass;
- (id)_newConnection;
- (_Bool)_connectAndAuthenticate:(id)arg1;
- (void)setUsesSSL:(_Bool)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (id)certUIService;
- (void)setTryDirectSSL:(_Bool)arg1;
- (id)secureServiceName;
- (struct __CFString *)connectionServiceType;
- (_Bool)allowsTrustPrompt;
- (id)networkAccountIdentifier;
- (id)defaultConnectionSettings;
- (unsigned long long)credentialAccessibility;
- (id)customDescriptionForError:(id)arg1 authScheme:(id)arg2 defaultDescription:(id)arg3;
- (void)reportAuthenticationError:(id)arg1 authScheme:(id)arg2;
- (id)missingPasswordErrorWithTitle:(id)arg1;
- (_Bool)canAuthenticateWithCurrentCredentials;
- (_Bool)hasPasswordCredential;
- (void)savePersistentAccount;
- (void)setMissingPasswordError;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (void)removePersistentAccount;
- (id)accountClass;
- (void)setValueInAccountProperties:(id)arg1 forKey:(id)arg2;
- (void)removeValueInAccountPropertiesForKey:(id)arg1;
- (id)valueInAccountPropertiesForKey:(id)arg1;
- (_Bool)canGoOffline;
- (_Bool)supportsMailDrop;
- (id)_credentialCreateIfNecessary:(_Bool)arg1;
- (_Bool)renewCredentialsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)promptUserForPasswordWithTitle:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)promptUserForWebLoginWithURL:(id)arg1 shouldConfirm:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)fetchTokensIfNecessary:(id *)arg1;
- (void)releaseAllForcedConnections;
- (void)applySettingsAsDefault:(id)arg1;
- (id)alternateConnectionSettings;
- (id)insecureConnectionSettings;
- (id)secureConnectionSettings;
- (id)nameForMailboxUid:(id)arg1;
- (_Bool)shouldEnableAfterError:(id)arg1;
- (_Bool)enableAccount;
- (_Bool)shouldDisplayHostnameInErrorMessages;
- (id)inaccessiblePasswordErrorWithTitle:(id)arg1;
- (id)loginDisabledErrorWithTitle:(id)arg1;
- (_Bool)isSyncingNotes;
- (id)copyDiagnosticInformation;

@end
