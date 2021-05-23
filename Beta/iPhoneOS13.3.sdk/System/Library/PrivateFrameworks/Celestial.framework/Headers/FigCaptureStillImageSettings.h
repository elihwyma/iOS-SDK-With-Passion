/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface FigCaptureStillImageSettings : NSObject <Swift>

{
    long long _settingsID;
    int _payloadType;
    int _settingsProvider;
    unsigned int _outputFormat;
    int _outputFileType;
    unsigned int _rawOutputFormat;
    int _rawOutputFileType;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    _Bool _squareCropEnabled;
    _Bool _outputMirroring;
    int _outputOrientation;
    _Bool _previewEnabled;
    unsigned int _previewFormat;
    unsigned int _previewWidth;
    unsigned int _previewHeight;
    _Bool _previewMirroring;
    int _previewOrientation;
    _Bool _thumbnailEnabled;
    unsigned int _thumbnailFormat;
    unsigned int _thumbnailWidth;
    unsigned int _thumbnailHeight;
    _Bool _rawThumbnailEnabled;
    unsigned int _rawThumbnailFormat;
    unsigned int _rawThumbnailWidth;
    unsigned int _rawThumbnailHeight;
    _Bool _noiseReductionEnabled;
    _Bool _burstQualityCaptureEnabled;
    float _scaleFactor;
    _Bool _zoomWithoutUpscalingEnabled;
    unsigned int _shutterSound;
    int _flashMode;
    _Bool _autoRedEyeReductionEnabled;
    int _digitalFlashMode;
    int _wideColorMode;
    int _HDRMode;
    _Bool _depthDataDeliveryEnabled;
    _Bool _embedsDepthDataInImage;
    _Bool _depthDataFiltered;
    _Bool _cameraCalibrationDataDeliveryEnabled;
    _Bool _portraitEffectsMatteDeliveryEnabled;
    _Bool _embedsPortraitEffectsMatteInImage;
    NSArray *_enabledSemanticSegmentationMatteURNs;
    _Bool _embedsSemanticSegmentationMattesInImage;
    NSDictionary *_metadata;
    NSDictionary *_metadataForOriginalImage;
    NSArray *_originalImageFilters;
    NSArray *_processedImageFilters;
    float _simulatedAperture;
    float _portraitLightingEffectStrength;
    _Bool _providesOriginalImage;
    NSArray *_bravoConstituentImageDeliveryDeviceTypes;
    _Bool _autoSpatialOverCaptureEnabled;
    NSDictionary *_spatialOverCaptureMetadata;
    NSDictionary *_spatialOverCaptureMetadataForOriginalImage;
    _Bool _autoDeferredProcessingEnabled;
    int _qualityPrioritization;
    int _bravoImageFusionMode;
    NSDictionary *_vtCompressionProperties;
    int _bracketType;
    unsigned int _bracketImageCount;
    _Bool _lensStabilizationDuringBracketEnabled;
    CDStruct_1b6d18a9 *_exposureDurations;
    float *_ISOs;
    float *_exposureTargetBiases;
    unsigned long long _stillImageUserInitiatedRequestTime;
    CDStruct_1b6d18a9 _stillImageUserInitiatedRequestPTS;
    long long _stillImageRequestTime;
    long long _stillImageCaptureStartTime;
    double _stillImageCaptureAbsoluteStartTime;
    NSString *_imageGroupIdentifier;
    NSString *_captureRequestIdentifier;
    _Bool _clientInitiatedPrepareSettings;
    _Bool _userInitiatedRequestSettings;
    _Bool _beginMomentCaptureSettings;
    float _videoStabilizationOverscanCropMultiplier;
}

@property (nonatomic) NSString *imageGroupIdentifier;
@property (nonatomic, readonly) long long settingsID;
@property (nonatomic) int payloadType;
@property (nonatomic) int settingsProvider;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) int outputFileType;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) int rawOutputFileType;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) _Bool squareCropEnabled;
@property (nonatomic) _Bool outputMirroring;
@property (nonatomic) int outputOrientation;
@property (nonatomic, readonly) NSDictionary *outputPixelBufferAttributes;
@property (nonatomic, readonly, getter=isOutputFormatCompressed) _Bool outputFormatCompressed;
@property (nonatomic) _Bool previewEnabled;
@property (nonatomic) unsigned int previewFormat;
@property (nonatomic) unsigned int previewWidth;
@property (nonatomic) unsigned int previewHeight;
@property (nonatomic) _Bool previewMirroring;
@property (nonatomic) int previewOrientation;
@property (nonatomic, readonly) NSDictionary *previewPixelBufferAttributes;
@property (nonatomic) _Bool thumbnailEnabled;
@property (nonatomic) unsigned int thumbnailFormat;
@property (nonatomic) unsigned int thumbnailWidth;
@property (nonatomic) unsigned int thumbnailHeight;
@property (nonatomic) _Bool rawThumbnailEnabled;
@property (nonatomic) unsigned int rawThumbnailFormat;
@property (nonatomic) unsigned int rawThumbnailWidth;
@property (nonatomic) unsigned int rawThumbnailHeight;
@property (nonatomic) _Bool noiseReductionEnabled;
@property (nonatomic) _Bool burstQualityCaptureEnabled;
@property (nonatomic) float scaleFactor;
@property (nonatomic, getter=isZoomWithoutUpscalingEnabled) _Bool zoomWithoutUpscalingEnabled;
@property (nonatomic) unsigned int shutterSound;
@property (nonatomic) int flashMode;
@property (nonatomic) _Bool autoRedEyeReductionEnabled;
@property (nonatomic) int digitalFlashMode;
@property (nonatomic) int wideColorMode;
@property (nonatomic) int HDRMode;
@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool embedsDepthDataInImage;
@property (nonatomic) _Bool depthDataFiltered;
@property (nonatomic) _Bool cameraCalibrationDataDeliveryEnabled;
@property (nonatomic) _Bool portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) _Bool embedsPortraitEffectsMatteInImage;
@property (retain, nonatomic) NSArray *enabledSemanticSegmentationMatteURNs;
@property (nonatomic) _Bool embedsSemanticSegmentationMattesInImage;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSDictionary *metadataForOriginalImage;
@property (copy, nonatomic) NSArray *originalImageFilters;
@property (copy, nonatomic) NSArray *processedImageFilters;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) float portraitLightingEffectStrength;
@property (nonatomic) _Bool providesOriginalImage;
@property (copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes;
@property (nonatomic) _Bool autoSpatialOverCaptureEnabled;
@property (copy, nonatomic) NSDictionary *spatialOverCaptureMetadata;
@property (copy, nonatomic) NSDictionary *spatialOverCaptureMetadataForOriginalImage;
@property (nonatomic) _Bool autoDeferredProcessingEnabled;
@property (nonatomic) int qualityPrioritization;
@property (nonatomic) int bravoImageFusionMode;
@property (copy, nonatomic) NSDictionary *vtCompressionProperties;
@property (nonatomic, readonly) int bracketType;
@property (nonatomic, readonly) unsigned int bracketImageCount;
@property (nonatomic) _Bool lensStabilizationDuringBracketEnabled;
@property (nonatomic, readonly) CDStruct_1b6d18a9 *exposureDurations;
@property (nonatomic, readonly) float *ISOs;
@property (nonatomic, readonly) float *exposureTargetBiases;
@property (nonatomic) unsigned long long stillImageUserInitiatedRequestTime;
@property (nonatomic) CDStruct_1b6d18a9 stillImageUserInitiatedRequestPTS;
@property (nonatomic) long long stillImageRequestTime;
@property (nonatomic) long long stillImageCaptureStartTime;
@property (nonatomic) double stillImageCaptureAbsoluteStartTime;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, getter=isClientInitiatedPrepareSettings) _Bool clientInitiatedPrepareSettings;
@property (nonatomic, getter=isUserInitiatedRequestSettings) _Bool userInitiatedRequestSettings;
@property (nonatomic, getter=isBeginMomentCaptureSettings) _Bool beginMomentCaptureSettings;
@property (nonatomic) float videoStabilizationOverscanCropMultiplier;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettingsID:(long long)arg1;
- (void)setBracketType:(int)arg1 imageCount:(unsigned int)arg2;
- (id)_initWithSettingsID:(long long)arg1 captureRequestIdentifier:(id)arg2 imageGroupIdentifier:(id)arg3;
- (void)_teardownBracketStorage;
- (id)figCaptureIrisPreparedSettingsRepresentation;

@end
