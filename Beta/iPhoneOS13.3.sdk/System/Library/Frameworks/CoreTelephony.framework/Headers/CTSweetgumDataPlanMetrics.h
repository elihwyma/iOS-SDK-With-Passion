/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTSweetgumDataPlanMetricsItem, NSDate, NSNumber;

@interface CTSweetgumDataPlanMetrics : NSObject

{
    NSDate *_billingCycleEndDate;
    CTSweetgumDataPlanMetricsItem *_domestic;
    long long _regStatus;
    NSNumber *_domesticCapacity;
}

@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) CTSweetgumDataPlanMetricsItem *domestic;
@property (nonatomic) long long regStatus;
@property (retain, nonatomic) NSNumber *domesticCapacity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
