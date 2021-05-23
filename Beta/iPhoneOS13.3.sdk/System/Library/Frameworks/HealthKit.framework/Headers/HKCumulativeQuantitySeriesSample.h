/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKCumulativeQuantitySample.h>

@class HKQuantity;

@interface HKCumulativeQuantitySeriesSample : HKCumulativeQuantitySample

@property (copy, readonly) HKQuantity *sum;

@end
