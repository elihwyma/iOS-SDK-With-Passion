/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLowPowerModeMonitor : VTEventMonitor

{
    unsigned char _powerMode;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_didReceiveLowPowerModeChanged;
- (unsigned char)_checkPowerMode;
- (void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg1;
- (void)_notifyObserver:(id)arg1 withPowerMode:(unsigned char)arg2;
- (unsigned char)powerMode;
- (_Bool)isLowPowerMode;

@end
