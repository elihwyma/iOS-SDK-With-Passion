/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSMutableDictionary;

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator

{
    _Bool _forcePEFR;
    NSMutableDictionary *_nextSpirometrySampleTimes;
    double _nextAsthmaAttackSampleTime;
    double _nextAsthmaAttackEndTime;
}

@property (retain, nonatomic) NSMutableDictionary *nextSpirometrySampleTimes;
@property (nonatomic) double nextAsthmaAttackSampleTime;
@property (nonatomic) double nextAsthmaAttackEndTime;
@property (nonatomic) _Bool forcePEFR;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)spirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(long long)arg3;
- (id)inhalerUsageForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)nextSpirometrySampleTimeFromType:(long long)arg1;
- (void)setNextSpirometrySampleTime:(double)arg1 forType:(long long)arg2;
- (double)_computeSpirometryForDemoPerson:(id)arg1 atTime:(double)arg2 type:(long long)arg3 computeLowerLimitOfNormality:(_Bool)arg4 height:(double)arg5;
- (_Bool)_isAsthmaAttackAllowedForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
