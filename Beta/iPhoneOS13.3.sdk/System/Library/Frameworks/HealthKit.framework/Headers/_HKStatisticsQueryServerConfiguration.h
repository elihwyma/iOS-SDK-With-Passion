/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDateInterval;

__attribute__((visibility("hidden")))
@interface _HKStatisticsQueryServerConfiguration : HKQueryServerConfiguration

{
    unsigned long long _options;
    unsigned long long _mergeStrategy;
    NSDateInterval *_dateInterval;
}

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long mergeStrategy;
@property (retain, nonatomic) NSDateInterval *dateInterval;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
