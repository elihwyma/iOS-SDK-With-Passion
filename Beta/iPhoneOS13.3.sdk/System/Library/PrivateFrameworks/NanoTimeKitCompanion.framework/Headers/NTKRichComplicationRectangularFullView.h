/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationRectangularFullView : NTKRichComplicationRectangularBaseView

{
    NTKRichComplicationImageView *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (id)init;
- (void)setPaused:(_Bool)arg1;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;

@end
