/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSLockScreenSettings, NSString, SBLiftToWakeController, SBUIBiometricResource;

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBDashBoardMesaUnlockBehaviorConfiguration : NSObject

{
    id <SBBiometricUnlockBehaviorConfigurationDelegate> _delegate;
    SBLiftToWakeController *_liftToWakeController;
    CSLockScreenSettings *_prototypeSettings;
    SBUIBiometricResource *_biometricResource;
    Class _currentTriggerClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBBiometricUnlockBehaviorConfigurationDelegate> delegate;

- (void)dealloc;
- (void)_accessibilityOptionsChanged:(id)arg1;
- (void)_evaluateTriggerClass;
- (id)_unlockTriggerWithClass:(Class)arg1;
- (Class)_expectedTriggerClassIncludingAccessibility:(_Bool)arg1;
- (_Bool)_isAccessibilityRestingUnlockPreferenceEnabled;
- (void)liftToWakeControllerEnablementDidChange:(id)arg1;
- (id)newBehaviorForCurrentConfiguration;
- (id)initWithLiftToWakeController:(id)arg1 biometricResource:(id)arg2 lockScreenPrototypeSettings:(id)arg3;
- (Class)_currentUnlockTriggerClass;

@end
