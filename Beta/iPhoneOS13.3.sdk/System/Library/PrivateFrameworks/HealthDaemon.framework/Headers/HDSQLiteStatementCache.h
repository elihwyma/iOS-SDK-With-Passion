/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface HDSQLiteStatementCache : NSObject

{
    struct sqlite3 *_db;
    struct __CFDictionary *_statementCache;
    struct __CFDictionary *_transactionStatementCache;
    struct __CFSet *_activeStatements;
    struct __CFSet *_uncachedActiveStatements;
    long long _cacheScope;
    _Bool _inTransaction;
}

@property (nonatomic, readonly) unsigned long long count;
@property (copy, nonatomic, readonly) NSSet *allStatmentSQLStrings;

- (id)init;
- (void)dealloc;
- (void)endTransaction;
- (void)clearCachedStatements;
- (id)initWithDatabase:(struct sqlite3 *)arg1;
- (void)beginTransactionWithCacheScope:(long long)arg1;
- (struct sqlite3_stmt *)checkOutStatementForSQL:(id)arg1 shouldCache:(_Bool)arg2 error:(id *)arg3;
- (void)checkInStatement:(struct sqlite3_stmt *)arg1;
- (void)_assertNoActiveStatements;
- (struct sqlite3_stmt *)_cachedStatementForSQL:(id)arg1;
- (void)_setStatement:(struct sqlite3_stmt *)arg1 forSQL:(id)arg2;
- (void)_clearCachedTransactionStatements;

@end
