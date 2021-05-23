/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAxisLabelCache, HKAxisStyle, HKCoordinateTransform, HKValueRange, NSMutableArray, NSString;

@protocol HKAxisLabelDataSource, HKZoomScale;

@interface HKAxis : NSObject

{
    _Bool _requiresScaling;
    _Bool _automaticallyFitData;
    HKAxisStyle *_preferredStyle;
    HKAxisStyle *_secondaryStyle;
    long long _maxLabels;
    long long _minLabels;
    long long _axisLabelEndings;
    HKCoordinateTransform *_transform;
    id <HKZoomScale> _zoomScale;
    id <HKAxisLabelDataSource> _labelDataSource;
    HKValueRange *_chartableValueRange;
    NSMutableArray *_axisAnnotations;
    HKAxisLabelCache *_axisLabelCache;
    struct HKLinearTransform _pointTransform;
}

@property (retain, nonatomic) NSMutableArray *axisAnnotations;
@property (retain, nonatomic) HKAxisLabelCache *axisLabelCache;
@property (nonatomic, readonly) _Bool requiresScaling;
@property (retain, nonatomic) HKAxisStyle *preferredStyle;
@property (retain, nonatomic) HKAxisStyle *secondaryStyle;
@property (nonatomic) _Bool automaticallyFitData;
@property (nonatomic) long long maxLabels;
@property (nonatomic) long long minLabels;
@property (nonatomic) long long axisLabelEndings;
@property (nonatomic, readonly) HKCoordinateTransform *transform;
@property (nonatomic, readonly) id <HKZoomScale> zoomScale;
@property (nonatomic) struct HKLinearTransform pointTransform;
@property (weak, nonatomic) id <HKAxisLabelDataSource> labelDataSource;
@property (retain, nonatomic) HKValueRange *chartableValueRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct HKAxisMinMaxDefinition)expandByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition)arg3 pointRange:(struct HKAxisMinMaxDefinition)arg4;
+ (struct HKAxisMinMaxDefinition)contractByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition)arg3 pointRange:(struct HKAxisMinMaxDefinition)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearCache;
- (void)clearAnnotations;
- (struct HKLinearTransform)_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(struct HKLinearTransform)arg2 chartRange:(struct HKRange)arg3;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (struct CGPoint)renderPositionForLabel:(id)arg1 rect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(_Bool)arg6 optionalOffset:(struct CGPoint)arg7;
- (struct CGRect)labelRectWithModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange)arg2;
- (_Bool)isEqualToAxis:(id)arg1;
- (void)drawBaselineForModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5;
- (void)drawGridlinesForModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5 blendMode:(int)arg6;
- (void)drawLabelsWithModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5 maximumLabelSize:(struct CGSize *)arg6 omitOffscreenLabels:(_Bool)arg7;
- (id)rangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (long long)dateZoomForZoomScale:(double)arg1;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (id)zoomScaleEngine;
- (void)addAxisAnnotation:(id)arg1 textColor:(id)arg2 modelCoordinate:(id)arg3;
- (id)initWithTransform:(id)arg1 zoomScale:(id)arg2;
- (struct HKRange)_chartRangeForChartRect:(struct CGRect)arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint)arg3;
- (void)_offsetForChartRect:(struct CGRect)arg1 chartRange:(struct HKRange)arg2 zoomScaleOut:(double *)arg3 contentOffsetOut:(struct CGPoint *)arg4;
- (struct HKLinearTransform)pointTransformFittingValueRange:(id)arg1 toChartRange:(struct HKRange)arg2;
- (_Bool)_styleIsHorizontal:(id)arg1;
- (id)_cachedAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (double)_axisOffsetWithStyle:(id)arg1 chartRect:(struct CGRect)arg2 horizontalAlignmentOut:(long long *)arg3;
- (struct CGRect)_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect)arg4 style:(id)arg5;
- (void)_drawTextForModelRange:(id)arg1 inRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 renderView:(id)arg5 style:(id)arg6 maximumLabelSize:(struct CGSize *)arg7 omitOffscreenLabels:(_Bool)arg8;
- (id)_baselineForModelRange:(id)arg1 axisRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 style:(id)arg5;
- (id)_gridLinesForModelRange:(id)arg1 axisRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 style:(id)arg5 gridLineType:(long long)arg6;
- (void)_drawTextBackgroundWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect)arg4 style:(id)arg5 renderView:(id)arg6;
- (double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3;
- (double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2;
- (void)enumerateTickCoordinatesInModelRange:(id)arg1 zoomScale:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (double)_baselineYCoordinateForModelRange:(id)arg1 axisRect:(struct CGRect)arg2 zoomScale:(double)arg3;
- (void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(struct CGRect)arg2 modelRange:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 toBezierPath:(id)arg6 style:(id)arg7;
- (void)_renderTickMarksForModelRange:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 style:(id)arg5 renderView:(id)arg6;
- (long long)axisAnnotationCount;

@end
