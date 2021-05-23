/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView

{
    NTKColoringLabel *_leadingSmallLabel;
    NTKColoringLabel *_trailingSmallLabel;
    NTKColoringLabel *_centerLabel;
    NTKRichComplicationCurvedProgressView *_progressView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (long long)progressFillStyle;

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;

@end
