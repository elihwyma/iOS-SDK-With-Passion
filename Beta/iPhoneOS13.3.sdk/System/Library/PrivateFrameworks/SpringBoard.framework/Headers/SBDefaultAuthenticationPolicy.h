/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBSoftwareUpdatePasscodePolicyManager, SBiCloudPasscodeRequirementLockoutController, SecureBackup;

@interface SBDefaultAuthenticationPolicy : NSObject

{
    SBiCloudPasscodeRequirementLockoutController *_iCloudPasscodeRequirementLockoutController;
    SBSoftwareUpdatePasscodePolicyManager *_softwareUpdatePasscodePolicyManager;
    SecureBackup *_secureBackupHelper;
}

@property (retain, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper;
@property (retain, nonatomic) SBiCloudPasscodeRequirementLockoutController *iCloudPasscodeRequirementLockoutController;
@property (retain, nonatomic) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)usesSecureMode;
- (void)wipeDeviceWithReason:(id)arg1;
- (_Bool)shouldClearBlockStateOnSync;
- (void)cachePasscode:(id)arg1;
- (void)clearPasscodeCache;
- (_Bool)allowAuthenticationRevocation;
- (void)passcodeAuthenticationFailedWithError:(id)arg1;

@end
