/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface HDXPCAlarmScheduler : NSObject

{
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addAlarm:(id)arg1;
- (void)removeAlarm:(id)arg1;
- (id)diagnosticDescription;
- (void)scheduleEvent:(id)arg1;
- (void)unscheduleEventWithName:(id)arg1;
- (void)unittest_fireEvent:(id)arg1;
- (void)_queue_handleXPCEvent:(id)arg1;
- (void)_queue_handleEvent:(id)arg1;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)_queue_scheduleEvent:(id)arg1;
- (void)_queue_unscheduleEventWithName:(id)arg1;

@end
