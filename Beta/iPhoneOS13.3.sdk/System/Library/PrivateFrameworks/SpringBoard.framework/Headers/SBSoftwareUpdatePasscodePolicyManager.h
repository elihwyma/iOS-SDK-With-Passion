/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBSoftwareUpdatePasscodePolicyManager : NSObject

{
    long long _softwareUpdatePasscodePolicy;
    SBSoftLockoutController *_softLockoutController;
    SBFMobileKeyBag *_mobileKeyBag;
    _Bool _passcodeAuthenticationSuccessPending;
}

@property (nonatomic) long long softwareUpdatePasscodePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2;
- (void)noteAuthenticationSucceededWithPasscode:(id)arg1;
- (_Bool)requiresLockout;
- (_Bool)consumePendingUnlock;
- (void)_authRequestCompleted:(id)arg1;
- (long long)_effectiveSoftwareUpdatePasscodePolicy;

@end
