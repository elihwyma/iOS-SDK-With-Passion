/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (_Bool)isPresent;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)handleSpeechDetectionVADPresentChange:(id)arg1;

@end
