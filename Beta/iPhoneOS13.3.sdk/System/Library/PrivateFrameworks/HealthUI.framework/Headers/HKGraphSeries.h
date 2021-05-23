/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAxis, HKGraphSeriesDataSource, HKPropertyAnimationApplier, HKValueRange, NSArray, NSMutableDictionary, NSString, NSUUID, UIColor, UIView;

@protocol HKAxisAccessoryViewDelegate, HKGraphSeriesAxisAnnotation, HKGraphSeriesAxisScalingRule, HKSeriesDelegate;

@interface HKGraphSeries : NSObject

{
    _Bool _dirty;
    CDStruct_f3788345 _selectedPathRange;
    NSMutableDictionary *_cachedCoordinateListsByBlockPath;
    NSMutableDictionary *_cachedDataBlocksByBlockPath;
    HKValueRange *_closestXCoordinateRange;
    HKPropertyAnimationApplier *_animationApplier;
    HKValueRange *_visibleValueRange;
    _Bool _allowsSelection;
    _Bool _adjustYAxisForLabels;
    _Bool _animatingDuringAutoscale;
    _Bool _primarySeriesForAutoscale;
    _Bool _wantsRoundingDuringYRangeExpansion;
    HKGraphSeriesDataSource *_dataSource;
    NSArray *_titleLegendEntries;
    NSArray *_detailLegendEntries;
    id <HKSeriesDelegate> _delegate;
    id <HKGraphSeriesAxisAnnotation> _axisAnnotationDelegate;
    id <HKAxisAccessoryViewDelegate> _yAxisAccessoryViewDelegate;
    double _alpha;
    double _offscreenIndicatorAlpha;
    NSUUID *_UUID;
    id _context;
    HKAxis *_yAxis;
    id <HKGraphSeriesAxisScalingRule> _axisScalingRule;
    UIView *_cachedYAxisAccessoryView;
    UIColor *_offScreenIndicatorColor;
}

@property (retain, nonatomic) UIView *cachedYAxisAccessoryView;
@property (retain, nonatomic) HKGraphSeriesDataSource *dataSource;
@property (retain, nonatomic) NSArray *titleLegendEntries;
@property (retain, nonatomic) NSArray *detailLegendEntries;
@property (weak, nonatomic) id <HKSeriesDelegate> delegate;
@property (weak, nonatomic) id <HKGraphSeriesAxisAnnotation> axisAnnotationDelegate;
@property (weak, nonatomic) id <HKAxisAccessoryViewDelegate> yAxisAccessoryViewDelegate;
@property (nonatomic) double alpha;
@property (nonatomic) double offscreenIndicatorAlpha;
@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) _Bool allowsSelection;
@property (nonatomic) _Bool adjustYAxisForLabels;
@property (retain, nonatomic) id context;
@property (nonatomic, readonly) _Bool animatingDuringAutoscale;
@property (nonatomic) _Bool primarySeriesForAutoscale;
@property (nonatomic) _Bool wantsRoundingDuringYRangeExpansion;
@property (copy, nonatomic) HKAxis *yAxis;
@property (retain, nonatomic) id <HKGraphSeriesAxisScalingRule> axisScalingRule;
@property (retain, nonatomic) UIColor *offScreenIndicatorColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)drawFilledMarkerInContext:(struct CGContext *)arg1 color:(struct CGColor *)arg2 x:(double)arg3 y:(double)arg4 radius:(double)arg5;
+ (void)drawInnerDotMarkerInContext:(struct CGContext *)arg1 outColor:(struct CGColor *)arg2 inColor:(struct CGColor *)arg3 x:(double)arg4 y:(double)arg5 radius:(double)arg6;

- (id)init;
- (void)dealloc;
- (void)clearCaches;
- (_Bool)isHighlighted;
- (long long)overlayType;
- (CDStruct_f3788345)selectedPathRange;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (void)dataSourceDidUpdateCache:(id)arg1;
- (_Bool)shouldInvertAxis;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (void)_setDirtyWithNewData:(_Bool)arg1;
- (void)autoscaleYAxisWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(struct CGRect)arg5 animated:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)valueRangeForYAxisWithXAxisRange:(id)arg1 dateZoom:(long long)arg2 chartRect:(struct CGRect)arg3;
- (void)autoscaleYAxisWithYAxisRange:(id)arg1 chartRect:(struct CGRect)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_dataBlockForBlockPath:(CDStruct_6ca94699)arg1;
- (void)_enumeratePathIndexesInValueRange:(id)arg1 zoomLevel:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (id)_expandYRange:(id)arg1 withXRange:(id)arg2 dateZoom:(long long)arg3 chartRect:(struct CGRect)arg4;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect)arg2;
- (struct UIEdgeInsets)virtualMarginInsets;
- (id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(double)arg2 chartRect:(struct CGRect)arg3 contentOffset:(struct CGPoint)arg4;
- (struct CGAffineTransform)coordinateTransformForChartRect:(struct CGRect)arg1 xAxisTransform:(struct CGAffineTransform)arg2;
- (void)enumerateCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5 roundToViewScale:(_Bool)arg6 exclusionOptions:(long long)arg7 block:(CDUnknownBlockType)arg8;
- (id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(struct CGRect)arg2 contentOffset:(struct CGPoint)arg3 zoomScale:(double)arg4;
- (id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(long long)arg3;
- (id)_cachedCoordinatesForBlockPath:(CDStruct_6ca94699)arg1;
- (id)_coordinatesForBlockPath:(CDStruct_6ca94699)arg1 xAxis:(id)arg2;
- (void)_cacheCoordinates:(id)arg1 forBlockPath:(CDStruct_6ca94699)arg2;
- (void)selectPathsinPathRange:(CDStruct_f3788345)arg1 coordinateRange:(id)arg2;
- (id)visibleValueRange;
- (void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 yAxisRange:(id)arg2 xAxis:(id)arg3 dateZoom:(long long)arg4 chartRect:(struct CGRect)arg5;
- (void)cancelInFlightAutoscale;
- (double)xAxisSelectedCoordinate:(double)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (id)seriesCoordinatesWithXAxis:(id)arg1 chartRect:(struct CGRect)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4;
- (struct CGAffineTransform)coordinateTransformFromXAxisTransform:(struct CGAffineTransform)arg1 chartRect:(struct CGRect)arg2;
- (void)drawWithChartRect:(struct CGRect)arg1 seriesCoordinates:(id)arg2 zoomLevelConfiguration:(id)arg3 coordinateTransform:(struct CGAffineTransform)arg4 inContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)containsCoordinatesInChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;
- (struct CGSize)yAxisAccessoryViewSize;
- (struct UIEdgeInsets)yAxisAccessoryViewEdgeInsets;
- (_Bool)configureYAxisAccessoryViewForDateRange:(id)arg1 timeScope:(long long)arg2;
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2;
- (id)overlayIdentifier;
- (void)drawOverlayInContext:(struct CGContext *)arg1 seriesOverlayData:(id)arg2;
- (id)overlayInteractiveViewsWithDelegate:(id)arg1;
- (void)layoutOverlayInteractiveViews:(id)arg1 seriesOverlayData:(id)arg2 overlayRect:(struct CGRect)arg3;
- (id)closestXCoordinateRange;
- (void)deselectPath;
- (double)distanceFromTouchPoint:(struct CGPoint)arg1 inChartRect:(struct CGRect)arg2 xAxis:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint)arg5 xAxisTransform:(struct CGAffineTransform)arg6;
- (id)findVisibleBlockCoordinatesForChartRect:(struct CGRect)arg1 xAxis:(id)arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint)arg4 xAxisTransform:(struct CGAffineTransform)arg5;
- (_Bool)untransformedChartPointsForTimeScope:(long long)arg1 range:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (struct CGRect)adjustRect:(struct CGRect)arg1 forFont:(id)arg2;
- (void)drawRoundedRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
- (struct CGRect)backgroundRectFromStringRect:(struct CGRect)arg1 forFont:(id)arg2;

@end
