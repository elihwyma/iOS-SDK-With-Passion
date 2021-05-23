/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSDispatchSource, NSString;

@protocol OS_dispatch_queue;

@interface BSTimer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    CDUnknownBlockType _handler;
    BSDispatchSource *_source;
    double _startTime;
    double _fireInterval;
    double _repeatInterval;
    double _leewayInterval;
    unsigned long long _fireCount;
    _Bool _oneShot;
    _Bool _scheduled;
}

@property (nonatomic, readonly) double repeatInterval;
@property (nonatomic, readonly) unsigned long long fireCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isScheduled) _Bool scheduled;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) double fireInterval;

+ (id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)cancel;
- (id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)schedule;
- (id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)_queue_cancel;
- (void)_callOutQueue_noteTimerFired;

@end
