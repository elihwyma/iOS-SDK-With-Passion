/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject

{
    AVCaptureDeviceFormatInternal *_internal;
}

@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) const struct opaqueCMFormatDescription *formatDescription;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic, readonly) float videoFieldOfView;
@property (nonatomic, readonly, getter=isVideoBinned) _Bool videoBinned;
@property (nonatomic, readonly, getter=isVideoStabilizationSupported) _Bool videoStabilizationSupported;
@property (nonatomic, readonly) double videoMaxZoomFactor;
@property (nonatomic, readonly) double videoZoomFactorUpscaleThreshold;
@property (nonatomic, readonly) CDStruct_1b6d18a9 minExposureDuration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 maxExposureDuration;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, readonly, getter=isGlobalToneMappingSupported) _Bool globalToneMappingSupported;
@property (nonatomic, readonly, getter=isVideoHDRSupported) _Bool videoHDRSupported;
@property (nonatomic, readonly) CDStruct_79c71658 highResolutionStillImageDimensions;
@property (nonatomic, readonly, getter=isHighestPhotoQualitySupported) _Bool highestPhotoQualitySupported;
@property (nonatomic, readonly) long long autoFocusSystem;
@property (nonatomic, readonly) NSArray *supportedColorSpaces;
@property (nonatomic, readonly) double videoMinZoomFactorForDepthDataDelivery;
@property (nonatomic, readonly) double videoMaxZoomFactorForDepthDataDelivery;
@property (nonatomic, readonly) NSArray *supportedDepthDataFormats;
@property (nonatomic, readonly) NSArray *unsupportedCaptureOutputClasses;

+ (void)initialize;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (CDStruct_79c71658)previewDimensions;
- (_Bool)isVideoStabilizationModeSupported:(long long)arg1;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (_Bool)supportsQuadraHighResolutionStillImageOutput;
- (_Bool)isPhotoFormat;
- (_Bool)isWideColorSupported;
- (float)defaultSimulatedAperture;
- (float)defaultPortraitLightingEffectStrength;
- (float)minSimulatedAperture;
- (float)maxSimulatedAperture;
- (float)minPortraitLightingEffectStrength;
- (float)maxPortraitLightingEffectStrength;
- (_Bool)isVisionDataDeliverySupported;
- (_Bool)isDefaultActiveFormat;
- (_Bool)isStreamingDisparitySupported;
- (_Bool)isStreamingDepthSupported;
- (_Bool)isStillImageDisparitySupported;
- (_Bool)isStillImageDepthSupported;
- (id)AVCaptureSessionPresets;
- (_Bool)isLowLightVideoCaptureSupported;
- (_Bool)isDigitalFlashSupported;
- (_Bool)isVideoHDRSuspensionSupported;
- (_Bool)isSpatialOverCaptureSupported;
- (_Bool)isNonDestructiveCropSupported;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (_Bool)isSISSupported;
- (id)figCaptureSourceVideoFormat;
- (id)figCaptureSourceDepthDataFormat;
- (CDStruct_79c71658)sensorDimensions;
- (id)vtScalingMode;
- (_Bool)supportsHighProfileH264;
- (_Bool)isIrisVideoStabilizationSupported;
- (_Bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (_Bool)isHDRSupported;
- (_Bool)supportsHighResolutionStillImageOutput;
- (long long)videoHDRFlavor;
- (id)optimizedVideoPreviewFilterNames;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (int)supportedStabilizationMethod;
- (_Bool)isExperimental;
- (_Bool)isMultiCamSupported;
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription *)arg2 frameRateRanges:(id)arg3;
- (_Bool)isStereoFusionSupported;
- (_Bool)isIrisSupported;
- (int)rawBitDepth;
- (_Bool)supportsDynamicCrop;
- (_Bool)isHighResPhotoFormat;
- (float)hardwareCost;
- (int)baseSensorPowerConsumption;
- (int)variableSensorPowerConsumption;
- (int)ispPowerConsumption;
- (unsigned int)supportedRawPixelFormat;
- (_Bool)isMomentCaptureMovieRecordingSupported;
- (float)spatialOverCapturePercentage;
- (_Bool)isDeferredPhotoProcessingSupported;
- (_Bool)isDeepFusionSupported;
- (_Bool)isPortraitEffectsMatteStillImageDeliverySupported;
- (id)supportedSemanticSegmentationMatteTypes;
- (_Bool)supportsRedEyeReduction;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (_Bool)needsPhotoPreviewDPCC;
- (int)supportedFormatsArrayIndex;
- (id)optimizedPhotoFilterNames;
- (_Bool)isEquivalentToVirtualDeviceFormat:(id)arg1;

@end
