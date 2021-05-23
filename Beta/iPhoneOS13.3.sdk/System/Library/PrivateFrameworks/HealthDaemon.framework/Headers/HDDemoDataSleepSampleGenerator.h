/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataSleepSampleGenerator : HDDemoDataBaseSampleGenerator

{
    double _nextSleepDurationSampleTime;
}

@property (nonatomic) double nextSleepDurationSampleTime;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (double)_computeSleepTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (_Bool)_isDemoPersonSleeping:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonAwake:(id)arg1 atTime:(double)arg2;
- (id)sleepSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3;
- (double)_computeAwakeTimeForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
