/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationProgressView.h>

@interface NTKRichComplicationLineProgressView : NTKRichComplicationProgressView

{
    long long _progressFillStyle;
}

@property (nonatomic, readonly) long long progressFillStyle;

- (void)setProgress:(double)arg1;
- (id)initForDevice:(id)arg1 progressFillStyle:(long long)arg2;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)arg1 locations:(id)arg2;

@end
