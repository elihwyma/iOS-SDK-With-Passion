/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator

{
    _Bool _didGenerateMindfulnessMinute;
    double _nextMindfulSessionSampleTime;
}

@property (nonatomic) double nextMindfulSessionSampleTime;
@property (nonatomic) _Bool didGenerateMindfulnessMinute;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)_mindfulSessionSampleForDemoPerson:(id)arg1 atTime:(double)arg2 startDate:(id)arg3;
- (id)_heartRatesFromMindfulSessionSample:(id)arg1 demoPerson:(id)arg2 atTime:(double)arg3;

@end
