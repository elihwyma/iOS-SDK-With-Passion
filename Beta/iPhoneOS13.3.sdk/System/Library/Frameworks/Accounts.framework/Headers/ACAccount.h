/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

#import <Accounts/Swift-Protocol.h>

@class ACAccountCredential, ACAccountStore, ACAccountType, ACMutableTrackedSet, ACTrackedSet, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL;

@protocol NSObject;

@interface ACAccount : NSObject <Swift>

{
    ACAccountStore *_accountStore;
    NSString *_identifier;
    NSString *_accountDescription;
    NSString *_owningBundleID;
    NSString *_username;
    NSString *_authenticationType;
    NSString *_credentialType;
    NSString *_clientToken;
    ACAccountType *_accountType;
    ACAccountCredential *_credential;
    NSMutableDictionary *_properties;
    NSMutableDictionary *_dataclassProperties;
    NSURL *_objectID;
    NSDate *_date;
    NSDate *_lastCredentialRenewalRejectionDate;
    NSString *_parentAccountIdentifier;
    ACAccount *_parentAccount;
    NSArray *_childAccounts;
    ACMutableTrackedSet *_trackedProvisionedDataclasses;
    ACMutableTrackedSet *_trackedEnabledDataclasses;
    NSMutableSet *_dirtyProperties;
    NSMutableSet *_dirtyAccountProperties;
    NSMutableSet *_dirtyDataclassProperties;
    id <NSObject> _credentialsDidChangeObserver;
    CDUnknownBlockType _accountPropertiesTransformer;
    _Bool _haveCheckedForClientToken;
    _Bool _accountAccessAvailable;
    _Bool _authenticated;
    _Bool _active;
    _Bool _supportsAuthentication;
    _Bool _visible;
    _Bool _haveCheckedForParentAccount;
    _Bool _haveCheckedForChildAccounts;
    _Bool _wasProvisionedDataclassesReset;
    _Bool _wasEnabledDataclassesReset;
}

@property (copy, nonatomic) ACTrackedSet *trackedProvisionedDataclasses;
@property (nonatomic, readonly) _Bool wasProvisionedDataclassesReset;
@property (copy, nonatomic) ACTrackedSet *trackedEnabledDataclasses;
@property (nonatomic, readonly) _Bool wasEnabledDataclassesReset;
@property (nonatomic, readonly) NSURL *objectID;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (retain, nonatomic) ACAccount *parentAccount;
@property (nonatomic, readonly) NSString *parentAccountIdentifier;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (retain, nonatomic) NSMutableSet *enabledDataclasses;
@property (retain, nonatomic) NSMutableSet *provisionedDataclasses;
@property (weak, nonatomic, readonly) NSDictionary *dataclassProperties;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (weak, nonatomic, readonly) NSDictionary *accountProperties;
@property (weak, nonatomic, readonly) ACAccount *displayAccount;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) _Bool supportsAuthentication;
@property (nonatomic, readonly, getter=isDirty) _Bool dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (nonatomic, readonly) NSSet *dirtyAccountProperties;
@property (nonatomic, readonly) NSSet *dirtyDataclassProperties;
@property (nonatomic, readonly) NSString *authenticationType;
@property (nonatomic, readonly) NSString *credentialType;
@property (nonatomic, readonly) _Bool supportsPush;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic, getter=isVisible) _Bool visible;
@property (retain, nonatomic) NSDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, readonly) NSString *shortDebugName;
@property (nonatomic, readonly) NSString *clientToken;
@property (copy) CDUnknownBlockType accountPropertiesTransformer;
@property (weak, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) ACAccountType *accountType;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *username;
@property (nonatomic, readonly) NSString *userFullName;
@property (retain, nonatomic) ACAccountCredential *credential;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (void)refresh;
- (void)setAuthenticationType:(id)arg1;
- (id)accountPropertyForKey:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)fullDescription;
- (void)_setAccountStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (void)_clearCachedChildAccounts;
- (void)_clearDirtyProperties;
- (void)_clearCachedCredentials;
- (id)qualifiedUsername;
- (id)portableCopy;
- (void)setCredentialType:(id)arg1;
- (id)owningBundleID;
- (void)setOwningBundleID:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (void)setProvisioned:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (_Bool)isProvisionedForDataclass:(id)arg1;
- (id)initWithAccountType:(id)arg1;
- (void)_installCredentialsChangedObserver;
- (void)_unsafe_markPropertyDirty:(id)arg1;
- (id)initWithManagedAccount:(id)arg1;
- (_Bool)authenticated;
- (void)credentialsChanged:(id)arg1;
- (void)_markAccountPropertyDirty:(id)arg1;
- (id)_initWithProtobuf:(id)arg1;
- (id)_encodeProtobuf;
- (void)_loadAllCachedProperties;
- (_Bool)isPropertyDirty:(id)arg1;
- (void)_unsafe_markAccountPropertyDirty:(id)arg1;
- (void)_unsafe_markDataclassPropertyDirty:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (_Bool)_useParentForCredentials;
- (id)credentialWithError:(id *)arg1;
- (void)_markDataclassPropertyDirty:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (void)reload;
- (void)_loadCachedPropertiesWithoutCredentials;
- (_Bool)addClientToken:(id)arg1;
- (id)personaIdentifier;
- (_Bool)isDataSeparatedAccount;
- (id)_initWithProtobufData:(id)arg1;
- (id)_encodeProtobufData;
- (id)initWithManagedAccount:(id)arg1 accountStore:(id)arg2;
- (void)markAllPropertiesDirty;
- (void)setDirty:(_Bool)arg1 forProperty:(id)arg2;
- (void)_markCredentialDirty;
- (void)setAccountProperties:(id)arg1;
- (id)childAccountsWithAccountTypeIdentifier:(id)arg1;
- (_Bool)isEnabledToSyncDataclass:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (void)setProperties:(id)arg1 forDataclass:(id)arg2;
- (void)takeValuesFromModifiedAccount:(id)arg1;
- (id)accountByCleaningThirdPartyTransformations;
- (id)defaultAutodiscoverDomainForChildType:(id)arg1;
- (void)_applyDirtyStateFromAccount:(id)arg1;
- (_Bool)_isDifferentFrom:(id)arg1;
- (void)setSecIdentity:(struct __SecIdentity *)arg1;
- (struct __SecIdentity *)copySecIdentity;
- (void)setSecCertificates:(id)arg1;
- (id)secCertificates;
- (_Bool)correctPersonaScopedForAccount;

@end
