/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKDimension.h>

@class HKBaseUnit, HKUnit, NSString;

__attribute__((visibility("hidden")))
@interface _HKBaseDimension : _HKDimension

{
    NSString *_name;
    HKBaseUnit *_reducibleBaseUnit;
    HKUnit *_reducedUnit;
    double _reductionCoefficient;
}

@property (retain, nonatomic) HKBaseUnit *reducibleBaseUnit;
@property (retain, nonatomic) HKUnit *reducedUnit;
@property (nonatomic) double reductionCoefficient;
@property (nonatomic, readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)length;
+ (id)time;
+ (id)mass;
+ (id)frequency;
+ (id)volume;
+ (id)temperature;
+ (id)pressure;
+ (id)_uniquedDefinedDimensionWithName:(id)arg1;
+ (id)_uniquedDimensionWithName:(id)arg1 configuration:(CDUnknownBlockType)arg2;
+ (id)energy;
+ (id)conductance;
+ (id)nonConvertibleMole;
+ (id)nonConvertibleIU;
+ (id)equivalents;
+ (id)hearingSensitivity;
+ (id)soundPressureLevel;
+ (id)titer;
+ (id)nullDimension;

- (_Bool)isEqual:(id)arg1;
- (id)_initWithName:(id)arg1;
- (id)unitString;
- (id)_baseDimensions;
- (_Bool)canBeReduced;

@end
