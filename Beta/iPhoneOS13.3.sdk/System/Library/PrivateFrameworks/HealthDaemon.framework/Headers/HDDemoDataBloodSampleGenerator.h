/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataBloodSampleGenerator : HDDemoDataBaseSampleGenerator

{
    double _nextBloodAlcoholContentSampleTime;
}

@property (nonatomic) double nextBloodAlcoholContentSampleTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)bloodAlcoholContentForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)_computeNumDrinksTodayForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
