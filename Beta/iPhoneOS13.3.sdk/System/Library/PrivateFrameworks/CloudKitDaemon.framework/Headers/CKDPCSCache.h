/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKDClientContext, CKDPCSMemoryCache, CKDPCSSQLCache, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDPCSCache : NSObject

{
    CKDPCSSQLCache *_sqlCache;
    CKDPCSMemoryCache *_recordMemoryCache;
    CKDPCSMemoryCache *_zoneMemoryCache;
    CKDPCSMemoryCache *_shareMemoryCache;
    CKDClientContext *_context;
    NSMutableDictionary *_outstandingFetches;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (weak, nonatomic) CKDClientContext *context;
@property (nonatomic, readonly) CKDPCSSQLCache *sqlCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *recordMemoryCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *zoneMemoryCache;
@property (nonatomic, readonly) CKDPCSMemoryCache *shareMemoryCache;
@property (retain, nonatomic) NSMutableDictionary *outstandingFetches;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)dealloc;
- (id)CKStatusReportArray;
- (id)initWithClientContext:(id)arg1;
- (void)_setPCSData:(id)arg1 forFetchedShareID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setPCSData:(id)arg1 forFetchedZoneID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_lockedGetSQLCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_lockedCreatePCSCacheFetchOfItem:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 fetchCreator:(CDUnknownBlockType)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (id)_lockedGetOutstandingFetchForOperation:(id)arg1 options:(unsigned long long)arg2 itemIDString:(id)arg3;
- (void)_lockedRemoveOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_lockedAddOutstandingFetch:(id)arg1 forItemIDString:(id)arg2 databaseScope:(long long)arg3;
- (void)_lockedHandleMemoryFetchOfItem:(id)arg1 pcsData:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_lockedFetchPCSForItem:(id)arg1 memoryCache:(id)arg2 forOperation:(id)arg3 options:(unsigned long long)arg4 fetchCreator:(CDUnknownBlockType)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
- (void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg1 databaseScope:(long long)arg2;
- (void)getSQLCache:(CDUnknownBlockType)arg1;
- (void)_updateMemoryCacheWithPCSData:(id)arg1 forItemWithID:(id)arg2 inMemoryCache:(id)arg3 databaseScope:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
- (_Bool)hasStatusToReport;
- (void)fetchPCSForRecordWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchPCSForZoneWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)fetchPCSForShareWithID:(id)arg1 forOperation:(id)arg2 options:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_setPCSData:(id)arg1 forFetchedRecordID:(id)arg2 withScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateMemoryCacheWithZonePCSData:(id)arg1 forZoneWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateMemoryCacheWithRecordPCSData:(id)arg1 forRecordWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)updateMemoryCacheWithSharePCSData:(id)arg1 forShareWithID:(id)arg2 databaseScope:(long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)removePCSDataForItemsInZoneWithID:(id)arg1;
- (void)removePCSDataForItemsInShareWithID:(id)arg1;
- (void)clearPCSCaches;
- (void)clearPCSMemoryCaches;
- (void)clearInvalidatedPCSSQLCacheEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
