/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol HKGraphSeriesBlockCoordinateInfo;

__attribute__((visibility("hidden")))
@interface HKScalarChartPoint : NSObject

{
    NSNumber *_xValue;
    NSNumber *_yValue;
    id <HKGraphSeriesBlockCoordinateInfo> _scalarPointInfo;
}

@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;
@property (nonatomic, readonly) id <HKGraphSeriesBlockCoordinateInfo> scalarPointInfo;
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
- (id)initWithPoint:(struct CGPoint)arg1 unitForY:(id)arg2;

@end
