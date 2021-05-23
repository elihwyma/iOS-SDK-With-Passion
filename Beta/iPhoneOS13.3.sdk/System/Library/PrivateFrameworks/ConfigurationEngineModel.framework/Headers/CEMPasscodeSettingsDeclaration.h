/*
 Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

@class NSNumber, NSString;

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase

{
    NSNumber *_payloadAllowSimple;
    NSNumber *_payloadForcePIN;
    NSNumber *_payloadMaxFailedAttempts;
    NSNumber *_payloadMaxInactivity;
    NSNumber *_payloadMaxPINAgeInDays;
    NSNumber *_payloadMinComplexChars;
    NSNumber *_payloadMinLength;
    NSNumber *_payloadRequireAlphanumeric;
    NSNumber *_payloadPinHistory;
    NSNumber *_payloadMaxGracePeriod;
    NSNumber *_payloadMinutesUntilFailedLoginReset;
    NSNumber *_payloadChangeAtNextAuth;
    NSNumber *_payloadManualFetchingWhenRoaming;
    NSNumber *_payloadAllowFingerprintForUnlock;
    NSNumber *_payloadAllowFingerprintModification;
    NSNumber *_payloadAllowPasscodeModification;
    NSNumber *_payloadAllowAutoUnlock;
}

@property (copy, nonatomic) NSNumber *payloadAllowSimple;
@property (copy, nonatomic) NSNumber *payloadForcePIN;
@property (copy, nonatomic) NSNumber *payloadMaxFailedAttempts;
@property (copy, nonatomic) NSNumber *payloadMaxInactivity;
@property (copy, nonatomic) NSNumber *payloadMaxPINAgeInDays;
@property (copy, nonatomic) NSNumber *payloadMinComplexChars;
@property (copy, nonatomic) NSNumber *payloadMinLength;
@property (copy, nonatomic) NSNumber *payloadRequireAlphanumeric;
@property (copy, nonatomic) NSNumber *payloadPinHistory;
@property (copy, nonatomic) NSNumber *payloadMaxGracePeriod;
@property (copy, nonatomic) NSNumber *payloadMinutesUntilFailedLoginReset;
@property (copy, nonatomic) NSNumber *payloadChangeAtNextAuth;
@property (copy, nonatomic) NSNumber *payloadManualFetchingWhenRoaming;
@property (copy, nonatomic) NSNumber *payloadAllowFingerprintForUnlock;
@property (copy, nonatomic) NSNumber *payloadAllowFingerprintModification;
@property (copy, nonatomic) NSNumber *payloadAllowPasscodeModification;
@property (copy, nonatomic) NSNumber *payloadAllowAutoUnlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)profileType;
+ (id)allowedPayloadKeys;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowSimple:(id)arg2 withForcePIN:(id)arg3 withMaxFailedAttempts:(id)arg4 withMaxInactivity:(id)arg5 withMaxPINAgeInDays:(id)arg6 withMinComplexChars:(id)arg7 withMinLength:(id)arg8 withRequireAlphanumeric:(id)arg9 withPinHistory:(id)arg10 withMaxGracePeriod:(id)arg11 withMinutesUntilFailedLoginReset:(id)arg12 withChangeAtNextAuth:(id)arg13 withManualFetchingWhenRoaming:(id)arg14 withAllowFingerprintForUnlock:(id)arg15 withAllowFingerprintModification:(id)arg16 withAllowPasscodeModification:(id)arg17 withAllowAutoUnlock:(id)arg18;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)multipleAllowed;
- (_Bool)mustBeSupervised;
- (int)activationLevel;
- (id)assetReferences;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;
- (id)serializePayloadWithAssetProviders:(id)arg1;

@end
