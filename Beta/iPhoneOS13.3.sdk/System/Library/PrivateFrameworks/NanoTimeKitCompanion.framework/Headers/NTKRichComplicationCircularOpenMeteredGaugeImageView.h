/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView, NTKRichComplicationImageView;

@interface NTKRichComplicationCircularOpenMeteredGaugeImageView : NTKRichComplicationCircularBaseView

{
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKRichComplicationImageView *_centerImageView;
    NTKColoringLabel *_smallLabel;
}

@property (nonatomic, readonly) NTKRichComplicationCurvedProgressView *progressView;
@property (nonatomic, readonly) NTKRichComplicationImageView *centerImageView;
@property (nonatomic, readonly) NTKColoringLabel *smallLabel;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;

@end
