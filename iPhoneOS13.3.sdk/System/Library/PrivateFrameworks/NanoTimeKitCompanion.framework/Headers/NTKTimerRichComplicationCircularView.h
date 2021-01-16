//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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
    NSNumber *_updateToken;
    struct {
        long long numberTicks;
        CGSize tickSize;
        double dialDiameter;
        double timerLabelBottom;
        double timerLabelFontSize;
        double timerLabelMaxWidth;
    } _layoutConstants;
}

// - (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_pause;
- (void)_resume;
- (void)_updateDialProgress;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end
