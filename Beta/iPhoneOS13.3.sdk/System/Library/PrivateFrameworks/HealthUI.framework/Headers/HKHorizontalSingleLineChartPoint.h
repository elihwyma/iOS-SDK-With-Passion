/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKHorizontalSingleLineChartPoint : NSObject

{
    _Bool _groupToPrevious;
    NSDate *_xValue;
    NSNumber *_yValue;
    long long _markStyle;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (retain, nonatomic) NSDate *xValue;
@property (retain, nonatomic) NSNumber *yValue;
@property (nonatomic) _Bool groupToPrevious;
@property (nonatomic) long long markStyle;
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
