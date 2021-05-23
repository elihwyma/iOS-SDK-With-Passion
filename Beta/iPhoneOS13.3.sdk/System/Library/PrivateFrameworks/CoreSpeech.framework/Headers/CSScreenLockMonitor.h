/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSScreenLockMonitor : CSEventMonitor

{
    _Bool _isScreenLocked;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_stopMonitoring;
- (_Bool)isScreenLocked;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)_queryIsScreenLocked;
- (void)_notifyObserver:(id)arg1 isScreenLocked:(_Bool)arg2;
- (void)screenLockStateChanged;

@end
