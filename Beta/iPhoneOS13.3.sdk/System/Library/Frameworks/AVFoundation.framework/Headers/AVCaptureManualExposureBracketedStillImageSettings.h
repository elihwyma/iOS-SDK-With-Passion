/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureBracketedStillImageSettings.h>

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings

{
    CDStruct_1b6d18a9 _exposureDuration;
    float _ISO;
}

@property (readonly) CDStruct_1b6d18a9 exposureDuration;
@property (readonly) float ISO;

+ (id)manualExposureSettingsWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;

- (id)description;
- (id)debugDescription;
- (id)_initManualExposureSettingsWithExposureDuration:(CDStruct_1b6d18a9)arg1 ISO:(float)arg2;

@end
