/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSCoverSheetViewController, NSString;

@protocol SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfiguration, SBBiometricUnlockBehaviorDelegate;

@interface SBDashBoardBiometricUnlockController : NSObject

{
    CSCoverSheetViewController *_coverSheetViewController;
    id <SBBiometricUnlockBehaviorConfiguration> _biometricUnlockBehaviorConfiguration;
    id <SBBiometricUnlockBehavior> _biometricUnlockBehavior;
    id <SBBiometricUnlockBehaviorDelegate> _biometricUnlockBehaviorDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (weak, nonatomic) id <SBBiometricUnlockBehaviorDelegate> biometricUnlockBehaviorDelegate;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)setAuthenticated:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (_Bool)isLockScreenShowingDefaultContent;
- (id)initWithCoverSheetViewController:(id)arg1;
- (void)biometricUnlockBehaviorConfigurationDidChange:(id)arg1;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (_Bool)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (id)_mesaUnlockBehavior;
- (void)noteMenuButtonDown;
- (void)noteMenuButtonUp;

@end
