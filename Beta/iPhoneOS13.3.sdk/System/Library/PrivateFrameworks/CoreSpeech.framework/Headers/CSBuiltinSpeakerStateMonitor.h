/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class AVVoiceTriggerClient, NSString;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor

{
    AVVoiceTriggerClient *_alwaysOnProcessorController;
}

@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (unsigned long long)currentBuiltinSpeakerState;
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)arg1;
- (void)_notifyObserver:(id)arg1 withBuiltinSpeakerState:(unsigned long long)arg2;
- (_Bool)isBuiltinSpeakerMuted;

@end
