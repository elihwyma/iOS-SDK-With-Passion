/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <AccountsDaemon/Swift-Protocol.h>

@protocol ACRemoteAccountStoreProtocol <Swift>

- (unsigned short)setNotificationsEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)accountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountTypeWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWithAccountType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWithAccountType:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsOnPairedDeviceWithAccountType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)insertAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAccount:withDataclassActions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)canSaveAccount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAccount:verify:dataclassActions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAccessForAccountTypeWithIdentifier:options:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyCredentialsForAccount:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)renewCredentialsForAccount:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountTypesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dataclassesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)credentialForAccountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)credentialForAccount:serviceID:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setCredential:forAccount:serviceID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)credentialItemsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)credentialItemForAccount:serviceName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)insertCredentialItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveCredentialItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCredentialItem:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)parentAccountForAccountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)childAccountsForAccountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)childAccountsWithAccountTypeIdentifier:parentAccountIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)enabledDataclassesForAccountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)provisionedDataclassesForAccountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)supportedDataclassesForAccountType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncableDataclassesForAccountType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accessKeysForAccountType:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)appPermissionsForAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setPermissionGranted:forBundleID:onAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAllPermissionsGrantedForAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)permissionForAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)grantedPermissionsForAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearGrantedPermissionsForAccountType:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)typeIdentifierForDomain:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)displayAccountTypeForAccountWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountIdentifiersEnabledForDataclass:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountIdentifiersEnabledToSyncDataclass:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)preloadDataclassOwnersWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)dataclassActionsForAccountSave:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dataclassActionsForAccountDeletion:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isPerformingDataclassActionsForAccount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountExistsWithDescription:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isTetheredSyncingEnabledForDataclass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)tetheredSyncSourceTypeForDataclass:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)kerberosAccountsForDomainFromURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isPushSupportedForAccount:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountIdentifiersEnabledForDataclasses:withAccountTypeIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateExistenceCacheOfAccountWithTypeIdentifier:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)handleURL: /* Error: Ran out of types for this method. */;
- (unsigned short)clientTokenForAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addClientToken:forAccountIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)discoverPropertiesForAccount:options:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)openAuthenticationURL:forAccount:shouldConfirm:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)openAuthenticationURLForAccount:withDelegateClassName:fromBundleAtPath:shouldConfirm:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)visibleTopLevelAccountsWithAccountTypeIdentifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)accountsWithAccountTypeIdentifiers:preloadedProperties:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyRemoteDevicesOfModifiedAccount:withChangeType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAccount:toPairedDeviceWithOptions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAccountsFromPairedDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)triggerKeychainMigrationIfNecessary: /* Error: Ran out of types for this method. */;
- (unsigned short)reportTelemetryForLandmarkEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleBackupIfNonexistent: /* Error: Ran out of types for this method. */;
- (unsigned short)setClientBundleID:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAccount:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)notifyRemoteDevicesOfModifiedAccount:withChangeType: /* Error: Ran out of types for this method. */;

@end
