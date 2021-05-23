/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, NTKWorldClockRichComplicationHandsView, UIColor, UILabel, WorldClockCity;

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    struct {
        double cityNameFontSize;
        double cityNameBaselineOffsetNorthSide;
        double cityNameBaselineOffsetSouthSide;
        double dialDiameter;
        struct CGSize majorTickSize;
        struct CGSize minorTickSize;
    } _constants;
    NTKRichComplicationDialView *_dialView;
    UILabel *_cityNameLabel;
    NTKWorldClockRichComplicationHandsView *_handsView;
    WorldClockCity *_city;
    struct NSNumber *_clockTimerToken;
    _Bool _positionLabelNorthSide;
    UIColor *_daytimeBackgroundColor;
    UIColor *_daytimeHandsColor;
    UIColor *_daytimeHandsDotColor;
    UIColor *_nighttimeBackgroundColor;
    UIColor *_nighttimeHandsColor;
    UIColor *_nighttimeHandsDotColor;
}

@property (retain, nonatomic) UIColor *daytimeBackgroundColor;
@property (retain, nonatomic) UIColor *daytimeHandsColor;
@property (retain, nonatomic) UIColor *daytimeHandsDotColor;
@property (retain, nonatomic) UIColor *nighttimeBackgroundColor;
@property (retain, nonatomic) UIColor *nighttimeHandsColor;
@property (retain, nonatomic) UIColor *nighttimeHandsDotColor;

- (id)init;
- (void)dealloc;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)_updateUI;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_stopClockUpdates;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_startClockUpdates;
- (_Bool)_shouldUseDaytimeColoring;
- (void)_applyPausedUpdate;

@end
