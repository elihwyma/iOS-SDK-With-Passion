/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface NNMKSQLiteConnection : NSObject

{
    _Bool _isInTransaction;
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_dbQueue;
    NSMutableDictionary *_cachedPreparedStatementsBySQLPattern;
}

@property (nonatomic) struct sqlite3 *db;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue;
@property (nonatomic) _Bool isInTransaction;
@property (retain, nonatomic) NSMutableDictionary *cachedPreparedStatementsBySQLPattern;

+ (_Bool)errorCodeMeansCorruptedDatabase:(int)arg1;

- (void)dealloc;
- (_Bool)beginTransaction;
- (int)executeSQL:(id)arg1;
- (_Bool)commitTransaction;
- (id)lastErrorMessage;
- (_Bool)rollbackTransaction;
- (void)_closeDatabase;
- (int)lastErrorCode;
- (int)_lastErrorCode;
- (_Bool)tableExists:(id)arg1 inDatabase:(id)arg2;
- (int)_executeSQL:(id)arg1;
- (id)initWithPath:(id)arg1 protectData:(_Bool)arg2 errorCode:(int *)arg3;
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1;
- (int)stepPreparedStatement:(struct sqlite3_stmt *)arg1;
- (_Bool)_openDatabaseWithPath:(id)arg1 protectData:(_Bool)arg2 errorCode:(int *)arg3;
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1 cacheStatement:(_Bool)arg2;
- (struct sqlite3_stmt *)_preparedStatementForPattern:(id)arg1 cacheStatement:(_Bool)arg2;
- (int)_stepPreparedStatement:(struct sqlite3_stmt *)arg1;
- (id)_lastErrorMessage;
- (int)_runRetryingIfNeeded:(CDUnknownBlockType)arg1;

@end
