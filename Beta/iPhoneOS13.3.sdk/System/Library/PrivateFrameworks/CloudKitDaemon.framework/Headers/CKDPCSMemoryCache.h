/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDPCSMemoryCache : NSObject

{
    _Bool _memoryStatusChanged;
    unsigned long long _maxEntries;
    double _minAge;
    NSMutableDictionary *_cacheEntries;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_source> *_memoryNotificationSource;
    unsigned long long _memoryStatus;
    id <NSObject> _memoryCacheEvictNotificationObserver;
    double _oldestCacheEntry;
    unsigned long long _memoryCacheRequestCount;
    unsigned long long _memoryCacheHitCount;
    unsigned long long _memoryCacheHighwaterCount;
    unsigned long long _memoryCacheDeleteCount;
    unsigned long long _memoryCacheUpdateCount;
    unsigned long long _memoryCacheEvictCount;
}

@property (retain, nonatomic) NSMutableDictionary *cacheEntries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryNotificationSource;
@property unsigned long long memoryStatus;
@property _Bool memoryStatusChanged;
@property (retain, nonatomic) id <NSObject> memoryCacheEvictNotificationObserver;
@property double oldestCacheEntry;
@property unsigned long long memoryCacheRequestCount;
@property unsigned long long memoryCacheHitCount;
@property unsigned long long memoryCacheHighwaterCount;
@property unsigned long long memoryCacheDeleteCount;
@property unsigned long long memoryCacheUpdateCount;
@property unsigned long long memoryCacheEvictCount;
@property (nonatomic) unsigned long long maxEntries;
@property (nonatomic) double minAge;

+ (void)registerEvictionTimer;
+ (id)globalEvictQueue;

- (id)init;
- (void)dealloc;
- (void)clearCache;
- (id)CKStatusReportArray;
- (void)getPCSDataFromCacheForID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setPCSData:(id)arg1 forItemID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (_Bool)hasStatusToReport;
- (void)runCacheEviction;
- (void)_lockedEvictEntriesFromCache;
- (unsigned long long)_cacheCount;

@end
