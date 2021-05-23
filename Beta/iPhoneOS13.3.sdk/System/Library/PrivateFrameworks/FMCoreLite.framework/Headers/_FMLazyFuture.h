/*
 Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
 */

#import <FMCoreLite/FMFuture.h>

@class NSObject;

@protocol FMScheduler, OS_dispatch_queue;

@interface _FMLazyFuture : FMFuture

{
    _Bool _started;
    CDUnknownBlockType _block;
    id <FMScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (retain, nonatomic) id <FMScheduler> scheduler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) _Bool started;

- (id)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)_runIfNecessary;
- (id)initWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;

@end
