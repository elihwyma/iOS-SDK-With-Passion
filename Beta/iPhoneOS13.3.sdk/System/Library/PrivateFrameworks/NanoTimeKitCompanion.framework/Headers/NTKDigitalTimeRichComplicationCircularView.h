/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseTextView.h>

@class NTKDigitalTimeLabel;

@interface NTKDigitalTimeRichComplicationCircularView : NTKRichComplicationCircularBaseTextView

{
    NTKDigitalTimeLabel *_timeLabel;
}

- (id)init;
- (void)dealloc;
- (void)updateDate;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (void)timeOffsetChanged;

@end
