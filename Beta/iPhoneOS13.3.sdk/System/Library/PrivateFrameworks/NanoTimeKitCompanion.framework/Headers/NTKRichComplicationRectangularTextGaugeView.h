/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationImageView, NTKRichComplicationLineProgressView;

@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularBaseView

{
    NTKRichComplicationImageView *_headerImageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_line1Label;
    NTKRichComplicationLineProgressView *_progressView;
}

@property (nonatomic, readonly) NTKRichComplicationImageView *headerImageView;
@property (nonatomic, readonly) NTKColoringLabel *headerLabel;
@property (nonatomic, readonly) NTKColoringLabel *line1Label;
@property (nonatomic, readonly) NTKRichComplicationLineProgressView *progressView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (long long)progressFillStyle;
+ (_Bool)isMeteredProgressView;

- (id)init;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleTemplateUpdateWithReason:(long long)arg1 headerImageProvider:(id)arg2 headerTextProvider:(id)arg3 body1TextProvider:(id)arg4 gaugeProvider:(id)arg5;

@end
