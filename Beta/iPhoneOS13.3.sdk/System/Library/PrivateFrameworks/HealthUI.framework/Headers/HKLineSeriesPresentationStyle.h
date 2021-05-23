/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAxisLabelStyle, HKFillStyle, HKLegendPointAnnotationStyle, HKLineSeriesPointMarkerStyle, HKStrokeStyle;

@interface HKLineSeriesPresentationStyle : NSObject

{
    _Bool _shouldApplyRollingAverage;
    _Bool _shouldNegateAnnotationValue;
    int _waveForm;
    HKStrokeStyle *_strokeStyle;
    HKFillStyle *_fillStyle;
    HKLineSeriesPointMarkerStyle *_pointMarkerStyle;
    HKLineSeriesPointMarkerStyle *_endCapStyle;
    HKAxisLabelStyle *_annotationStyle;
    HKLegendPointAnnotationStyle *_legendAnnotationStyle;
    HKAxisLabelStyle *_axisAnnotationStyle;
    double _sineWaveSmoothingFactor;
}

@property (retain, nonatomic) HKStrokeStyle *strokeStyle;
@property (retain, nonatomic) HKFillStyle *fillStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *pointMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *endCapStyle;
@property (nonatomic) int waveForm;
@property (retain, nonatomic) HKAxisLabelStyle *annotationStyle;
@property (retain, nonatomic) HKLegendPointAnnotationStyle *legendAnnotationStyle;
@property (retain, nonatomic) HKAxisLabelStyle *axisAnnotationStyle;
@property (nonatomic) _Bool shouldApplyRollingAverage;
@property (nonatomic) _Bool shouldNegateAnnotationValue;
@property (nonatomic) double sineWaveSmoothingFactor;

@end
