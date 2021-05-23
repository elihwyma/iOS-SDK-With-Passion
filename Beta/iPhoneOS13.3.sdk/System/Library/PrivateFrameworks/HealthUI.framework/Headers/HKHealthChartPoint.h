/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHealthChartPoint : NSObject

{
    NSDate *_date;
    NSNumber *_sum;
    NSNumber *_min;
    NSNumber *_max;
    NSNumber *_avg;
    NSNumber *_mostRecent;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

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
- (id)initWithStatistics:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4;
- (id)initWithDataSourceValue:(id)arg1 options:(unsigned long long)arg2 unit:(id)arg3 displayType:(id)arg4;

@end
