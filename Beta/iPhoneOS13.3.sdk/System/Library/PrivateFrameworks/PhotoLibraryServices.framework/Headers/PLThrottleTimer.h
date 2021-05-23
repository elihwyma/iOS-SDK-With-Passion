/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PLThrottleTimer : NSObject

{
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_invocationQueue;
    unsigned long long _timeoutId;
    unsigned long long _maxTimeoutId;
    _Bool _isPingedSinceLastFire;
    _Bool _isPaused;
    _Bool _isInvalid;
    SEL _action;
    double _timeout;
    double _maxTimeout;
}

@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, readonly) double maxTimeout;

- (void)invalidate;
- (void)ping;
- (void)setPaused:(_Bool)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 invocationQueue:(id)arg3 timeout:(double)arg4 maxTimeout:(double)arg5;
- (void)_inqFireWithTimeout:(_Bool)arg1 timeoutId:(unsigned long long)arg2 maxTimeout:(_Bool)arg3 maxTimeoutId:(unsigned long long)arg4;
- (void)_inqScheduleTimeout:(_Bool)arg1 maxTimeout:(_Bool)arg2;

@end
