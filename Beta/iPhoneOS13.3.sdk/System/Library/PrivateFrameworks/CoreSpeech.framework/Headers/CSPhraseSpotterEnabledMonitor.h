/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSPhraseSpotterEnabledMonitor : CSEventMonitor

{
    int _notifyToken;
    _Bool _isPhraseSpotterEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;
- (void)_phraseSpotterEnabledDidChange;
- (_Bool)_checkPhraseSpotterEnabled;
- (void)_didReceivePhraseSpotterSettingChangedInQueue:(_Bool)arg1;

@end
