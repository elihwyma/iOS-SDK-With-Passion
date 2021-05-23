/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTTimerBlock : NSObject

{
    NSObject<OS_dispatch_queue> *_selfQueue;
    NSTimer *_timer;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _onTimer;
    id _owner;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *selfQueue;
@property (nonatomic, readonly) NSTimer *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic, readonly) CDUnknownBlockType onTimer;
@property (nonatomic, readonly) id owner;

- (void)dealloc;
- (void)invalidate;
- (void)timerFired:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(CDUnknownBlockType)arg3 owner:(id)arg4;
- (void)fireNow;

@end
