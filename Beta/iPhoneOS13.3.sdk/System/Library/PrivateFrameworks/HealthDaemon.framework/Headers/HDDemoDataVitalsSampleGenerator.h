/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator

{
    NSArray *_diurnalBPVariationTable;
    NSArray *_diurnalTempVariationTable;
    double _nextHeartRateSampleTime;
    double _nextRespirationRateSampleTime;
    double _nextBloodPressureSampleTime;
    double _nextBodyTempSampleTime;
    double _nextOxygenSaturationSampleTime;
    double _nextPeripheralPerfusionIndexSampleTime;
    double _lastPeripheralPerfusionIndexValue;
}

@property (copy, nonatomic) NSArray *diurnalBPVariationTable;
@property (copy, nonatomic) NSArray *diurnalTempVariationTable;
@property (nonatomic) double nextHeartRateSampleTime;
@property (nonatomic) double nextRespirationRateSampleTime;
@property (nonatomic) double nextBloodPressureSampleTime;
@property (nonatomic) double nextBodyTempSampleTime;
@property (nonatomic) double nextOxygenSaturationSampleTime;
@property (nonatomic) double nextPeripheralPerfusionIndexSampleTime;
@property (nonatomic) double lastPeripheralPerfusionIndexValue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (double)_computeBodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2 addNoise:(_Bool)arg3;
- (struct HDDemoDataHeartRate)heartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (struct HDDemoDataBloodPressure)bloodPressureForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)respirationRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)oxygenSaturationForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)peripheralPerfusionIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (struct HDDemoDataHeartRate)_computeHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)_computeRespirationRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)_computeBloodPressureForDemoPerson:(id)arg1 atTime:(double)arg2 baseBloodPressure:(double)arg3 stdDev:(double)arg4;
- (long long)_computeMaxHRForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
