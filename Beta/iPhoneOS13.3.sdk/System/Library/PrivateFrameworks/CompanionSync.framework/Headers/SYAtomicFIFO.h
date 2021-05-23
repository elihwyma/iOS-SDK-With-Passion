/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSMutableArray;

@interface SYAtomicFIFO : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_store;
}

@property (readonly) id head;
@property (readonly) id tail;

- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)removeAllObjects;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)dequeueUntil:(CDUnknownBlockType)arg1;

@end
