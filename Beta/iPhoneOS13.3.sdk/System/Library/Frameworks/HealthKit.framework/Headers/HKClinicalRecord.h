/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

#import <HealthKit/Swift-Protocol.h>

@class HKClinicalType, HKFHIRResource, NSString;

@interface HKClinicalRecord : HKSample <Swift>

{
    NSString *_displayName;
    HKFHIRResource *_FHIRResource;
}

@property (copy, readonly) HKClinicalType *clinicalType;
@property (copy, readonly) NSString *displayName;
@property (copy, readonly) HKFHIRResource *FHIRResource;

+ (_Bool)supportsSecureCoding;
+ (_Bool)supportsEquivalence;
+ (_Bool)_isConcreteObjectClass;
+ (id)_newClinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7 config:(CDUnknownBlockType)arg8;
+ (id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setDisplayName:(id)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_setFHIRResource:(id)arg1;

@end
