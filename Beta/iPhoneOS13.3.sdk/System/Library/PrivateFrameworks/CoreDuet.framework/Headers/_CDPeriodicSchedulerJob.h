/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface _CDPeriodicSchedulerJob : NSObject

{
    long long _period;
    double _interval;
    NSString *_jobName;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _handler;
    NSObject<OS_xpc_object> *_executionCriteria;
    _Bool _isHandlerAsynchronous;
    NSObject<OS_xpc_object> *_activity;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) NSObject<OS_xpc_object> *executionCriteria;
@property (retain) NSObject<OS_xpc_object> *activity;
@property (readonly) long long period;
@property (readonly) double interval;
@property (readonly) NSString *jobName;
@property (readonly) CDUnknownBlockType handler;
@property (readonly) _Bool isHandlerAsynchronous;

+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 queue:(id)arg3 asynchronousHandler:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)jobWithInterval:(double)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)jobWithPeriod:(long long)arg1 schedulerJobName:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (id)init;
- (void)setExecutionCriteria:(id)arg1;
- (id)initWithPeriod:(long long)arg1 interval:(double)arg2 schedulerJobName:(id)arg3 queue:(id)arg4 asynchronousHandler:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;

@end
