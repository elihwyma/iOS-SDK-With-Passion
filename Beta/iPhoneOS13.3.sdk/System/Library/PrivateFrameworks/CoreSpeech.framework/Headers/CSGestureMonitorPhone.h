/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSGestureMonitor.h>

@class CMWakeGestureManager, NSString;

@interface CSGestureMonitorPhone : CSGestureMonitor

{
    CMWakeGestureManager *_gestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_stopMonitoring;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_didReceiveWakeGesture;
- (void)_didReceiveSleepGesture;

@end
