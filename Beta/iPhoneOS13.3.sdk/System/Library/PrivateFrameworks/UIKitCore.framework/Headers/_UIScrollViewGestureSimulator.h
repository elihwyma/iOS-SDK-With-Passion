/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, NSThread, NSTimer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewGestureSimulator : NSObject

{
    struct __CFRunLoopSource *_mainThreadRunLoopSource;
    NSMutableArray *_simulatedGestures;
    NSThread *_workThread;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    _Bool _hasSimulatedGestures;
    double _lastWakeUpTime;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_update;
- (void)_displayLinkDidFire:(id)arg1;
- (void)_threadMain;
- (void)_setHasSimulatedGestures:(id)arg1;
- (void)_signalMainThreadIfNecessary;
- (void)simulateGestureWithDuration:(double)arg1 begin:(CDUnknownBlockType)arg2 update:(CDUnknownBlockType)arg3 end:(CDUnknownBlockType)arg4;

@end
