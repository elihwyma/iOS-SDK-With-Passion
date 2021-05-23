/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CUPowerSourceMonitor, HKObserverSet;

@protocol OS_dispatch_queue;

@interface HDDevicePowerMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    CUPowerSourceMonitor *_monitor;
    _Bool _isCharging;
}

@property (readonly) _Bool primarySourceIsCharging;

- (id)init;
- (void)dealloc;
- (void)powerSourceFound:(id)arg1;
- (void)powerSourceLost:(id)arg1;
- (void)powerSource:(id)arg1 changed:(unsigned int)arg2;
- (void)_queue_updatePrimaryPowerSourceState:(int)arg1;
- (void)addDevicePowerObserver:(id)arg1 queue:(id)arg2;
- (void)removeDevicePowerObserver:(id)arg1;

@end
