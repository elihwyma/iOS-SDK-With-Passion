/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <FitnessUI/FIUIChartBackgroundView.h>

@class UIColor, UIImageView;

@interface FIUIChartMultiDashedBackgroundView : FIUIChartBackgroundView

{
    UIImageView *_imageView;
    UIColor *_lineColor;
    UIColor *_subLineColor;
    double _previousWidth;
    _Bool _backgroundIsTransparent;
    double _lineWidth;
    double _sublineInset;
    unsigned long long _numLines;
    unsigned long long _sublineInterval;
}

@property (nonatomic) double lineWidth;
@property (nonatomic) double sublineInset;
@property (nonatomic) unsigned long long numLines;
@property (nonatomic) unsigned long long sublineInterval;
@property (nonatomic) _Bool backgroundIsTransparent;

+ (id)calculateRoundedLinePositionsForTotalWidth:(double)arg1 lineWidth:(double)arg2 numberOfLines:(unsigned long long)arg3 roundedInView:(id)arg4;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_stretchableLinesPatternImage;
- (void)_setNeedsRegenerateBackgroundImage;

@end
