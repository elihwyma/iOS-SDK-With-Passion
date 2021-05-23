/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSJarvisTriggerModeMonitor : CSEventMonitor

{
    long long _triggerMode;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (long long)getTriggerMode;
- (long long)_fetchTriggerMode;
- (void)_notifyObserver:(id)arg1 withJarvisTriggerMode:(long long)arg2;
- (void)setTriggerMode:(long long)arg1;
- (void)_notifyJarvisTriggerModeDidChanged;

@end
