/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CKDispatchQueue : NSObject

{
    unsigned long long _fifo;
    _Bool _suspended;
    _Bool _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    struct __CFBinaryHeap *_heap;
    NSMutableDictionary *_dispatchQueueBlocks;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) struct __CFBinaryHeap *heap;
@property (retain, nonatomic) NSMutableDictionary *dispatchQueueBlocks;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (nonatomic, getter=isSuspended) _Bool suspended;

+ (id)serialQueueWithDispatchPriority:(long long)arg1;
+ (id)concurrentQueueWithDispatchPriority:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2;
- (void)removeAllOutstandingBlocks;
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2;
- (void)addBlock:(CDUnknownBlockType)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3;
- (void)removeOutstandingBlockForKey:(id)arg1;
- (void)addBlock:(CDUnknownBlockType)arg1;
- (void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)arg1;
- (id)allKeysOfOutstandingBlocks;
- (_Bool)containsOutstandingBlockForKey:(id)arg1;

@end
