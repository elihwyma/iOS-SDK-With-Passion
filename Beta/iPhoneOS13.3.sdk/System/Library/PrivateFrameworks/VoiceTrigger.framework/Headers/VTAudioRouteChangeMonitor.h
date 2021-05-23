/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTAudioRouteChangeMonitor : VTEventMonitor

{
    unsigned long long _hearstConnection;
    struct opaqueCMSession *_cmSession;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1;
- (id)_CMSessionDispatchQueue;
- (unsigned long long)_updateHearstConnectionStatus;
- (_Bool)_hasInEarDetectSupport:(struct __CFDictionary *)arg1;
- (_Bool)_isActiveRoute:(struct __CFDictionary *)arg1;
- (_Bool)_hasDoAPSupport:(struct __CFDictionary *)arg1;
- (void)updateExternalRouteConnectionStatus;
- (unsigned long long)hearstConnectionStatus;

@end
