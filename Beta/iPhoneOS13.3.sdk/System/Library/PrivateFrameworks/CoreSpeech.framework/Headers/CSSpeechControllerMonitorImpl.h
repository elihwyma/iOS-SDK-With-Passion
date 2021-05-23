/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSSpeechControllerMonitor.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CSSpeechControllerMonitorImpl : CSSpeechControllerMonitor

{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_pendingRecordingStopUUID;
}

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2;
- (void)setRecordState:(unsigned long long)arg1;
- (void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2 withEventUUID:(id)arg3;
- (void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2;

@end
