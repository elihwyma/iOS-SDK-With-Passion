/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;

@protocol AMSSQLiteConnectionDelegate;

__attribute__((visibility("hidden")))
@interface AMSSQLiteConnection : NSObject

{
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 *_database;
    id <AMSSQLiteConnectionDelegate> _delegate;
    _Bool _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    _Bool _transactionWantsRollback;
    AMSSQLiteConnectionOptions *_options;
}

@property (copy, nonatomic, readonly) NSError *currentError;
@property (copy, nonatomic, readonly) AMSSQLiteConnectionOptions *options;
@property (weak, nonatomic) id <AMSSQLiteConnectionDelegate> delegate;
@property (nonatomic, readonly) long long lastChangeCount;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (_Bool)open;
- (_Bool)close;
- (_Bool)truncate;
- (_Bool)_open;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_close;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (_Bool)executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;
- (void)_flushAfterTransactionBlocks;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_openAndAllowRetry:(_Bool)arg1;
- (void)_finalizeAllStatements;
- (_Bool)_executeWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_resetAfterCorruptionError;
- (_Bool)_resetAfterIOError;
- (_Bool)_performResetAfterCorruptionError;
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)finalizePreparedStatement:(id)arg1 error:(id *)arg2;
- (id)prepareStatement:(id)arg1 error:(id *)arg2;

@end
