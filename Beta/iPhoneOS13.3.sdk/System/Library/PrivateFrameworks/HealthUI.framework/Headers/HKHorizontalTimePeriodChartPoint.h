/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHorizontalTimePeriodChartPoint : NSObject

{
    NSDate *_xStart;
    NSDate *_xEnd;
    NSNumber *_yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (retain, nonatomic) NSDate *xStart;
@property (retain, nonatomic) NSDate *xEnd;
@property (retain, nonatomic) NSNumber *yValue;
@property (retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)minYValue;
- (id)maxYValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;

@end
