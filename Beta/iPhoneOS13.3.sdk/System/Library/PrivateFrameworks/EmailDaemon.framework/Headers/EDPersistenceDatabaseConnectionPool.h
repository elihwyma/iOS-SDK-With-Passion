/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EFResourcePool, NSLock, NSMapTable, NSMutableSet, _EDPersistenceDatabaseConnectionWrapper;

@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject

{
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    unsigned long long _maxConcurrentBackgroundReaders;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
    id <EDPersistenceDatabaseConnectionPoolDelegate> _delegate;
}

@property (weak, nonatomic) id <EDPersistenceDatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) unsigned long long cacheSize;
@property (nonatomic, readonly) unsigned long long maxConcurrentBackgroundReaders;
@property (nonatomic, readonly) unsigned long long backgroundReadersWaiting;
@property (nonatomic, readonly) unsigned long long writersWaiting;

- (id)init;
- (void)dealloc;
- (void)flush;
- (void)checkInConnection:(id)arg1;
- (id)readerConnection;
- (id)writerConnection;
- (id)initWithDelegate:(id)arg1 maxConcurrentBackgroundReaders:(unsigned long long)arg2;
- (id)backgroundReaderConnection;
- (id)_connectionWithType:(unsigned long long)arg1;
- (_Bool)_lockForConnectionType:(unsigned long long)arg1 resource:(id *)arg2;
- (void)_unlockForConnectionType:(unsigned long long)arg1 resource:(id)arg2;
- (unsigned long long)maxConcurrentReaders;

@end
