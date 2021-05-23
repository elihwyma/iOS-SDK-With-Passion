/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSClamshellStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)isClamshellClosed;
- (void)_notifyObserver:(id)arg1 withClamshellState:(_Bool)arg2;
- (void)_didReceiveClamshellStateChangeNotification:(_Bool)arg1;

@end
