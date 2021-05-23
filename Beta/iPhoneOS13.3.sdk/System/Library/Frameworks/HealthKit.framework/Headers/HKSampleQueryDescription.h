/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKSampleType, NSPredicate;

@interface HKSampleQueryDescription : NSObject <Swift>

{
    HKSampleType *_sampleType;
    NSPredicate *_predicate;
}

@property (copy, nonatomic, readonly) HKSampleType *sampleType;
@property (copy, nonatomic, readonly) NSPredicate *predicate;

+ (_Bool)supportsSecureCoding;
+ (id)sampleQueryDescriptionWithSampleType:(id)arg1;
+ (id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2;
+ (id)medicalRecordDescriptionsWithPredicate:(id)arg1;
+ (id)allergiesDescriptionsWithPredicate:(id)arg1;
+ (id)conditionsDescriptionsWithPredicate:(id)arg1;
+ (id)immunizationsDescriptionsWithPredicate:(id)arg1;
+ (id)labsDescriptionsWithPredicate:(id)arg1;
+ (id)medicationsDescriptionsWithPredicate:(id)arg1;
+ (id)proceduresDescriptionsWithPredicate:(id)arg1;
+ (id)vitalsDescriptionsWithPredicate:(id)arg1;
+ (id)medicalRecordDescriptions;
+ (id)allergiesDescriptions;
+ (id)conditionsDescriptions;
+ (id)immunizationsDescriptions;
+ (id)labsDescriptions;
+ (id)medicationsDescriptions;
+ (id)proceduresDescriptions;
+ (id)vitalsDescriptions;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleType:(id)arg1 predicate:(id)arg2;

@end
