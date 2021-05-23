/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCameraCalibrationData, NSData;

__attribute__((visibility("hidden")))
@interface AVDepthDataInternal : NSObject

{
    struct __CVBuffer *pixelBuffer;
    int version;
    long long quality;
    _Bool filtered;
    long long accuracy;
    AVCameraCalibrationData *calibrationData;
    float depthBlurEffectSimulatedAperture;
    NSData *depthBlurEffectRenderingParameters;
    _Bool portraitScoreIsHigh;
    float portraitScore;
    float portraitLightingEffectStrength;
}

@end
