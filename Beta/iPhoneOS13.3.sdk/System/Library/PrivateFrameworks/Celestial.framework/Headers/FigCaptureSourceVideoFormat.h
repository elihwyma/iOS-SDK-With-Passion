/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureSourceFormat.h>

@class FigCaptureSourceCompanionFormat, FigCaptureSourceDepthDataFormat, NSArray;

@interface FigCaptureSourceVideoFormat : FigCaptureSourceFormat

{
    NSArray *_frontEndScalerCompanionFormats;
    _Bool _sifrSupported;
    FigCaptureSourceCompanionFormat *_nonSIFRCompanionFormat;
    FigCaptureSourceCompanionFormat *_depthCompanionFormat;
    NSArray *_supportedDepthDataFormats;
    FigCaptureSourceDepthDataFormat *_streamingDXDYDepthDataFormat;
    _Bool _isStreamingDisparitySupported;
    _Bool _isStreamingDepthSupported;
    _Bool _isStillImageDisparitySupported;
    _Bool _isStillImageDepthSupported;
}

@property (readonly) int formatIndex;
@property (readonly) CDStruct_79c71658 dimensions;
@property (readonly) CDStruct_79c71658 sensorDimensions;
@property (readonly) CDStruct_79c71658 previewDimensions;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float defaultMinFrameRate;
@property (readonly) float defaultMaxFrameRate;
@property (readonly) float fieldOfView;
@property (readonly) float geometricDistortionCorrectedFieldOfView;
@property (readonly, getter=isBinned) _Bool binned;
@property (readonly, getter=isZoomSupported) _Bool zoomSupported;
@property (readonly) float maxZoomFactor;
@property (readonly) float zoomFactorUpscaleThreshold;
@property (readonly, getter=isZoomDynamicSensorCropSupported) _Bool zoomDynamicSensorCropSupported;
@property (readonly) int rawBitDepth;
@property (readonly) float minISO;
@property (readonly) float maxISO;
@property (readonly) CDStruct_1b6d18a9 minExposureDuration;
@property (readonly) CDStruct_1b6d18a9 maxExposureDuration;
@property (readonly) _Bool hasSensorHDRCompanionIndex;
@property (readonly) _Bool prefersSensorHDREnabled;
@property (readonly, getter=isSIFRSupported) _Bool SIFRSupported;
@property (readonly, getter=isLowLightVideoCaptureSupported) _Bool lowLightVideoCaptureSupported;
@property (readonly, getter=isVariableFrameRateVideoCaptureSupported) _Bool variableFrameRateVideoCaptureSupported;
@property (readonly, getter=isVisionDataDeliverySupported) _Bool visionDataDeliverySupported;
@property (readonly, getter=isSecondaryScalerUnavailable) _Bool secondaryScalerUnavailable;
@property (readonly, getter=isStudioAndContourPreviewRenderingSupported) _Bool studioAndContourPreviewRenderingSupported;
@property (readonly, getter=isStagePreviewRenderingSupported) _Bool stagePreviewRenderingSupported;
@property (readonly, getter=isWideAsStatsMasterEnabled) _Bool wideAsStatsMasterEnabled;
@property (readonly) int autoFocusSystem;
@property (readonly, getter=isPhotoFormat) _Bool photoFormat;
@property (readonly, getter=isHighResPhotoFormat) _Bool highResPhotoFormat;
@property (readonly) _Bool needsPreviewDPCC;
@property (readonly, getter=isStillImageStabilizationSupported) _Bool stillImageStabilizationSupported;
@property (readonly) _Bool configureForStillImageStabilizationSupport;
@property (readonly) _Bool configureForSpatialOverCaptureSupport;
@property (readonly, getter=isIrisSupported) _Bool irisSupported;
@property (readonly, getter=isIrisVideoStabilizationSupported) _Bool irisVideoStabilizationSupported;
@property (readonly, getter=isHDRSupported) _Bool hdrSupported;
@property (readonly, getter=isHighResStillImageSupported) _Bool highResStillImageSupported;
@property (readonly, getter=isQuadraHighResStillImageSupported) _Bool quadraHighResStillImageSupported;
@property (readonly, getter=isStereoFusionSupported) _Bool stereoFusionSupported;
@property (readonly, getter=isISPMultiBandNoiseReductionSupported) _Bool ispMultiBandNoiseReductionSupported;
@property (readonly, getter=isStillImageISPMultiBandNoiseReductionSupported) _Bool stillImageISPMultiBandNoiseReductionSupported;
@property (readonly, getter=isZeroShutterLagSupported) _Bool zeroShutterLagSupported;
@property (readonly) _Bool zeroShutterLagRequiresUserInitiatedCaptureRequestTime;
@property (readonly, getter=isRedEyeReductionSupported) _Bool redEyeReductionSupported;
@property (readonly, getter=isDigitalFlashSupported) _Bool digitalFlashSupported;
@property (readonly, getter=isDeepFusionSupported) _Bool deepFusionSupported;
@property (readonly) CDStruct_79c71658 highResStillImageDimensions;
@property (readonly, getter=isWideColorSupported) _Bool wideColorSupported;
@property (readonly) NSArray *supportedColorSpaces;
@property (readonly) unsigned int supportedRawPixelFormat;
@property (readonly) float defaultSimulatedAperture;
@property (readonly) float minSimulatedAperture;
@property (readonly) float maxSimulatedAperture;
@property (readonly) float defaultPortraitLightingEffectStrength;
@property (readonly) float minPortraitLightingEffectStrength;
@property (readonly) float maxPortraitLightingEffectStrength;
@property (readonly, getter=isHighProfileH264Supported) _Bool highProfileH264Supported;
@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly, getter=isStreamingDisparitySupported) _Bool streamingDisparitySupported;
@property (readonly, getter=isStreamingDepthSupported) _Bool streamingDepthSupported;
@property (readonly, getter=isStillImageDisparitySupported) _Bool stillImageDisparitySupported;
@property (readonly, getter=isStillImageDepthSupported) _Bool stillImageDepthSupported;
@property (readonly) NSArray *supportedDepthDataFormats;
@property (readonly) float minZoomFactorForDepthDataDelivery;
@property (readonly) float maxZoomFactorForDepthDataDelivery;
@property (readonly, getter=isMomentCaptureMovieRecordingSupported) _Bool momentCaptureMovieRecordingSupported;
@property (readonly, getter=isSpatialOverCaptureSupported) _Bool spatialOverCaptureSupported;
@property (readonly) float spatialOverCapturePercentage;
@property (readonly) CDStruct_79c71658 spatialOverCaptureHighResStillImageDimensions;
@property (readonly, getter=isNonDestructiveCropSupported) _Bool nonDestructiveCropSupported;
@property (readonly, getter=isDeferredPhotoProcessingSupported) _Bool deferredPhotoProcessingSupported;
@property (readonly, getter=isMultiCamSupported) _Bool multiCamSupported;
@property (readonly) float hardwareCost;
@property (readonly) int sensorPowerConsumption;
@property (readonly) int baseSensorPowerConsumption;
@property (readonly) int variableSensorPowerConsumption;
@property (readonly) int ispPowerConsumption;
@property (readonly, getter=isGlobalToneMappingSupported) _Bool globalToneMappingSupported;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription *)formatDescription;
- (_Bool)isStabilizationModeSupported:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (float)cinematicStabilizationExtendedLookAheadDuration;
- (int)horizontalSensorBinningFactor;
- (int)verticalSensorBinningFactor;
- (id)streamingDXDYDepthDataFormat;
- (int)stabilizationTypeOverrideForStandard;
- (int)stabilizationTypeOverrideForCinematic;
- (int)stillImageNoiseReductionAndStabilizationScheme;
- (int)redEyeReductionVersion;
- (_Bool)isCaptureTimePhotoCurationSupported;
- (_Bool)ispChromaNoiseReductionEnabled;
- (_Bool)sushiRawBlackBorderingEnabled;
- (CDStruct_79c71658)sensorCropDimensions;
- (id)rawLensShadingCorrection;
- (CDStruct_79c71658)_outputDimensions;
- (float)aeMaxGain;
- (_Bool)capturesStillsFromVideoStream;
- (id)frontEndScalerCompanionFormats;
- (CDStruct_79c71658)nativeDimensions;
- (id)nonSIFRCompanionFormat;
- (CDStruct_79c71658)fesInputCropDimensions;
- (CDStruct_79c71658)cropDimensionsForFES;
- (id)depthCompanionFormat;
- (int)sensorHDRCompanionIndex;
- (struct CGRect)maxVisibleSensorRect;
- (_Bool)usesPacked10BitFirmwareStillImageOutputPixelFormat;
- (CDStruct_79c71658)sourceCropAspectRatio;
- (int)fesBinningFactorHorizontal;
- (struct CGSize)stabilizationOverscanPercentageFromSensorForFESCropDimensions:(CDStruct_79c71658)arg1;
- (float)stabilizationOverscanPercentageOverrideForCinematic;
- (int)temporalNoiseReductionMode;
- (_Bool)isStillImageISPChromaNoiseReductionEnabled;
- (float)lowLightVideoAEMaxGain;
- (int)maxIntegrationTimeOverride;
- (float)depthDataAEMaxGain;
- (float)depthDataMaxIntegrationTimeOverride;
- (id)copyWithNewPixelFormat:(unsigned int)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (void)_resolveProperties;
- (CDStruct_79c71658)_maxUseableSensorDimensions;
- (CDStruct_79c71658)_nativeDimensionsWithoutCrop;
- (CDStruct_79c71658)_visibleSensorDimensionsIncludingCinematic:(_Bool)arg1;
- (CDStruct_79c71658)_highQualitySensorDimensions;
- (int)previewImageQueueSyncStrategy;
- (_Bool)isValidDerivedBravoFormatForUnderlyingFormat:(id)arg1;
- (_Bool)isCompatibleWithInfraredFormat:(id)arg1;

@end
