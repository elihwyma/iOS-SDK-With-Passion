/*
 Image: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

#import <NSObject.h>

@class CLTimer, NSRunLoop, NSTimer;

@interface CLRunLoopTimerScheduler : NSObject

{
    NSTimer *_underlyingTimer;
    CDUnknownBlockType _fireBlock;
    NSRunLoop *_runloop;
    CLTimer *_timer;
}

@property (retain, nonatomic) NSTimer *underlyingTimer;
@property (copy, nonatomic) CDUnknownBlockType fireBlock;
@property (retain, nonatomic) NSRunLoop *runloop;
@property (weak, nonatomic) CLTimer *timer;

- (void)dealloc;
- (void)reflectNextFireDelay:(double)arg1 fireInterval:(double)arg2;
- (id)initWithRunLoopSilo:(id)arg1;

@end
