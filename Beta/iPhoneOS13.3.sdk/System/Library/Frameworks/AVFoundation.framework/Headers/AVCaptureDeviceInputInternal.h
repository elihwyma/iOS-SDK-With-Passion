/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVWeakReference, NSArray;

@protocol AVCallbackCancellation;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceInputInternal : NSObject

{
    AVCaptureDevice *device;
    NSArray *ports;
    NSArray *multiCamPorts;
    _Bool unifiedAutoExposureDefaultsEnabled;
    _Bool builtInMicrophoneStereoAudioCaptureEnabled;
    _Bool visionDataDeliveryEnabled;
    float simulatedAperture;
    CDStruct_1b6d18a9 videoMinFrameDurationOverride;
    float maxGainOverride;
    _Bool ready;
    float portraitLightingEffectStrength;
    AVWeakReference *weakReference;
    id <AVCallbackCancellation> deviceOpenCallbackInvoker;
}

- (void)dealloc;

@end
