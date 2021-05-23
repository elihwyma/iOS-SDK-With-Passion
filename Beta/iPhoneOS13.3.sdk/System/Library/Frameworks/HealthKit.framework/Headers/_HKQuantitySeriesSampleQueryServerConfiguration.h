/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQuantitySample, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface _HKQuantitySeriesSampleQueryServerConfiguration : HKQueryServerConfiguration

{
    HKQuantitySample *_quantitySample;
    long long _seriesAnchor;
    long long _mode;
    unsigned long long _options;
    NSDate *_maximumStartDate;
    NSUUID *_latestUUID;
    NSDate *_latestSampleStartDate;
}

@property (copy, nonatomic) HKQuantitySample *quantitySample;
@property (nonatomic) long long seriesAnchor;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSDate *maximumStartDate;
@property (copy, nonatomic) NSUUID *latestUUID;
@property (copy, nonatomic) NSDate *latestSampleStartDate;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
