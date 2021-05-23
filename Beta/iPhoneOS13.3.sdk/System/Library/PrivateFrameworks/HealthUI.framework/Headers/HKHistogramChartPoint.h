/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface HKHistogramChartPoint : NSObject

{
    NSNumber *_xValue;
    NSNumber *_yValue;
}

@property (nonatomic, readonly) NSNumber *xValue;
@property (nonatomic, readonly) NSNumber *yValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)userInfo;
- (id)minYValue;
- (id)maxYValue;
- (id)initWithXValue:(id)arg1 yValue:(id)arg2;
- (id)xValueAsGenericType;
- (id)minXValueAsGenericType;
- (id)maxXValueAsGenericType;
- (id)yValueForKey:(id)arg1;
- (id)allYValues;

@end
