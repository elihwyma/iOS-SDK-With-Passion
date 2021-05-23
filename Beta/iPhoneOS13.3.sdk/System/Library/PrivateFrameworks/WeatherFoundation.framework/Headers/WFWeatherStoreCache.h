/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSTimer, NSURL;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFWeatherStoreCache : NSObject

{
    NSURL *_URL;
    NSTimer *_cacheStoreTimer;
    NSObject<OS_dispatch_queue> *_cacheConcurrentQueue;
    NSMutableDictionary *_cacheForDomain;
    NSMutableSet *_dirtyCacheDomains;
}

@property (retain, nonatomic) NSTimer *cacheStoreTimer;
@property (retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue;
@property (retain) NSMutableDictionary *cacheForDomain;
@property (retain) NSMutableSet *dirtyCacheDomains;
@property (copy, nonatomic) NSURL *URL;

+ (_Bool)removeObjectsFromCache:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)wf_masterDomains;
+ (id)createCacheIfNecessary:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithURL:(id)arg1;
- (void)_startCacheStoreTimer;
- (void)_stopCacheStoreTimer;
- (void)writeCacheDictionaryToFile;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3;
- (void)_ensureDomainIsLoaded:(id)arg1;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(_Bool)arg6;
- (void)_concurrentQueue_barrier_shrinkDomain:(id)arg1;
- (_Bool)_concurrentQueue_barrier_loadDomain:(id)arg1;
- (id)_loadedCacheDomains;
- (_Bool)_loadDomain:(id)arg1;
- (void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4;
- (void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)executeTransaction:(CDUnknownBlockType)arg1;
- (void)_shrinkDomain:(id)arg1;
- (void)_markDomainDirty:(id)arg1;
- (id)_dirtyCacheDomains;

@end
