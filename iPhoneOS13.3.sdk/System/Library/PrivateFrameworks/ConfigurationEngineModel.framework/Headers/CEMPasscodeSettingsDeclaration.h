//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber;

@interface CEMPasscodeSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
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

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowSimple:(id)arg2 withForcePIN:(id)arg3 withMaxFailedAttempts:(id)arg4 withMaxInactivity:(id)arg5 withMaxPINAgeInDays:(id)arg6 withMinComplexChars:(id)arg7 withMinLength:(id)arg8 withRequireAlphanumeric:(id)arg9 withPinHistory:(id)arg10 withMaxGracePeriod:(id)arg11 withMinutesUntilFailedLoginReset:(id)arg12 withChangeAtNextAuth:(id)arg13 withManualFetchingWhenRoaming:(id)arg14 withAllowFingerprintForUnlock:(id)arg15 withAllowFingerprintModification:(id)arg16 withAllowPasscodeModification:(id)arg17 withAllowAutoUnlock:(id)arg18;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSNumber *payloadAllowAutoUnlock; // @synthesize payloadAllowAutoUnlock=_payloadAllowAutoUnlock;
@property(copy, nonatomic) NSNumber *payloadAllowPasscodeModification; // @synthesize payloadAllowPasscodeModification=_payloadAllowPasscodeModification;
@property(copy, nonatomic) NSNumber *payloadAllowFingerprintModification; // @synthesize payloadAllowFingerprintModification=_payloadAllowFingerprintModification;
@property(copy, nonatomic) NSNumber *payloadAllowFingerprintForUnlock; // @synthesize payloadAllowFingerprintForUnlock=_payloadAllowFingerprintForUnlock;
@property(copy, nonatomic) NSNumber *payloadManualFetchingWhenRoaming; // @synthesize payloadManualFetchingWhenRoaming=_payloadManualFetchingWhenRoaming;
@property(copy, nonatomic) NSNumber *payloadChangeAtNextAuth; // @synthesize payloadChangeAtNextAuth=_payloadChangeAtNextAuth;
@property(copy, nonatomic) NSNumber *payloadMinutesUntilFailedLoginReset; // @synthesize payloadMinutesUntilFailedLoginReset=_payloadMinutesUntilFailedLoginReset;
@property(copy, nonatomic) NSNumber *payloadMaxGracePeriod; // @synthesize payloadMaxGracePeriod=_payloadMaxGracePeriod;
@property(copy, nonatomic) NSNumber *payloadPinHistory; // @synthesize payloadPinHistory=_payloadPinHistory;
@property(copy, nonatomic) NSNumber *payloadRequireAlphanumeric; // @synthesize payloadRequireAlphanumeric=_payloadRequireAlphanumeric;
@property(copy, nonatomic) NSNumber *payloadMinLength; // @synthesize payloadMinLength=_payloadMinLength;
@property(copy, nonatomic) NSNumber *payloadMinComplexChars; // @synthesize payloadMinComplexChars=_payloadMinComplexChars;
@property(copy, nonatomic) NSNumber *payloadMaxPINAgeInDays; // @synthesize payloadMaxPINAgeInDays=_payloadMaxPINAgeInDays;
@property(copy, nonatomic) NSNumber *payloadMaxInactivity; // @synthesize payloadMaxInactivity=_payloadMaxInactivity;
@property(copy, nonatomic) NSNumber *payloadMaxFailedAttempts; // @synthesize payloadMaxFailedAttempts=_payloadMaxFailedAttempts;
@property(copy, nonatomic) NSNumber *payloadForcePIN; // @synthesize payloadForcePIN=_payloadForcePIN;
@property(copy, nonatomic) NSNumber *payloadAllowSimple; // @synthesize payloadAllowSimple=_payloadAllowSimple;
// - (void).cxx_destruct;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

@end

