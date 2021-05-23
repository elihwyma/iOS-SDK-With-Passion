/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureConnectionInternal, AVCaptureOutput, AVCaptureVideoPreviewLayer, NSArray;

@interface AVCaptureConnection : NSObject

{
    AVCaptureConnectionInternal *_internal;
    _Bool _supportsVideoFieldMode;
    long long _videoFieldMode;
}

@property (nonatomic, readonly) NSArray *inputPorts;
@property (nonatomic, readonly) AVCaptureOutput *output;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) NSArray *audioChannels;
@property (nonatomic, readonly, getter=isVideoMirroringSupported) _Bool supportsVideoMirroring;
@property (nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property (nonatomic) _Bool automaticallyAdjustsVideoMirroring;
@property (nonatomic, readonly, getter=isVideoOrientationSupported) _Bool supportsVideoOrientation;
@property (nonatomic) long long videoOrientation;
@property (nonatomic, readonly, getter=isVideoFieldModeSupported) _Bool supportsVideoFieldMode;
@property (nonatomic) long long videoFieldMode;
@property (nonatomic, readonly, getter=isVideoMinFrameDurationSupported) _Bool supportsVideoMinFrameDuration;
@property (nonatomic) CDStruct_1b6d18a9 videoMinFrameDuration;
@property (nonatomic, readonly, getter=isVideoMaxFrameDurationSupported) _Bool supportsVideoMaxFrameDuration;
@property (nonatomic) CDStruct_1b6d18a9 videoMaxFrameDuration;
@property (nonatomic, readonly) double videoMaxScaleAndCropFactor;
@property (nonatomic) double videoScaleAndCropFactor;
@property (nonatomic) long long preferredVideoStabilizationMode;
@property (nonatomic, readonly) long long activeVideoStabilizationMode;
@property (nonatomic, readonly, getter=isVideoStabilizationSupported) _Bool supportsVideoStabilization;
@property (nonatomic, readonly, getter=isVideoStabilizationEnabled) _Bool videoStabilizationEnabled;
@property (nonatomic) _Bool enablesVideoStabilizationWhenAvailable;
@property (nonatomic, readonly, getter=isCameraIntrinsicMatrixDeliverySupported) _Bool cameraIntrinsicMatrixDeliverySupported;
@property (nonatomic, getter=isCameraIntrinsicMatrixDeliveryEnabled) _Bool cameraIntrinsicMatrixDeliveryEnabled;

+ (void)initialize;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;

- (void)dealloc;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)mediaType;
- (id)session;
- (_Bool)isLive;
- (int)changeSeed;
- (void)bumpChangeSeed;
- (id)sourceDevice;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (int)videoRetainedBufferCountHint;
- (_Bool)livePhotoMetadataWritingEnabled;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (_Bool)sourcesFromFrontFacingCamera;
- (void)updateAudioChannelsArray;
- (void)setupInternalStorage;
- (void)teardownObservers;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (void)_updatePropertiesForFormat:(id)arg1;
- (void)updateAudioLevelsArray;
- (CDStruct_1b6d18a9)_videoMinFrameDuration;
- (void)_setVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_videoMaxFrameDuration;
- (_Bool)_updateCameraIntrinsicMatrixDeliverySupported;
- (long long)_resolveActiveVideoStabilizationMode:(long long)arg1 format:(id)arg2;
- (void)_updateActiveVideoStabilizationMode:(long long)arg1 bumpChangeSeed:(_Bool)arg2;
- (_Bool)isVideoRetainedBufferCountHintSupported;
- (_Bool)isLivePhotoMetadataWritingSupported;
- (void)setLivePhotoMetadataWritingEnabled:(_Bool)arg1;
- (void)_updateMaxScaleAndCropFactorForFormat:(id)arg1;
- (void)setupObservers;
- (void)_setActive:(_Bool)arg1;
- (void)_setVideoMirrored:(_Bool)arg1;
- (_Bool)isVideoMinFrameDurationSet;
- (_Bool)isVideoMaxFrameDurationSet;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (_Bool)isDebugMetadataSidecarFileEnabled;
- (void)setDebugMetadataSidecarFileEnabled:(_Bool)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (id)figCaptureConnectionConfigurationForSessionPreset:(id)arg1 allConnections:(id)arg2;
- (_Bool)isTrulyDisabled;

@end
