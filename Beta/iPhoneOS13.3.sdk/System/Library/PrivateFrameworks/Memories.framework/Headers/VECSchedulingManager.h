/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VECSchedulingManager : NSObject

{
    unsigned long long _batchSize;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_suspendGroup;
    NSMapTable *_lookupTable;
    NSObject<OS_dispatch_queue> *_queue[3];
    NSMutableArray *_taskLIFO[3];
    long long _runingTaskCount[3];
    _Bool _isFIFO;
}

+ (id)concurrentScheduler;
+ (id)serialScheduler;
+ (id)concurrentSchedulerWithBatchSize:(unsigned long long)arg1;
+ (id)sharedSerialScheduler;
+ (id)sharedConcurrentScheduler;

- (id)init;
- (id)description;
- (void)resume;
- (void)suspend;
- (void)_processNextBatch;
- (void)registerRequest:(id)arg1;
- (unsigned long long)_priorityIndexWithPriority:(unsigned long long)arg1;
- (void)deregisterRequest:(int)arg1;
- (int)postSchedulingRequest:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)setIsFIFO:(_Bool)arg1;
- (int)processTaskWithPriority:(unsigned long long)arg1 taskHandler:(CDUnknownBlockType)arg2;
- (void)cancelSchedulingRequestWithID:(int)arg1;
- (void)cancelAllSchedulingRequests;

@end
