/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <BaseBoard/BSSqlitePreparedStatement.h>

@class NSString;

@interface _BSSqlitePreparedSimpleStatement : BSSqlitePreparedStatement

{
    struct sqlite3_stmt *_statement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDatabaseConnection:(id)arg1 statement:(struct sqlite3_stmt *)arg2;
- (_Bool)executeWithBindings:(id)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(out id *)arg3;
- (int)_bindKey:(id)arg1 value:(id)arg2;
- (id)_sqliteError:(int)arg1;
- (int)_bindParameterIndex:(int)arg1 nullValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 stringValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 numberValue:(id)arg2;
- (int)_bindParameterIndex:(int)arg1 dataValue:(id)arg2;
- (void)sqliteDatabaseConnectionWillClose:(id)arg1;

@end
