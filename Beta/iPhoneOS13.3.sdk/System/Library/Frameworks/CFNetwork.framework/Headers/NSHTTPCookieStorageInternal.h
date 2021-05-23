/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject

{
    struct OpaqueCFHTTPCookieStorage *storage;
    struct OpaqueCFHTTPCookieStorage *privateStorage;
    NSRecursiveLock *dataLock;
    _Bool privateBrowsing;
}

- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;
- (void)registerForPostingNotificationsWithContext:(id)arg1;
- (id)initInternalWithCFStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;
- (void)_syncCookies;
- (void)_syncCookiesWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
