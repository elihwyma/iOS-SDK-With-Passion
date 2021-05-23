/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureMovieFileOutput, AVCapturePhotoOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, AVCaptureVideoThumbnailOutput, CAMCaptureEngine, CAMPanoramaConfiguration, CAMPanoramaOutput, NSString;

@protocol AVCaptureFileOutputRecordingDelegate, AVCapturePhotoCaptureDelegate, AVMomentCaptureMovieRecordingDelegate;

@interface CAMCaptureCommandContext : NSObject

{
    AVCaptureSession *_currentCaptureSession;
    AVCaptureDevice *_currentVideoDevice;
    AVCaptureDeviceFormat *_currentVideoDeviceFormat;
    AVCaptureDeviceFormat *_currentDepthDataFormat;
    NSString *_currentVideoDevicePreset;
    AVCaptureDeviceInput *_currentVideoDeviceInput;
    AVCaptureDevice *_currentAudioDevice;
    AVCaptureDeviceInput *_currentAudioDeviceInput;
    AVCapturePhotoOutput *_currentStillImageOutput;
    AVCaptureMovieFileOutput *_currentMovieFileOutput;
    CAMPanoramaOutput *_currentPanoramaOutput;
    AVCaptureMetadataOutput *_currentMetadataOutput;
    AVCaptureVideoDataOutput *_currentEffectsPreviewOutput;
    AVCaptureVideoThumbnailOutput *_currentVideoThumbnailOutput;
    AVCaptureVideoPreviewLayer *_currentVideoPreviewLayer;
    CAMCaptureEngine *__captureEngine;
}

@property (weak, nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (retain, nonatomic) AVCaptureSession *currentCaptureSession;
@property (retain, nonatomic) AVCaptureDevice *currentVideoDevice;
@property (retain, nonatomic) AVCaptureDeviceFormat *currentVideoDeviceFormat;
@property (retain, nonatomic) AVCaptureDeviceFormat *currentDepthDataFormat;
@property (retain, nonatomic) NSString *currentVideoDevicePreset;
@property (retain, nonatomic) AVCaptureDeviceInput *currentVideoDeviceInput;
@property (retain, nonatomic) AVCaptureDevice *currentAudioDevice;
@property (retain, nonatomic) AVCaptureDeviceInput *currentAudioDeviceInput;
@property (retain, nonatomic) AVCapturePhotoOutput *currentStillImageOutput;
@property (retain, nonatomic) AVCaptureMovieFileOutput *currentMovieFileOutput;
@property (retain, nonatomic) CAMPanoramaOutput *currentPanoramaOutput;
@property (retain, nonatomic) AVCaptureMetadataOutput *currentMetadataOutput;
@property (retain, nonatomic) AVCaptureVideoDataOutput *currentEffectsPreviewOutput;
@property (retain, nonatomic) AVCaptureVideoThumbnailOutput *currentVideoThumbnailOutput;
@property (retain, nonatomic) AVCaptureVideoPreviewLayer *currentVideoPreviewLayer;
@property (weak, nonatomic, readonly) id <AVCaptureFileOutputRecordingDelegate> currentRecordingDelegate;
@property (nonatomic, readonly) CAMPanoramaConfiguration *currentPanoramaConfiguration;
@property (weak, nonatomic, readonly) id <AVCapturePhotoCaptureDelegate> currentStillImageDelegate;
@property (weak, nonatomic, readonly) id <AVMomentCaptureMovieRecordingDelegate> currentMomentCaptureMovieRecordingDelegate;

- (void)clear;
- (id)cachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (void)clearCachedMomentCaptureSettingsForIdentifier:(id)arg1;
- (void)registerStillImageCaptureRequest:(id)arg1 withSettings:(id)arg2;
- (void)cacheMomentCaptureSettings:(id)arg1 forIdentifier:(id)arg2;
- (id)videoDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long *)arg4;
- (id)audioDeviceInput;
- (id)outputsForMode:(long long)arg1 shouldUseThumbnailOutputForFilters:(_Bool)arg2;
- (id)metadataOutputForMode:(long long)arg1;
- (id)primaryOutputForMode:(long long)arg1;
- (void)registerVideoCaptureRequest:(id)arg1;
- (void)startPanoramaCaptureWithRequest:(id)arg1;
- (void)stopPanoramaCaptureInterrupted:(_Bool)arg1;
- (id)_captureEngineDeviceForMode:(long long)arg1 desiredDevice:(long long)arg2 videoConfiguration:(long long)arg3 resolvedDevice:(long long *)arg4;
- (id)initWithCaptureEngine:(id)arg1;

@end
