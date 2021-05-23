/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface REUpNextScheduler : NSObject

{
    _Bool _updateScheduled;
    struct os_unfair_lock_s _scheduledLock;
    NSObject<OS_dispatch_queue> *_originalQueue;
    NSObject<OS_dispatch_queue> *_queue;
    double _delay;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _updateCompletionBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double delay;
@property (copy, nonatomic, readonly) CDUnknownBlockType updateBlock;
@property (copy, nonatomic, readonly) CDUnknownBlockType updateCompletionBlock;
@property (nonatomic, readonly) _Bool isScheduled;

+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)schedulerWithQueue:(id)arg1 delay:(double)arg2 updateCompletionBlock:(CDUnknownBlockType)arg3;
+ (id)schedulerWithQueue:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)schedule;
- (_Bool)performImmediately;
- (void)_queue_performUpdate;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 updateBlock:(CDUnknownBlockType)arg3 updateCompletionBlock:(CDUnknownBlockType)arg4;

@end
