/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray, NSString;

@interface ACAccountStore (AppleMediaServices)

@property (nonatomic, readonly, getter=ams_isActiveAccountCombined) _Bool ams_activeAccountCombined;
@property (nonatomic, readonly) ACAccount *ams_activeiCloudAccount;
@property (nonatomic, readonly) ACAccount *ams_activeiTunesAccount;
@property (nonatomic, readonly) NSArray *ams_iTunesAccounts;
@property (nonatomic, readonly) NSArray *ams_iTunesAccountsWithHomeUserIdentifiers;
@property (nonatomic, readonly) ACAccount *ams_localiTunesAccount;
@property (nonatomic, readonly) NSString *ams_mediaType;

+ (id)ams_sharedAccountStore;
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;
+ (id)_secureTokenForIdentifier:(id)arg1;

- (id)ams_iTunesAccountWithDSID:(id)arg1;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;
- (id)_cachedAccountWithIdentifier:(id)arg1;
- (void)_createLocalAccount;
- (id)ams_cookiesForURL:(id)arg1;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;
- (id)ams_iTunesAccountWithUsername:(id)arg1;
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;
- (id)ams_saveAccount:(id)arg1 withOptions:(long long)arg2;
- (_Bool)_isAccountNew:(id)arg1;
- (id)_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;
- (_Bool)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)_addGlobalCookiesForResponse:(id)arg1 error:(id *)arg2;
- (_Bool)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)_alliTunesAccounts;
- (id)ams_accountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 accountTypeIdentifier:(id)arg4;
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)ams_iTunesAccountWithHomeUserID:(id)arg1;
- (id)ams_iTunesAccountWithHomeUserIdentifier:(id)arg1;
- (id)ams_fetchGrandSlamTokenForAccount:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;
- (id)ams_iCloudAccountForAccount:(id)arg1;
- (id)ams_IDMSAccountForAccount:(id)arg1;
- (id)ams_IDSAccountForAccount:(id)arg1;
- (id)ams_iTunesAccountForAccount:(id)arg1;
- (id)ams_saveAccount:(id)arg1;
- (id)ams_secureTokenForAccount:(id)arg1;
- (id)ams_setiTunesAccount:(id)arg1 forHomeWithIdentifier:(id)arg2;
- (_Bool)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (_Bool)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id *)arg4;
- (_Bool)ams_addCookiesForResult:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (_Bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;
- (id)_storeClientIdentifier;
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1;
- (id)ams_iTunesAccountsWithHomeUserID;
- (id)ams_iTunesAccountWithHomeID:(id)arg1;
- (id)ams_iTunesSandboxAccounts;

@end
