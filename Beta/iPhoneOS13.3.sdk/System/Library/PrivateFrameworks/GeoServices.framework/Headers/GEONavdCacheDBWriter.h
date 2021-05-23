/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEODBWriter.h>

__attribute__((visibility("hidden")))
@interface GEONavdCacheDBWriter : GEODBWriter

{
    struct sqlite3_stmt *_sqlInsertCache;
    struct sqlite3_stmt *_sqlDeleteRowForRowID;
    struct sqlite3_stmt *_sqlUpdateCache;
    struct sqlite3_stmt *_sqlDeleteAllRows;
}

- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (long long)_insertWithKey:(id)arg1 value:(id)arg2;
- (_Bool)_updateRowId:(long long)arg1 withKey:(id)arg2 value:(id)arg3;
- (void)_deleteRowsWithRowIDs:(id)arg1;
- (void)_deleteAllRows;
- (void)_openIfNecessary;
- (void)performTableCreationTasks;
- (void)performStatementPreparationTasks;
- (void)_createCacheTable;

@end
