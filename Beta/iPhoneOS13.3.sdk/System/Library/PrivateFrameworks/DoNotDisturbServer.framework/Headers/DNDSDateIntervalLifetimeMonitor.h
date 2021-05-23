/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturbServer/DNDSBaseLifetimeMonitor.h>

@class PCPersistentTimer;

@interface DNDSDateIntervalLifetimeMonitor : DNDSBaseLifetimeMonitor

{
    PCPersistentTimer *_lifetimeTimer;
}

+ (Class)lifetimeClass;

- (void)_timerFired:(id)arg1;
- (id)updateForModeAssertions:(id)arg1 date:(id)arg2;

@end
