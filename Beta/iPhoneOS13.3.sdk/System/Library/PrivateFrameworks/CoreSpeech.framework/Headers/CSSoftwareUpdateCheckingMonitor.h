/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor

{
    int _notifyToken;
    _Bool _isSoftwareUpdateCheckingRunning;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isSoftwareUpdateCheckingRunning;
- (_Bool)_checkSoftwareUpdateCheckingState;
- (void)_didReceiveSoftwareUpdateCheckingStateChanged:(_Bool)arg1;
- (unsigned char)_softwareUpdateCheckingState;
- (void)_notifyObserver:(id)arg1 withSoftwareUpdateCheckingRunning:(_Bool)arg2;
- (void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(_Bool)arg1;

@end
