/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCapturePhotoSettingsInternal, NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettings : NSObject

{
    AVCapturePhotoSettingsInternal *_internal;
}

@property (readonly) long long uniqueID;
@property (copy, readonly) NSDictionary *format;
@property (readonly) NSString *processedFileType;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) NSString *rawFileType;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) _Bool autoRedEyeReductionEnabled;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) _Bool autoStillImageStabilizationEnabled;
@property (nonatomic, getter=isAutoVirtualDeviceFusionEnabled) _Bool autoVirtualDeviceFusionEnabled;
@property (nonatomic, getter=isAutoDualCameraFusionEnabled) _Bool autoDualCameraFusionEnabled;
@property (copy, nonatomic) NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;
@property (nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) _Bool dualCameraDualPhotoDeliveryEnabled;
@property (nonatomic, getter=isHighResolutionPhotoEnabled) _Bool highResolutionPhotoEnabled;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool embedsDepthDataInPhoto;
@property (nonatomic, getter=isDepthDataFiltered) _Bool depthDataFiltered;
@property (nonatomic, getter=isCameraCalibrationDataDeliveryEnabled) _Bool cameraCalibrationDataDeliveryEnabled;
@property (nonatomic, getter=isPortraitEffectsMatteDeliveryEnabled) _Bool portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) _Bool embedsPortraitEffectsMatteInPhoto;
@property (copy, nonatomic) NSArray *enabledSemanticSegmentationMatteTypes;
@property (nonatomic) _Bool embedsSemanticSegmentationMattesInPhoto;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property (copy, nonatomic) NSString *livePhotoVideoCodecType;
@property (copy, nonatomic) NSArray *livePhotoMovieMetadata;
@property (nonatomic, readonly) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (copy, nonatomic) NSDictionary *previewPhotoFormat;
@property (nonatomic, readonly) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property (copy, nonatomic) NSDictionary *embeddedThumbnailPhotoFormat;
@property (nonatomic, readonly) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property (copy, nonatomic) NSDictionary *rawEmbeddedThumbnailPhotoFormat;

+ (long long)uniqueID;
+ (id)photoSettings;
+ (id)photoSettingsWithFormat:(id)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 processedFormat:(id)arg2;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)arg1 rawFileType:(id)arg2 processedFormat:(id)arg3 processedFileType:(id)arg4;
+ (id)photoSettingsFromPhotoInitiationSettings:(id)arg1 format:(id)arg2;
+ (id)burstQualityPhotoSettings;
+ (id)photoSettingsFromPhotoSettings:(id)arg1;
+ (id)photoSettingsFromMomentCaptureSettings:(id)arg1 withFormat:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)formatFourCC;
- (_Bool)isBurstQualityCaptureEnabled;
- (long long)HDRMode;
- (_Bool)isEV0PhotoDeliveryEnabled;
- (id)photoFilters;
- (id)adjustedPhotoFilters;
- (_Bool)isAutoSpatialOverCaptureEnabled;
- (long long)digitalFlashMode;
- (_Bool)photoQualityPrioritizationIsSetByClient;
- (id)livePhotoMovieFileURLForOriginalPhoto;
- (id)livePhotoMovieMetadataForOriginalPhoto;
- (unsigned int)shutterSound;
- (unsigned long long)userInitiatedPhotoRequestTime;
- (id)HEICSFileURL;
- (id)videoFileURL;
- (id)videoFormat;
- (id)videoFileMetadata;
- (id)spatialOverCaptureMetadata;
- (id)spatialOverCaptureLivePhotoMovieFileURL;
- (id)spatialOverCaptureLivePhotoMovieMetadata;
- (id)spatialOverCaptureLivePhotoContentIdentifier;
- (id)spatialOverCaptureGroupIdentifier;
- (id)spatialOverCaptureMetadataForOriginalPhoto;
- (id)spatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto;
- (id)spatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto;
- (id)spatialOverCaptureLivePhotoContentIdentifierForOriginalPhoto;
- (id)spatialOverCaptureGroupIdentifierForOriginalPhoto;
- (id)livePhotoContentIdentifier;
- (id)livePhotoContentIdentifierForOriginalPhoto;
- (id)_initWithFormat:(id)arg1 processedFileType:(id)arg2 rawPixelFormatType:(unsigned int)arg3 rawFileType:(id)arg4 burstQualityCaptureEnabled:(_Bool)arg5 uniqueID:(long long)arg6 exceptionReason:(id *)arg7;
- (void)_setPhotoQualityPrioritization:(long long)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setUserInitiatedPhotoRequestTime:(unsigned long long)arg1;
- (void)setDigitalFlashMode:(long long)arg1;
- (void)setEV0PhotoDeliveryEnabled:(_Bool)arg1;
- (void)setLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setPhotoFilters:(id)arg1;
- (void)setAdjustedPhotoFilters:(id)arg1;
- (void)setHEICSFileURL:(id)arg1;
- (void)setVideoFileURL:(id)arg1;
- (void)setVideoFormat:(id)arg1;
- (void)setVideoFileMetadata:(id)arg1;
- (void)setAutoSpatialOverCaptureEnabled:(_Bool)arg1;
- (void)setSpatialOverCaptureMetadata:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieFileURL:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieMetadata:(id)arg1;
- (void)setSpatialOverCaptureMetadataForOriginalPhoto:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieFileURLForOriginalPhoto:(id)arg1;
- (void)setSpatialOverCaptureLivePhotoMovieMetadataForOriginalPhoto:(id)arg1;
- (void)setProcessedPhotoZoomWithoutUpscalingEnabled:(_Bool)arg1;
- (void)setSquareCropEnabled:(_Bool)arg1;
- (void)setTurboModeEnabled:(_Bool)arg1;
- (void)setLivePhotoContentIdentifier:(id)arg1;
- (void)setLivePhotoContentIdentifierForOriginalPhoto:(id)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (unsigned int)embeddedThumbnailFormatFourCC;
- (unsigned int)rawEmbeddedThumbnailFormatFourCC;
- (id)_sanitizedLivePhotoMovieMetadataForArray:(id)arg1 exceptionReason:(id *)arg2;
- (_Bool)isAutoDeferredProcessingEnabled;
- (void)setAutoDeferredProcessingEnabled:(_Bool)arg1;
- (_Bool)isTurboModeEnabled;
- (id)metadataForOriginalPhoto;
- (_Bool)isSquareCropEnabled;
- (unsigned int)previewFormatFourCC;
- (struct CGSize)previewCGSize;
- (struct CGSize)embeddedThumbnailCGSize;
- (struct CGSize)rawEmbeddedThumbnailCGSize;
- (_Bool)isProcessedPhotoZoomWithoutUpscalingEnabled;

@end
