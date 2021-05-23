/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSURLCacheInternal;

@interface NSURLCache : NSObject

{
    NSURLCacheInternal *_internal;
}

@property unsigned long long memoryCapacity;
@property unsigned long long diskCapacity;
@property (readonly) unsigned long long currentMemoryUsage;
@property (readonly) unsigned long long currentDiskUsage;

+ (id)sharedURLCache;
+ (void)setSharedURLCache:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)_isVaryHeaderSupportEnabled;
- (id)_varyStateForURL:(id)arg1;
- (void)_updateVaryState:(id)arg1 forURL:(id)arg2;
- (struct _CFCachedURLResponse *)_nscfBridgeURLCacheCopyResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse *)arg1 forRequest:(id)arg2;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(_Bool)arg4;
- (id)_initVaryHeaderEnabledWithPath:(id)arg1;
- (id)initWithExistingSharedCFURLCache:(struct _CFURLCache *)arg1;
- (id)_initWithExistingCFURLCache:(struct _CFURLCache *)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 directoryURL:(id)arg3;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (id)_initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 relativePath:(id)arg3;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)cachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeAllCachedResponses;
- (void)removeCachedResponsesSinceDate:(id)arg1;
- (const struct _CFURLCache *)_CFURLCache;
- (id)_cacheDirectory;
- (id)_diskCacheDefaultPath;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCachedResponseForDataTask:(id)arg1;

@end
