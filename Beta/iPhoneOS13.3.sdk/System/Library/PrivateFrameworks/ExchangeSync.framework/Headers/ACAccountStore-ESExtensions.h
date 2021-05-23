/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/ExchangeSync
 */

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (ESExtensions)

- (void)_esAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 filterOnDataclasses:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)es_loadESAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)es_loadESAccountsEnabledForDADataclasses:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)es_loadESAccountsWithAccountTypeIdentifiers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)es_loadESAccountsWithAccountTypeIdentifiers:(id)arg1 enabledForDADataclasses:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)es_accountsWithAccountTypeIdentifiers:(id)arg1 outError:(id *)arg2;

@end
