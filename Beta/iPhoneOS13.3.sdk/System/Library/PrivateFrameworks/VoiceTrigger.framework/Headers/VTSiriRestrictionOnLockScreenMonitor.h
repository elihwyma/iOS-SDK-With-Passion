/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <VoiceTrigger/VTEventMonitor.h>

@class NSString;

@interface VTSiriRestrictionOnLockScreenMonitor : VTEventMonitor

{
    _Bool _isRestricted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (_Bool)isRestricted;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (_Bool)_checkSiriRestrictedOnLockScreen;
- (void)_notifyObserver:(id)arg1 withRestricted:(_Bool)arg2;
- (void)_didReceiveRestrictionChanged:(_Bool)arg1;
- (void)_didReceiveRestrictionChangedInQueue:(_Bool)arg1;

@end
