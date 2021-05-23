/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerTextCustomView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerTextImageView : NTKRichComplicationCornerTextCustomView

{
    NTKRichComplicationImageView *_imageView;
}

+ (_Bool)handlesComplicationTemplate:(id)arg1;
+ (_Bool)supportsComplicationFamily:(long long)arg1;

- (void)setPaused:(_Bool)arg1;
- (id)_outerView;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_editingDidEnd;

@end
