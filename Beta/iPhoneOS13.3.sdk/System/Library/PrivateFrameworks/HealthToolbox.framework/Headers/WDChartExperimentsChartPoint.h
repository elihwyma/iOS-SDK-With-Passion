/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsChartPoint : NSObject

{
    NSDate *_xValue;
    NSNumber *_yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _experimentInfo;
}

@property (nonatomic, readonly) NSDate *xValue;
@property (nonatomic, readonly) NSNumber *yValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> experimentInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2 userInfo:(id)arg3;

@end
