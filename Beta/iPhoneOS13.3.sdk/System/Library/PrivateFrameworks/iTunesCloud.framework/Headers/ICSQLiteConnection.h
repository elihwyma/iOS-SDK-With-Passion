/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray;

@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject

{
    NSMutableArray *_afterTransactionBlocks;
    struct sqlite3 *_database;
    id <ICSQLiteConnectionDelegate> _delegate;
    _Bool _didResetForCorruption;
    NSMapTable *_preparedStatements;
    long long _transactionDepth;
    _Bool _transactionWantsRollback;
    ICSQLiteConnectionOptions *_options;
}

@property (copy, nonatomic, readonly) NSError *currentError;
@property (copy, nonatomic, readonly) ICSQLiteConnectionOptions *options;
@property (weak, nonatomic) id <ICSQLiteConnectionDelegate> delegate;
@property (nonatomic, readonly) long long lastChangeCount;

- (id)initWithOptions:(id)arg1;
- (_Bool)open;
- (_Bool)close;
- (_Bool)truncate;
- (_Bool)_open;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;
- (_Bool)_close;
- (void)performTransaction:(CDUnknownBlockType)arg1;
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;
- (void)_flushAfterTransactionBlocks;
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;
- (void)_finalizeAllStatements;
- (_Bool)_performResetAfterCorruptionError;
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;
- (id)prepareStatement:(id)arg1 error:(id *)arg2;
- (_Bool)resetAfterCorruptionError;
- (_Bool)resetAfterIOError;

@end
