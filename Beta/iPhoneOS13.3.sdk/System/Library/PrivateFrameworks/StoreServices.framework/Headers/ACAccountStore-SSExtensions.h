/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <ACAccountStore.h>

@interface ACAccountStore (SSExtensions)

+ (id)_accountTypesCache;

- (id)_ss_accountTypeWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)_ss_IDMSAccountForAccount:(id)arg1 error:(id *)arg2;
- (id)_ss_iCloudAccountForAccount:(id)arg1 error:(id *)arg2;
- (id)_ss_appleAuthenticationAccountForAccount:(id)arg1 error:(id *)arg2;
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (id)_ss_iTunesAccountForAccount:(id)arg1 error:(id *)arg2;

@end
