/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class PFLimitedConcurrencyQueueClass;

@protocol OS_dispatch_queue;

@interface PFLimitedConcurrencySlotQueue : NSObject

{
    _Atomic unsigned long long _blockCount;
    NSObject<OS_dispatch_queue> *_slotQueue;
    PFLimitedConcurrencyQueueClass *_concurrentQueue;
    unsigned long long _slotIndex;
}

@property (weak, readonly) PFLimitedConcurrencyQueueClass *concurrentQueue;
@property (readonly) unsigned long long slotIndex;

+ (id)currentSlotQueue;

- (void)resume;
- (void)suspend;
- (const char *)label;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithConcurrentQueue:(id)arg1 targetQueue:(id)arg2 slotIndex:(unsigned long long)arg3;
- (unsigned long long)incrementSlotUseCount;
- (unsigned long long)decrementSlotUseCount;
- (unsigned long long)slotUseCount;

@end
