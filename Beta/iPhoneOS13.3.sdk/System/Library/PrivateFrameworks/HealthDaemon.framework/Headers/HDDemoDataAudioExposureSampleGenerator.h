/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSDate;

@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator

{
    _Bool _didGenerateEnvironmentalAudioExposureSamples;
    _Bool _didGenerateHeadphoneAudioExposureSamples;
    double _nextEnvironmentalAudioExposureSampleTime;
    NSDate *_lastEnvironmentalSampleEndDate;
    double _nextHeadphoneAudioExposureSampleTime;
    NSDate *_lastHeadphoneSampleEndDate;
}

@property (nonatomic) double nextEnvironmentalAudioExposureSampleTime;
@property (nonatomic) _Bool didGenerateEnvironmentalAudioExposureSamples;
@property (retain, nonatomic) NSDate *lastEnvironmentalSampleEndDate;
@property (nonatomic) double nextHeadphoneAudioExposureSampleTime;
@property (nonatomic) _Bool didGenerateHeadphoneAudioExposureSamples;
@property (retain, nonatomic) NSDate *lastHeadphoneSampleEndDate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)_generateEnvironmentalAudioExposureSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (void)_generateHeadphoneAudioExposureSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)_makeNormallyDistributedAudioExposureLevelsWithCount:(unsigned long long)arg1 headphones:(_Bool)arg2;
- (id)_makeEnvironmentalSamplesWithType:(id)arg1 rawSampleValues:(id)arg2 sampleUnit:(id)arg3 initialSampleDate:(id)arg4 sampleDuration:(double)arg5 distanceBetweenSamples:(double)arg6;
- (id)_makeQuantitySeriesSamplesWithType:(id)arg1 rawSampleValues:(id)arg2 sampleUnit:(id)arg3 initialSampleDate:(id)arg4 sampleDuration:(double)arg5 distanceBetweenSamples:(double)arg6 demoPerson:(id)arg7;
- (id)_makeHeadphoneSamplesWithType:(id)arg1 rawSampleValues:(id)arg2 sampleUnit:(id)arg3 initialSampleDate:(id)arg4 sampleDuration:(double)arg5 distanceBetweenSamples:(double)arg6 demoPerson:(id)arg7;
- (id)_allPossibleAudioExposureLevels;
- (id)_randomlySelectedAudioExposureLevelFromPossibleValues:(id)arg1;
- (double)_randomlySelectedGaussianWithMean:(double)arg1 deviation:(double)arg2;
- (id)_headphoneProvenanceWithPerson:(id)arg1;
- (id)_headphoneAudioExposureMetadata;
- (id)_makeQuantitySampleWithType:(id)arg1 value:(id)arg2 unit:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 metadata:(id)arg6;
- (id)_makeAlertSampleWithStartDate:(id)arg1 endDate:(id)arg2 value:(id)arg3 limit:(id)arg4;
- (id)_makeAirPods;
- (id)_makeEarPods;
- (id)_makeBeatsHeadphones;
- (id)_makeUnknownHeadphones;
- (id)_makeEvenlyDistributedAudioExposureLevelsWithCount:(unsigned long long)arg1 headphones:(_Bool)arg2;
- (id)_dateComponentsByAddingHours:(long long)arg1 toDate:(id)arg2;

@end
