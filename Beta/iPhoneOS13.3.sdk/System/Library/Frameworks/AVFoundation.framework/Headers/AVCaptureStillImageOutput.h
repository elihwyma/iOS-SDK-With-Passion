/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput

{
    AVCaptureStillImageOutputInternal *_internal;
}

@property (copy, nonatomic) NSDictionary *outputSettings;
@property (nonatomic, readonly) NSArray *availableImageDataCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableImageDataCodecTypes;
@property (nonatomic, readonly, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
@property (nonatomic) _Bool automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (nonatomic, readonly, getter=isStillImageStabilizationActive) _Bool stillImageStabilizationActive;
@property (nonatomic, getter=isHighResolutionStillImageOutputEnabled) _Bool highResolutionStillImageOutputEnabled;
@property (readonly, getter=isCapturingStillImage) _Bool capturingStillImage;

+ (void)initialize;
+ (id)new;
+ (struct __CFDictionary *)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface *)arg1 size:(unsigned long long)arg2 metadata:(id)arg3;

- (id)init;
- (void)dealloc;
- (void)removeConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (id)connectionMediaTypes;
- (_Bool)canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (long long)HDRMode;
- (_Bool)squareCropEnabled;
- (unsigned int)shutterSound;
- (void)setHDRMode:(long long)arg1;
- (void)setSquareCropEnabled:(_Bool)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(_Bool)arg1;
- (struct CGSize)outputSizeForSourceFormat:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (struct CGSize)previewImageSize;
- (unsigned int)imageDataFormatType;
- (void)updateSISSupportedForSourceDevice:(id)arg1;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1;
- (_Bool)isHDRSupported;
- (void)clearPreparedBracketIfNeeded;
- (_Bool)isRawCaptureEnabled;
- (_Bool)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (_Bool)isRawCaptureSupported;
- (void)setNoiseReductionEnabled:(_Bool)arg1;
- (id)_figCaptureStillImageSettingsForConnection:(id)arg1;
- (_Bool)isLensStabilizationDuringBracketedCaptureSupported;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (_Bool)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id *)arg3;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2;
- (_Bool)_preparedForBracketedCaptureWithSettings:(id)arg1;
- (_Bool)isLensStabilizationDuringBracketedCaptureEnabled;
- (void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(_Bool *)arg3;
- (void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2;
- (void)setPreviewImageSize:(struct CGSize)arg1;
- (_Bool)isEV0CaptureEnabled;
- (void)setEV0CaptureEnabled:(_Bool)arg1;
- (_Bool)isNoiseReductionEnabled;
- (void)setRawCaptureEnabled:(_Bool)arg1;
- (_Bool)suspendsVideoProcessingDuringStillImageCapture;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(_Bool)arg1;
- (_Bool)resumeVideoProcessing;
- (id)firstActiveConnection;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(_Bool)arg1;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
