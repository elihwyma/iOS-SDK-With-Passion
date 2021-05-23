/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface NRReadWriteConcurrentQueue : NSObject

{
    NSMutableArray *_readerQueues;
    NSObject<OS_dispatch_queue> *_writerQueue;
    long long _nextReader;
    _Bool _suspended;
    NSMutableArray *_suspendedReadRequests;
    NSMutableArray *_suspendedWriteRequests;
    struct os_unfair_lock_s _lock;
}

- (void)invalidate;
- (void)resume;
- (void)suspend;
- (void)enqueueReadWithBlock:(CDUnknownBlockType)arg1 bypassSuspend:(_Bool)arg2 async:(_Bool)arg3;
- (void)_suspendReadersAndWaitForDrain;
- (void)_resumeReaders;
- (id)initWithNumberOfReaders:(unsigned long long)arg1;
- (void)enqueueReadWithBlock:(CDUnknownBlockType)arg1 bypassSuspend:(_Bool)arg2;
- (void)enqueueReadWithBlockAsync:(CDUnknownBlockType)arg1 bypassSuspend:(_Bool)arg2;
- (void)enqueueWriteWithBlockAsync:(CDUnknownBlockType)arg1 bypassSuspend:(_Bool)arg2;

@end
