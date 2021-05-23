/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration

{
    HKQuantityType *_quantityType;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityType:(id)arg1 bundleIdentifier:(id)arg2;

@end
