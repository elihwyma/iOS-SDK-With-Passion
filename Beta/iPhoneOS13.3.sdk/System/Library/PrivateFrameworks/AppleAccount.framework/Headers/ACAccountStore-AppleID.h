/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleID)

- (id)aa_primaryAppleAccount;
- (id)aa_grandSlamAccountForiCloudAccount:(id)arg1;
- (id)aa_authKitAccountForAltDSID:(id)arg1;
- (id)accountsWithAccountType:(id)arg1 appleID:(id)arg2;
- (id)accountWithAppleID:(id)arg1;
- (id)aa_appleAccounts;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performUpdateRequestWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)aa_appleAccountType;
- (_Bool)aa_isUsingiCloud;
- (id)aa_dataSeparatedAccounts;
- (id)aa_appleAccountsWithError:(id *)arg1;
- (id)aa_accountsForAccountClass:(id)arg1;
- (id)aa_primaryAppleAccountWithPreloadedDataclasses;
- (void)aa_appleAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)aa_primaryAppleAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)aa_appleAccountWithUsername:(id)arg1;
- (id)aa_appleAccountWithPersonID:(id)arg1;
- (id)aa_appleAccountWithAltDSID:(id)arg1;
- (id)aa_accountsEnabledForDataclass:(id)arg1;
- (id)aa_recommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1;
- (void)aa_updatePropertiesForAppleAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aa_registerAppleAccount:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)aa_registerAppleAccountWithHSA:(id)arg1 usingCookieHeaders:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)aa_grandSlamAccountForAltDSID:(id)arg1;

@end
