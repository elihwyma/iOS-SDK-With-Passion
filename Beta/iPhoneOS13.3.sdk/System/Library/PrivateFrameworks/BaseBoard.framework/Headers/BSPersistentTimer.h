/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class NSString, PCPersistentTimer;

@protocol OS_dispatch_queue;

@interface BSPersistentTimer : NSObject

{
    double _fireInterval;
    NSString *_serviceIdentifier;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    CDUnknownBlockType _handler;
    struct os_unfair_lock_s _lock;
    PCPersistentTimer *_timer;
}

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
- (id)initWithFireInterval:(double)arg1 serviceIdentifier:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)_createTimerWithInterval:(double)arg1 serviceIdentifier:(id)arg2;
- (void)_timerFired:(id)arg1;

@end
