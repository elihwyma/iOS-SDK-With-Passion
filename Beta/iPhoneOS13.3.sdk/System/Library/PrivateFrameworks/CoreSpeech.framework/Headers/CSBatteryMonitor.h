/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSBatteryMonitor : CSEventMonitor

{
    int _notifyToken;
    unsigned char _batteryState;
}

+ (id)sharedInstance;

- (id)init;
- (unsigned char)batteryState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (unsigned char)_checkBatteryState;
- (void)_didReceiveBatteryStatusChanged:(unsigned char)arg1;
- (void)_notifyObserver:(id)arg1 withBatteryState:(unsigned char)arg2;
- (void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)arg1;

@end
