/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDXPCAlarmScheduler, NSString;

@protocol OS_dispatch_queue;

@interface HDXPCAlarm : NSObject

{
    struct os_unfair_lock_s _lock;
    NSString *_eventName;
    HDXPCAlarmScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    CDUnknownBlockType _eventHandler;
    CDUnknownBlockType _unitTest_schedulerObserver;
}

@property (nonatomic, readonly) HDXPCAlarmScheduler *scheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *eventHandlerQueue;
@property (copy, nonatomic) CDUnknownBlockType eventHandler;
@property (copy, nonatomic) CDUnknownBlockType unitTest_schedulerObserver;
@property (copy, nonatomic, readonly) NSString *eventName;

- (id)description;
- (void)invalidate;
- (void)unschedule;
- (void)beginReceivingEventsWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithDaemon:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;
- (id)initWithProfile:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;
- (void)setNextFireDate:(id)arg1 isUserVisible:(_Bool)arg2;
- (void)eventDidFire:(id)arg1;
- (void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(_Bool)arg2;

@end
