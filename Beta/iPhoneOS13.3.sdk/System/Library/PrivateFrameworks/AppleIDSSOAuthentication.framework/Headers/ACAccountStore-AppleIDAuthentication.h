/*
 Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (AppleIDAuthentication)

- (id)aida_iCloudAccountMatchingAppleIDAuthAccount:(id)arg1;
- (id)aida_accountForiCloudAccount:(id)arg1;
- (id)aida_accountForAltDSID:(id)arg1;
- (id)aida_accountForPrimaryiCloudAccount;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 force:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_primaryiCloudAccount;
- (id)aida_AppleIDAuthenticationAccountType;
- (id)aida_AppleIDAuthenticationAccounts;
- (void)aida_renewCredentialsForAccount:(id)arg1 services:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
