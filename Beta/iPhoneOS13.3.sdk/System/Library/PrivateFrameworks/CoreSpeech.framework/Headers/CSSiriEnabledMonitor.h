/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSiriEnabledMonitor : CSEventMonitor

{
    _Bool _isSiriEnabled;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)isEnabled;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_notifyObserver:(id)arg1 withEnabled:(_Bool)arg2;
- (void)_didReceiveSiriSettingChanged:(_Bool)arg1;
- (_Bool)fetchIsEnabled;

@end
