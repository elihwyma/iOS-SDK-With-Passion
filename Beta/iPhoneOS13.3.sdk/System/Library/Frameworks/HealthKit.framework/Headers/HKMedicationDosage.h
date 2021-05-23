/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKMedicalDateInterval, NSString;

@interface HKMedicationDosage : NSObject <Swift>

{
    NSString *_instruction;
    HKMedicalDateInterval *_timingPeriod;
}

@property (copy, nonatomic, readonly) NSString *instruction;
@property (copy, nonatomic, readonly) HKMedicalDateInterval *timingPeriod;

+ (_Bool)supportsSecureCoding;
+ (id)dosageWithInstruction:(id)arg1 timingPeriod:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstruction:(id)arg1 timingPeriod:(id)arg2;

@end
