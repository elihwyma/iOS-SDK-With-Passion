/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@interface CAMExposureBiasSliderThumb : UIView

{
    float _normalizedExposureValue;
}

@property (nonatomic) float normalizedExposureValue;
@property (nonatomic, readonly) double maxRadius;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (double)_sunRadius;
- (double)_sunRaySpacing;
- (double)_sunRayLength;
- (double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3;

@end
