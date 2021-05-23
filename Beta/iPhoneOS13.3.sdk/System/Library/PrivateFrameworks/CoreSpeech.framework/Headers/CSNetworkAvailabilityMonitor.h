/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSNetworkAvailabilityMonitor : CSEventMonitor

{
    int _notifyToken;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isAvailable;
- (void)_stopMonitoring;
- (void)_availabilityChanged;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(_Bool)arg1;
- (void)_notifyObserver:(id)arg1 withNetworkAvailability:(_Bool)arg2;

@end
