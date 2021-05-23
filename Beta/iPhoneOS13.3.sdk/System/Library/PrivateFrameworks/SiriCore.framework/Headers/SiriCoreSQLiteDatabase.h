/*
 Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString;

@interface SiriCoreSQLiteDatabase : NSObject

{
    struct sqlite3 *_handle;
    NSCache *_cachedSQLiteStatementsByQueryString;
    NSString *_path;
    long long _dataProtectionClass;
    long long _options;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) long long dataProtectionClass;
@property (nonatomic, readonly) long long options;

- (_Bool)openWithError:(id *)arg1;
- (_Bool)executeQuery:(id)arg1 error:(id *)arg2;
- (id)executeQuery:(id)arg1;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)vacuumWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (id)initWithPath:(id)arg1 dataProtectionClass:(long long)arg2 options:(long long)arg3;
- (_Bool)executeQueryString:(id)arg1 error:(id *)arg2;
- (_Bool)checkpointWriteAheadLogWithError:(id *)arg1;
- (_Bool)savepointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)releaseSavepointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)rollbackToSavepointWithName:(id)arg1 error:(id *)arg2;
- (_Bool)performForeignKeyCheckWithError:(id *)arg1;
- (_Bool)performIntegrityCheckWithError:(id *)arg1;
- (_Bool)performQuickCheckWithError:(id *)arg1;
- (id)fetchTableNamesWithError:(id *)arg1;
- (id)fetchTableWithName:(id)arg1 error:(id *)arg2;
- (_Bool)createTable:(id)arg1 error:(id *)arg2;
- (_Bool)dropTableWithName:(id)arg1 error:(id *)arg2;
- (_Bool)alterTableWithName:(id)arg1 renameTo:(id)arg2 error:(id *)arg3;
- (_Bool)alterTableWithName:(id)arg1 addColumn:(id)arg2 error:(id *)arg3;
- (_Bool)createIndex:(id)arg1 error:(id *)arg2;
- (_Bool)dropIndexWithName:(id)arg1 error:(id *)arg2;
- (id)selectValueTuplesFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 indexedBy:(id)arg4 criterion:(id)arg5 order:(id)arg6 range:(id)arg7 error:(id *)arg8;
- (id)selectValueMapsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 indexedBy:(id)arg4 criterion:(id)arg5 order:(id)arg6 range:(id)arg7 error:(id *)arg8;
- (id)selectRecordsFromTableWithName:(id)arg1 columnNames:(id)arg2 behavior:(long long)arg3 indexedBy:(id)arg4 criterion:(id)arg5 order:(id)arg6 range:(id)arg7 recordBuilder:(id)arg8 error:(id *)arg9;
- (id)selectValuesFromTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 indexedBy:(id)arg4 criterion:(id)arg5 order:(id)arg6 range:(id)arg7 error:(id *)arg8;
- (unsigned long long)countValuesInTableWithName:(id)arg1 columnName:(id)arg2 behavior:(long long)arg3 indexedBy:(id)arg4 criterion:(id)arg5 range:(id)arg6 error:(id *)arg7;
- (_Bool)insertIntoTableWithName:(id)arg1 valueMap:(id)arg2 error:(id *)arg3;
- (_Bool)insertIntoTableWithName:(id)arg1 record:(id)arg2 error:(id *)arg3;
- (_Bool)updateTableWithName:(id)arg1 valueMap:(id)arg2 criterion:(id)arg3 error:(id *)arg4;
- (_Bool)deleteFromTableWithName:(id)arg1 indexedBy:(id)arg2 criterion:(id)arg3 error:(id *)arg4;

@end
