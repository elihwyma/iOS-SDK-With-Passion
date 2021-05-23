/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class NSArray, NSDictionary, NSString, UIColor, UIImage;

@interface HKHorizontalTimePeriodSeries : HKGraphSeries

{
    NSArray *_cachedAxisLabels;
    UIImage *_selectedPointMarkerImage;
    UIColor *_fillColor;
    double _lineWidth;
    NSArray *_enumerationValueOrdering;
    NSDictionary *_valueLabels;
}

@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) NSArray *enumerationValueOrdering;
@property (retain, nonatomic) NSDictionary *valueLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setYAxis:(id)arg1;
- (id)_generateAxisLabels;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)offsetForCoordinate:(id)arg1 axisRect:(struct CGRect)arg2;
- (long long)_enumeratedLevelForCoordinate:(id)arg1;
- (struct CGRect)enumerationRectForLevel:(long long)arg1 axisRect:(struct CGRect)arg2;
- (double)offsetForEnumerationRect:(struct CGRect)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;

@end
