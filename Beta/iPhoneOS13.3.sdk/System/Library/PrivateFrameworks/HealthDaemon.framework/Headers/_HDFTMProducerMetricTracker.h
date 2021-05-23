/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class _HKExpiringCompletionTimer;

@protocol OS_dispatch_queue;

@interface _HDFTMProducerMetricTracker : NSObject

{
    _HKExpiringCompletionTimer *_timer;
    CDUnknownBlockType _timeoutHandler;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _paused;
    _Bool _metricAvailable;
}

@property (nonatomic, readonly) _Bool metricAvailable;

- (void)invalidate;
- (void)pause;
- (void)resume;
- (void)_startTimer;
- (id)initWithTimeoutHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)metricReceived;

@end
