/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSFirstUnlockMonitor : CSEventMonitor

{
    int _notifyToken;
    _Bool _firstUnlocked;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isFirstUnlocked;
- (_Bool)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlock:(_Bool)arg1;
- (void)_notifyObserver:(id)arg1 withUnlocked:(_Bool)arg2;
- (void)_didReceiveFirstUnlockInQueue:(_Bool)arg1;
- (void)_firstUnlockNotified;

@end
