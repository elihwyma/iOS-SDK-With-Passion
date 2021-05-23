/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKInsulinChartPoint : NSObject

{
    NSDate *_startDate;
    NSNumber *_basalSum;
    NSNumber *_totalSum;
    NSDate *_midDate;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *midDate;
@property (retain, nonatomic) NSNumber *basalSum;
@property (retain, nonatomic) NSNumber *totalSum;
@property (retain, nonatomic) id <HKGraphSeriesBlockCoordinateInfo> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;

@end
