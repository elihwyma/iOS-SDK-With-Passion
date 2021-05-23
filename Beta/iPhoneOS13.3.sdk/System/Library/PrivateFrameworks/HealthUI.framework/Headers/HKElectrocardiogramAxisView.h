/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class CAReplicatorLayer, HKElectrocardiogramAxisOptions, UIColor, UIFont, UIFontMetrics;

@interface HKElectrocardiogramAxisView : UIView

{
    double _axisSpacing;
    HKElectrocardiogramAxisOptions *_options;
    CAReplicatorLayer *_ticksLayer;
    UIFontMetrics *_metrics;
    long long _startingIndex;
    struct CGSize _lastBoundsSize;
}

@property (retain, nonatomic) HKElectrocardiogramAxisOptions *options;
@property (retain, nonatomic) CAReplicatorLayer *ticksLayer;
@property (retain, nonatomic) UIFontMetrics *metrics;
@property (nonatomic) long long startingIndex;
@property (nonatomic) struct CGSize lastBoundsSize;
@property (nonatomic, readonly) UIFont *axisLabelFont;
@property (nonatomic) double axisSpacing;
@property (nonatomic, readonly) UIColor *lineColor;
@property (nonatomic, readonly) double lineWidth;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)_createLabel;
- (id)initWithAxisSpacing:(double)arg1 options:(id)arg2 startingIndex:(long long)arg3;
- (void)_drawAxis;
- (id)initWithAxisSpacing:(double)arg1 lineColor:(id)arg2 lineWidth:(double)arg3;

@end
