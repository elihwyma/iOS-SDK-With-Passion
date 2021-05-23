/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNStack, NSString;

@protocol CNScheduler;

@interface CNCoalescingSchedulerDecorator : NSObject

{
    id <CNScheduler> _scheduler;
    double _coalescingWindow;
    unsigned long long _state;
    CNStack *_delayedBlocks;
}

@property (nonatomic, readonly) id <CNScheduler> scheduler;
@property (nonatomic, readonly) double coalescingWindow;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) CNStack *delayedBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) double timestamp;

- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)flushDelayedBlock;
- (unsigned long long)getAndIncrementState;
- (void)removeDelayedBlock:(CDUnknownBlockType)arg1;
- (id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2;

@end
