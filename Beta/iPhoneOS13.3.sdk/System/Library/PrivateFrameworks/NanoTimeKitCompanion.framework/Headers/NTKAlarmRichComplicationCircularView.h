/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationRingProgressView, UIImageView;

@interface NTKAlarmRichComplicationCircularView : NTKRichComplicationCircularBaseView

{
    UIImageView *_idleImageView;
    NTKColoringLabel *_timeLabel;
    NTKColoringLabel *_designatorLabel;
    UIImageView *_snoozeImageView;
    NTKRichComplicationRingProgressView *_snoozeProgressView;
    struct {
        double timeLabel12HourLayoutFontSize;
        double timeLabel12HourLayoutMaxWidth;
        double timeLabel12HourTimeLeadingLayoutBottom;
        double timeLabel12HourDesignatorLeadingLayoutBottom;
        double timeLabel24HourLayoutFontSize;
        double timeLabel24HourLayoutMaxWidth;
        double timeLabel24HourLayoutBottom;
        double timeLabeSnoozeLayoutFontSize;
        double timeLabeSnoozeLayoutMaxWidth;
        double timeLabelSnoozeLayoutBottom;
        double designatorLabelFontSize;
        double designatorLabelMaxWidth;
        double designatorLabel12HourTimeLeadingLayoutBottom;
        double designatorLabel12HourDesignatorLeadingLayoutBottom;
        double snoozeIconTop;
        double snoozeRingStrokeWidth;
    } _layoutConstants;
    unsigned long long _layout;
}

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;

@end
