/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationImageView;

@interface NTKRichComplicationCircularStackImageView : NTKRichComplicationCircularBaseView

{
    NTKRichComplicationImageView *_line1ImageView;
    NTKColoringLabel *_line2Label;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;

- (id)init;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;

@end
