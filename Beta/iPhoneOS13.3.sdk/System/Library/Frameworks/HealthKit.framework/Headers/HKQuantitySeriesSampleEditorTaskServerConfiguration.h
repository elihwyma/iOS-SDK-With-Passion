/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKQuantitySample;

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration

{
    HKQuantitySample *_quantitySample;
}

@property (copy, nonatomic) HKQuantitySample *quantitySample;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantitySample:(id)arg1;

@end
