/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpringboardStartMonitor : CSEventMonitor

{
    int _notifyToken;
    _Bool _isSpringBoardStarted;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (_Bool)_checkSpringBoardStarted;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isSpringboardStarted;
- (void)_didReceiveSpringboardStarted:(_Bool)arg1;
- (void)_notifyObserver:(id)arg1 withStarted:(_Bool)arg2;
- (void)_didReceiveSpringboardStartedInQueue:(_Bool)arg1;

@end
