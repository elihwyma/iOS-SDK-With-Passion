/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class HKLineSeriesPointMarkerStyle, NSArray;

@interface HKLineSeries : HKGraphSeries

{
    _Bool _flatLastValue;
    _Bool _extendLastValue;
    _Bool _extendFirstValue;
    NSArray *_unhighlightedPresentationStyles;
    NSArray *_highlightedPresentationStyles;
    NSArray *_selectedPresentationStyles;
    HKLineSeriesPointMarkerStyle *_selectedPointMarkerStyle;
}

@property (retain, nonatomic) NSArray *unhighlightedPresentationStyles;
@property (retain, nonatomic) NSArray *highlightedPresentationStyles;
@property (retain, nonatomic) NSArray *selectedPresentationStyles;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *selectedPointMarkerStyle;
@property (nonatomic) _Bool flatLastValue;
@property (nonatomic) _Bool extendLastValue;
@property (nonatomic) _Bool extendFirstValue;

- (id)init;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (void)addAxisAnnotationForValue:(double)arg1;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 weightedAverageWidth:(double)arg3 block:(CDUnknownBlockType)arg4;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumerateSawToothPathsFromBlockCoordinates:(id)arg1 transform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(struct CGRect)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_enumerateSinePathsFromBlockCoordinates:(id)arg1 transfrom:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(struct CGRect)arg5 handler:(CDUnknownBlockType)arg6;
- (id)_currentPresentationStyles;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumeratePathsFromBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 transform:(struct CGAffineTransform)arg4 presentationStyle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_renderLineEndCapsInContext:(struct CGContext *)arg1 endCaps:(id)arg2 endCapImage:(id)arg3;
- (void)_renderPointMarkersInContext:(struct CGContext *)arg1 blockCoordinates:(id)arg2 pointTransform:(struct CGAffineTransform)arg3 pointMarkerImage:(id)arg4;
- (void)_renderPointLabelsInContext:(struct CGContext *)arg1 blockCoordinates:(id)arg2 axisRect:(struct CGRect)arg3 pointTransform:(struct CGAffineTransform)arg4 presentationStyle:(id)arg5 zoomLevelConfiguration:(id)arg6;
- (void)_renderLegendPointLabelInContext:(struct CGContext *)arg1 point:(struct CGPoint)arg2 untransformedPoint:(struct CGPoint)arg3 presentationStyle:(id)arg4 leftOfPoint:(_Bool)arg5;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 secondaryRenderContext:(id)arg2 pointTransform:(struct CGAffineTransform)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect)arg5;
- (void)_renderPointLegendLabelWithText:(id)arg1 drawRect:(struct CGRect)arg2 labelAttributes:(id)arg3;
- (void)_renderPointLabelInContext:(struct CGContext *)arg1 renderingData:(CDStruct_d6e4b0bd)arg2 numberFormatter:(id)arg3 labelAttributes:(id)arg4;

@end
