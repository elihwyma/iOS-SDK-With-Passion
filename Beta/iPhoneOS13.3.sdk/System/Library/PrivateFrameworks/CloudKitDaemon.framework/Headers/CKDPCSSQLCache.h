/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDPQLCache.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSSQLCache : CKDPQLCache

{
    NSObject<OS_dispatch_queue> *_recordQueue;
    unsigned long long _cacheRequestCount;
    unsigned long long _cacheHitCount;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue;
@property (nonatomic, readonly) double earliestValidDate;
@property unsigned long long cacheRequestCount;
@property unsigned long long cacheHitCount;

+ (void)evictPCSSQLCachesForKnownClientContexts;
+ (void)registerPCSSQLCacheEvictionActivity;
+ (id)pathForContext:(id)arg1;
+ (void)_evictPCSSQLCachesForAppContainerAccountTuples:(id)arg1;
+ (id)globalPCSSQLCacheEvictionQueue;

- (void)dealloc;
- (void)clearCache;
- (id)path;
- (id)CKStatusReportArray;
- (void)setRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)setSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)removePCSDataForItemsInShareWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)clearInvalidatedCacheEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPCSDataForZoneWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSDataForRecordWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPCSDataForShareWithID:(id)arg1 databaseScope:(long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_lockedFetchPCSDataForID:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 ofClass:(Class)arg4;
- (void)_lockedSetPCSData:(id)arg1 databaseScope:(long long)arg2 itemType:(unsigned long long)arg3 forID:(id)arg4;
- (void)_setPCSData:(id)arg1 forItemWithID:(id)arg2 databaseScope:(long long)arg3 itemType:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)_initWithClientContext:(id)arg1;
- (id)createInitialTablesSQL;
- (id)infoToUpgradeFromVersion:(unsigned long long)arg1;

@end
