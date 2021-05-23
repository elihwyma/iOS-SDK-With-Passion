/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_source;

@interface CAMPreciseTimer : NSObject

{
    _Bool _fired;
    double _delay;
    double _interval;
    CDUnknownBlockType __handler;
    NSObject<OS_dispatch_source> *__currentTimer;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType _handler;
@property (retain, nonatomic, setter=_setCurrentTimer:) NSObject<OS_dispatch_source> *_currentTimer;
@property (nonatomic, setter=_setFired:) _Bool fired;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double interval;

- (id)init;
- (void)invalidate;
- (void)start;
- (id)initWithDelay:(double)arg1 interval:(double)arg2 handler:(CDUnknownBlockType)arg3;

@end
