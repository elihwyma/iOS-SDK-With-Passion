/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

@interface MFAccountStore : NSObject

{
    struct os_unfair_lock_s _accountStoreLock;
    ACAccountStore *_accountStore;
}

@property (readonly) ACAccountStore *persistentStore;

+ (id)sharedAccountStore;
+ (_Bool)_shouldUpdateAccountsInPlace;
+ (id)_accountWithAccountClass:(Class)arg1 persistentAccount:(id)arg2 useExisting:(_Bool)arg3;

- (id)init;
- (void)dealloc;
- (id)existingAccountWithPersistentAccount:(id)arg1;
- (id)newPersistentAccountWithAccountTypeIdentifier:(id)arg1;
- (id)supportedDataclassesWithAccountTypeIdentifier:(id)arg1;
- (void)savePersistentAccountWithAccount:(id)arg1;
- (void)removePersistentAccountWithAccount:(id)arg1;
- (id)accountsWithTypeIdentifiers:(id)arg1 error:(id *)arg2;
- (void)setPersistentStore:(id)arg1;
- (void)_accountsStoreChanged:(id)arg1;
- (id)_accountWithPersistentAccount:(id)arg1 useExisting:(_Bool)arg2;

@end
