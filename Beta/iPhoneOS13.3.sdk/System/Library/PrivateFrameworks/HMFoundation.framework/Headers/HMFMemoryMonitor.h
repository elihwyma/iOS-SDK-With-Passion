/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFUnfairLock, NSObject;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor

{
    HMFUnfairLock *_lock;
    _Bool _monitoring;
    long long _memoryState;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_source> *_memoryPressure;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryPressure;
@property (nonatomic, getter=isMonitoring) _Bool monitoring;
@property (nonatomic, readonly) long long memoryState;

+ (id)memoryMonitor;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;

@end
