/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWNode.h>

@class BWStillImageNodeConfiguration, NSDictionary, NSString;

@protocol DepthProcessor;

@interface BWDepthConverterNode : BWNode

{
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    _Bool _forceCPath;
    CDStruct_79c71658 _inputDepthDimensions;
    struct opaqueCMFormatDescription *_outputFormatDescription;
    unsigned int _outputFormat;
    CDStruct_79c71658 _outputDimensions;
    CDStruct_14d5dc5e _identityExtrinsicMatrix;
    CDStruct_14d5dc5e _infraredCameraExtrinsicMatrix;
    int _depthAccuracy;
    CDStruct_42bba296 _depthLensDistortionCorrectionBasePolynomial;
    CDStruct_42bba296 _depthLensDistortionCorrectionDynamicPolynomial;
    float _depthRelativePixelSizeInMicrons;
    float _infraredCameraPixelSizeInMicrons;
    int _baseRotationDegrees;
    int _rotationDegrees;
    _Bool _mirroringEnabled;
    _Bool _streamingFilteringEnabled;
    _Bool _stillFilteringEnabled;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    _Bool _depthIsAlwaysHighQuality;
    struct __CVBuffer *_fixedPointScaledIntermediateBuffer;
    struct __CVBuffer *_fixedPointRotatedIntermediateBuffer;
    struct __CVBuffer *_filteringInputBuffer;
    struct __CVBuffer *_streamingFilteringScaledDepthInputBuffer;
    struct __CVBuffer *_streamingFilteringScaledDepthOutputBuffer;
    struct __CVBuffer *_filteringScaledYUVBuffer;
    struct __CVBuffer *_filteringOutputBuffer;
    _Bool _conversionAfterFilteringRequired;
    _Bool _depthFromInfrared;
    NSString *_depthProcessorClassName;
    struct FigPhotoScaleAndRotateSession *_scaler;
    id <DepthProcessor> _depthProcessor;
    int _depthBufferOriginalExifOrientation;
    int _depthBufferFinalExifOrientation;
    _Bool _workIntervalHintsEnabled;
    struct work_interval *_workInterval;
    BWStillImageNodeConfiguration *_nodeConfiguration;
}

+ (void)initialize;

- (void)dealloc;
- (unsigned int)outputFormat;
- (void)setOutputFormat:(unsigned int)arg1;
- (id)nodeType;
- (void)setMirroringEnabled:(_Bool)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (int)horizontalSensorBinningFactor;
- (int)verticalSensorBinningFactor;
- (void)setOutputDimensions:(CDStruct_79c71658)arg1;
- (_Bool)mirroringEnabled;
- (void)setHorizontalSensorBinningFactor:(int)arg1;
- (void)setVerticalSensorBinningFactor:(int)arg1;
- (CDStruct_79c71658)outputDimensions;
- (void)_updateOutputRequirements;
- (void)setRotationDegrees:(int)arg1;
- (int)rotationDegrees;
- (int)_parseCameraInfo;
- (int)_loadAndConfigureDepthProcessorClass:(id)arg1;
- (int)_computeConversionParametersFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 convertOptionsOut:(CDStruct_b3ef6be4 *)arg2;
- (int)_convertDepthDisparityToFloat_NEON:(struct __CVBuffer *)arg1 dst:(struct __CVBuffer *)arg2 options:(CDStruct_b3ef6be4 *)arg3;
- (int)_convertDepthDisparityToFloat_C:(struct __CVBuffer *)arg1 dst:(struct __CVBuffer *)arg2 options:(CDStruct_b3ef6be4 *)arg3;
- (int)convertToFloatAndRotate:(struct opaqueCMSampleBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 outputPixelBuffer:(struct __CVBuffer *)arg3;
- (int)filterBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 imageSampleBuffer:(struct opaqueCMSampleBuffer *)arg3 depthSampleBuffer:(struct opaqueCMSampleBuffer *)arg4;
- (id)_depthMetadataDictionaryFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(unsigned int)arg2 stillFilteringRequested:(_Bool)arg3;
- (int)rotateAndScaleImagePixelBuffer:(struct __CVBuffer *)arg1 depthPixelBuffer:(struct __CVBuffer *)arg2 to:(struct __CVBuffer *)arg3 rotationAngle:(int)arg4 flip:(_Bool)arg5;
- (id)initWithNodeConfiguration:(id)arg1 cameraInfoByPortType:(id)arg2 sensorIDDictionary:(id)arg3 rgbPersonSegmentationEnabled:(_Bool)arg4 depthIsAlwaysHighQuality:(_Bool)arg5;
- (void)setBaseRotationDegrees:(int)arg1;
- (int)baseRotationDegrees;
- (void)setStreamingFilteringEnabled:(_Bool)arg1;
- (_Bool)streamingFilteringEnabled;
- (void)setStillFilteringEnabled:(_Bool)arg1;
- (_Bool)stillFilteringEnabled;

@end
