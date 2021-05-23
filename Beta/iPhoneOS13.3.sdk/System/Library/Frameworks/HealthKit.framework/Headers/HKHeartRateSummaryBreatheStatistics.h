/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKHeartRateSummaryStatistics.h>

@class HKHeartRateSummaryReading;

@interface HKHeartRateSummaryBreatheStatistics : HKHeartRateSummaryStatistics

{
    HKHeartRateSummaryReading *_finalReading;
}

@property (retain, nonatomic, setter=_setFinalReading:) HKHeartRateSummaryReading *finalReading;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
