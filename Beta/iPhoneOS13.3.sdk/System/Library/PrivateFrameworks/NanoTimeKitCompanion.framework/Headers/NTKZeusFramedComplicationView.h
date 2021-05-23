/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKZeusComplicationView.h>

@class NSArray;

@interface NTKZeusFramedComplicationView : NTKZeusComplicationView

{
    NSArray *_cornerLayers;
}

- (id)init;
- (void)setStyle:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_updateCorners;
- (void)applyPalette:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (id)_cornerImage;

@end
