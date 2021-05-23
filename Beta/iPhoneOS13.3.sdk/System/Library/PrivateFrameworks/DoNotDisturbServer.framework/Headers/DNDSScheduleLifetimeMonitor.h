/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@protocol DNDSScheduleLifetimeMonitorDataSource;

@interface DNDSScheduleLifetimeMonitor : DNDSBaseLifetimeMonitor

{
    PCPersistentTimer *_lifetimeTimer;
}

@property (weak, nonatomic) id <DNDSScheduleLifetimeMonitorDataSource> dataSource;

+ (Class)lifetimeClass;

- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;
- (id)_activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3 scheduleSettings:(id)arg4 calendar:(id)arg5 ignoreMatchScheduleStartDate:(_Bool)arg6;
- (id)activeDateIntervalForScheduleLifetime:(id)arg1 assertionStartDate:(id)arg2 date:(id)arg3;

@end
