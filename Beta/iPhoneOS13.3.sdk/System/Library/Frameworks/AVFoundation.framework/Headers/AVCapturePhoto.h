/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCameraCalibrationData, AVCapturePhotoInternal, AVCaptureResolvedPhotoSettings, AVDepthData, AVPortraitEffectsMatte, NSDictionary, NSString;

@interface AVCapturePhoto : NSObject

{
    AVCapturePhotoInternal *_internal;
}

@property (readonly) CDStruct_1b6d18a9 timestamp;
@property (readonly, getter=isRawPhoto) _Bool rawPhoto;
@property (readonly) struct __CVBuffer *pixelBuffer;
@property (readonly) struct __CVBuffer *previewPixelBuffer;
@property (readonly) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly) AVDepthData *depthData;
@property (readonly) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *metadata;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;
@property (readonly) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) long long photoCount;
@property (readonly) NSString *sourceDeviceType;

+ (id)AVFileTypeFromFigCaptureStillImageSettingsFileType:(int)arg1 codec:(unsigned int)arg2 unresolvedSettings:(id)arg3;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (unsigned int)_orientation;
- (id)processedFileType;
- (id)livePhotoMovieFileURL;
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 photoSurface:(struct __IOSurface *)arg2 photoSurfaceSize:(unsigned long long)arg3 processedFileType:(id)arg4 previewPhotoSurface:(struct __IOSurface *)arg5 embeddedThumbnailSourceSurface:(struct __IOSurface *)arg6 metadata:(id)arg7 depthDataSurface:(struct __IOSurface *)arg8 depthMetadataDictionary:(id)arg9 portraitEffectsMatteSurface:(struct __IOSurface *)arg10 portraitEffectsMatteMetadataDictionary:(id)arg11 hairSegmentationMatteSurface:(struct __IOSurface *)arg12 hairSegmentationMatteMetadataDictionary:(id)arg13 skinSegmentationMatteSurface:(struct __IOSurface *)arg14 skinSegmentationMatteMetadataDictionary:(id)arg15 teethSegmentationMatteSurface:(struct __IOSurface *)arg16 teethSegmentationMatteMetadataDictionary:(id)arg17 captureRequest:(id)arg18 bracketSettings:(id)arg19 sequenceCount:(unsigned long long)arg20 photoCount:(unsigned long long)arg21 expectedPhotoProcessingFlags:(unsigned int)arg22 sourceDeviceType:(id)arg23;
- (id)bracketSettings;
- (long long)sequenceCount;
- (unsigned int)expectedPhotoProcessingFlags;
- (unsigned int)actualPhotoProcessingFlags;
- (id)privateClientMetadata;
- (id)portraitMetadata;
- (long long)lensStabilizationStatus;
- (struct __CVBuffer *)_embeddedThumbnailSourcePixelBuffer;
- (id)semanticSegmentationMatteForType:(id)arg1;
- (id)_fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg3 replacementDepthData:(id)arg4 replacementPortraitEffectsMatte:(id)arg5 replacementHairSegmentationMatte:(id)arg6 replacementSkinSegmentationMatte:(id)arg7 replacementTeethSegmentationMatte:(id)arg8 exceptionReason:(id *)arg9;
- (id)fileDataRepresentation;
- (id)fileDataRepresentationWithReplacementMetadata:(id)arg1 replacementEmbeddedThumbnailPhotoFormat:(id)arg2 replacementEmbeddedThumbnailPixelBuffer:(struct __CVBuffer *)arg3 replacementDepthData:(id)arg4;
- (id)fileDataRepresentationWithCustomizer:(id)arg1;
- (struct CGImage *)CGImageRepresentation;
- (struct CGImage *)previewCGImageRepresentation;
- (unsigned int)photoProcessingFlags;

@end
