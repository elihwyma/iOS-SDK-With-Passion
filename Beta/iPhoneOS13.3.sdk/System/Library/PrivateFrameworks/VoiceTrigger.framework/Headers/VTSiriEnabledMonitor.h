/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSiriEnabledMonitor : VTEventMonitor

{
    _Bool _isSiriEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;
- (void)_didReceiveSiriSettingChanged:(_Bool)arg1;

@end
