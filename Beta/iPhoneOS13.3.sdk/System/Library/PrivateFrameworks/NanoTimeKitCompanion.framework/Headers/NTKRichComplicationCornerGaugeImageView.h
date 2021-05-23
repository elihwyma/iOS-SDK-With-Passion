/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerGaugeCustomView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerGaugeImageView : NTKRichComplicationCornerGaugeCustomView

{
    NTKRichComplicationImageView *_imageView;
}

@property (nonatomic, readonly) NTKRichComplicationImageView *imageView;

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)setPaused:(_Bool)arg1;
- (id)_outerView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;

@end
