/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

@class NTKColoringImageView, UIColor;

@interface NTKCircularSmallRingComplicationView : NTKCircularComplicationView

{
    NTKColoringImageView *_fillFractionRing;
    double _fillFraction;
    _Bool _didDrawOnce;
    UIColor *_ringOverrideColor;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)setUsesMediumLayout:(_Bool)arg1;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)updateRingWithOverrideColor:(id)arg1;

@end
