/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTLanguageCodeUpdateMonitor : VTEventMonitor

{
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 withLanguageCode:(id)arg2;
- (void)_didReceiveLanguageCodeUpdate;

@end
