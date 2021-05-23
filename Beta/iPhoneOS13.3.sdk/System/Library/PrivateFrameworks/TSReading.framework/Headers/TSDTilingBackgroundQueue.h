/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSKAccessController;

@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface TSDTilingBackgroundQueue : NSObject

{
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    struct os_unfair_lock_s mReaderSpinLock;
    unsigned long long mReaderCount;
    NSObject<OS_dispatch_semaphore> *mReadLockSignal;
    long long mShutdownToken;
    _Bool mShuttingDown;
    TSKAccessController *mAccessController;
}

@property (getter=isShuttingDown) _Bool shuttingDown;

+ (_Bool)isHoldingReadLockFromBackgroundQueue;
+ (id)p_sharedLimitedQueue;

- (id)init;
- (void)dealloc;
- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)shutdown;
- (void)p_readUnlock;
- (void)p_readLock;
- (id)initWithAccessController:(id)arg1;
- (void)drainAndPerformSync:(CDUnknownBlockType)arg1;

@end
