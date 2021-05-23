/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataBodySampleGenerator : HDDemoDataBaseSampleGenerator

{
    NSArray *_boysHeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysHeight2To20YearsGrowthCurve;
    NSArray *_boysWeightBirthTo36MonthsGrowthCurve;
    NSArray *_boysWeight2To20YearsGrowthCurve;
    NSArray *_girlsHeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsHeight2To20YearsGrowthCurve;
    NSArray *_girlsWeightBirthTo36MonthsGrowthCurve;
    NSArray *_girlsWeight2To20YearsGrowthCurve;
    double _nextHeightSampleTime;
    double _nextWeightSampleTime;
    double _lastHeightInCm;
    double _lastWeightInKg;
    double _weightAdultStartInKg;
}

@property (copy, nonatomic) NSArray *boysHeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *boysHeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *boysWeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *boysWeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsHeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsHeight2To20YearsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsWeightBirthTo36MonthsGrowthCurve;
@property (copy, nonatomic) NSArray *girlsWeight2To20YearsGrowthCurve;
@property (nonatomic) double nextHeightSampleTime;
@property (nonatomic) double nextWeightSampleTime;
@property (nonatomic) double lastHeightInCm;
@property (nonatomic) double lastWeightInKg;
@property (nonatomic) double weightAdultStartInKg;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)heightForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)weightForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)leanBodyMassForDemoPerson:(id)arg1 weight:(double)arg2;
- (double)bodyFatPercentageForDemoPerson:(id)arg1 atTime:(double)arg2 weight:(double)arg3 leanBodyMass:(double)arg4;
- (double)bodyMassIndexForDemoPerson:(id)arg1 weight:(double)arg2 height:(double)arg3;
- (id)_heightCurveForAge:(double)arg1 sex:(long long)arg2;
- (double)weightChangeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_weightCurveForAge:(double)arg1 sex:(long long)arg2;

@end
