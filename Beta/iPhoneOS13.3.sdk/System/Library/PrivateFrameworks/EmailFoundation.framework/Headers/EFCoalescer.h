/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface EFCoalescer : NSObject

{
    CDUnknownBlockType _coalescerAction;
    struct os_unfair_lock_s _lock;
    id _coalescedValue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_coalescer;
}

- (void)dealloc;
- (void)_handleCoalesceEvent;
- (id)initWithCoalescingAction:(CDUnknownBlockType)arg1;
- (void)coalesceValue:(id)arg1;

@end
