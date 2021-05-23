/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKUnit, NSArray, NSDate, NSString;

@interface HKQuantityDistributionChartPointData : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
    double _minimumValue;
    double _maximumValue;
    double _averageValue;
    double _duration;
    double _minimumBucketValue;
    double _bucketIncrement;
    NSArray *_bucketCounts;
    HKUnit *_unit;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double minimumValue;
@property (nonatomic, readonly) double maximumValue;
@property (nonatomic, readonly) double averageValue;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double minimumBucketValue;
@property (nonatomic, readonly) double bucketIncrement;
@property (nonatomic, readonly) NSArray *bucketCounts;
@property (nonatomic, readonly) HKUnit *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithDistributionData:(id)arg1 unit:(id)arg2;

@end
