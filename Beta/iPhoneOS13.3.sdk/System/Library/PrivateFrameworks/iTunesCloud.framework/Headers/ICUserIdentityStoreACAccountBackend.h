/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ACAccountStore, ACAccountType, NSArray, NSMapTable, NSMutableDictionary, NSOperationQueue, NSString;

@protocol ICUserIdentityStoreBackendDelegate, OS_dispatch_queue;

@interface ICUserIdentityStoreACAccountBackend : NSObject

{
    id _activeAccountDSIDValue;
    id _activeLockerAccountDSIDValue;
    ACAccountStore *_accountStore;
    NSMapTable *_accountToIdentityProperties;
    NSArray *_allStoreAccounts;
    NSMutableDictionary *_dsidToAccount;
    id _primaryICloudAccountIdentityPropertiesValue;
    ACAccountType *_storeAccountType;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    id <ICUserIdentityStoreBackendDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <ICUserIdentityStoreBackendDelegate> delegate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)synchronize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_synchronize;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)initWithACAccountStore:(id)arg1;
- (void)_allStoreAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_storeAccountForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activeStoreAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)_newUserIdentityPropertiesForAccount:(id)arg1;
- (void)_applyIdentityProperties:(id)arg1 toAccount:(id)arg2;
- (void)_storeAccountTypeWithCompletion:(CDUnknownBlockType)arg1;
- (id)_newLocalStoreAccountPropertiesFromAccount:(id)arg1;
- (void)_applyLocalStoreAccountProperties:(id)arg1 toAccount:(id)arg2;
- (void)_handleITunesStoreAccountsChanged;
- (void)activeAccountDSIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateActiveAccountDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activeLockerAccountDSIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identityPropertiesForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeIdentityForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)localStoreAccountPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (id)localStoreAccountPropertiesWithError:(id *)arg1;
- (void)setLocalStoreAccountProperties:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verificationContextForDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(CDUnknownBlockType)arg1;
- (id)_primaryICloudAccountIdentityProperties;

@end
