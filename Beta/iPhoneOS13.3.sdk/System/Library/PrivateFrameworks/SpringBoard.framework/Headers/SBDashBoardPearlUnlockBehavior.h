/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSLockScreenPearlSettings, NSString, SBMesaUnlockTrigger;

@protocol SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardPearlUnlockBehavior : NSObject

{
    CSLockScreenPearlSettings *_pearlSettings;
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
    SBMesaUnlockTrigger *_trigger;
}

@property (retain, nonatomic, getter=_trigger, setter=_setTrigger:) SBMesaUnlockTrigger *trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (id)initWithPearlSettings:(id)arg1 andUnlockTrigger:(id)arg2;
- (void)_handlePearlFailure;
- (id)_feedbackForBioUnlockEventThatWasSpontaneous:(_Bool)arg1;
- (id)_feedbackForFailureSettings:(id)arg1;
- (id)_feedbackForPasscodeEvent;

@end
