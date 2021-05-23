/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationRingProgressView;

@interface NTKRichComplicationCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView

{
    NTKColoringLabel *_centerLabel;
    NTKRichComplicationRingProgressView *_progressView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;

@end
