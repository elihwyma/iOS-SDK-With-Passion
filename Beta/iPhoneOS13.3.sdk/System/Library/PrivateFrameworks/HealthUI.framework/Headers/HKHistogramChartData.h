/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HKHistogramChartData : NSObject

{
    double _xValue;
    double _yValue;
}

@property (nonatomic, readonly) double xValue;
@property (nonatomic, readonly) double yValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithXValue:(double)arg1 yValue:(double)arg2;

@end
