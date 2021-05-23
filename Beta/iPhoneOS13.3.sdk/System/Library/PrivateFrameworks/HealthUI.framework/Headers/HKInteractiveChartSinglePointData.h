/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKUnit, NSDateComponents, NSString;

@interface HKInteractiveChartSinglePointData : NSObject

{
    _Bool _representsRange;
    double _value;
    HKUnit *_unit;
    long long _recordCount;
    double _minValue;
    double _maxValue;
    NSDateComponents *_statisticsInterval;
}

@property (nonatomic) double value;
@property (retain, nonatomic) HKUnit *unit;
@property (nonatomic) _Bool representsRange;
@property (nonatomic) long long recordCount;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) NSDateComponents *statisticsInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
