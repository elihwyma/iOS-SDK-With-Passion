/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/FBSServiceFacility.h>

@protocol SBSystemServiceServerAppSwitcherDelegate, SBSystemServiceServerBiometricsDelegate, SBSystemServiceServerHardwareButtonDelegate, SBSystemServiceServerSoftwareUpdateDelegate, SBSystemServiceServerStateDumpDelegate, SBSystemServiceServerTestAutomationDelegate;

@interface SBSystemServiceServer : FBSServiceFacility

{
    id <SBSystemServiceServerAppSwitcherDelegate> _appSwitcherDelegate;
    id <SBSystemServiceServerBiometricsDelegate> _biometricsDelegate;
    id <SBSystemServiceServerHardwareButtonDelegate> _hardwareButtonDelegate;
    id <SBSystemServiceServerSoftwareUpdateDelegate> _softwareUpdateDelegate;
    id <SBSystemServiceServerTestAutomationDelegate> _testAutomationDelegate;
    id <SBSystemServiceServerStateDumpDelegate> _stateDumpDelegate;
}

@property (weak, nonatomic) id <SBSystemServiceServerAppSwitcherDelegate> appSwitcherDelegate;
@property (weak, nonatomic) id <SBSystemServiceServerBiometricsDelegate> biometricsDelegate;
@property (weak, nonatomic) id <SBSystemServiceServerHardwareButtonDelegate> hardwareButtonDelegate;
@property (weak, nonatomic) id <SBSystemServiceServerSoftwareUpdateDelegate> softwareUpdateDelegate;
@property (weak, nonatomic) id <SBSystemServiceServerTestAutomationDelegate> testAutomationDelegate;
@property (weak, nonatomic) id <SBSystemServiceServerStateDumpDelegate> stateDumpDelegate;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)_handleRequestAppSwitcherAppearanceForHiddenApp:(id)arg1 fromClient:(id)arg2;
- (void)_handleBiometricsFetchUnlockCredentialSetMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonAcquireAssertionMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonSetPressEventMask:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonGetToggleButtonState:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonSetRequestsHIDEvents:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonSetHapticType:(id)arg1 fromClient:(id)arg2;
- (void)_handleHardwareButtonGetHapticType:(id)arg1 fromClient:(id)arg2;
- (void)_handleSoftwareUpdateSetPasscodePolicy:(id)arg1 fromClient:(id)arg2;
- (void)_handleSoftwareUpdateGetPasscodePolicy:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSuspendAllDisplays:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetAlertState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetIdleTimerState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetOrientationLockState:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationResetToHomeScreen:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationRequestHUDHiddenAssertion:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationBlockApplicationForScreenTime:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationSetTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeEnableRemoteStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleStateDumpServiceClientMessageTypeDisableRemoteStateDump:(id)arg1 fromClient:(id)arg2;
- (void)_handleTestAutomationGetScencesForBundleIdentifier:(id)arg1 fromClient:(id)arg2;

@end
