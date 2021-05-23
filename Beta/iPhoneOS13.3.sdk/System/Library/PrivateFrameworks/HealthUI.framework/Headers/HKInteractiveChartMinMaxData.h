/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKUnit, NSString;

@interface HKInteractiveChartMinMaxData : NSObject

{
    double _minValue;
    double _maxValue;
    HKUnit *_unit;
}

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) HKUnit *unit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
