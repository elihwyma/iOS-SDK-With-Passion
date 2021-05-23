/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class NSDateComponents;

@interface HKGraphZoomLevelConfiguration : NSObject

{
    NSDateComponents *_axisLabelIntervalComponents;
    NSDateComponents *_minorAxisIntervalComponents;
    NSDateComponents *_seriesPointIntervalComponents;
    NSDateComponents *_referencePointIntervalComponents;
    long long _intendedTimeScope;
    double _seriesBlockSize;
    double _zoomLevelThreshold;
    double _canonicalSize;
    unsigned long long _majorTickCalendarUnit;
    double _approximateSeriesPointInterval;
    double _todayOffsetSize;
    double _approximateAxisLabelInterval;
}

@property (nonatomic, readonly) NSDateComponents *axisLabelIntervalComponents;
@property (nonatomic, readonly) NSDateComponents *minorAxisIntervalComponents;
@property (nonatomic, readonly) NSDateComponents *seriesPointIntervalComponents;
@property (nonatomic, readonly) NSDateComponents *referencePointIntervalComponents;
@property (nonatomic, readonly) long long intendedTimeScope;
@property (nonatomic, readonly) double seriesBlockSize;
@property (nonatomic, readonly) double zoomLevelThreshold;
@property (nonatomic, readonly) double canonicalSize;
@property (nonatomic, readonly) unsigned long long majorTickCalendarUnit;
@property (nonatomic, readonly) double approximateSeriesPointInterval;
@property (nonatomic, readonly) double todayOffsetSize;
@property (nonatomic, readonly) double approximateAxisLabelInterval;

+ (id)configurationForZoomLevel:(long long)arg1;
+ (id)defaultCalendar;
+ (id)_generateConfigurationForZoomLevel:(long long)arg1;
+ (id)chartVisibleRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 alignment:(long long)arg3 dataRange:(id)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8;
+ (id)chartDataRangeForTimeScope:(long long)arg1 dataRange:(id)arg2 firstWeekday:(long long)arg3 calendar:(id)arg4 cadence:(long long)arg5;
+ (id)_startDateForTimeScope:(long long)arg1 forDate:(id)arg2 alignment:(long long)arg3;
+ (id)_axisSpanDateComponentsWithTimeScope:(long long)arg1;
+ (id)_fitRange:(id)arg1 toDateRange:(id)arg2 timeScope:(long long)arg3 alignment:(long long)arg4 calendar:(id)arg5 firstWeekday:(long long)arg6 cadence:(long long)arg7 level:(long long)arg8;
+ (id)_snappingStartDateWithStartDate:(id)arg1 velocity:(struct CGPoint)arg2 calendar:(id)arg3 timeScope:(long long)arg4 options:(long long)arg5;
+ (long long)timeScopeForDateRange:(id)arg1;
+ (id)snappingRangeForRange:(id)arg1 axisRange:(id)arg2 timeScope:(long long)arg3 velocity:(struct CGPoint)arg4 calendar:(id)arg5 options:(long long)arg6;
+ (id)activeRangeFromCadenceRange:(id)arg1 timeScope:(long long)arg2 axisRange:(id)arg3 calendar:(id)arg4;

@end
