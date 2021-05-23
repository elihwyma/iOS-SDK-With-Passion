/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataOtherAndAdditionalSampleGenerator : HDDemoDataBaseSampleGenerator

{
    double _nextToothbrushingSampleTime;
}

@property (nonatomic) double nextToothbrushingSampleTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)_dateComponentsByAddingHours:(long long)arg1 toDate:(id)arg2;
- (void)_generateToothbrushingSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)_morningDateFromDate:(id)arg1 calendar:(id)arg2;
- (id)_eveningDateFromDate:(id)arg1 calendar:(id)arg2;
- (id)_generateToothbrushingSampleForDate:(id)arg1;

@end
