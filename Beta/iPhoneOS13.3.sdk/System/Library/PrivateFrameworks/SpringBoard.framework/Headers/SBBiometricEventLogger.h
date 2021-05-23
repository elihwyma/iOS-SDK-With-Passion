/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BiometricKit, NSString;

@protocol SBUIBiometricResource;

@interface SBBiometricEventLogger : NSObject

{
    BiometricKit *_biometricKit;
    _Bool _isScreenOn;
    _Bool _passcodeSuccessAfterBioFailureTriggerArmed;
    id <SBUIBiometricResource> _biometricResource;
    _Bool _fingerOnWithScreenOn;
    unsigned long long _fingerOnTime;
    unsigned long long _keybagUnlockTime;
}

@property (nonatomic) unsigned long long fingerOnTime;
@property (nonatomic) _Bool fingerOnWithScreenOn;
@property (nonatomic) unsigned long long keybagUnlockTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logEvent:(unsigned int)arg1;
+ (void)logClass:(unsigned char)arg1 code:(unsigned int)arg2;

- (id)init;
- (void)timestampEvent:(unsigned long long)arg1;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)_clearEverything;
- (void)_authRequestCompleted:(id)arg1;
- (void)_screenTurnedOn:(id)arg1;
- (void)_backlightLevelChanged:(id)arg1;
- (void)_fingerOn:(id)arg1;
- (void)_tryAgain:(id)arg1;
- (void)_keybagBioUnlock:(id)arg1;
- (void)_unlockAnimationWillStart:(id)arg1;
- (void)_prearmMatch:(id)arg1;
- (void)_systemDidWakeFromSleep:(id)arg1;
- (void)_passcodePromptCancelled:(id)arg1;
- (void)_coversheetSwipedForDismissal:(id)arg1;
- (void)_passcodeViewTransitionedToPasscode:(id)arg1;
- (void)_resetPasscodeStateMachine;
- (unsigned long long)_machTimeInMilliseconds;
- (void)_biometricAuthenticationSucceeded;
- (void)_passcodeAuthenticationSucceeded;
- (void)_biometricAuthenticationFailed;
- (_Bool)_shouldSyslogTimestamps;

@end
