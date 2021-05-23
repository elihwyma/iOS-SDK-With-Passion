/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class ACRemoteAccountStoreSession, NSArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ACAccountStore : NSObject

{
    NSObject<OS_dispatch_queue> *_replyQueue;
    id _daemonAccountStoreDidChangeObserver;
    NSMutableDictionary *_accountCache;
    ACRemoteAccountStoreSession *_remoteAccountStoreSession;
    ACRemoteAccountStoreSession *_longLivedRemoteAccountStoreSession;
    NSString *_effectiveBundleID;
}

@property (nonatomic, readonly) ACRemoteAccountStoreSession *remoteAccountStoreSession;
@property (nonatomic, readonly) ACRemoteAccountStoreSession *longLivedRemoteAccountStoreSession;
@property (readonly) NSString *effectiveBundleID;
@property (weak, nonatomic, readonly) NSArray *accounts;

+ (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
+ (long long)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
+ (id)_defaultStore;
+ (void)_setDefaultStore:(id)arg1;
+ (_Bool)canSaveAccountsOfAccountTypeIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)accountWithIdentifier:(id)arg1;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 error:(id *)arg3;
- (void)removeAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1;
- (id)accountsWithAccountType:(id)arg1;
- (_Bool)saveVerifiedAccount:(id)arg1 error:(id *)arg2;
- (void)canSaveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithRemoteEndpoint:(id)arg1 effectiveBundleID:(id)arg2;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (id)accountWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_connectionFailureError;
- (id)accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_unsanitizeError:(id)arg1;
- (void)requestAccessToAccountsWithType:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_sanitizeOptionsDictionary:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 force:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)credentialForAccount:(id)arg1 error:(id *)arg2;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2 error:(id *)arg3;
- (id)credentialForAccount:(id)arg1 serviceID:(id)arg2;
- (id)parentAccountForAccount:(id)arg1 error:(id *)arg2;
- (id)childAccountsForAccount:(id)arg1 error:(id *)arg2;
- (id)enabledDataclassesForAccount:(id)arg1 error:(id *)arg2;
- (id)provisionedDataclassesForAccount:(id)arg1 error:(id *)arg2;
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1 error:(id *)arg2;
- (id)dataclassActionsForAccountDeletion:(id)arg1 error:(id *)arg2;
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1 error:(id *)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleURL:(id)arg1;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;
- (void)_removeObsoleteAccountsInternal:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeObsoleteOSXServerAccountForiOS:(id)arg1;
- (id)_createSMTPAccountForServerAccount:(id)arg1;
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;
- (id)initWithRemoteEndpoint:(id)arg1;
- (id)initWithEffectiveBundleID:(id)arg1;
- (void)disconnectFromRemoteAccountStore;
- (void)accountTypeWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)accountsWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccountType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDeleteSync:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 doVerify:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)saveVerifiedAccount:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestAccessToAccountsWithType:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAccount:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)allAccountTypes;
- (id)allDataclasses;
- (id)credentialForAccount:(id)arg1;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 error:(id *)arg4;
- (id)credentialForAccount:(id)arg1 bundleID:(id)arg2;
- (id)allCredentialItems;
- (id)credentialItemForAccount:(id)arg1 serviceName:(id)arg2;
- (void)insertCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)saveCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removeCredentialItem:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)parentAccountForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)enabledDataclassesForAccount:(id)arg1;
- (id)provisionedDataclassesForAccount:(id)arg1;
- (id)supportedDataclassesForAccountType:(id)arg1;
- (id)syncableDataclassesForAccountType:(id)arg1;
- (id)accessKeysForAccountType:(id)arg1;
- (id)appPermissionsForAccountType:(id)arg1;
- (void)setPermissionGranted:(_Bool)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1;
- (_Bool)permissionForAccountType:(id)arg1;
- (id)grantedPermissionsForAccountType:(id)arg1;
- (void)clearGrantedPermissionsForAccountType:(id)arg1;
- (id)typeIdentifierForDomain:(id)arg1;
- (id)displayTypeForAccountWithIdentifier:(id)arg1;
- (id)accountIdentifiersEnabledForDataclass:(id)arg1;
- (id)accountIdentifiersEnabledToSyncDataclass:(id)arg1;
- (id)dataclassActionsForAccountSave:(id)arg1;
- (id)dataclassActionsForAccountDeletion:(id)arg1;
- (_Bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (_Bool)hasAccountWithDescription:(id)arg1;
- (_Bool)isTetheredSyncingEnabledForDataclass:(id)arg1;
- (id)tetheredSyncSourceTypeForDataclass:(id)arg1;
- (_Bool)isPushSupportedForAccount:(id)arg1;
- (void)cachedAccountWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (int)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1;
- (id)clientTokenForAccount:(id)arg1;
- (_Bool)addClientToken:(id)arg1 forAccount:(id)arg2;
- (id)accountsWithAccountTypeIdentifiers:(id)arg1 error:(id *)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1;
- (void)notifyRemoteDevicesOfUpdatedCredentials:(id)arg1;
- (void)notifyRemoteDevicesOfNewAccount:(id)arg1;
- (void)removeObsoleteAccounts:(CDUnknownBlockType)arg1;
- (id)_removeObsoleteOSXServerAccountForMacOS:(id)arg1;

@end
