/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKObjectType.h>

@interface HKCharacteristicType : HKObjectType

- (_Bool)_validateCharacteristic:(id)arg1 error:(id *)arg2;
- (_Bool)_validateDateOfBirth:(id)arg1 error:(id *)arg2;
- (_Bool)_validateBiologicalSex:(id)arg1 error:(id *)arg2;
- (_Bool)_validateBloodType:(id)arg1 error:(id *)arg2;
- (id)_canoncialUnit;
- (_Bool)_validateQuantity:(id)arg1 withCompatibleUnit:(id)arg2 error:(id *)arg3;
- (_Bool)_validateFitzpatrickSkinType:(id)arg1 error:(id *)arg2;
- (_Bool)_validateWheelchairUse:(id)arg1 error:(id *)arg2;
- (id)_relatedQuantityType;
- (id)_relatedCategoryType;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)arg1;

@end
