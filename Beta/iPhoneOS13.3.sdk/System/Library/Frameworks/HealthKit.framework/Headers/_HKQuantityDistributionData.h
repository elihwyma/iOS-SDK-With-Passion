/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSArray, NSDate;

@interface _HKQuantityDistributionData : NSObject <Swift>

{
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_minimumBucketValue;
    HKQuantity *_minimumValue;
    HKQuantity *_maximumValue;
    HKQuantity *_averageValue;
    HKQuantity *_duration;
    NSArray *_histogramCounts;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) HKQuantity *minimumBucketValue;
@property (nonatomic, readonly) HKQuantity *minimumValue;
@property (nonatomic, readonly) HKQuantity *maximumValue;
@property (nonatomic, readonly) HKQuantity *averageValue;
@property (nonatomic, readonly) HKQuantity *duration;
@property (nonatomic, readonly) NSArray *histogramCounts;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8;

@end
