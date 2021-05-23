/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechControllerMonitor : CSEventMonitor

{
    unsigned long long _recordState;
}

@property (nonatomic) unsigned long long recordState;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2;

@end
