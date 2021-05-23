/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, NSMutableArray, NSMutableDictionary, NSString;

@protocol HDQueryManagerUnitTestDelegate, OS_dispatch_queue;

@interface HDQueryManager : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryCollectionsByProcessBundleIdentifier;
    NSMutableArray *_pendingDatabaseAccessBlocks;
    NSMutableArray *_executingDatabaseAccessBlocks;
    long long _countOfExecutingThrottledDatabaseAccessBlocks;
    long long _unitTest_suspendCount;
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_unitTest_delegateQueue;
    id <HDQueryManagerUnitTestDelegate> _unitTest_delegate;
}

@property (retain) NSObject<OS_dispatch_queue> *unitTest_delegateQueue;
@property (weak) id <HDQueryManagerUnitTestDelegate> unitTest_delegate;
@property (weak, nonatomic, readonly) HDDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithDaemon:(id)arg1;
- (void)_queryServerDidFinish:(id)arg1;
- (void)_lock_startQueryServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_lock_registerQueryServer:(id)arg1 error:(id *)arg2;
- (void)_lock_executeDatabaseAccessBlocks;
- (id)_lock_dequeueNextDatabaseAccessBlock;
- (void)_lock_willExecuteDatabaseAccessBlock:(id)arg1;
- (void)_didExecuteDatabaseAccessBlock:(id)arg1;
- (void)_performAsyncWithUnitTestDelegate:(CDUnknownBlockType)arg1;
- (id)_lock_foregroundBundleIdentifiers;
- (_Bool)_lock_canDequeueBlock:(id)arg1;
- (id)_lock_registerQueryServer:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_logQueryActivationWithServer:(id)arg1;
- (void)_lock_unregisterQueryServer:(id)arg1;
- (id)_lock_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_lock_handleClientStateChangeWithQueryCollection:(id)arg1;
- (void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)startQueryServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleDatabaseAccessForQueryServer:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)logDiagnostics;
- (void)unitTest_suspendWithCount:(unsigned long long)arg1;

@end
