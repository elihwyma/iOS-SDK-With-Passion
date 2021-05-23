/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHorizontalTimePeriodSeries.h>

@class NSString, UIColor, UIFont;

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries

{
    double _markerRadius;
    UIColor *_innerMarkColor;
    UIFont *_categoryLevelFont;
    UIColor *_categoryLevelColor;
    UIColor *_specialMarkColor;
    NSString *_specialMarkLegendLabel;
}

@property (nonatomic) double markerRadius;
@property (retain, nonatomic) UIColor *innerMarkColor;
@property (retain, nonatomic) UIFont *categoryLevelFont;
@property (retain, nonatomic) UIColor *categoryLevelColor;
@property (retain, nonatomic) UIColor *specialMarkColor;
@property (retain, nonatomic) NSString *specialMarkLegendLabel;

- (id)init;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (id)marginsForYAxis:(id)arg1 chartRect:(struct CGRect)arg2;
- (double)offsetForEnumerationRect:(struct CGRect)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (_Bool)_interiorCategoryLabels;
- (void)_drawCategoryLabels:(struct CGContext *)arg1 axisRect:(struct CGRect)arg2;

@end
