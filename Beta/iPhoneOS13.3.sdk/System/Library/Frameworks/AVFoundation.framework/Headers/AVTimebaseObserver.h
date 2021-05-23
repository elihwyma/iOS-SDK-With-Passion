/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVTimebaseObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_timerQueue;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_source> *_timerSource;
    struct OpaqueCMTimebase *_timebase;
    _Bool _isObservingTimebase;
    double _lastRate;
    double _currentRate;
    _Bool _invalid;
}

@property (nonatomic, readonly, getter=_weakReference) AVWeakReference *weakReference;
@property (readonly) struct OpaqueCMTimebase *timebase;
@property (nonatomic, readonly) _Bool invalidated;

- (void)dealloc;
- (void)invalidate;
- (void)_reallyInvalidate;
- (void)_removeTimebaseFromTimerSource;
- (void)_stopObservingTimebaseNotifications;
- (void)_attachTimerSourceToTimebase;
- (void)_startObservingTimebaseNotifications;
- (void)_effectiveRateChanged;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 queue:(id)arg2;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_finishInitializationWithTimerEventHandler:(CDUnknownBlockType)arg1;

@end
