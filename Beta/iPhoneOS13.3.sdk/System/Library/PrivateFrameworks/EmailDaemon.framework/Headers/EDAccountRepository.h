/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDAccountECAccountTransformer, EDPersistenceHookRegistry, NSMutableSet, NSString;

@protocol EDAccountsProvider;

@interface EDAccountRepository : NSObject

{
    NSMutableSet *_observers;
    struct os_unfair_lock_s _lock;
    EDAccountECAccountTransformer *_transformer;
    id <EDAccountsProvider> _accountsProvider;
    EDPersistenceHookRegistry *_hookRegistry;
}

@property (retain, nonatomic) EDAccountECAccountTransformer *transformer;
@property (retain, nonatomic) id <EDAccountsProvider> accountsProvider;
@property (weak, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void)accountsAdded:(id)arg1;
- (void)accountsRemoved:(id)arg1;
- (void)accountsChanged:(id)arg1;
- (void)registerObserver:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)allAccounts;
- (id)transformAccounts:(id)arg1;
- (id)initWithAccountsProvider:(id)arg1 hookRegistry:(id)arg2;
- (void)allAccountsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
