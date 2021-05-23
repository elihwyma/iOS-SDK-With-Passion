/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class BKSProcessAssertion, NSString;

@protocol OS_dispatch_queue;

@interface SSSQLiteDatabase : NSObject

{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    _Bool _readOnly;
    _Bool _isInTransaction;
    NSString *_protectionType;
    CDUnknownBlockType _setupBlock;
    struct __CFDictionary *_statementCache;
    _Bool _takesTaskCompletionAssertions;
    BKSProcessAssertion *_taskAssertion;
    long long _taskAssertionCount;
}

@property _Bool takesTaskCompletionAssertions;
@property (copy, nonatomic) CDUnknownBlockType setupBlock;

+ (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
+ (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt *)arg1 hasRow:(_Bool *)arg2 didFinish:(_Bool *)arg3 isCorrupt:(_Bool *)arg4;
+ (void)_setTakesTaskCompletionAssertions:(_Bool)arg1;

- (void)dealloc;
- (long long)userVersion;
- (_Bool)executeSQL:(id)arg1;
- (_Bool)setUserVersion:(long long)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithDatabaseURL:(id)arg1;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)_expireBackgroundTask;
- (_Bool)statementDidFinishAfterStepping:(struct sqlite3_stmt *)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)statementHasRowAfterStepping:(struct sqlite3_stmt *)arg1;
- (long long)countChanges;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;
- (void)dispatchBlockAsync:(CDUnknownBlockType)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2 protectionType:(id)arg3;
- (void)_beginTaskCompletionAssertion;
- (int)_openDatabase;
- (void)_endTaskCompletionAssertion;
- (void)expireBackgroundTask;
- (int)_closeDatabase;
- (void)_accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (void)_resetCorruptDatabase;
- (struct sqlite3_stmt *)_statementForSQL:(id)arg1 cache:(_Bool)arg2;
- (_Bool)setUserVersion:(long long)arg1 forDatabase:(id)arg2;
- (long long)userVersionForDatabase:(id)arg1;
- (int)_openFlags;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (void)_resetDatabaseWithPath:(id)arg1;
- (void)accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)columnName:(id)arg1 existsInTable:(id)arg2;
- (void)dispatchBlockSync:(CDUnknownBlockType)arg1;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg1;
- (void)beginTaskCompletionAssertion;
- (void)endTaskCompletionAssertion;

@end
