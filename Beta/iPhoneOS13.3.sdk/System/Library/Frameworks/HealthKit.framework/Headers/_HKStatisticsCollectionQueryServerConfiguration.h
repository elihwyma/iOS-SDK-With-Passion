/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKStatisticsCollectionQueryServerConfiguration : HKQueryServerConfiguration

{
    NSDate *_anchorDate;
    unsigned long long _options;
    NSDateComponents *_intervalComponents;
    unsigned long long _mergeStrategy;
}

@property (copy, nonatomic) NSDate *anchorDate;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSDateComponents *intervalComponents;
@property (nonatomic) unsigned long long mergeStrategy;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
