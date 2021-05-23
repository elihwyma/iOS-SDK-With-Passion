/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKAxis.h>

@protocol HKAxisLabelDimension, HKZoomScale;

@interface HKNumericAxis : HKAxis

{
    id <HKAxisLabelDimension> _labelDimension;
    double _topVerticalLabelPadding;
    double _bottomVerticalLabelPadding;
    id <HKZoomScale> _scalarZoomScaleEngine;
}

@property (nonatomic, readonly) id <HKZoomScale> scalarZoomScaleEngine;
@property (retain, nonatomic) id <HKAxisLabelDimension> labelDimension;
@property (nonatomic) double topVerticalLabelPadding;
@property (nonatomic) double bottomVerticalLabelPadding;

+ (id)standardNumericYAxisWithLabelDimension:(id)arg1;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4;
+ (double)_roundUpByMultiple:(double)arg1 factor:(double)arg2;
+ (double)_roundDownByMultiple:(double)arg1 factor:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange)arg2;
- (id)zoomScaleEngine;
- (double)labelSpacingFactorForNumberFormatter;

@end
