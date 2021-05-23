/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKQuantity, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKQuantityDistributionQueryServerConfiguration : HKQueryServerConfiguration

{
    NSDate *_startDate;
    NSDate *_endDate;
    long long _contextStyle;
    NSDate *_anchorDate;
    NSDateComponents *_intervalComponents;
    HKQuantity *_histogramAnchor;
    HKQuantity *_histogramBucketSize;
    unsigned long long _options;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long contextStyle;
@property (copy, nonatomic) NSDate *anchorDate;
@property (copy, nonatomic) NSDateComponents *intervalComponents;
@property (copy, nonatomic) HKQuantity *histogramAnchor;
@property (copy, nonatomic) HKQuantity *histogramBucketSize;
@property (nonatomic) unsigned long long options;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
