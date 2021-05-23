/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

{
    float _exposureTargetBias;
}

@property (readonly) float exposureTargetBias;

+ (id)autoExposureSettingsWithExposureTargetBias:(float)arg1;

- (id)description;
- (id)debugDescription;
- (id)_initAutoExposureSettingsWithExposureTargetBias:(float)arg1;

@end
