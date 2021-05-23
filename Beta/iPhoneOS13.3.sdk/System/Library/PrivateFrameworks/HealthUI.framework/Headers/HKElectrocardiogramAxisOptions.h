/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface HKElectrocardiogramAxisOptions : NSObject

{
    _Bool _scaleMetricsAutomatically;
    UIFont *_axisLabelFont;
    UIColor *_lineColor;
    double _lineWidth;
    double _axisLineToLabelSpacing;
    double _topBaselineMargin;
    double _bottomBaselineMargin;
}

@property (nonatomic, readonly) UIFont *axisLabelFont;
@property (nonatomic, readonly) _Bool scaleMetricsAutomatically;
@property (nonatomic, readonly) UIColor *lineColor;
@property (nonatomic, readonly) double lineWidth;
@property (nonatomic, readonly) double axisLineToLabelSpacing;
@property (nonatomic, readonly) double topBaselineMargin;
@property (nonatomic, readonly) double bottomBaselineMargin;

- (id)initWithAxisLabelFont:(id)arg1 scaleMetricsAutomatically:(_Bool)arg2 lineColor:(id)arg3 lineWidth:(double)arg4 axisLineToLabelSpacing:(double)arg5 topBaselineMargin:(double)arg6 bottomBaselineMargin:(double)arg7;

@end
