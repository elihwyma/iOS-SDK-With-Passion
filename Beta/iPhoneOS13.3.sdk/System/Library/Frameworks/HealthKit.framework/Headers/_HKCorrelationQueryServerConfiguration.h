/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _HKCorrelationQueryServerConfiguration : HKQueryServerConfiguration

{
    NSDictionary *_filterDictionary;
}

@property (copy, nonatomic) NSDictionary *filterDictionary;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
