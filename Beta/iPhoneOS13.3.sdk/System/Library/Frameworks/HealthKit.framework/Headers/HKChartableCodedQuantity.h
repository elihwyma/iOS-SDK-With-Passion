/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKCodedQuantity, HKQuantity, NSArray, NSNumber;

@interface HKChartableCodedQuantity : NSObject <Swift>

{
    NSArray *_codings;
    HKQuantity *_quantity;
    NSNumber *_rangeLow;
    NSNumber *_rangeHigh;
    HKCodedQuantity *_originalCodedQuantity;
    HKCodedQuantity *_originalRangeLowCodedQuantity;
    HKCodedQuantity *_originalRangeHighCodedQuantity;
}

@property (copy, nonatomic) HKCodedQuantity *originalCodedQuantity;
@property (copy, nonatomic) HKCodedQuantity *originalRangeLowCodedQuantity;
@property (copy, nonatomic) HKCodedQuantity *originalRangeHighCodedQuantity;
@property (copy, nonatomic, readonly) NSArray *codings;
@property (copy, nonatomic, readonly) HKQuantity *quantity;
@property (nonatomic, readonly) _Bool hasRange;
@property (nonatomic, readonly) _Bool isInRange;
@property (nonatomic, readonly) double doubleValue;
@property (copy, nonatomic, readonly) NSNumber *rangeLow;
@property (copy, nonatomic, readonly) NSNumber *rangeHigh;

+ (id)converter;
+ (id)chartableCodedQuantityWithCodings:(id)arg1 originalCodedQuantity:(id)arg2 originalRangeLowCodedQuantity:(id)arg3 originalRangeHighCodedQuantity:(id)arg4 error:(id *)arg5;
+ (id)_valueFromCodedQuantity:(id)arg1 inUnit:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)doubleValueForUnit:(id)arg1;
- (_Bool)isCompatibleWithUnit:(id)arg1;
- (id)initWithCodings:(id)arg1 quantity:(id)arg2 rangeLow:(id)arg3 rangeHigh:(id)arg4;
- (id)chartableCodedQuantityInUnit:(id)arg1 error:(id *)arg2;

@end
