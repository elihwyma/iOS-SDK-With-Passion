/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

__attribute__((visibility("hidden")))
@interface CXDatabase : NSObject

{
    NSURL *_url;
    struct sqlite3 *_database;
    NSMutableDictionary *_sqlQueryToStatements;
}

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct sqlite3 *database;
@property (retain, nonatomic) NSMutableDictionary *sqlQueryToStatements;
@property (nonatomic, readonly) long long lastInsertedRowID;
@property (nonatomic, readonly) int countOfRecordsModifiedByLastQuery;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithURL:(id)arg1 readOnly:(_Bool)arg2 error:(id *)arg3;
- (_Bool)enableForeignKeysWithError:(id *)arg1;
- (_Bool)setBusyTimeout:(double)arg1 error:(id *)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 resultRowHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 error:(id *)arg3;
- (_Bool)executeSQL:(id)arg1 withBindings:(id)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (_Bool)executeSQL:(id)arg1 error:(id *)arg2;
- (_Bool)performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)selectSQL:(id)arg1 withBindings:(id)arg2 expectedColumnCount:(long long)arg3 transient:(_Bool)arg4 resultRowHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (_Bool)vacuumWithError:(id *)arg1;
- (id)namesOfColumnsInTableWithName:(id)arg1 error:(id *)arg2;
- (_Bool)executeSQL:(id)arg1 withStatementPreparationBlock:(CDUnknownBlockType)arg2 transient:(_Bool)arg3 error:(id *)arg4;
- (id)_statementForSQL:(id)arg1 transient:(_Bool)arg2 error:(id *)arg3;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;

@end
