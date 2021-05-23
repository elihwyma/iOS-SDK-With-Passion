/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@class NSObject;

@protocol NAScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NALazyFuture

{
    _Bool _started;
    CDUnknownBlockType _block;
    id <NAScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) id <NAScheduler> scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) _Bool started;

- (id)initWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)willAddCompletionBlock;

@end
