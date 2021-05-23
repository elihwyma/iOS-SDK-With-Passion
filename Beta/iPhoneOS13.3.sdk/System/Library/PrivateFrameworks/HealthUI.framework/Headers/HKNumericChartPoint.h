/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

@interface HKNumericChartPoint : NSObject

{
    NSDate *_xValue;
    id _yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _userInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)yValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;

@end
