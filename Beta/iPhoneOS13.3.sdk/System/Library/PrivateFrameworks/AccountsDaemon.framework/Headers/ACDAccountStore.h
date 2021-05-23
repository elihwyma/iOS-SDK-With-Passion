/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Accounts/ACAccountStore.h>

@class ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationDialogManager, ACDAuthenticationPluginManager, ACDClient, ACDClientAuthorizationManager, ACDDatabaseBackupActivity, ACDDatabaseConnection, ACDDataclassOwnersManager, ACDFakeRemoteAccountStoreSession, ACRemoteDeviceProxy, NSMutableArray, NSString;

@protocol ACDAccountStoreDelegate;

@interface ACDAccountStore : ACAccountStore

{
    NSMutableArray *_accountChanges;
    ACDDatabaseConnection *_databaseConnection;
    ACDClientAuthorizationManager *_authorizationManager;
    ACDFakeRemoteAccountStoreSession *_fakeRemoteAccountStoreSession;
    _Bool _notificationsEnabled;
    _Bool _migrationInProgress;
    id <ACDAccountStoreDelegate> _delegate;
    ACDClient *_client;
    ACRemoteDeviceProxy *_remoteDeviceProxy;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDAccessPluginManager *_accessPluginManager;
    ACDDataclassOwnersManager *_dataclassOwnersManager;
    ACDAuthenticationDialogManager *_authenticationDialogManager;
    ACDAccountNotifier *_accountNotifier;
    ACDDatabaseBackupActivity *_databaseBackupActivity;
}

@property (nonatomic, readonly) ACDDatabaseConnection *databaseConnection;
@property (retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager;
@property (retain, nonatomic) ACDAccessPluginManager *accessPluginManager;
@property (retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager;
@property (retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager;
@property (retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy;
@property (retain, nonatomic) ACDAccountNotifier *accountNotifier;
@property (retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity;
@property (nonatomic) _Bool notificationsEnabled;
@property (nonatomic, getter=isMigrationInProgress) _Bool migrationInProgress;
@property (weak, nonatomic) id <ACDAccountStoreDelegate> delegate;
@property (weak, nonatomic) ACDClient *client;
@property (nonatomic, readonly) ACDClientAuthorizationManager *authorizationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)connectToRemoteAccountStoreUsingEndpoint:(id)arg1;
- (id)remoteAccountStoreSession;
- (id)longLivedRemoteAccountStoreSession;
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
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)initWithClient:(id)arg1 databaseConnection:(id)arg2;
- (id)_childAccountsForAccountWithID:(id)arg1;
- (_Bool)_performDataclassActions:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)_clientTokenQueue;
- (void)_removeClientTokenForAccountIdentifer:(id)arg1;
- (void)_delegate_accountStoreDidSaveAccount:(id)arg1;
- (id)_addAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 oldAccount:(id)arg3 error:(id *)arg4;
- (id)_commitOrRollbackDataclassActions:(id)arg1 forAccount:(id)arg2 originalEnabledDataclasses:(id)arg3;
- (_Bool)_updateAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (void)_deleteAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (id)_displayAccountForAccount:(id)arg1;
- (id)_dataclassWithName:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (_Bool)_saveWithError:(id *)arg1;
- (id)_allAccounts_sync;
- (id)_legacyCredentialForAccount:(id)arg1 client:(id)arg2 error:(id *)arg3;
- (id)_credentialItemWithAccountIdentifier:(id)arg1 serviceName:(id)arg2;
- (id)_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)_predicateForFetchingAccountsWithManagedAccountTypeID:(id)arg1 options:(unsigned long long)arg2;
- (_Bool)_canManagedAccountType:(id)arg1 syncManagedDataclass:(id)arg2;
- (_Bool)_isManagedAccount:(id)arg1 enabledForManagedDataclass:(id)arg2;
- (_Bool)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (_Bool)_removeAccountNoSave:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;
- (_Bool)shouldPreventAccountCreationWithObsoleteAccountType;
- (_Bool)_canSaveAccount:(id)arg1 error:(id *)arg2;
- (void)_completeSave:(id)arg1 dataclassActions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_lockForAccountType:(id)arg1;
- (_Bool)_handleAccountAdd:(id)arg1 withDataclassActions:(id)arg2 error:(id *)arg3;
- (_Bool)_handleAccountMod:(id)arg1 withDataclassActions:(id)arg2 withError:(id *)arg3;
- (void)_requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 allowUserInteraction:(_Bool)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)_clientTokenForAccountIdentifier:(id)arg1 error:(id)arg2;
- (id)accountsWithAccountTypeIdentifier:(id)arg1;
- (void)addAccountNoSave:(id)arg1 error:(id *)arg2;
- (void)updateAccountNoSave:(id)arg1 error:(id *)arg2;
- (void)deleteAccountNoSave:(id)arg1 error:(id *)arg2;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (id)_accountsWithAcountType:(id)arg1 error:(id *)arg2;
- (void)saveAccount:(id)arg1 pid:(id)arg2 verify:(_Bool)arg3 dataclassActions:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
