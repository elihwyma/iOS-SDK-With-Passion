/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@interface VTSiriAssertionMonitor : VTEventMonitor

{
    unsigned char _assertionState;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(_Bool)arg1;
- (void)enableAssertionReceived;
- (void)disableAssertionReceived;

@end
