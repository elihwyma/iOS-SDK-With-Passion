/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBAlertItemsController, SBBacklightController, SBConferenceManager, SBIdleTimerGlobalStateMonitor, SBIdleTimerSettings, SBLockScreenManager, SBMainWorkspace, SBPrototypeController, SBTelephonyManager, SBUIBiometricResource, SpringBoard;

@interface SBIdleTimerDescriptorFactory : NSObject

{
    SBIdleTimerGlobalStateMonitor *_stateMonitor;
    SBPrototypeController *_override_prototypeController;
    SBIdleTimerSettings *_override_idleTimerPrototypeSettings;
    SBLockScreenManager *_override_lockScreenManager;
    SBMainWorkspace *_override_mainWorkspace;
    SBUIBiometricResource *_override_biometricResource;
    SBTelephonyManager *_override_telephonyManager;
    SBConferenceManager *_override_conferenceManager;
    SBBacklightController *_override_backlightController;
    SpringBoard *_springBoard;
    SBAlertItemsController *_alertItemsController;
}

@property (retain, nonatomic, getter=_springBoard, setter=_setSpringBoard:) SpringBoard *springBoard;
@property (retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController;
@property (retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController;
@property (retain, nonatomic, getter=_prototypeController, setter=_setPrototypeController:) SBPrototypeController *prototypeController;
@property (retain, nonatomic, getter=_idleTimerPrototypeSettings, setter=_setIdleTimerPrototypeSettings:) SBIdleTimerSettings *idleTimerPrototypeSettings;
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace;
@property (retain, nonatomic, getter=_biometricResource, setter=_setBiometricResource:) SBUIBiometricResource *biometricResource;
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager;
@property (retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager;

+ (id)disabledIdleTimerDescriptor;

- (_Bool)updateIdleTimerSettingsForSecurityDefaults:(id)arg1;
- (_Bool)updateIdleTimerSettingsForAutoLockTimeout:(id)arg1;
- (_Bool)updateIdleTimerSettingsForTelephony:(id)arg1;
- (_Bool)updateIdleTimerSettingsForPrototypeSettings:(id)arg1;
- (_Bool)sanitizeSettingsAfterInitialSetup:(id)arg1;
- (_Bool)updateIdleTimerSettingsForPowerDefaults:(id)arg1;
- (_Bool)updateIdleTimerSettingsForDefaultWarnInterval:(id)arg1;
- (_Bool)updateIdleTimerSettingsWithCustomTimeouts:(id)arg1 fromBehavior:(id)arg2;
- (_Bool)updateIdleTimerSettingsForUnlockedWithMesa:(id)arg1;
- (_Bool)updateIdleTimerSettingsForBatterySaverMode:(id)arg1;
- (_Bool)updateIdleTimerSettingsForFaceDown:(id)arg1;
- (_Bool)updateIdleTimerSettingsForWarnInterval:(id)arg1;
- (_Bool)updateIdleTimerSettingsForDuration:(long long)arg1 descriptor:(id)arg2;
- (_Bool)sanitizeDescriptorForLockscreenDefaults:(id)arg1;
- (_Bool)updateIdleTimerSettingsForThermalBlockedMode:(id)arg1;
- (_Bool)updateIdleTimerSettingsForActiveClientConfiguration:(id)arg1;
- (_Bool)sanitizeSettingsAfterSetup:(id)arg1 duration:(long long)arg2;
- (_Bool)_shouldUseAttentionSensor;
- (void)_updateIdleTimerSettingsWarnInterval:(id)arg1 totalInterval:(double)arg2;
- (_Bool)_isIdleDurationForever:(double)arg1;
- (id)initWithGlobalStateMonitor:(id)arg1;
- (id)idleTimerDescriptorForBehavior:(id)arg1;
- (_Bool)sanitizeTotalDuration:(id)arg1;
- (_Bool)sanitizeWarnInterval:(id)arg1;

@end
