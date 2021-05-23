/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class AVVoiceTriggerClient;

@interface CSAudioServerCrashMonitor : CSEventMonitor

{
    unsigned long long _serverState;
    AVVoiceTriggerClient *_alwaysOnProcessorController;
}

@property (nonatomic) unsigned long long serverState;
@property (retain, nonatomic) AVVoiceTriggerClient *alwaysOnProcessorController;

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_didReceiveMediaserverNotification:(unsigned long long)arg1;
- (void)_mediaserverdDidRestart;
- (void)_notifyObserver:(id)arg1 withMediaserverState:(unsigned long long)arg2;
- (void)notifyAudioServerCrash;

@end
