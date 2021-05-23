/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMesaUnlockTrigger.h>

@class NSString;

@protocol SBBiometricUnlockBehaviorConfigurationDelegate;

@interface SBAccessibilityMesaUnlockTrigger : SBMesaUnlockTrigger

{
    id <SBBiometricUnlockBehaviorConfigurationDelegate> _behaviorConfigurationDelegate;
    SBMesaUnlockTrigger *_baseTrigger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)screenOff;
- (_Bool)bioUnlock;
- (void)significantUserInteractionOccurred;
- (void)menuButtonDown;
- (void)menuButtonUp;
- (void)fingerOn;
- (void)mesaUnlockTriggerFired:(id)arg1;
- (void)fingerOff;
- (id)initWithUnlockBehaviorConfigurationDelegate:(id)arg1 baseTrigger:(id)arg2;

@end
