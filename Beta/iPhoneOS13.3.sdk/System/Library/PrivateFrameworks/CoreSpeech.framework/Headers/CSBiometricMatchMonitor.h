/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class BKDevice, NSString;

@protocol CSBiometricMatchMonitorDelegate;

@interface CSBiometricMatchMonitor : CSEventMonitor

{
    id <CSBiometricMatchMonitorDelegate> _delegate;
    BKDevice *_biometricDevice;
}

@property (retain, nonatomic) BKDevice *biometricDevice;
@property (weak, nonatomic) id <CSBiometricMatchMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)startObserving;
- (void)_stopMonitoring;
- (void)device:(id)arg1 matchEventOccurred:(id)arg2;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)getLastBiometricMatchEvent:(_Bool *)arg1 atTime:(unsigned long long *)arg2;
- (unsigned long long)getBiometricMatchResultForTriggerTimeStamp:(unsigned long long)arg1;

@end
