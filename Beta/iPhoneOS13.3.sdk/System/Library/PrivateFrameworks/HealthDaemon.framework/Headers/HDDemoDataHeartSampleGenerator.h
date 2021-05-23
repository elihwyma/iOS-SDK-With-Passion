/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator

{
    double _nextElectrocardiogramSampleTime;
    unsigned long long _nextElectrocardiogramClassification;
    double _nextRestingHeartRateSampleTime;
    double _nextWalkingHeartRateAverageSampleTime;
    double _lastRestingHeartRate;
    double _lastWalkingHeartRateAverage;
}

@property (nonatomic) double nextElectrocardiogramSampleTime;
@property (nonatomic) unsigned long long nextElectrocardiogramClassification;
@property (nonatomic) double nextRestingHeartRateSampleTime;
@property (nonatomic) double nextWalkingHeartRateAverageSampleTime;
@property (nonatomic) double lastRestingHeartRate;
@property (nonatomic) double lastWalkingHeartRateAverage;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)restingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)walkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)electrocardiogramForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3;
- (double)_computeRestingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeWalkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_generateElectrocardiogramForDemoPerson:(id)arg1 atTime:(double)arg2 classification:(unsigned long long)arg3 sampleDate:(id)arg4;

@end
