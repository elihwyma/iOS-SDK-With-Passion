/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKBarSeries.h>

@class NSArray;

@interface HKStackedBarSeries : HKBarSeries

{
    NSArray *_selectedFillStyles;
    NSArray *_unselectedFillStyles;
}

@property (copy, nonatomic) NSArray *selectedFillStyles;
@property (copy, nonatomic) NSArray *unselectedFillStyles;

- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;

@end
