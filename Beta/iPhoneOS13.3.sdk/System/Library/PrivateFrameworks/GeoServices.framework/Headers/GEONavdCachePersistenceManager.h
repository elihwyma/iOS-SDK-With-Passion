/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEONavdCacheDBReader, GEONavdCacheDBWriter;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdCachePersistenceManager : NSObject

{
    GEONavdCacheDBWriter *_writer;
    GEONavdCacheDBReader *_reader;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)initWithPath:(id)arg1;
- (void)tearDown;
- (void)_removeOldFormatCacheFromPath:(id)arg1;
- (long long)_threadUnsafeRowIdOfKey:(id)arg1;
- (void)_deleteFromDiskWithKey:(id)arg1;
- (long long)_numberOfEntries;
- (double)_nextTimeStampForRefreshTimer;
- (id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1;
- (long long)_rowIdOfKey:(id)arg1;
- (id)_entryWithRowId:(long long)arg1;
- (long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2;
- (id)_readValueWithKey:(id)arg1;
- (void)_deleteRowWithRowId:(long long)arg1;
- (void)_enumerateAllEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_enumerateAllForCacheEntriesWithHandler:(CDUnknownBlockType)arg1;
- (void)_removeAllEntries;

@end
