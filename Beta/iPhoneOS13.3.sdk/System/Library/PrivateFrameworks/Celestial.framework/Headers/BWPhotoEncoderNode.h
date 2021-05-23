/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWInferenceEngine, FigCapturePixelConverter, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface BWPhotoEncoderNode : BWNode

{
    NSObject<OS_dispatch_queue> *_previewGenerationQueue;
    NSObject<OS_dispatch_queue> *_prewarmQueue;
    NSObject<OS_dispatch_group> *_previewGenerationGroup;
    FigCapturePixelConverter *_previewPixelConverter;
    FigCapturePixelConverter *_thumbnailPixelConverter;
    FigCapturePixelConverter *_clientThumbnailPixelConverter;
    _Bool _cameraSupportsFlash;
    _Bool _zeroShutterLagEnabled;
    struct FigPhotoCompressionSession *_compressionSession;
    FigCapturePixelConverter *_jpegPixelConverter;
    _Bool _croppingEnabled;
    NSDictionary *_inputColorInfo;
    _Bool _usesHighEncodingPriority;
    unsigned long long _heifThumbnailMaxPixelSize;
    float _heifQualityOverride;
    _Bool _heifEmbedThumb;
    _Bool _heifForceCABAC;
    _Bool _heifForceHEVC;
    _Bool _heifUseTiling;
    int _heifTileWidth;
    int _heifTileHeight;
    long long _prewarmedSettingsID;
    _Bool _allowHEIFPrewarming;
    _Bool _prewarmingOngoing;
    float _segmentationDownscalingFactor;
    void *_prewarmQueueID;
    BWInferenceEngine *_inferenceEngine;
    _Bool _preparedInferenceEngine;
    _Atomic _Bool _opportunisticInferenceCompleted;
    _Bool _alwaysAwaitInference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (struct CGRect)_cropRectForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 requestedStillImageCaptureSettings:(id)arg2 whenEnabled:(_Bool)arg3;
+ (void)_updateMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 stillImageSettings:(id)arg2 whenCroppingEnabled:(_Bool)arg3;
+ (_Bool)_croppingRequiredForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 stillImageSettings:(id)arg2 whenEnabled:(_Bool)arg3;

- (void)dealloc;
- (id)nodeType;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (_Bool)zeroShutterLagEnabled;
- (void)setZeroShutterLagEnabled:(_Bool)arg1;
- (void)handleStillImagePrewarmWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 photoManifest:(id)arg3 forInput:(id)arg4;
- (id)outputVideoFormatForAttachedMediaKey:(id)arg1;
- (void)setCameraSupportsFlash:(_Bool)arg1;
- (void)setUsesHighEncodingPriority:(_Bool)arg1;
- (_Bool)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)arg1;
- (_Bool)cameraSupportsFlash;
- (id)inputVideoFormatForAttachedMediaKey:(id)arg1;
- (id)inputFormatForAttachedMediaKey:(id)arg1;
- (id)inputInferenceVideoFormatForAttachedMediaKey:(id)arg1;
- (id)outputFormatForAttachedMediaKey:(id)arg1;
- (id)initWithPersonSegmentationEnabled:(_Bool)arg1 inferenceScheduler:(id)arg2;
- (void)setCroppingEnabled:(_Bool)arg1;
- (void)setSegmentationDownscalingFactor:(float)arg1;
- (_Bool)usesHighEncodingPriority;
- (void)setInputColorInfo:(id)arg1;
- (int)_generatePreviewForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 requestedStillImageCaptureSettings:(id)arg2 cropRect:(struct CGRect)arg3 previewPixelBuffer:(struct __CVBuffer **)arg4;
- (void)_performInferenceWithBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_getColorSpacePropertiesForSourcePixelFormat:(unsigned int)arg1 sourceWidth:(int)arg2 sourceHeight:(int)arg3 destinationPixelFormat:(unsigned int)arg4;
- (int)_scaleInputPixelBuffer:(struct __CVBuffer *)arg1 toDimensions:(CDStruct_79c71658)arg2 colorSpaceProperties:(int)arg3 cropRect:(struct CGRect)arg4 pixelConverter:(id)arg5 poolCapacity:(int)arg6 thumbnailPixelBuffer:(struct __CVBuffer **)arg7;
- (int)_encodePhotoForPixelBuffer:(struct __CVBuffer *)arg1 imageDimensions:(CDStruct_79c71658)arg2 metadata:(id)arg3 thumbnailOptions:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 cropRect:(struct CGRect)arg7 usePixelsOutsideCrop:(_Bool)arg8 outputSurfaceImageSize:(struct CGSize *)arg9;
- (int)_addThumbnailFromBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 requestedStillImageCaptureSettings:(id)arg3 resolvedStillImageCaptureSettings:(id)arg4 cropRect:(struct CGRect)arg5 codecType:(unsigned int)arg6 maxPixelSize:(unsigned long long)arg7;
- (id)_thumbnailOptionsForImageWithMetadata:(id)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3 cropRect:(struct CGRect)arg4 codecType:(unsigned int)arg5 maxPixelSize:(unsigned long long)arg6;
- (void)_addDepthFromSampleBufferIfAvailable:(struct opaqueCMSampleBuffer *)arg1;
- (int)_addPortraitEffectsMatteFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_addSemanticMattesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (int)_addMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 requestedStillImageCaptureSettings:(id)arg2 resolvedStillImageCaptureSettings:(id)arg3;
- (struct __IOSurface *)_closeContainerAndCopySurfaceWithSurfaceSize:(unsigned long long *)arg1;
- (void)_addQualityOptionsToDictionary:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 imageDimensions:(CDStruct_79c71658)arg3 metadata:(id)arg4 requestedStillImageCaptureSettings:(id)arg5 resolvedStillImageCaptureSettings:(id)arg6 forMainImage:(_Bool)arg7;
- (id)_depthEncodingOptionsFromDepthMetadata:(id)arg1 pixelFormat:(unsigned int)arg2;
- (id)_encodingOptionsForAuxiliaryImageWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelBufferAttributes:(id)arg3;
- (int)_defaultJPEGIndexedQTableForPixelBuffer:(struct __CVBuffer *)arg1 metadata:(id)arg2 captureType:(int)arg3 quantizationTableIndexOut:(int *)arg4 isHighGainImageOut:(_Bool *)arg5;
- (struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromDepthMetadata:(id)arg1;
- (int)_addValue:(id)arg1 toAuxiliaryImageProperties:(struct CGImageMetadata *)arg2 namespace:(struct __CFString *)arg3 prefix:(struct __CFString *)arg4 key:(struct __CFString *)arg5;
- (id)_arrayInColumnMajorOrderFrom3x3MatrixData:(CDStruct_8e0628e6)arg1;
- (id)_arrayInColumnMajorOrderFrom3x4MatrixData:(CDStruct_14d5dc5e)arg1;
- (struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromPortraitEffectsMatteMetadata:(id)arg1;
- (int)_addSemanticMatteSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 withCustomURN:(id)arg2;
- (struct CGImageMetadata *)_newAuxiliaryImagePropertiesFromSemanticMatteSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)_transcodeQualityHintFromQuantizationTableIndex:(int)arg1;
- (_Bool)croppingEnabled;
- (id)inputColorInfo;
- (float)segmentationDownscalingFactor;

@end
