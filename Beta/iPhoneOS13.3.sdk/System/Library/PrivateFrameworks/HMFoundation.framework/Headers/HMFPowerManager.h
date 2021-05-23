/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFUnfairLock, NSObject;

@protocol OS_dispatch_queue;

@interface HMFPowerManager

{
    HMFUnfairLock *_lock;
    _Bool _hasBattery;
    _Bool _running;
    float _batteryLevel;
    unsigned int _interestNotification;
    long long _batteryState;
    NSObject<OS_dispatch_queue> *_clientQueue;
    struct IONotificationPort *_notificationPort;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isRunning) _Bool running;
@property (nonatomic, readonly) struct IONotificationPort *notificationPort;
@property (nonatomic, readonly) unsigned int interestNotification;
@property (readonly) _Bool hasBattery;
@property (readonly) long long batteryState;
@property (readonly) float batteryLevel;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_deregisterForPowerSourceNotifications:(_Bool)arg1;
- (void)_registerForPowerSourceNotifications;
- (void)updateBatteryState:(unsigned int)arg1;

@end
