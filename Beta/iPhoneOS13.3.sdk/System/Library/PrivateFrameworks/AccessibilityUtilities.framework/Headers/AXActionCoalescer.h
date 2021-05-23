/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXActionCoalescer : NSObject

{
    NSObject<OS_dispatch_queue> *_targetQueue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_consistencyQueue;
    _Bool _coalescing;
}

+ (id)mainQueueCoalescerWithBlock:(CDUnknownBlockType)arg1;

- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performCoalescedAsynchronously;

@end
