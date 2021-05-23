/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSUUID, _ML3DatabaseConnectionSubPool;

@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject

{
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    int _connectionsProfilingLevel;
    _Bool _useDistantWriterConnections;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _poolLockCondition;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _poolLockMutex;
    _Bool _closed;
    _Bool _locked;
    NSString *_databasePath;
    id <ML3DatabaseConnectionPoolDelegate> _delegate;
    unsigned long long _maxReaders;
    unsigned long long _maxWriters;
    unsigned long long _connectionsJournalingMode;
}

@property (nonatomic, getter=isClosed) _Bool closed;
@property (nonatomic, readonly) NSString *databasePath;
@property (weak, nonatomic) id <ML3DatabaseConnectionPoolDelegate> delegate;
@property (nonatomic, readonly) unsigned long long maxReaders;
@property (nonatomic, readonly) unsigned long long maxWriters;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) int connectionsProfilingLevel;
@property (nonatomic) _Bool useDistantWriterConnections;
@property (nonatomic, readonly, getter=isLocked) _Bool locked;
@property (readonly) _Bool isCurrentThreadConnectionInTransaction;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)closeAllConnections;
- (void)checkInConnection:(id)arg1;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2 maxWriters:(unsigned long long)arg3;
- (id)readerConnection;
- (id)writerConnection;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(_Bool)arg1;
- (void)lockAndCloseAllConnectionsForTermination;
- (id)_connectionForWriting:(_Bool)arg1 useThreadConnection:(_Bool)arg2 storeThreadLocalConnection:(_Bool)arg3;
- (id)_localConnectionForThread:(id)arg1;
- (void)_setLocalConnection:(id)arg1 forThread:(id)arg2;
- (void)_setConnection:(id)arg1 forIdentifier:(id)arg2;
- (id)_connectionForIdentifier:(id)arg1;
- (id)initWithDatabasePath:(id)arg1 maxReaders:(unsigned long long)arg2;
- (id)_generateDiagnostic;

@end
