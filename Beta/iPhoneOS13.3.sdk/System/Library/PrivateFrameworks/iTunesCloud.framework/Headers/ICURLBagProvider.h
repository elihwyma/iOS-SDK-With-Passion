/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICURLBagProvider : NSObject

{
    NSMutableDictionary *_cache;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_pendingOperationsForCacheKey;
}

+ (id)sharedBagProvider;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (id)_cacheFilePath;
- (void)getBagForRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)arg1;
- (void)_loadCache;
- (void)getBagForRequestContext:(id)arg1 forceRefetch:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchBagForRequestContext:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_getCacheKeyForRequestContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_saveCache;

@end
