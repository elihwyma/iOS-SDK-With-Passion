/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSLockScreenMesaSettings, NSString, SBHomeHardwareButton, SBMesaUnlockTrigger;

@protocol SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardMesaUnlockBehavior : NSObject

{
    long long _failedMesaUnlockAttempts;
    CSLockScreenMesaSettings *_mesaSettings;
    SBHomeHardwareButton *_homeHardwareButton;
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
    SBMesaUnlockTrigger *_trigger;
}

@property (retain, nonatomic, getter=_getHomeHardwareButton, setter=_setHomeHardwareButton:) SBHomeHardwareButton *homeHardwareButton;
@property (retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger;
@property (nonatomic, readonly, getter=_mesaSettings) CSLockScreenMesaSettings *mesaSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setAuthenticated:(_Bool)arg1;
- (void)screenOff;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (id)_homeHardwareButton;
- (id)initWithMesaSettings:(id)arg1 andUnlockTrigger:(id)arg2;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(_Bool)arg1;
- (id)_feedbackForFailureSettings:(id)arg1;
- (id)_feedbackForPasscodeEvent;
- (void)_handleMesaFailure;
- (id)_failureSettingsForFailAttempt:(long long)arg1;
- (void)significantUserInteractionDidOccur;

@end
