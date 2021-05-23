/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBiCloudPasscodeRequirementLockoutController : NSObject

{
    SBSoftLockoutController *_lockOutController;
    SBFMobileKeyBag *_mobileKeybag;
    _Bool _providedPasscode;
}

@property (nonatomic, readonly) _Bool desiresPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithLockScreenManager:(id)arg1 mobileKeyBag:(id)arg2;
- (void)noteAuthenticationSucceededWithPasscode:(id)arg1;
- (_Bool)_deviceHasComplexPasscode;
- (_Bool)requiresLockout;

@end
