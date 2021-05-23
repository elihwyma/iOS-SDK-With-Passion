/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface _HKDelayedOperation : NSObject

{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    long long _mode;
    long long _clock;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
    double _lastExecution;
    double _nextScheduledExecution;
    NSString *_loggingName;
    NSObject<OS_os_log> *_loggingCategory;
}

- (void)invalidate;
- (void)execute;
- (id)initWithMode:(long long)arg1 queue:(id)arg2 delay:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithMode:(long long)arg1 clock:(long long)arg2 queue:(id)arg3 delay:(double)arg4 block:(CDUnknownBlockType)arg5;
- (void)_queue_executeBlockIfScheduled;
- (void)executeWithDelay:(double)arg1;
- (id)initWithQueue:(id)arg1 delay:(double)arg2 block:(CDUnknownBlockType)arg3;
- (void)enableLoggingWithName:(id)arg1 category:(id)arg2;
- (void)disableLogging;

@end
