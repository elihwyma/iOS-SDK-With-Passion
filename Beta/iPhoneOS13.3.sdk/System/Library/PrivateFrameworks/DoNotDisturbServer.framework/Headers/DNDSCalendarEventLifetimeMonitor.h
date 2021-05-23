/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class EKEventStore, PCPersistentTimer;

@interface DNDSCalendarEventLifetimeMonitor : DNDSBaseLifetimeMonitor

{
    EKEventStore *_eventStore;
    PCPersistentTimer *_lifetimeTimer;
}

+ (Class)lifetimeClass;

- (id)init;
- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;
- (void)_calendarEventStoreChangedWithNotification:(id)arg1;
- (id)activeDateIntervalForCalendarEventLifetime:(id)arg1 assertionStartDate:(id)arg2;

@end
