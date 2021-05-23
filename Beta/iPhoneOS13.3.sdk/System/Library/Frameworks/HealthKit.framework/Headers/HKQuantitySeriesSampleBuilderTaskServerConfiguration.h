/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, HKQuantityType, NSDate;

@interface HKQuantitySeriesSampleBuilderTaskServerConfiguration : HKTaskConfiguration

{
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    HKDevice *_device;
}

@property (copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) HKDevice *device;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 device:(id)arg3;

@end
