/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSCondition, NSMapTable, NSMutableSet, NSString;

@protocol HDSQLiteDatabasePoolDelegate, OS_dispatch_semaphore;

@interface HDSQLiteDatabasePool : NSObject

{
    NSCondition *_cacheCondition;
    NSMutableSet *_cache;
    unsigned long long _cacheGeneration;
    long long _cacheSize;
    long long _concurrentReaderLimit;
    _Atomic int _count;
    struct os_unfair_lock_s _checkoutLock;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
    id <HDSQLiteDatabasePoolDelegate> _delegate;
}

@property (weak) id <HDSQLiteDatabasePoolDelegate> delegate;
@property (readonly) long long count;
@property (readonly) long long cacheSize;
@property (readonly) long long concurrentReaderLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)flush;
- (id)diagnosticDescription;
- (id)initWithConcurrentReaderLimit:(long long)arg1;
- (id)checkOutDatabaseWithOptions:(unsigned long long)arg1 error:(id *)arg2;
- (void)checkInDatabase:(id)arg1 flushImmediately:(_Bool)arg2;
- (id)_semaphoreForCheckOutOptions:(unsigned long long)arg1;
- (void)_addDatabaseWrapperToCheckoutMap:(id)arg1;
- (id)_removeDatabaseFromCheckoutMap:(id)arg1;
- (void)_didFlushDatabases:(id)arg1;

@end
