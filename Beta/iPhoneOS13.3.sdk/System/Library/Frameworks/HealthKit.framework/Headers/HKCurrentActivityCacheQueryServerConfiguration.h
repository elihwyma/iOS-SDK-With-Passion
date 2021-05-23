/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration

{
    NSDateComponents *_statisticsIntervalComponents;
}

@property (copy, nonatomic) NSDateComponents *statisticsIntervalComponents;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
