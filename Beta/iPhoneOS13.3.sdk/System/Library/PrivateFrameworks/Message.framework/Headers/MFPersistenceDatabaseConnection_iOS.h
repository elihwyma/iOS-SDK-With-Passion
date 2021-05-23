/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDPersistenceDatabaseConnection.h>

@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection

{
    void *_ICUSearchContext;
    _MFSearchMatcherContext *_CPSearchContext;
}

- (void)dealloc;
- (void)handleSQLResult:(int)arg1 message:(id)arg2;
- (int)configureSQLConnection;
- (void)_handleCorruptDatabase;
- (void)_handleFullDatabase;
- (void)_handleProtectedDataIOError;
- (void)_handleInvalidDatabaseIOError;
- (void)_handleDetachedDatabaseIOError;
- (void)_handleIOError;
- (void)_handleBusyError;
- (void)_logFileSystemStats;
- (long long)transactionTypeForWriting;

@end
