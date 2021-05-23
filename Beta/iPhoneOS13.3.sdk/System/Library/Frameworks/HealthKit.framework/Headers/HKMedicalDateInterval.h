/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalDate;

@interface HKMedicalDateInterval : NSObject <Swift>

{
    HKMedicalDate *_startDate;
    HKMedicalDate *_endDate;
}

@property (copy, nonatomic, readonly) HKMedicalDate *startDate;
@property (copy, nonatomic, readonly) HKMedicalDate *endDate;

+ (_Bool)supportsSecureCoding;
+ (id)medicalDateIntervalWithStartDate:(id)arg1;
+ (id)medicalDateIntervalWithEndDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id *)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;

@end
