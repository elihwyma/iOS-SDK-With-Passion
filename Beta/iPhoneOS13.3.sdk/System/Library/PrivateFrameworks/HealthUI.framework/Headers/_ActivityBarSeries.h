/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKBarSeries.h>

@class HKDisplayTypeController, HKFillStyle, HKUnitPreferenceController;

@protocol HKActivityBarSeriesDelegate;

@interface _ActivityBarSeries : HKBarSeries

{
    HKUnitPreferenceController *_unitPreferenceController;
    HKFillStyle *_missedGoalUnselectedFillStyle;
    id <HKActivityBarSeriesDelegate> _activityBarDelegate;
    HKDisplayTypeController *_displayTypeController;
    long long _activityDisplayTypeIdentifier;
    double _lastLegendUpdateTime;
}

@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) HKFillStyle *missedGoalUnselectedFillStyle;
@property (weak, nonatomic) id <HKActivityBarSeriesDelegate> activityBarDelegate;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic) long long activityDisplayTypeIdentifier;
@property (nonatomic) double lastLegendUpdateTime;

- (_Bool)supportsMultiTouchSelection;
- (void)updateLegendsForTimeScope:(long long)arg1 range:(id)arg2;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform)arg3 context:(struct CGContext *)arg4 axisRect:(struct CGRect)arg5;
- (id)initWithUnitPreferenceController:(id)arg1 activityBarDelegate:(id)arg2 displayTypeController:(id)arg3;
- (void)_drawPath:(id)arg1 withFillStyle:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;

@end
