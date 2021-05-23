/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDAccountStore, NSString;

__attribute__((visibility("hidden")))
@interface ACDAccountStoreFilter : NSObject

{
    ACDAccountStore *_backingAccountStore;
}

@property (nonatomic, readonly) ACDAccountStore *backingAccountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setNotificationsEnabled:(_Bool)arg1;
- (void)accountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountsWithHandler:(CDUnknownBlockType)arg1;
- (void)accountsWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountsOnPairedDeviceWithAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removeAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removeAccount:(id)arg1 withDataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)canSaveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 verify:(_Bool)arg2 dataclassActions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renewCredentialsForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)accountTypesWithHandler:(CDUnknownBlockType)arg1;
- (void)dataclassesWithHandler:(CDUnknownBlockType)arg1;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)credentialForAccount:(id)arg1 serviceID:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setCredential:(id)arg1 forAccount:(id)arg2 serviceID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)credentialItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)credentialItemForAccount:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCredentialItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)childAccountsWithAccountTypeIdentifier:(id)arg1 parentAccountIdentifier:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accessKeysForAccountType:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)permissionForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)grantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)clearGrantedPermissionsForAccountType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)preloadDataclassOwnersWithCompletion:(CDUnknownBlockType)arg1;
- (void)dataclassActionsForAccountSave:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dataclassActionsForAccountDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isPerformingDataclassActionsForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountExistsWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isTetheredSyncingEnabledForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tetheredSyncSourceTypeForDataclass:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)kerberosAccountsForDomainFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isPushSupportedForAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountIdentifiersEnabledForDataclasses:(id)arg1 withAccountTypeIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)handleURL:(id)arg1;
- (void)clientTokenForAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addClientToken:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)discoverPropertiesForAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)visibleTopLevelAccountsWithAccountTypeIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)accountsWithAccountTypeIdentifiers:(id)arg1 preloadedProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveAccount:(id)arg1 toPairedDeviceWithOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAccountsFromPairedDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerKeychainMigrationIfNecessary:(CDUnknownBlockType)arg1;
- (void)reportTelemetryForLandmarkEvent:(CDUnknownBlockType)arg1;
- (void)scheduleBackupIfNonexistent:(CDUnknownBlockType)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)saveAccount:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)notifyRemoteDevicesOfModifiedAccount:(id)arg1 withChangeType:(id)arg2;
- (id)initWithBackingAccountStore:(id)arg1;
- (_Bool)_accessGrantedForClient:(id)arg1 onAccountTypeID:(id)arg2;
- (_Bool)_wildCardAuthorizationMatchingForAccountTypeIdentifier:(id)arg1;
- (id)_appPermissionsForAccountTypeIdentifier:(id)arg1;
- (_Bool)_isClientPermittedToAccessAccountTypeWithIdentifier:(id)arg1;
- (_Bool)_isClientPermittedToAccessAccount:(id)arg1;
- (_Bool)_isClientPermittedToRemoveAccount:(id)arg1;
- (_Bool)_clientHasPermissionToAddAccount:(id)arg1;
- (_Bool)_accessGrantedForBundleID:(id)arg1 onAccountTypeID:(id)arg2;

@end
