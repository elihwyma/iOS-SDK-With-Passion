/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKObjectType.h>

@interface HKObjectType (HKAdditions)

- (id)hk_metadataValueDisplayType;
- (id)hk_formatPrimaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2 formattingContext:(long long)arg3;
- (id)hk_primaryMetadataKey;
- (id)_hk_formatMetadataValueForMetadataKey:(id)arg1 object:(id)arg2 unitPreferenceController:(id)arg3;
- (id)hk_secondaryMetadataKey;
- (id)hk_formatMetadataValue:(id)arg1 displayType:(id)arg2 unitPreferencesController:(id)arg3;
- (id)hk_numberFormatterForUnit:(id)arg1 decimalPrecisionRule:(id)arg2;
- (Class)hk_valueFormatterClass;
- (id)hk_formatSecondaryMetadataValueForObject:(id)arg1 unitPreferencesController:(id)arg2;
- (long long)associatedSampleAggregationStyle;

@end
