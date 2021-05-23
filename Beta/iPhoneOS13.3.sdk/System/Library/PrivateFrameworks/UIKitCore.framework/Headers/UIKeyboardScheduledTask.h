/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer, UIKeyboardTaskQueue, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardScheduledTask : NSObject

{
    CDUnknownBlockType _task;
    double _timeInterval;
    UIKeyboardTaskQueue *_taskQueue;
    NSTimer *_timer;
    _UIActionWhenIdle *_deferredAction;
    CDUnknownBlockType _enqueuedTask;
}

@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) _UIActionWhenIdle *deferredAction;
@property (copy, nonatomic) CDUnknownBlockType enqueuedTask;
@property (nonatomic, readonly) CDUnknownBlockType task;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) _Bool repeats;

- (void)dealloc;
- (void)invalidate;
- (_Bool)isValid;
- (void)resetTimer;
- (id)initWithTaskQueue:(id)arg1 timeInterval:(double)arg2 repeats:(_Bool)arg3 task:(CDUnknownBlockType)arg4;
- (void)timerFired:(id)arg1;
- (void)handleDeferredTimerFiredEvent;

@end
