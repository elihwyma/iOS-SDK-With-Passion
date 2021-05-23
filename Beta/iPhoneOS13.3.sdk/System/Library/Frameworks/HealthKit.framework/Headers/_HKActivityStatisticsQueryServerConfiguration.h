/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKActivityStatisticsQueryServerConfiguration : HKQueryServerConfiguration

{
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    double _updateInterval;
}

@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDateComponents *moveIntervalComponents;
@property (copy, nonatomic) NSDateComponents *exerciseIntervalComponents;
@property (nonatomic) double updateInterval;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
