/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings, CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus, NSData, NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfo : CEMPayloadBase

{
    NSNumber *_statusHardwareEncryptionCaps;
    NSNumber *_statusPasscodePresent;
    NSNumber *_statusPasscodeCompliant;
    NSNumber *_statusPasscodeCompliantWithProfiles;
    NSNumber *_statusPasscodeLockGracePeriod;
    NSNumber *_statusPasscodeLockGracePeriodEnforced;
    NSNumber *_statusFDEEnabled;
    NSNumber *_statusFDEHasPersonalRecoveryKey;
    NSNumber *_statusFDEHasInstitutionalRecoveryKey;
    NSData *_statusFDEPersonalRecoveryKeyCMS;
    NSString *_statusFDEPersonalRecoveryKeyDeviceKey;
    NSNumber *_statusSystemIntegrityProtectionEnabled;
    CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *_statusFirewallSettings;
    CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *_statusFirmwarePasswordStatus;
}

@property (copy, nonatomic) NSNumber *statusHardwareEncryptionCaps;
@property (copy, nonatomic) NSNumber *statusPasscodePresent;
@property (copy, nonatomic) NSNumber *statusPasscodeCompliant;
@property (copy, nonatomic) NSNumber *statusPasscodeCompliantWithProfiles;
@property (copy, nonatomic) NSNumber *statusPasscodeLockGracePeriod;
@property (copy, nonatomic) NSNumber *statusPasscodeLockGracePeriodEnforced;
@property (copy, nonatomic) NSNumber *statusFDEEnabled;
@property (copy, nonatomic) NSNumber *statusFDEHasPersonalRecoveryKey;
@property (copy, nonatomic) NSNumber *statusFDEHasInstitutionalRecoveryKey;
@property (copy, nonatomic) NSData *statusFDEPersonalRecoveryKeyCMS;
@property (copy, nonatomic) NSString *statusFDEPersonalRecoveryKeyDeviceKey;
@property (copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled;
@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *statusFirewallSettings;
@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *statusFirmwarePasswordStatus;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithHardwareEncryptionCaps:(id)arg1 withPasscodePresent:(id)arg2 withPasscodeCompliant:(id)arg3 withPasscodeCompliantWithProfiles:(id)arg4 withPasscodeLockGracePeriod:(id)arg5 withPasscodeLockGracePeriodEnforced:(id)arg6 withFDEEnabled:(id)arg7 withFDEHasPersonalRecoveryKey:(id)arg8 withFDEHasInstitutionalRecoveryKey:(id)arg9 withFDEPersonalRecoveryKeyCMS:(id)arg10 withFDEPersonalRecoveryKeyDeviceKey:(id)arg11 withSystemIntegrityProtectionEnabled:(id)arg12 withFirewallSettings:(id)arg13 withFirmwarePasswordStatus:(id)arg14;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayload;

@end
