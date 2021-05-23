/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSampleType.h>

@interface HKClinicalType : HKSampleType

+ (id)allTypes;
+ (id)allergyRecordType;
+ (id)procedureRecordType;
+ (id)conditionRecordType;
+ (id)medicationRecordType;
+ (id)immunizationRecordType;
+ (id)labResultRecordType;
+ (id)vitalSignRecordType;

- (_Bool)_isClinicalType;

@end
