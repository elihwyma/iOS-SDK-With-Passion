/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor

{
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_didReceiveWirelessSplitterStateChange;
- (void)_notifyObserver:(id)arg1 splitterState:(unsigned long long)arg2 shouldDisableSpeakerVerificationInSplitterMode:(_Bool)arg3;
- (void)splitterState:(CDUnknownBlockType)arg1;

@end
