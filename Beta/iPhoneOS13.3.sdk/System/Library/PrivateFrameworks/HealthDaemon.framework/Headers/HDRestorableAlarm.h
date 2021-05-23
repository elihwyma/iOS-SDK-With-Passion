/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDRestorableAlarmScheduler, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface HDRestorableAlarm : NSObject

{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;
    HDRestorableAlarmScheduler *_scheduler;
    CDUnknownBlockType _eventsHandler;
    NSMutableSet *_outstandingEventIdentifiers;
    NSString *_clientIdentifier;
}

@property (copy, nonatomic, readonly) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)systemScheduler;
- (_Bool)removeEvents:(id)arg1 error:(id *)arg2;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1 clientIdentifier:(id)arg2 eventHandlerQueue:(id)arg3;
- (void)beginReceivingEventsWithHandler:(CDUnknownBlockType)arg1;
- (id)allScheduledEventsWithError:(id *)arg1;
- (void)checkForDueEventsWithCompletion:(CDUnknownBlockType)arg1;
- (id)eventWithIdentifier:(id)arg1 dueDateComponents:(id)arg2 eventOptions:(unsigned long long)arg3;
- (_Bool)replaceAllScheduledEventsWithEvents:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllEventsWithError:(id *)arg1;
- (void)eventsDidFire:(id)arg1;
- (_Bool)scheduleEvents:(id)arg1 error:(id *)arg2;
- (id)eventWithIdentifier:(id)arg1 dueDate:(id)arg2 eventOptions:(unsigned long long)arg3;

@end
