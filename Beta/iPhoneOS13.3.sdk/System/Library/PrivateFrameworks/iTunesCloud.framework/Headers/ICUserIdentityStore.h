/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ACAccountStore, ICDelegateAccountStore, ICDelegateAccountStoreOptions, ICLocalStoreAccountProperties, ICUserIdentityStoreCoding, ICValueHistory, NSOperationQueue, NSString;

@protocol ICUserIdentityStoreBackend, OS_dispatch_queue;

@interface ICUserIdentityStore : NSObject <Swift>

{
    ACAccountStore *_accountStore;
    ICValueHistory *_activeAccountHistory;
    ICValueHistory *_activeLockerAccountHistory;
    id <ICUserIdentityStoreBackend> _backend;
    ICUserIdentityStoreCoding *_codingHelper;
    ICDelegateAccountStore *_delegateAccountStore;
    ICDelegateAccountStoreOptions *_delegateAccountStoreOptions;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, readonly) id <ICUserIdentityStoreBackend> _unsafeBackend;
@property (nonatomic, readonly) ICLocalStoreAccountProperties *localStoreAccountProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)defaultIdentityStore;
+ (void)_claimSingleWriterStatus;
+ (id)testingIdentityStoreWithDatabasePath:(id)arg1;
+ (id)testingIdentityStoreWithSingleWriterService:(id)arg1;

- (void)dealloc;
- (void)synchronize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getPropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)DSIDForUserIdentity:(id)arg1 outError:(id *)arg2;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_initCommon;
- (void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)enumerateDelegateTokensWithType:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDelegationUUIDsForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)userIdentityStoreBackendDidChange:(id)arg1;
- (void)_prepareDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resetDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeAllDelegateTokensWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removePropertiesForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegateTokenForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeDelegateTokensExpiringBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getPropertiesForActiveICloudAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadForExternalChange;
- (void)getVerificationContextForUserIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)userIdentitiesForManageableAccountsWithError:(id *)arg1;
- (void)updatePropertiesForLocalStoreAccountUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_initializeLocalStoreAccountProperties;
- (id)_initWithStyle:(long long)arg1 delegateAccountStoreOptions:(id)arg2;
- (void)_dispatchDidChangeNotification:(_Bool)arg1 didDelegateAccountStoreChange:(_Bool)arg2;
- (void)_openDelegateAccountStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_existingIdentityPropertiesForUserIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_openDelegateAccountStoreForUserIdentity:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_dsidForUserIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertPropertiesForUserIdentity:(id)arg1 andPostAccountChangeNotification:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_saveIdentityProperties:(id)arg1 andPostAccountChangeNotification:(_Bool)arg2 forUserIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_allowsDelegationForUserIdentity:(id)arg1;
- (id)_dsidForTimestamp:(unsigned long long)arg1 history:(id)arg2;
- (id)_icValidStoreAccountsFromACAccounts:(id)arg1;
- (void)_refreshLocalStoreAccountPropertiesAllowingDidChangeNotification:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unregisterForDelegateAccountStoreNotifications:(id)arg1;
- (void)_registerForDelegateAccountStoreNotifications:(id)arg1;
- (void)_importValuesFromCodingHelper:(id)arg1;
- (void)_delegateAccountStoreDidChangeNotification:(id)arg1;
- (void)enumerateDelegateTokensUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)insertPropertiesForUserIdentity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setActiveAccountWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setActiveLockerAccountWithDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getUserIdentitiesForManageableAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)userIdentitiesForAllStoreAccountsWithError:(id *)arg1;
- (void)getuserIdentitiesForAllStoreAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_unsafe_deleteDelegateAccountStore;
- (void)_updateDelegateAccountStoreUsingBlock:(CDUnknownBlockType)arg1;

@end
