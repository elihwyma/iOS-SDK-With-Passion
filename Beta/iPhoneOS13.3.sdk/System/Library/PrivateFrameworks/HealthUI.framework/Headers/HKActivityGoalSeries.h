/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class HKFillStyle, HKStrokeStyle;

@interface HKActivityGoalSeries : HKGraphSeries

{
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
}

- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect)arg4 block:(CDUnknownBlockType)arg5;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 axisRect:(struct CGRect)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithStrokeStyle:(id)arg1 fillStyle:(id)arg2;

@end
