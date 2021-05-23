/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>

@class ISURLCacheConfiguration, NSString, NSURLCache;

@interface ISURLCache : NSObject

{
    NSURLCache *_cache;
    ISURLCacheConfiguration *_configuration;
}

@property (readonly) NSString *persistentIdentifier;
@property (nonatomic, readonly) unsigned long long currentDiskUsage;
@property (nonatomic, readonly) unsigned long long currentMemoryUsage;
@property (nonatomic, readonly) unsigned long long diskCapacity;
@property (nonatomic, readonly) unsigned long long memoryCapacity;

+ (id)cacheDirectoryPath;

- (id)init;
- (void)dealloc;
- (id)cachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)removeAllCachedResponses;
- (void)saveMemoryCacheToDisk;
- (id)initWithCacheConfiguration:(id)arg1;
- (void)reloadWithCacheConfiguration:(id)arg1;
- (void)purgeMemoryCache;

@end
