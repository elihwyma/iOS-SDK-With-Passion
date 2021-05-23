/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKUnit, NSArray, NSDate;

@interface HKChartableCodedQuantitySet : NSObject <Swift>

{
    NSArray *_codings;
    NSDate *_date;
    NSArray *_quantities;
}

@property (copy, nonatomic, readonly) NSArray *codings;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) NSArray *quantities;
@property (copy, nonatomic, readonly) HKUnit *compatibleUnit;

+ (id)setWithChartableQuantity:(id)arg1 date:(id)arg2;
+ (id)setWithMedicalCodings:(id)arg1 quantities:(id)arg2 date:(id)arg3 error:(id *)arg4;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isCompatibleWithUnit:(id)arg1;
- (id)_initWithMedicalCodings:(id)arg1 date:(id)arg2 quantities:(id)arg3;
- (id)chartableCodedQuantitySetByChangingDate:(id)arg1;
- (void)addChartableCodedQuantities:(id)arg1;
- (id)chartableCodedQuantitySetConvertedToUnit:(id)arg1 error:(id *)arg2;
- (double)minValueForUnit:(id)arg1;
- (double)maxValueForUnit:(id)arg1;
- (double)minValueIncludingReferenceRangeForUnit:(id)arg1;
- (double)maxValueIncludingReferenceRangeForUnit:(id)arg1;

@end
