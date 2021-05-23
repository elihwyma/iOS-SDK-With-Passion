/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class HKStrokeStyle, UIImage;

@interface HKMinMaxSeries : HKGraphSeries

{
    HKStrokeStyle *_unselectedStrokeStyle;
    HKStrokeStyle *_selectedStrokeStyle;
    UIImage *_unselectedPointMarkerImage;
    UIImage *_selectedPointMarkerImage;
}

@property (retain, nonatomic) HKStrokeStyle *unselectedStrokeStyle;
@property (retain, nonatomic) HKStrokeStyle *selectedStrokeStyle;
@property (retain, nonatomic) UIImage *unselectedPointMarkerImage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;

- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform)arg2 context:(struct CGContext *)arg3 axisRect:(struct CGRect)arg4;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (void)_drawPointMarkersWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform)arg2 context:(struct CGContext *)arg3;

@end
