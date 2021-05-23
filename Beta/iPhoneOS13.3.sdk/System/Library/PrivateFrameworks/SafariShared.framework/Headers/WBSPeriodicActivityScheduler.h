/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol OS_dispatch_queue;

@interface WBSPeriodicActivityScheduler : NSObject

{
    CDUnknownBlockType _block;
    _Bool _invalidated;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

- (id)init;
- (void)invalidate;
- (void)_timerDidFire:(id)arg1;
- (id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_scheduleActivityWithInterval:(double)arg1;
- (void)_performActivity;

@end
