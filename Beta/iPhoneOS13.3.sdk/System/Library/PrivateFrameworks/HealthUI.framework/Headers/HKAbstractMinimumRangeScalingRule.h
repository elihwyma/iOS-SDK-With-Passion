/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKValueRange, NSDictionary, NSString;

@interface HKAbstractMinimumRangeScalingRule : NSObject

{
    double _defaultYAxisRange;
    NSDictionary *_axisRangeOverrides;
    long long _portraitPrettyNumberRule;
    HKValueRange *_axisBounds;
}

@property (nonatomic, readonly) double defaultYAxisRange;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (retain, nonatomic) HKValueRange *axisBounds;
@property (nonatomic, readonly) NSDictionary *axisRangeOverrides;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (double)_rangeForZoomLevel:(long long)arg1;

@end
