/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARDevicePerformanceLevel, NSTimer;

@protocol ARDevicePerformanceMonitorDelegate, OS_dispatch_queue;

@interface ARDevicePerformanceMonitor : NSObject

{
    id <ARDevicePerformanceMonitorDelegate> _delegate;
    ARDevicePerformanceLevel *_currentDeviceCondition;
    double _lastNotifiedTimeStamp;
    ARDevicePerformanceLevel *_pendingDeviceCondition;
    NSTimer *_notificationTimer;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (retain) ARDevicePerformanceLevel *currentDeviceCondition;
@property double lastNotifiedTimeStamp;
@property (retain) ARDevicePerformanceLevel *pendingDeviceCondition;
@property (retain) NSTimer *notificationTimer;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak) id <ARDevicePerformanceMonitorDelegate> delegate;

- (id)init;
- (void)dealloc;
- (id)_initialDeviceCondition;
- (void)_thermalStateChangedNotification:(id)arg1;
- (void)_processThermalStateChanged:(long long)arg1;
- (void)_updateDelegateWithDeviceCondition:(id)arg1;
- (void)_clearNotificationTimer;
- (void)_notificationTimerFired:(id)arg1;
- (_Bool)_shouldUpdateDelegateForDevicePerformanceLevel:(id)arg1;
- (void)_startNotificationTimerIfNeeded;
- (id)deviceCondition;

@end
