/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class HKAxisLabelStyle, HKStrokeStyle;

@interface HKQuantityDistributionSeries : HKGraphSeries

{
    _Bool _excludeDistribution;
    HKStrokeStyle *_inactiveStrokeStyle;
    HKStrokeStyle *_unselectedStrokeStyle;
    HKStrokeStyle *_selectedStrokeStyle;
    HKAxisLabelStyle *_minMaxLabelStyle;
    HKAxisLabelStyle *_minMaxValueStyle;
    HKStrokeStyle *_minMaxPointStyle;
}

@property (copy, nonatomic) HKStrokeStyle *inactiveStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (copy, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (copy, nonatomic) HKAxisLabelStyle *minMaxLabelStyle;
@property (copy, nonatomic) HKAxisLabelStyle *minMaxValueStyle;
@property (copy, nonatomic) HKStrokeStyle *minMaxPointStyle;
@property (nonatomic) _Bool excludeDistribution;

- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect)arg2;
- (void)_drawMinMaxLabelsForMin:(struct CGPoint)arg1 max:(struct CGPoint)arg2 pointTransform:(struct CGAffineTransform)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (struct CGRect)_textRectForSize:(struct CGSize)arg1 location:(struct CGPoint)arg2 screenRect:(struct CGRect)arg3 yOffset:(double)arg4;
- (id)_quickDate:(id)arg1;

@end
