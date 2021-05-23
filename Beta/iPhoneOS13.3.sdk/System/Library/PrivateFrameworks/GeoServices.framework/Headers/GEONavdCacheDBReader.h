/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEODBReader.h>

__attribute__((visibility("hidden")))
@interface GEONavdCacheDBReader : GEODBReader

{
    struct sqlite3_stmt *_sqlReadAllEntries;
    struct sqlite3_stmt *_sqlReadEntriesForHash;
    struct sqlite3_stmt *_sqlReadKeysForHash;
    struct sqlite3_stmt *_sqlReadNextTimerTimeStamp;
    struct sqlite3_stmt *_sqlReadEntriesBeforeTimeStamp;
    struct sqlite3_stmt *_sqlReadRowIdsOfEntriesBeforeTimeStamp;
    struct sqlite3_stmt *_sqlReadEntryWithRowId;
    struct sqlite3_stmt *_sqlCountEntries;
}

- (void)dealloc;
- (void)_openDB;
- (void)_cacheEntryForNextRefreshWithHandler:(CDUnknownBlockType)arg1;
- (void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_cacheEntryWithRowId:(long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_allCacheEntriesWithHandler:(CDUnknownBlockType)arg1;
- (long long)_numberOfEntries;
- (void)_openDBIfNotAlreadyOpen;
- (void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
