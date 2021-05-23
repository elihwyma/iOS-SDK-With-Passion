/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceFormat, AVCaptureDeviceInput, CAMCaptureEngine, CAMMemoizationCache;

@interface CAMCaptureEngineDevice : NSObject

{
    AVCaptureDeviceInput *_captureDeviceInput;
    AVCaptureDevice *_captureDevice;
    CAMCaptureEngine *__captureEngine;
    CAMMemoizationCache *__videoDeviceFormatForVideoConfiguration;
    CAMMemoizationCache *__videoSessionPresetForVideoConfiguration;
    AVCaptureDeviceFormat *__cachedPanoramaDeviceFormat;
    AVCaptureDeviceFormat *__cachedPortraitDeviceFormat;
}

@property (weak, nonatomic, readonly) CAMCaptureEngine *_captureEngine;
@property (nonatomic, readonly) CAMMemoizationCache *_videoDeviceFormatForVideoConfiguration;
@property (nonatomic, readonly) CAMMemoizationCache *_videoSessionPresetForVideoConfiguration;
@property (nonatomic, readonly) AVCaptureDeviceFormat *_cachedPanoramaDeviceFormat;
@property (nonatomic, readonly) AVCaptureDeviceFormat *_cachedPortraitDeviceFormat;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property (nonatomic, readonly) AVCaptureDeviceInput *captureDeviceInput;

- (id)_keyForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)_portraitModeDeviceFormat;
- (id)_highestQualityDeviceFormatForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)_panoramaDeviceFormatForConfiguration:(id)arg1;
- (id)_highestQualitySessionPresetForVideoConfiguration:(long long)arg1 videoEncodingBehavior:(long long)arg2;
- (id)_timelapseSessionPreset;
- (id)_portraitModeSessionPreset;
- (id)initWithEngine:(id)arg1 captureDevice:(id)arg2;
- (id)videoDeviceFormatForGraphConfiguration:(id)arg1 videoEncodingBehavior:(long long)arg2;
- (id)videoDevicePresetForGraphConfiguration:(id)arg1 videoEncodingBehavior:(long long)arg2;

@end
