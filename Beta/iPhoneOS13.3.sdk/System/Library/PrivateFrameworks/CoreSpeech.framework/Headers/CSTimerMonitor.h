/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class MTTimerManager, NSObject;

@protocol OS_dispatch_queue;

@interface CSTimerMonitor : CSEventMonitor

{
    long long _timerFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTTimerManager *_timerManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 timerIsFiringState:(long long)arg2;
- (void)_timerIsFiring:(id)arg1;
- (void)_timerDismissed:(id)arg1;
- (void)_timerStateReset:(id)arg1;
- (_Bool)_isSleepTimer:(id)arg1;
- (void)initializeTimerState;
- (long long)timerState;

@end
