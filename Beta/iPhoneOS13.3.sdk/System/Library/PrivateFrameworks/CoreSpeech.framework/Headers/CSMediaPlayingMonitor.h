/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor

{
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;
- (void)_notePossiblePlayPausedStateChange:(id)arg1;
- (void)initializeMediaPlayingState;
- (long long)mediaPlayingState;
- (void)mediaPlayingStateWithCompletion:(CDUnknownBlockType)arg1;

@end
