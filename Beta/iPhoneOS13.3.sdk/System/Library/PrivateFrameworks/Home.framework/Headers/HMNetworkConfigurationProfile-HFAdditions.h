/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMNetworkConfigurationProfile.h>

@class NSString;

@interface HMNetworkConfigurationProfile (HFAdditions)

@property (copy, nonatomic, readonly) NSString *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;
@property (copy, nonatomic, readonly) NSString *hf_targetProtectionModeDetailedLocalizedTitle;
@property (copy, nonatomic, readonly) NSString *hf_targetProtectionModeDetailedLocalizedDescription;
@property (nonatomic, readonly) _Bool hf_hasProtectionModeMismatch;
@property (nonatomic, readonly) _Bool hf_targetProtectionModeIsValid;
@property (nonatomic, readonly) _Bool hf_hasCurrentNetworkAccessViolation;
@property (nonatomic, readonly) _Bool hf_requiresManualWiFiReconfiguration;

+ (id)hf_localizedDescriptionForAllowedHostPurpose:(unsigned long long)arg1;
+ (id)hf_localizedTitleForTargetProtectionMode:(long long)arg1;
+ (_Bool)hf_currentProtectionMode:(long long)arg1 isValidForTargetProtectionMode:(long long)arg2;
+ (_Bool)hf_targetProtectionModeIsValid:(long long)arg1;
+ (id)hf_detailedLocalizedTitleForTargetProtectionMode:(long long)arg1;
+ (id)hf_detailedLocalizedDescriptionForTargetProtectionMode:(long long)arg1;
+ (id)_localizedStringForPurpose;
+ (id)_validCurrentModesForTargetModes;

@end
