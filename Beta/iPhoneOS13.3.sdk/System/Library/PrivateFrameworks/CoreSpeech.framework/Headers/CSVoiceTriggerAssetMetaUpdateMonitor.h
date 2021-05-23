/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor

{
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1;
- (const char *)_asssetMetaUpdatedKey;
- (void)_didReceiveNewVoiceTriggerAssetMetaData;

@end
