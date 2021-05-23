/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSampleType.h>

@interface HKCategoryType : HKSampleType

+ (id)_categoryTypeWithCode:(long long)arg1;

- (long long)_defaultValue;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (_Bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id *)arg3;
- (_Bool)_acceptsValue:(long long)arg1;
- (long long)_categoryValueForValue:(long long)arg1;

@end
