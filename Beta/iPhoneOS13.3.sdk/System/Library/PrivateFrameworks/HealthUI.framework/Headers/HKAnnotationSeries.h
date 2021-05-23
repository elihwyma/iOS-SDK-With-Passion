/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class NSArray;

@interface HKAnnotationSeries : HKGraphSeries

{
    NSArray *_chartPoints;
}

@property (nonatomic, readonly) NSArray *chartPoints;

+ (id)_buildChartPointsForDateInterval:(id)arg1 trendData:(id)arg2;

- (void)setUpdateDelegate:(id)arg1;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (id)dataForDateRange:(id)arg1 timeScope:(long long)arg2;
- (id)initWithDateInterval:(id)arg1 trendData:(id)arg2;

@end
