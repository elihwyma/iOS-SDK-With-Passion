/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDProfile, NSArray;

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator

{
    HDProfile *_profile;
    NSArray *_basalBodyTempMultiplierTable;
    NSArray *_cervicalMucusTable;
    double _nextSexualActivitySampleTime;
    double _nextCycleDaySampleTime;
}

@property (copy, nonatomic) NSArray *basalBodyTempMultiplierTable;
@property (copy, nonatomic) NSArray *cervicalMucusTable;
@property (nonatomic) double nextSexualActivitySampleTime;
@property (nonatomic) double nextCycleDaySampleTime;
@property (retain, nonatomic) HDProfile *profile;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)generateWatchFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)generatePhoneFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)completeOnboardingForDemoPerson:(id)arg1;
- (struct HDDemoDataMenstrualFlow)menstrualFlowForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (void)addMenstruationSampleForDemoPersonFromWatch:(id)arg1 date:(id)arg2 flow:(struct HDDemoDataMenstrualFlow)arg3 objectCollection:(id)arg4;
- (void)addSymptomSampleForDemoPersonFromWatch:(id)arg1 date:(id)arg2 categoryType:(id)arg3 objectCollection:(id)arg4;
- (id)sexualActivityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)basalBodyTempForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)cervicalMucusQualityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)ovulationTestResultForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (id)menstrualCrampSymptomForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (id)headacheSymptomForDemoPerson:(id)arg1 withSampleDate:(id)arg2;
- (_Bool)_isDemoPersonOvulating:(id)arg1 atTime:(double)arg2;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_basalBodyTempMultiplier;

@end
