/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFWatchdogTimer : NSObject

{
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _timeoutHandler;
    _Bool _isStopped;
    double _remainingInterval;
    double _startTime;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cancel;
- (_Bool)isStopped;
- (void)stop;
- (void)start;
- (void)reset;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (_Bool)cancelIfNotAlreadyCanceled;

@end
