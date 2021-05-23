/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSObject;

@protocol OS_dispatch_queue;

@interface PLAccountStore : ACAccountStore

{
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

@property (weak, readonly) ACAccount *cachedPrimaryAppleAccount;

+ (id)pl_sharedAccountStore;

- (id)init;
- (void)dealloc;
- (void)accountDidChange:(id)arg1;
- (void)clearCachedProperties;

@end
