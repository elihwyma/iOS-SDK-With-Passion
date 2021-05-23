/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKBarSeries.h>

@class HKStrokeStyle, NSArray;

@interface HKSleepDurationSeries : HKBarSeries

{
    NSArray *_defaultFillStyles;
    NSArray *_highlightedFillStyles;
    HKStrokeStyle *_goalLineStokeStyle;
    CDUnknownBlockType _startOfDayTransform;
}

@property (copy, nonatomic) NSArray *defaultFillStyles;
@property (copy, nonatomic) NSArray *highlightedFillStyles;
@property (copy, nonatomic) HKStrokeStyle *goalLineStokeStyle;
@property (copy, nonatomic) CDUnknownBlockType startOfDayTransform;

- (id)_durationFormatter;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (_Bool)supportsMultiTouchSelection;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect)arg2 minimumSpacing:(double)arg3;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (void)_drawGoalLinePath:(id)arg1 context:(struct CGContext *)arg2;
- (void)_addAnnotationForValue:(double)arg1;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;

@end
