/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor

{
    _Bool _isListeningEnabled;
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;
- (void)_didReceiveAOPListeningStateChange:(_Bool)arg1;

@end
