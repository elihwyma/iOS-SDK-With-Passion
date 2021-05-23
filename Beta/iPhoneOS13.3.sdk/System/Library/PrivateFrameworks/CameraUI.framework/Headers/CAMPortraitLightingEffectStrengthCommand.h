/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMPortraitLightingEffectStrengthCommand : CAMCaptureCommand

{
    double _effectStrength;
}

@property (nonatomic, readonly) double effectStrength;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithEffectStrength:(double)arg1;

@end
