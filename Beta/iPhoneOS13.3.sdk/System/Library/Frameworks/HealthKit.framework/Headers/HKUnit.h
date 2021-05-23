/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSString, _HKDimension, _HKFactorization;

@interface HKUnit : NSObject <Swift>

{
    _HKFactorization *_dimensionReduction;
    _HKFactorization *_baseUnitReduction;
    struct os_unfair_lock_s _dimensionReductionLock;
    double _reducedProportionalSize;
    double _scaleOffset;
}

@property (nonatomic, readonly) _HKFactorization *_baseUnits;
@property (nonatomic, readonly) _HKDimension *dimension;
@property (nonatomic, readonly) double scaleOffset;
@property (readonly) NSString *unitString;

+ (_Bool)supportsSecureCoding;
+ (id)milliseconds;
+ (id)degreeFahrenheitUnit;
+ (id)kelvinUnit;
+ (id)degreeCelsiusUnit;
+ (id)fluidOunceUSUnit;
+ (id)literUnit;
+ (id)pintUSUnit;
+ (id)cupUSUnit;
+ (id)meterUnitWithMetricPrefix:(long long)arg1;
+ (id)meterUnit;
+ (id)yardUnit;
+ (id)inchUnit;
+ (id)footUnit;
+ (id)mileUnit;
+ (id)kilocalorieUnit;
+ (id)largeCalorieUnit;
+ (id)jouleUnit;
+ (id)secondUnit;
+ (id)minuteUnit;
+ (id)hourUnit;
+ (id)dayUnit;
+ (id)stoneUnit;
+ (id)poundUnit;
+ (id)ounceUnit;
+ (id)gramUnit;
+ (id)unitFromString:(id)arg1;
+ (id)_nullUnit;
+ (id)_foundationBaseUnits;
+ (id)_countPerMinuteUnit;
+ (id)gramUnitWithMetricPrefix:(long long)arg1;
+ (id)percentUnit;
+ (id)decibelAWeightedSoundPressureLevelUnit;
+ (id)countUnit;
+ (id)hertzUnit;
+ (id)decibelHearingLevelUnit;
+ (id)_prefixStringForMetricPrefix:(long long)arg1;
+ (id)moleUnitWithMolarMass:(double)arg1;
+ (id)moles;
+ (id)pascalUnit;
+ (id)secondUnitWithMetricPrefix:(long long)arg1;
+ (id)jouleUnitWithMetricPrefix:(long long)arg1;
+ (id)siemenUnit;
+ (id)_internationalUnitWithMassEquivalent;
+ (id)_internationalUnitWithVolumeEquivalent;
+ (id)equivalentsUnit;
+ (id)smallCalorieUnit;
+ (id)kilojoulesUnit;
+ (id)moleUnitWithMetricPrefix:(long long)arg1 molarMass:(double)arg2;
+ (id)literUnitWithMetricPrefix:(long long)arg1;
+ (id)fluidOunceImperialUnit;
+ (id)pintImperialUnit;
+ (id)cupImperialUnit;
+ (id)pascalUnitWithMetricPrefix:(long long)arg1;
+ (id)millimeterOfMercuryUnit;
+ (id)centimeterOfWaterUnit;
+ (id)atmosphereUnit;
+ (id)calorieUnit;
+ (id)siemenUnitWithMetricPrefix:(long long)arg1;
+ (id)hertzUnitWithMetricPrefix:(long long)arg1;
+ (id)perMilleUnit;
+ (id)titerUnit;
+ (id)_internationalUnitWithMetricPrefix:(long long)arg1 massEquivalent:(double)arg2;
+ (id)_internationalUnitWithMassEquivalent:(double)arg1;
+ (id)_internationalUnitWithMetricPrefix:(long long)arg1 volumeEquivalent:(double)arg2;
+ (id)_internationalUnitWithVolumeEquivalent:(double)arg1;
+ (id)internationalUnit;
+ (id)equivalentsUnitWithMolarMass:(double)arg1 valence:(long long)arg2;
+ (id)_countPerSecondUnit;
+ (id)unitFromMassFormatterUnit:(long long)arg1;
+ (long long)massFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromLengthFormatterUnit:(long long)arg1;
+ (long long)lengthFormatterUnitFromUnit:(id)arg1;
+ (id)unitFromEnergyFormatterUnit:(long long)arg1;
+ (long long)energyFormatterUnitFromUnit:(id)arg1;
+ (_Bool)_isValidUnitString:(id)arg1;
+ (id)_heightUnitForLocale:(id)arg1;
+ (id)_distanceUnitForLocale:(id)arg1;
+ (id)_personMassUnitForLocale:(id)arg1;
+ (id)_temperatureUnitForLocale:(id)arg1;
+ (id)_foodEnergyUnitForLocale:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (_Bool)isNull;
- (double)_valueByConvertingValue:(double)arg1 toUnit:(id)arg2;
- (_Bool)_isCompatibleWithUnit:(id)arg1;
- (id)_foundationUnit;
- (id)_dimensionReduction;
- (id)unitDividedByUnit:(id)arg1;
- (double)_convertToBaseUnit:(double)arg1;
- (double)_convertFromBaseUnit:(double)arg1;
- (void)_reduceIfNecessaryWithCycleSet:(id)arg1;
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;
- (double)_reducedProportionalSize;
- (id)unitMultipliedByUnit:(id)arg1;
- (id)unitRaisedToPower:(long long)arg1;
- (id)reciprocalUnit;
- (_Bool)_isMetricDistance;
- (_Bool)_isCompatibleWithDimension:(id)arg1;
- (id)_baseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;
- (id)_baseUnitReduction;

@end
