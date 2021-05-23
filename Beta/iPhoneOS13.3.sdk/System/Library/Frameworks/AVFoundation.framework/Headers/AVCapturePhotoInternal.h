/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVApplePortraitMetadata, AVCameraCalibrationData, AVCaptureBracketedStillImageSettings, AVCapturePhotoPrivateClientMetadata, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVDepthData, AVPortraitEffectsMatte, AVSemanticSegmentationMatte, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoInternal : NSObject

{
    CDStruct_1b6d18a9 timestamp;
    struct __IOSurface *photoSurface;
    unsigned long long photoSurfaceSize;
    NSString *processedFileType;
    struct __CVBuffer *photoPixelBuffer;
    struct __CVBuffer *previewPixelBuffer;
    struct __CVBuffer *embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    _Bool didTryToDecodeDepthData;
    AVPortraitEffectsMatte *portraitEffectsMatte;
    _Bool didTryToDecodePortraitEffectsMatte;
    AVSemanticSegmentationMatte *hairSegmentationMatte;
    _Bool didTryToDecodeHairSegmentationMatte;
    AVSemanticSegmentationMatte *skinSegmentationMatte;
    _Bool didTryToDecodeSkinSegmentationMatte;
    AVSemanticSegmentationMatte *teethSegmentationMatte;
    _Bool didTryToDecodeTeethSegmentationMatte;
    _Bool isRawPhoto;
    AVCaptureBracketedStillImageSettings *bracketSettings;
    unsigned long long sequenceCount;
    unsigned long long photoCount;
    NSString *sourceDeviceType;
    unsigned int expectedPhotoProcessingFlags;
    unsigned int actualPhotoProcessingFlags;
    AVCapturePhotoPrivateClientMetadata *privateClientMetadata;
    AVApplePortraitMetadata *portraitMetadata;
    _Bool lensStabilizationSupported;
}

@end
