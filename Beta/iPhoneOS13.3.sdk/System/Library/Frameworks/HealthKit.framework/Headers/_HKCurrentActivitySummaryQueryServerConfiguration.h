/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCurrentActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

{
    NSDictionary *_collectionIntervals;
}

@property (copy, nonatomic) NSDictionary *collectionIntervals;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
