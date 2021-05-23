/*
 Image: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
 */

#import <Foundation/NSObject.h>

@class CTCarrierSpaceDataPlanMetricsItem, NSDate, NSNumber;

@interface CTCarrierSpaceDataPlanMetrics : NSObject

{
    NSDate *_billingCycleEndDate;
    CTCarrierSpaceDataPlanMetricsItem *_domestic;
    long long _regStatus;
    NSNumber *_domesticCapacity;
}

@property (retain, nonatomic) NSDate *billingCycleEndDate;
@property (retain, nonatomic) CTCarrierSpaceDataPlanMetricsItem *domestic;
@property (nonatomic) long long regStatus;
@property (retain, nonatomic) NSNumber *domesticCapacity;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
