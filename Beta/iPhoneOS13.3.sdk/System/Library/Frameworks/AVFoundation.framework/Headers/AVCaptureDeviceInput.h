/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureDevice, AVCaptureDeviceInputInternal;

@interface AVCaptureDeviceInput : AVCaptureInput

{
    AVCaptureDeviceInputInternal *_internal;
}

@property (nonatomic, readonly) AVCaptureDevice *device;
@property (nonatomic) _Bool unifiedAutoExposureDefaultsEnabled;
@property (nonatomic) CDStruct_1b6d18a9 videoMinFrameDurationOverride;

+ (void)initialize;
+ (id)deviceInputWithDevice:(id)arg1 error:(id *)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (float)simulatedAperture;
- (void)setSession:(id)arg1;
- (id)initWithDevice:(id)arg1 error:(id *)arg2;
- (struct OpaqueCMClock *)clock;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (_Bool)isBuiltInMicrophoneStereoAudioCaptureEnabled;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:(_Bool)arg1;
- (id)ports;
- (void)setSimulatedAperture:(float)arg1;
- (float)portraitLightingEffectStrength;
- (void)setPortraitLightingEffectStrength:(float)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)multiCamPorts;
- (float)maxGainOverride;
- (_Bool)_authorizedToUseDeviceAndRequestIfNecessary:(id)arg1;
- (void)_resetSimulatedAperture;
- (void)_resetPortraitLightingEffectStrength;
- (void)_applyVideoMinFrameDurationOverride;
- (void)_resetVideoMinFrameDurationOverride;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)isMaxGainOverrideSupported;
- (_Bool)isBuiltInMicrophoneStereoAudioCaptureSupported;
- (id)notReadyError;
- (id)portsWithMediaType:(id)arg1 sourceDeviceType:(id)arg2 sourceDevicePosition:(long long)arg3;
- (void)setMaxGainOverride:(float)arg1;
- (_Bool)isVisionDataDeliveryEnabled;
- (void)setVisionDataDeliveryEnabled:(_Bool)arg1;
- (id)videoDevice;

@end
