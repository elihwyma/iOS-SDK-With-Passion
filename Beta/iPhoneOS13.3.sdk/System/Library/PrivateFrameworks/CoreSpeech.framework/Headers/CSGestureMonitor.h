/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSGestureMonitor : CSEventMonitor

{
    unsigned long long _wakeGestureTimestamp;
    unsigned long long _dismissalTimestamp;
}

@property (nonatomic) unsigned long long wakeGestureTimestamp;
@property (nonatomic) unsigned long long dismissalTimestamp;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isTriggerHandheld;

@end
