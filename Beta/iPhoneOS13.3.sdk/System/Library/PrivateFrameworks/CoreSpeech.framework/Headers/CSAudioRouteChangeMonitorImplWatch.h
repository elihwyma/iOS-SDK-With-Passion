/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSAudioRouteChangeMonitor.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isHearstConnected;
}

- (id)init;
- (void)_stopMonitoring;
- (void)activeAudioRouteDidChange:(id)arg1;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)_fetchHearstConnectionState;
- (void)_notifyHearstConnectionState:(_Bool)arg1;
- (void)getHearstConnected:(CDUnknownBlockType)arg1;
- (_Bool)hearstConnected;
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;
- (_Bool)jarvisConnected;

@end
