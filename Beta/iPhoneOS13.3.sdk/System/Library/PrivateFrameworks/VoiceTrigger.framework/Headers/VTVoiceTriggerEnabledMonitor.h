/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTVoiceTriggerEnabledMonitor : VTEventMonitor

{
    int _notifyToken;
    _Bool _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;
- (_Bool)_checkVoiceTriggerEnabled;
- (void)_didReceiveVoiceTriggerSettingChanged:(_Bool)arg1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(_Bool)arg1;

@end
