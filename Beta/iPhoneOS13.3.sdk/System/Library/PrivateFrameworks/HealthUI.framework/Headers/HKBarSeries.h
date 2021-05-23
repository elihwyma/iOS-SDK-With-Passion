/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class HKFillStyle, HKStrokeStyle;

@interface HKBarSeries : HKGraphSeries

{
    HKStrokeStyle *_unselectedStrokeStyle;
    HKStrokeStyle *_selectedStrokeStyle;
    HKFillStyle *_unselectedFillStyle;
    HKFillStyle *_selectedFillStyle;
    HKStrokeStyle *_tiledStrokeStyle;
    struct CGSize _cornerRadii;
}

@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (retain, nonatomic) HKFillStyle *unselectedFillStyle;
@property (retain, nonatomic) HKFillStyle *selectedFillStyle;
@property (retain, nonatomic) HKStrokeStyle *tiledStrokeStyle;
@property (nonatomic) struct CGSize cornerRadii;

- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;

@end
