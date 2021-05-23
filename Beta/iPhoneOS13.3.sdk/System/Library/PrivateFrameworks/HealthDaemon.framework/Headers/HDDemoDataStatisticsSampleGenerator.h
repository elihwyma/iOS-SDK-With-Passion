/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator

{
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> _generator;
    struct normal_distribution<double> _distribution;
    NSArray *_pseudoRandomDoubles;
}

@property (copy, nonatomic) NSArray *pseudoRandomDoubles;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (double)pseudoRandomDoubleFromTime:(double)arg1;
- (double)computeNoiseFromTime:(double)arg1 stdDev:(double)arg2;
- (double)computeStatisticalTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (id)_createPseudoRandomDoubles;
- (double)_pseudoRandomDoubleFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (double)randomDoubleFromGenerator;
- (id)_pseudoRandomDoubles;

@end
