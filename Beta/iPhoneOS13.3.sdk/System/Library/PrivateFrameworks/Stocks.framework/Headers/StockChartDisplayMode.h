/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface StockChartDisplayMode : NSObject

{
    NSString *_hash;
    _Bool _showsVolume;
    _Bool _HUDEnabled;
    _Bool _showsPriceLabelForPreviousClose;
    _Bool _usesDetailedAxisLabels;
    _Bool _graphOverlapsYAxisLabels;
    long long _maxInterval;
    double _showsTitle;
    unsigned long long _yAxisLabelCount;
    unsigned long long _horizontalGridlineCount;
    double _volumeHeight;
    double _intervalRowHeight;
    double _lineWidth;
    UIColor *_lineColor;
    UIColor *_backgroundLinesColor;
    UIColor *_xAxisKeylineColor;
    UIColor *_axisLabelsColor;
    struct CGGradient *_backgroundGradient;
    struct CGSize _chartSize;
    struct UIEdgeInsets _lineGraphInsets;
    struct UIEdgeInsets _chartRenderingInsets;
}

@property (nonatomic) struct CGSize chartSize;
@property (nonatomic) _Bool showsVolume;
@property (nonatomic) long long maxInterval;
@property (nonatomic) _Bool HUDEnabled;
@property (nonatomic) double showsTitle;
@property (nonatomic) unsigned long long yAxisLabelCount;
@property (nonatomic) unsigned long long horizontalGridlineCount;
@property (nonatomic) _Bool showsPriceLabelForPreviousClose;
@property (nonatomic) _Bool usesDetailedAxisLabels;
@property (nonatomic) struct UIEdgeInsets lineGraphInsets;
@property (nonatomic) _Bool graphOverlapsYAxisLabels;
@property (nonatomic) double volumeHeight;
@property (nonatomic) double intervalRowHeight;
@property (nonatomic, readonly) double gutterHeight;
@property (nonatomic, readonly) double lineGraphBottomPadding;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) UIColor *lineColor;
@property (retain, nonatomic) UIColor *backgroundLinesColor;
@property (retain, nonatomic) UIColor *xAxisKeylineColor;
@property (retain, nonatomic) UIColor *axisLabelsColor;
@property (nonatomic) struct CGGradient *backgroundGradient;
@property (nonatomic) struct UIEdgeInsets chartRenderingInsets;

+ (id)defaultDisplayMode;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
