/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)getHearstConnected:(CDUnknownBlockType)arg1;
- (_Bool)hearstConnected;
- (void)getJarvisConnected:(CDUnknownBlockType)arg1;
- (_Bool)jarvisConnected;

@end
