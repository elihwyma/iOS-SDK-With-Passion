//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDXPCAlarmScheduler, NSString;
@protocol OS_dispatch_queue;

@interface HDXPCAlarm : NSObject
{
//     struct os_unfair_lock_s _lock;
    NSString *_eventName;
    HDXPCAlarmScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    id /* CDUnknownBlockType */ _eventHandler;
    id /* CDUnknownBlockType */ _unitTest_schedulerObserver;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ unitTest_schedulerObserver; // @synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver;
@property(copy, nonatomic) id /* CDUnknownBlockType */ eventHandler; // @synthesize eventHandler=_eventHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *eventHandlerQueue; // @synthesize eventHandlerQueue=_eventHandlerQueue;
@property(readonly, nonatomic) HDXPCAlarmScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
// - (void).cxx_destruct;
- (void)unitTest_fireEventImmediatelyWithDate:(id)arg1 isUserVisible:(BOOL)arg2;
- (void)eventDidFire:(id)arg1;
- (id)description;
- (void)unschedule;
- (void)setNextFireDate:(id)arg1 isUserVisible:(BOOL)arg2;
- (void)invalidate;
- (void)beginReceivingEventsWithHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithProfile:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;
- (id)initWithDaemon:(id)arg1 eventName:(id)arg2 eventHandlerQueue:(id)arg3;

@end

