/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CSAudioSessionMonitor : CSEventMonitor

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _audioSessionState;
}

@property (nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)_notifyObserver:(id)arg1 withAudioSessionState:(unsigned long long)arg2;
- (void)notifyAduioSessionStateChange:(unsigned long long)arg1;

@end
