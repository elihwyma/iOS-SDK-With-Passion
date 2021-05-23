/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthChartPoint, NSDate, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKBloodPressureChartPoint : NSObject

{
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
    HKHealthChartPoint *_systolicChartPoint;
    HKHealthChartPoint *_diastolicChartPoint;
    NSDate *_date;
}

@property (retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (retain, nonatomic) HKHealthChartPoint *systolicChartPoint;
@property (retain, nonatomic) HKHealthChartPoint *diastolicChartPoint;
@property (retain, nonatomic) NSDate *date;
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
- (void)setChartPoint:(id)arg1 forType:(id)arg2;

@end
