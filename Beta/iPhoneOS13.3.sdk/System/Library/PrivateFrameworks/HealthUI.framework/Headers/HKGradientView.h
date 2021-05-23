/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKGradient;

@interface HKGradientView : UIView

{
    HKGradient *_gradient;
}

@property (retain, nonatomic) HKGradient *gradient;

+ (Class)layerClass;
+ (id)hk_verticalWaveformMaskGradientWithInsetLocation:(double)arg1;

- (id)initWithGradient:(id)arg1;
- (void)maskCorners:(unsigned long long)arg1 radius:(double)arg2;
- (void)maskAllCornersWithRadius:(double)arg1;
- (void)_updateGradientLayer;

@end
