/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBLockScreenManager;

@protocol BSInvalidatable, SBSoftLockoutControllerDelegate;

@interface SBSoftLockoutController : NSObject

{
    SBLockScreenManager *_lockScreenManager;
    unsigned long long _desiredBiometricLockoutState;
    id <BSInvalidatable> _passcodeRequiredAssertion;
    id <SBSoftLockoutControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBSoftLockoutControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isLocked) _Bool locked;
@property (nonatomic, readonly) _Bool showPasscode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (void)dealloc;
- (void)reload;
- (void)coverSheetViewControllerDidDismissPasscodeLockView:(id)arg1;
- (_Bool)unlockFromSource:(int)arg1;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1 lockScreenManager:(id)arg2;
- (void)_clearPasscodeRequiredAssertion;
- (void)_createPasscodeRequiredAssertion;
- (id)initWithBiometricLockoutState:(unsigned long long)arg1;

@end
