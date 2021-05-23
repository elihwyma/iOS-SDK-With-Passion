/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseCircularView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerCircularImageView : NTKRichComplicationCornerBaseCircularView

{
    NTKRichComplicationImageView *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)setPaused:(_Bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)_circularView;

@end
