/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/EMRepository.h>

@class EMRemoteConnection, NSMutableDictionary, NSString;

@protocol EFCancelable, EFScheduler;

@interface EMAccountRepository : EMRepository

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_accounts;
    EMRemoteConnection *_connection;
    id <EFScheduler> _recoveryHandlerScheduler;
    id <EFScheduler> _observerScheduler;
    id <EFCancelable> _cancelable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)remoteInterface;

- (void)dealloc;
- (id)initInternal;
- (id)accountForIdentifier:(id)arg1;
- (id)deliveryAccounts;
- (void)accountsAdded:(id)arg1;
- (void)accountsRemoved:(id)arg1;
- (void)accountsChanged:(id)arg1;
- (void)_fetchAccountsAndObserveChanges;
- (void)didBeginObserving;
- (void)didEndObserving;
- (id)_currentAccountsByObjectIDMap;
- (id)allAccounts;
- (id)receivingAccounts;
- (void)_postAccountChangedNotification;
- (id)initWithRemoteConnection:(id)arg1;
- (id)accountForAccountIdentifier:(id)arg1;

@end
