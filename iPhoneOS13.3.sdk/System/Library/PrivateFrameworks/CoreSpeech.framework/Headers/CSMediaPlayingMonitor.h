//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor
{
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
// - (void).cxx_destruct;
- (void)mediaPlayingStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (long long)mediaPlayingState;
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;
- (void)_notePossiblePlayPausedStateChange:(id)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)initializeMediaPlayingState;
- (id)init;

@end

