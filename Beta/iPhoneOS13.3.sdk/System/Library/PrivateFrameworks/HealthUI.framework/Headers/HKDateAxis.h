/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKAxis.h>

@class HKDateIntervalCache, NSArray;

@interface HKDateAxis : HKAxis

{
    HKDateIntervalCache *_intervalCache;
    NSArray *_cachedAxisLabels;
    long long _dayScopeType;
}

@property (nonatomic) long long dayScopeType;

- (id)init;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)extendedModelRangeWithRange:(id)arg1 timeScope:(long long)arg2;
- (id)rangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (long long)dateZoomForZoomScale:(double)arg1;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (id)zoomScaleEngine;
- (id)_formattedStringForDate:(id)arg1 zoom:(long long)arg2;
- (id)stringForDate:(id)arg1 zoom:(long long)arg2 labelType:(long long)arg3;
- (void)_enumerateCachedCoordinatesInModelRange:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_dateRangeForChartRange:(struct HKRange)arg1 zoomScale:(double)arg2;
- (void)_updateIntervalCacheWithModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)_axisLabelsWithModelRange:(id)arg1 zoom:(long long)arg2;
- (unsigned long long)_anchorUnitForZoom:(long long)arg1;
- (void)_clearCachedAxisLabels;
- (_Bool)_labelsOutsideStartDate:(id)arg1 endDate:(id)arg2;
- (void)_setRangeForDateRange:(id)arg1;

@end
