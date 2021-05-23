/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView

{
    NTKColoringLabel *_smallLabel;
    NTKColoringLabel *_centerLabel;
    NTKRichComplicationCurvedProgressView *_progressView;
}

@property (nonatomic, readonly) NTKColoringLabel *smallLabel;
@property (nonatomic, readonly) NTKColoringLabel *centerLabel;
@property (nonatomic, readonly) NTKRichComplicationCurvedProgressView *progressView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;

@end
