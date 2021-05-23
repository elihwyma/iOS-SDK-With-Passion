/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKBarSeries.h>

@interface HKHistogramBarSeries : HKBarSeries

{
    unsigned long long _numberOfColumns;
}

@property (nonatomic) unsigned long long numberOfColumns;

- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;
- (id)initWithFillStyle:(id)arg1 numberOfColumns:(unsigned long long)arg2 cornerRadii:(struct CGSize)arg3;

@end
