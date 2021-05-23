/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView, NTKRichComplicationImageView;

@interface NTKRichComplicationCircularOpenGaugeImageView : NTKRichComplicationCircularBaseView

{
    NTKRichComplicationImageView *_bottomImageView;
    NTKColoringLabel *_centerLabel;
    NTKRichComplicationCurvedProgressView *_progressView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (long long)progressFillStyle;

- (id)init;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;

@end
