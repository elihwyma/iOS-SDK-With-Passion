/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <ACAccountStore.h>

@class ACAccount, NSArray;

@interface ACAccountStore (ICAccountStoreAdditions)

@property (copy, nonatomic, readonly) NSArray *ic_allStoreAccounts;
@property (retain, nonatomic, setter=ic_setActiveStoreAccount:) ACAccount *ic_activeStoreAccount;
@property (retain, nonatomic, setter=ic_setActiveLockerAccount:) ACAccount *ic_activeLockerAccount;
@property (nonatomic, readonly) ACAccount *ic_primaryAppleAccount;

+ (id)ic_sharedAccountStore;

- (void)ic_activeStoreAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)ic_setActiveStoreAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ic_setActiveLockerAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ic_primaryAppleAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)ic_localStoreAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)ic_localStoreAccountWithError:(id *)arg1;
- (void)ic_allStoreAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)ic_storeAccountTypeWithCompletion:(CDUnknownBlockType)arg1;
- (id)ic_allStoreAccountsWithError:(id *)arg1;
- (void)ic_activeLockerAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)ic_storeAccountForStoreAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)ic_storeAccountForHomeUserIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)ic_activeStoreAccountWithError:(id *)arg1;
- (id)ic_storeAccountForStoreAccountID:(id)arg1 error:(id *)arg2;
- (id)ic_storeAccountForStoreAccountID:(id)arg1;
- (id)_ic_storeAccountType;

@end
