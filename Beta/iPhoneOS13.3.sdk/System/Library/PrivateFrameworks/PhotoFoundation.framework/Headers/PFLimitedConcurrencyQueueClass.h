/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFConcurrentQueueClass.h>

@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass

{
    NSMutableArray *_slotQueues;
    unsigned long long _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    _Bool _usesBarrierBlocks;
    unsigned long long _suspendCount;
}

- (void)resume;
- (void)suspend;
- (id)_extensionsForTargetingQueue;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;
- (unsigned long long)concurrencyLimit;
- (void)_setupConcurrencyLimit:(unsigned long long)arg1;
- (id)_allocateOneSlotQueue;
- (void)_allocateAllSlotQueues;
- (id)checkoutAvailableSlot;
- (void)slotQueueMightBeUnused:(id)arg1;
- (void)enqueueDelayedDrop;
- (void)dropOneSlotQueue;

@end
