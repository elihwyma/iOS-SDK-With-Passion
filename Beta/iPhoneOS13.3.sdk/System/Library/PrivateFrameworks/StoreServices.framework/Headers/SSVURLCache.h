/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSVURLCacheConfiguration;

@protocol OS_dispatch_queue;

@interface SSVURLCache : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    struct __CFURLStorageSession *_cacheStorageSession;
    SSVURLCacheConfiguration *_configuration;
    struct _CFURLCache *_urlCache;
}

- (id)init;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)cachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)removeAllCachedResponses;
- (id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id *)arg2;
- (void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3;
- (id)cachedConnectionResponseForRequestProperties:(id)arg1;
- (void)configureRequest:(id)arg1;
- (void)loadMemoryCacheFromDisk;
- (void)saveMemoryCacheToDisk;
- (void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2;

@end
