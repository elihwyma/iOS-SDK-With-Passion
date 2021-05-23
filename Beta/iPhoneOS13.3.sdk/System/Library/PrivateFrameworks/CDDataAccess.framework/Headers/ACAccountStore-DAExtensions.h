/*
 Image: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
 */

#import <ACAccountStore.h>

@interface ACAccountStore (DAExtensions)

- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id *)arg2;
- (void)_daAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)da_loadDAAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)da_loadDAAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)da_accounts;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1;
- (id)da_accountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2;
- (void)da_loadDAAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)da_accountsEnabledForDADataclasses:(long long)arg1;

@end
