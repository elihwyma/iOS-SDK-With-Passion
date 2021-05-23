/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface INWatchdogTimer : NSObject

{
    double _interval;
    NSObject<OS_dispatch_source> *_timerSource;
    _Bool _isStopped;
    double _remainingInterval;
    double _startTime;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)cancel;
- (void)stop;
- (void)start;
- (void)_reset;
- (void)_start;
- (void)_stop;
- (void)_cancel;
- (_Bool)_isCanceled;
- (_Bool)isCanceled;
- (id)initWithTimeoutInterval:(double)arg1 timeoutHandler:(CDUnknownBlockType)arg2;
- (id)initWithTimeoutInterval:(double)arg1 onQueue:(id)arg2 timeoutHandler:(CDUnknownBlockType)arg3;
- (_Bool)cancelIfNotAlreadyCanceled;
- (_Bool)_cancelIfNotAlreadyCanceled;

@end
