/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMCaptureConfiguration : NSObject

{
    _Bool _photoBooth;
    long long _mode;
    long long _device;
    long long _videoConfiguration;
    long long _audioConfiguration;
    long long _flashMode;
    long long _torchMode;
    long long _HDRMode;
    long long _timerDuration;
    long long _irisMode;
    long long _photoModeAspectRatioCrop;
    long long _photoModeEffectFilterType;
    long long _squareModeEffectFilterType;
    long long _portraitModeEffectFilterType;
    long long _portraitModeLightingEffectType;
    double _portraitModeApertureValue;
    double _portraitModeIntensityValue;
}

@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long device;
@property (nonatomic, readonly) long long videoConfiguration;
@property (nonatomic, readonly) long long audioConfiguration;
@property (nonatomic, readonly) long long flashMode;
@property (nonatomic, readonly) long long torchMode;
@property (nonatomic, readonly) long long HDRMode;
@property (nonatomic, readonly) long long timerDuration;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly) long long photoModeAspectRatioCrop;
@property (nonatomic, readonly) long long photoModeEffectFilterType;
@property (nonatomic, readonly) long long squareModeEffectFilterType;
@property (nonatomic, readonly) long long portraitModeEffectFilterType;
@property (nonatomic, readonly) long long portraitModeLightingEffectType;
@property (nonatomic, readonly) double portraitModeApertureValue;
@property (nonatomic, readonly) double portraitModeIntensityValue;
@property (nonatomic, readonly, getter=isPhotoBooth) _Bool photoBooth;

+ (long long)audioConfigurationForMode:(long long)arg1 device:(long long)arg2 emulationMode:(long long)arg3 duringCall:(_Bool)arg4 forceMonoAudioRecording:(_Bool)arg5;
+ (id)captureGraphConfigurationUsingConfiguration:(id)arg1;
+ (id)configuration:(id)arg1 withDevice:(long long)arg2;
+ (id)tinyConfigurationForConfiguration:(id)arg1 preserveFilters:(_Bool)arg2;
+ (long long)sanitizeVideoConfigurationForDesiredConfiguration:(long long)arg1 mode:(long long)arg2 device:(long long)arg3;
+ (long long)_fallbackVideoConfigurationForUnsupportedConfiguration:(long long)arg1;

- (id)initWithConfiguration:(id)arg1;
- (id)_previewFilters;
- (id)initWithCaptureMode:(long long)arg1 captureDevice:(long long)arg2 videoConfiguration:(long long)arg3 audioConfiguration:(long long)arg4 flashMode:(long long)arg5 torchMode:(long long)arg6 HDRMode:(long long)arg7 irisMode:(long long)arg8 timerDuration:(long long)arg9 photoModeAspectRatioCrop:(long long)arg10 photoModeEffectFilterType:(long long)arg11 squareModeEffectFilterType:(long long)arg12 portraitModeEffectFilterType:(long long)arg13 portraitModeLightingEffectType:(long long)arg14 portraitModeApertureValue:(double)arg15 portraitModeIntensityValue:(double)arg16;
- (id)initForPhotoBoothWithCaptureDevice:(long long)arg1;

@end
