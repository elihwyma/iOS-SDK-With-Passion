/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDDatabaseConnection, NSArray;

__attribute__((visibility("hidden")))
@interface ACDDatabaseInitializer : NSObject

{
    ACDDatabaseConnection *_databaseConnection;
    NSArray *_dataclasses;
    NSArray *_accountTypes;
    NSArray *_accounts;
    NSArray *_accessKeys;
}

+ (id)new;

- (id)init;
- (id)_accessKeys;
- (id)_accounts;
- (id)_dataclasses;
- (void)_addTwitterAccountType;
- (void)_addWeiboAccountType;
- (void)_addAppleIDAccountType;
- (void)_addFlickrAccountType;
- (void)_addVimeoAccountType;
- (void)_addLinkedInAccountType;
- (void)_addFacebookAccountType;
- (void)_addCalDAVAccountType;
- (void)_addCardDAVAccountType;
- (void)_addDataclassWithName:(id)arg1;
- (void)_addContactsCalendarsDataclassesToFB;
- (void)_addTudouAccountType;
- (void)_addYoukuAccountType;
- (void)_updateWeiboAccountTypeIfNecessary;
- (void)_addSupportsAuthenticationAttributeToAccountTypes;
- (void)_addSupportsAuthenticationAttributeToAccounts;
- (void)_addMissingAccountTypes;
- (void)_addSyncableDataclassesToCardAndCalDAV;
- (void)_addSupportsMultipleAccountsAttributeToAccountTypes;
- (void)_addYelpAccountType;
- (void)_addFacebookAccessKeys;
- (void)_addAccessKeysAttributeToFacebookAccountType;
- (void)_removeFacebookPermissionGroupAccessKey;
- (void)_removeFacebookAppVersionAccessKey;
- (void)_addFacebookAudienceAccessKey;
- (void)_addFacebookAudienceAccessKeyToFacebookAccountType;
- (void)_addAppleAccountType;
- (void)_addLiverpoolAccountType;
- (void)_addLiverpoolAccessKeys;
- (void)_addAccessKeysAttributeToLiverpoolAccountType;
- (void)_addTencentWeiboAccountType;
- (void)_upgradeLinkedInAccountType;
- (void)_addSMTPAccountType;
- (void)_addGmailAccountType;
- (void)_addYahooAccountType;
- (void)_addRemindersDataclassToCalDAVAccountType;
- (void)_addFaceTimeAccountType;
- (void)_addMadridAccountType;
- (void)_addGameCenterAccountType;
- (void)_addiTunesStoreAccountType;
- (void)_addLinkedInAccessKeys;
- (void)_addAccessKeysAttributeToLinkedInAccountType;
- (void)_limitFlickrToOneAccount;
- (void)_limitVimeoToOneAccount;
- (void)_updateFlickrCredentialTypeToOAuth;
- (void)_updateVimeoCredentialTypeToOAuth;
- (void)_addIdentityServicesAccountType;
- (void)_limitLinkedInToOneAccount;
- (void)_ensureDataclassesAllExist;
- (void)_addSubscribedCalendarAccountType;
- (void)_addBookmarkDAVAccountType;
- (void)_addExchangeAccountType;
- (void)_addHotmailAccountType;
- (void)_addIMAPNotesAccountType;
- (void)_addLDAPAccountType;
- (void)_ensureProperAccountTypeDataclasses;
- (void)_addPasswordCredentialTypeToSMTPAccountType;
- (void)_addPasswordCredentialTypeToGmailAccountType;
- (void)_addTokenCredentialTypeToYahooAccountType;
- (void)_addIMAPAccountType;
- (void)_addPOPAccountType;
- (void)_addIMAPMailAccountType;
- (void)_updateTencentWeiboCredentialTypeToOAuth2;
- (void)_addTencentWeiboAccessKeys;
- (void)_addAccessKeysAttributeToTencentWeiboAccountType;
- (void)_addFindMyiPhoneAccountType;
- (void)_updateIdentityServicesAccountTypeToSupportAuthenticationAndMultipleAccounts;
- (void)_updateIdentityServicesAccountDescription;
- (void)_makeTencentWeiboSingleton;
- (void)_addHolidayCalendarAccountType;
- (void)_addFMFAccountType;
- (void)_setOwningBundleIDForNativeAccountTypes;
- (void)_createLiverpoolDataclasses;
- (void)_addCloudKitAccountType;
- (void)_addAccessKeysAttributeToCloudKitAccountType;
- (void)_addAppleIDAuthenticationAccountType;
- (void)_removeLiverpoolTypes;
- (void)_addCloudKitDataclasses;
- (void)_setCloudKitCredentialType;
- (void)_addAndConfigureAllOSXAccountTypes;
- (void)_switchGoogleToOAuthAuthentication;
- (void)_addDocumentsAndVPNDataclass;
- (void)_addIDMSAccountType;
- (void)_updateAOLAndAddNotificationsDataclass;
- (void)_addOnMyDeviceAccountType;
- (void)_switchYahooToOAuthAuthentication;
- (void)_updateOSXServerAccountDescription;
- (void)_configureSMTPAccountType;
- (void)_allowMultipleAppleIDAuthenticationAccounts;
- (void)_makeTudouYoukuSingletons;
- (void)_supportiCloudNewsDataclass;
- (void)_ensurePresenceOfNewsDataclass;
- (void)_supportiCloudKeychainSyncDataclass;
- (void)_addMSOAccountType;
- (void)_addSingleSignOnAccountType;
- (void)_switchHotmailToOAuthAuthentication;
- (void)_setSupportedDataclassesForAOLAccountType;
- (void)_addNotesDataclassToAASupportedDataclasses;
- (void)_updateMacOSServerAccountDescription;
- (void)_removeMessengerFromYahooSupportedDataclasses;
- (void)_setYahooAccountsProvisionedDataclassesToSupportedOnes;
- (void)_setCloudKitAllowsMultipleAccounts;
- (void)_removeMessagesFromGoogleSupportedDataclasses;
- (void)_removeAIMAccounts;
- (void)_addFacebookAndDAVLegacyAccountTypes;
- (void)_changeFacebookAccountToLegacyAccountType;
- (void)_addObsoleteAttributeToAccountTypes;
- (void)_removeMessagesFromAOLSupportedDataclasses;
- (void)_addiTunesStoreSandboxAccountType;
- (void)_addLinkedInLegacyAccountType;
- (void)_changeFacebookAndLinkedInAccountsToLegacyAccountTypes;
- (void)_changeSocialAccountTypeObsoleteAttributes;
- (void)_removeBTMMType;
- (void)_switchAolAccountsToOAuth;
- (void)_aolSupportsAuthentication;
- (void)_removeRedundantDataclasses;
- (id)_accountTypes;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(_Bool)arg7 supportsMultipleAccounts:(_Bool)arg8;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 syncableDataclasses:(id)arg5 credentialType:(id)arg6 supportsAuthentication:(_Bool)arg7 supportsMultipleAccounts:(_Bool)arg8 credentialProtectionPolicy:(id)arg9;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_addAccountTypeWithIdentifier:(id)arg1 displayName:(id)arg2 visibility:(int)arg3 supportedDataclasses:(id)arg4 credentialType:(id)arg5 supportsAuthentication:(_Bool)arg6 supportsMultipleAccounts:(_Bool)arg7;
- (id)_dataclassWithName:(id)arg1;
- (void)_addAccessKeyWithName:(id)arg1;
- (id)_accessKeyWithName:(id)arg1;
- (void)_ensureAccountTypeWithIdentifier:(id)arg1 supportsDataclasses:(id)arg2 syncsDataclasses:(id)arg3;
- (void)_addCredentialType:(id)arg1 toAccountType:(id)arg2 supportsAuthentication:(_Bool)arg3;
- (id)initWithDatabaseConnection:(id)arg1;
- (_Bool)updateDefaultContentIfNecessary:(id *)arg1;
- (id)_resultsForEntityNamed:(id)arg1;
- (void)_switchYahooToPasswordAuthentication;

@end
