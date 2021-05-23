/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock, NSString, PFUbiquityGlobalObjectIDCache;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogCache : NSObject

{
    NSString *_localPeerID;
    NSMutableDictionary *_transactionLogCache;
    NSRecursiveLock *_transactionLogCacheLock;
    PFUbiquityGlobalObjectIDCache *_gidCache;
}

- (id)init;
- (void)dealloc;
- (void)cacheExportedLog:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 andGlobalIDCache:(id)arg2;
- (id)retainedCachedLogForLocation:(id)arg1 loadWithRetry:(_Bool)arg2 error:(id *)arg3;
- (void)removeLogsCachedForStoreNamed:(id)arg1 withUbiquityRootLocation:(id)arg2;

@end
