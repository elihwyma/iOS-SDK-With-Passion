/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSTimer;

@protocol ML3MediaLibraryWriterDelegate, OS_dispatch_queue;

@interface ML3MediaLibraryWriter : NSObject

{
    NSTimer *_watchdogTimer;
    _Bool _suspended;
    id <ML3MediaLibraryWriterDelegate> _delegate;
    double _transactionTimeout;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_transactionMap;
    NSOperationQueue *_databaseOperationQueue;
    NSOperationQueue *_databaseOperationSerialQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) NSMutableDictionary *transactionMap;
@property (nonatomic, readonly) NSOperationQueue *databaseOperationQueue;
@property (nonatomic, readonly) NSOperationQueue *databaseOperationSerialQueue;
@property (weak, nonatomic) id <ML3MediaLibraryWriterDelegate> delegate;
@property (nonatomic) double transactionTimeout;
@property (nonatomic, getter=isSuspended) _Bool suspended;

+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)writerErrorWithCode:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)reset;
- (id)beginTransactionForLibrary:(id)arg1 withClient:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;
- (void)_setupWatchdogTimer;
- (void)_tearDownWatchdogTimer;
- (void)cancelAllActiveTransactions;
- (id)_createNewTransactionForLibrary:(id)arg1 fromClient:(id)arg2 readOnly:(_Bool)arg3;
- (void)_destroyTransactionForIdentifier:(id)arg1 forceRelinquishConnection:(_Bool)arg2;
- (id)_transactionForIdentifier:(id)arg1;
- (_Bool)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;
- (id)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;
- (id)_allDatabaseOperations;
- (void)cancelAllActiveDatabaseOperationsAndWaitUntilFinished:(_Bool)arg1;
- (void)_registerTransaction:(id)arg1;
- (void)_unregisterTransaction:(id)arg1;
- (void)_destroyTransaction:(id)arg1 forceRelinquishConnection:(_Bool)arg2;
- (void)_watchdogTimerFired:(id)arg1;
- (_Bool)_shouldWatchdogTransaction:(id)arg1;
- (_Bool)executeUntrustedUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 error:(id *)arg4;
- (id)executeUntrustedQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 error:(id *)arg5;
- (void)performDatabaseOperation:(unsigned long long)arg1 onLibrary:(id)arg2 withAttributes:(id)arg3 options:(id)arg4 fromClient:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)cancelActiveTransactionForClient:(id)arg1;

@end
