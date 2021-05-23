/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class NSString;

@interface CSCommandControlStreamEventMonitor : CSEventMonitor

{
    _Bool _isCommandControlStreaming;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (_Bool)isStreaming;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyStopCommandControl;
- (void)commandControlBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)commandControlBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;
- (void)commandControlBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)commandControlBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;

@end
