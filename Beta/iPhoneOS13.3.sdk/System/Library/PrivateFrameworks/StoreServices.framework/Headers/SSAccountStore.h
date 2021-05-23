/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class ACAccountStore, NSArray, NSString, SSAccount, SSKeyValueStore, SSPromise;

@protocol OS_dispatch_queue;

@interface SSAccountStore : NSObject

{
    _Bool _inProcessCacheDisabled;
    NSArray *_accountsCache;
    NSObject<OS_dispatch_queue> *_accountsCacheAccessQueue;
    NSObject<OS_dispatch_queue> *_fetchAccountsQueue;
    SSKeyValueStore *_keyValueStore;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    ACAccountStore *_backingAccountStore;
}

@property (retain, nonatomic) NSArray *accountsCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accountsCacheAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchAccountsQueue;
@property (nonatomic, getter=isInProcessCacheDisabled) _Bool inProcessCacheDisabled;
@property (retain, nonatomic) SSKeyValueStore *keyValueStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic, readonly) SSPromise *accountsPromise;
@property (readonly, getter=isAuthenticationActive) _Bool authenticationActive;
@property (nonatomic, readonly) ACAccountStore *backingAccountStore;
@property (nonatomic, readonly) SSAccount *demoAccount;
@property (nonatomic, readonly) SSPromise *localAccount;
@property (readonly) SSAccount *activeAccount;
@property (readonly) SSAccount *activeSandboxAccount;
@property (readonly) SSAccount *activeLockerAccount;
@property (copy, readonly) NSArray *accounts;
@property (readonly, getter=isExpired) _Bool expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultStore;
+ (_Bool)isExpired;
+ (id)_createAuthenticationController;
+ (_Bool)unitTestModeEnabled;
+ (void)resetExpirationForTokenType:(long long)arg1;
+ (_Bool)isExpiredForTokenType:(long long)arg1;
+ (id)_unitTestAccountsAccessQueue;
+ (double)tokenExpirationInterval;
+ (_Bool)_copyKVSDatabaseWithError:(id *)arg1;
+ (_Bool)_shouldRemoveAccountDictionaryWithoutMigration:(id)arg1 reason:(id *)arg2;
+ (void)_removeAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2;
+ (id)_hashedDescriptionFromAccountDictionary:(id)arg1;
+ (id)_migrateAccountDictionary:(id)arg1 fromKeyValueStore:(id)arg2 originalActiveDSID:(id)arg3 originalActiveLockerDSID:(id)arg4 logKey:(id)arg5 error:(id *)arg6;
+ (void)_cleanupActiveAccountsAfterMigrationWithActiveDSID:(id)arg1 activeLockerDSID:(id)arg2;
+ (void)_postAccountsChangedInternalDarwinNotification;
+ (void)_postAccountsChangedDarwinNotification;
+ (void)_removeAccountFromUnitTestStore:(id)arg1;
+ (_Bool)areAccountStoreChangedNotificationsDisabled;
+ (id)_backingAccountForAccount:(id)arg1;
+ (void)resetExpiration;
+ (void)_setActiveAccountIsManagedAppleIDPreference:(_Bool)arg1;
+ (void)_addAccountToUnitTestStore:(id)arg1;
+ (void)_disableAccountStoreChangedNotifications;
+ (void)_enableAccountStoreChangedNotifications;
+ (_Bool)_accountDictionaryRepresentsActiveAccount:(id)arg1 inKeyValueStore:(id)arg2;
+ (_Bool)_accountDictionaryRepresentsActiveLockerAccount:(id)arg1 inKeyValueStore:(id)arg2;
+ (id)_createAuthenticationContextForAccount:(id)arg1 silentAuthentication:(_Bool)arg2 options:(id)arg3;
+ (_Bool)_currentProcessLinksUIKit;
+ (_Bool)_isBuddyRunning;
+ (id)_createUpdatedAccount:(id)arg1 withAuthenticationResults:(id)arg2 options:(id)arg3;
+ (_Bool)_allowSilentPasswordAuthForAccount:(id)arg1 withOptions:(id)arg2;
+ (id)_refreshAccount:(id)arg1;
+ (_Bool)URLResponseAllowsSilentAuthentication:(id)arg1;
+ (id)existingDefaultStore;
+ (_Bool)migrateToAccountsFramework;
+ (void)setAuthenticationStartedDate:(id)arg1;
+ (void)performCookieStorageMigration;
+ (void)setUnitTestModeEnabled:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (void)reloadAccounts;
- (id)addAccount:(id)arg1;
- (id)_cachedAccounts;
- (_Bool)saveAccount:(id)arg1 error:(id *)arg2;
- (_Bool)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;
- (_Bool)saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2 error:(id *)arg3;
- (id)iTunesStoreAccountType;
- (id)setActiveLockerAccount:(id)arg1;
- (id)updateAccountWithAuthKit:(id)arg1 store:(id)arg2 options:(id)arg3;
- (void)clearCachedAccounts;
- (void)resetExpirationForTokenType:(long long)arg1;
- (_Bool)isExpiredForTokenType:(long long)arg1;
- (id)accountWithUniqueIdentifier:(id)arg1;
- (void)_setCachedAccounts:(id)arg1;
- (_Bool)repairAccountWithBrokenDSID:(id)arg1;
- (id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3 scope:(long long)arg4;
- (id)accountWithAltDSID:(id)arg1 scope:(long long)arg2;
- (id)accountWithUniqueIdentifier:(id)arg1 scope:(long long)arg2;
- (id)accountWithAccountName:(id)arg1 scope:(long long)arg2;
- (id)iTunesStoreAccountTypePromise;
- (id)_lookupLocalAccountPromise;
- (id)_createLocalAccountPromise;
- (void)removeAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetExpiration;
- (void)saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)signOutAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCookiesForAccount:(id)arg1 logKey:(id)arg2;
- (id)_shouldCreateNewAccountForAccount:(id)arg1 options:(id)arg2;
- (id)_updateAccountWithAuthKitViaSilentPETAuth:(id)arg1 options:(id)arg2;
- (id)_updateAccountWithAuthKitViaSilentPasswordAuth:(id)arg1 options:(id)arg2;
- (id)_updateAccountWithAuthKitViaSilentAuth:(id)arg1 options:(id)arg2;
- (id)_updateAccountWithAuthKitViaPromptAuth:(id)arg1 store:(id)arg2 options:(id)arg3;
- (id)_saveAccountInUnitTestMode:(id)arg1 ignoreValidationErrors:(_Bool)arg2;
- (id)_buyParamsForBuyParamsString:(id)arg1;
- (void)_recordAnalyticsForMetricsDialogEvent:(id)arg1 withTopic:(id)arg2;
- (id)_convertPasswordToPET:(id)arg1 forAccount:(id)arg2 options:(id)arg3;
- (id)_passwordEquivalentTokenFromAlternateAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (void)signOutAllAccountsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)accountWithAccountName:(id)arg1;
- (id)accountWithAltDSID:(id)arg1;
- (id)accountWithAltDSID:(id)arg1 uniqueIdentifier:(id)arg2 accountName:(id)arg3;
- (void)resetLocalAccount;
- (id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(_Bool)arg2;
- (void)getDefaultAccountNameUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)removeAccount:(id)arg1 error:(id *)arg2;
- (void)removeAllAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDefaultAccountName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)signOutAccount:(id)arg1;
- (void)_postAccountStoreChangeNotification;
- (void)_postActiveAccountChangedNotification;
- (void)_postAuthenticationActivityNotification;
- (id)_optionsForProxiedAuthenticationWithVerifyCredentialsOptions:(id)arg1;
- (void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2;
- (id)setActiveAccount:(id)arg1;
- (void)signOutAllAccounts;

@end
