/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NSDate, NTKColoringLabel, NTKRichComplicationDialView, UIImageView;

@interface NTKTimerRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    NTKRichComplicationDialView *_backgroundDial;
    NTKRichComplicationDialView *_foregroundDial;
    UIImageView *_timerImageView;
    NTKColoringLabel *_timerLabel;
    NSDate *_timerDate;
    double _timerDuration;
    struct NSNumber *_updateToken;
    struct {
        long long numberTicks;
        struct CGSize tickSize;
        double dialDiameter;
        double timerLabelBottom;
        double timerLabelFontSize;
        double timerLabelMaxWidth;
    } _layoutConstants;
}

- (id)init;
- (void)dealloc;
- (void)_resume;
- (void)layoutSubviews;
- (void)_pause;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_applyPausedUpdate;
- (void)_updateDialProgress;

@end
