/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKUtilityCircularComplicationView.h>

@class NTKColoringImageView;

@interface NTKUtilitySmallRingComplicationView : NTKUtilityCircularComplicationView

{
    _Bool _didDrawOnce;
    float _fillFraction;
    NTKColoringImageView *_fillFractionRing;
}

@property (retain, nonatomic) NTKColoringImageView *fillFractionRing;
@property (nonatomic) float fillFraction;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)ringColor;
- (void)updateRingWithRingDescription:(id)arg1;
- (void)_enumerateColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_applyForegroundAlpha;
- (void)updateRingWithRingDescription:(id)arg1 backgroundRingAlpha:(double)arg2;

@end
