/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKGraphSeries.h>

@class NSString, UIColor, UIImage;

@interface HKHorizontalSingleLineSeries : HKGraphSeries

{
    _Bool _shouldConnectPoints;
    double _topInsetPercentage;
    UIColor *_baseColor;
    double _lineWidth;
    double _selectedLineWidth;
    double _markRadius;
    UIImage *_selectedPointMarkerImage;
}

@property (nonatomic) double topInsetPercentage;
@property (nonatomic) _Bool shouldConnectPoints;
@property (retain, nonatomic) UIColor *baseColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) double selectedLineWidth;
@property (nonatomic) double markRadius;
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setYAxis:(id)arg1;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;
- (double)yCoordinateForLevel:(long long)arg1 chartRect:(struct CGRect)arg2;

@end
