/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKQuantityDistributionChartPoint : NSObject

{
    double _minimumBucketValue;
    double _bucketIncrement;
    NSArray *_bucketCounts;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    NSDate *_bucketDate;
    NSNumber *_minimumY;
    NSNumber *_maximumY;
}

@property (nonatomic, readonly) NSDate *bucketDate;
@property (nonatomic, readonly) NSNumber *minimumY;
@property (nonatomic, readonly) NSNumber *maximumY;
@property (nonatomic, readonly) double minimumBucketValue;
@property (nonatomic, readonly) double bucketIncrement;
@property (nonatomic, readonly) NSArray *bucketCounts;
@property (retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)_quickDate:(id)arg1;
- (id)initWithHistogramData:(id)arg1 unit:(id)arg2;
- (id)initWithHistogramData:(id)arg1 bucketIncrement:(double)arg2 unit:(id)arg3;

@end
